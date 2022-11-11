/***********************************************************************************************************************
**
** Copyright (C) 2022 BaseALT Ltd. <org@basealt.ru>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
***********************************************************************************************************************/

#include "scriptspowershellwidget.h"
#include "ui_scriptspowershellwidget.h"

#include <mvvm/factories/viewmodelfactory.h>

#include <QDebug>

namespace scripts_plugin
{
ScriptsPowerShellWidget::ScriptsPowerShellWidget(QWidget *parent)
    : QWidget(parent)
    , BaseScriptWidget()
    , ui(new Ui::ScriptsPowerShellWidget())
    , commonSlots(new ScriptWidgetCommonSlots())
{
    ui->setupUi(this);
}

ScriptsPowerShellWidget::~ScriptsPowerShellWidget()
{
    delete ui;
}

void ScriptsPowerShellWidget::setItem(GroupScriptContainerItem *item)
{
    commonSlots->setItem(ui, item);
}

void ScriptsPowerShellWidget::on_upPushButton_clicked()
{
    commonSlots->onUpClicked();
}


void ScriptsPowerShellWidget::on_downPushButton_clicked()
{
    commonSlots->onDownClicked();
}


void ScriptsPowerShellWidget::on_addPushButton_clicked()
{
    commonSlots->onAddClicked();
}


void ScriptsPowerShellWidget::on_editPushButton_clicked()
{
    commonSlots->onEditClicked();
}


void ScriptsPowerShellWidget::on_removePushButton_clicked()
{
    commonSlots->onDeleteClicked();
}


void ScriptsPowerShellWidget::on_showPushButton_clicked()
{
    commonSlots->onBrowseClicked();
}

} // namespace scripts_plugin
