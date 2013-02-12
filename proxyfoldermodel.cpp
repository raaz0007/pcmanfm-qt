/*
    <one line to give the library's name and an idea of what it does.>
    Copyright (C) 2012  <copyright holder> <email>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "proxyfoldermodel.h"

using namespace Fm;

ProxyFolderModel::ProxyFolderModel(QObject * parent):
  QSortFilterProxyModel(parent),
  showHidden_(false) {
  setDynamicSortFilter(true);
}

ProxyFolderModel::~ProxyFolderModel() {
}

void ProxyFolderModel::setShowHidden(bool show) {
  if(show != showHidden_) {
    showHidden_ = show;
    invalidateFilter();
  }
}
#if 0
bool ProxyFolderModel::filterAcceptsRow(int source_row, const QModelIndex & source_parent) const {
/*
  if(!showHidden_) {
    QAbstractItemModel* model = sourceModel();
    QString name = model->data(model->index(source_row, 0, source_parent)).toString();
    if(name.startsWith(".") || name.endsWith("~"))
      return false;
  }
  return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
*/
return true;
}
#endif

#include "proxyfoldermodel.moc"