/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2014 Synergy Si, Inc.
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ADDCLIENTDIALOG_H
#define ADDCLIENTDIALOG_H

#include "ui_AddClientDialogBase.h"

#include <QDialog>

class QPushButton;
class QLabel;

enum {
	kAddClientRight,
	kAddClientLeft,
	kAddClientUp,
	kAddClientDown,
	kAddClientOther,
	kAddClientIgnore
};

class AddClientDialog : public QDialog, public Ui::AddClientDialog
{
	Q_OBJECT
public:
	AddClientDialog(QWidget *parent = 0);
	~AddClientDialog();

	int getAddResult() { return m_AddResult; }

protected:
	void changeEvent(QEvent *e);

private slots:
	void handleButtonLeft();
	void handleButtonUp();
	void handleButtonRight();
	void handleButtonDown();
	void handleButtonAdvanced();

private:
	QPushButton* m_pButtonLeft;
	QPushButton* m_pButtonUp;
	QPushButton* m_pButtonRight;
	QPushButton* m_pButtonDown;
	QLabel* m_pLabelCenter;
	QLabel* m_pLabelHead;
	int m_AddResult;
};

#endif // ADDCLIENTDIALOG_H
