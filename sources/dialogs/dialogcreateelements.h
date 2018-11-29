/***************************************************************************
**                                                                        **
**  Polyphone, a soundfont editor                                         **
**  Copyright (C) 2013-2018 Davy Triponney                                **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU General Public License as published by  **
**  the Free Software Foundation, either version 3 of the License, or     **
**  (at your option) any later version.                                   **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          **
**  GNU General Public License for more details.                          **
**                                                                        **
**  You should have received a copy of the GNU General Public License     **
**  along with this program. If not, see http://www.gnu.org/licenses/.    **
**                                                                        **
****************************************************************************
**           Author: Davy Triponney                                       **
**  Website/Contact: https://www.polyphone-soundfonts.com                 **
**             Date: 01.01.2013                                           **
***************************************************************************/

#ifndef DIALOGCREATEELEMENTS_H
#define DIALOGCREATEELEMENTS_H

#include <QDialog>
#include "basetypes.h"

namespace Ui {
class DialogCreateElements;
}

class DialogCreateElements : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCreateElements(QWidget *parent = 0);
    ~DialogCreateElements();

    void initialize(IdList ids);

signals:
    void createElements(IdList ids, bool oneForEach);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogCreateElements *ui;
    IdList _ids;
};

#endif // DIALOGCREATEELEMENTS_H
