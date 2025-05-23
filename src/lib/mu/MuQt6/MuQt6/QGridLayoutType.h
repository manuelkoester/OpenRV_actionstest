//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#ifndef __MuQt6__QGridLayoutType__h__
#define __MuQt6__QGridLayoutType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <MuQt6/Bridge.h>

namespace Mu
{
    class MuQt_QGridLayout;

    class QGridLayoutType : public Class
    {
    public:
        typedef MuQt_QGridLayout MuQtType;
        typedef QGridLayout QtType;

        //
        //  Constructors
        //

        QGridLayoutType(Context* context, const char* name,
                        Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QGridLayoutType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[21];
    };

    // Inheritable object

    class MuQt_QGridLayout : public QGridLayout
    {
    public:
        virtual ~MuQt_QGridLayout();
        MuQt_QGridLayout(Pointer muobj, const CallEnvironment*,
                         QWidget* parent);
        virtual int count() const;
        virtual Qt::Orientations expandingDirections() const;
        virtual bool hasHeightForWidth() const;
        virtual int heightForWidth(int w) const;
        virtual void invalidate();
        virtual QLayoutItem* itemAt(int index) const;
        virtual QSize maximumSize() const;
        virtual int minimumHeightForWidth(int w) const;
        virtual QSize minimumSize() const;
        virtual void setGeometry(const QRect& rect);
        virtual void setSpacing(int spacing);
        virtual QSize sizeHint() const;
        virtual int spacing() const;
        virtual QLayoutItem* takeAt(int index);

    protected:
        virtual void addItem(QLayoutItem* item);

    public:
        virtual int indexOf(const QWidget* widget) const;
        virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to,
                                           Qt::FindChildOptions options);
        virtual QSizePolicy::ControlTypes controlTypes() const;
        virtual QRect geometry() const;
        virtual bool isEmpty() const;
        virtual QLayout* layout();

    public:
        void addItem_pub(QLayoutItem* item) { addItem(item); }

        void addItem_pub_parent(QLayoutItem* item)
        {
            QGridLayout::addItem(item);
        }

    public:
        const QGridLayoutType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QGridLayoutType::cachedInstance(const QGridLayoutType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QGridLayoutType__h__
