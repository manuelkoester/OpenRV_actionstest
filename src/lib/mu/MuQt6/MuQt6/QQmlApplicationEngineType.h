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

#ifndef __MuQt6__QQmlApplicationEngineType__h__
#define __MuQt6__QQmlApplicationEngineType__h__
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
    class MuQt_QQmlApplicationEngine;

    class QQmlApplicationEngineType : public Class
    {
    public:
        typedef MuQt_QQmlApplicationEngine MuQtType;
        typedef QQmlApplicationEngine QtType;

        //
        //  Constructors
        //

        QQmlApplicationEngineType(Context* context, const char* name,
                                  Class* superClass = 0,
                                  Class* superClass2 = 0);

        virtual ~QQmlApplicationEngineType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[1];
    };

    // Inheritable object

    class MuQt_QQmlApplicationEngine : public QQmlApplicationEngine
    {
    public:
        virtual ~MuQt_QQmlApplicationEngine();
        MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment*,
                                   QObject* parent);
        MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment*,
                                   const QUrl& url, QObject* parent);
        MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment*,
                                   const QString& filePath, QObject* parent);

    protected:
        virtual bool event(QEvent* e);

    public:
        bool event_pub(QEvent* e) { return event(e); }

        bool event_pub_parent(QEvent* e)
        {
            return QQmlApplicationEngine::event(e);
        }

    public:
        const QQmlApplicationEngineType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance* QQmlApplicationEngineType::cachedInstance(
        const QQmlApplicationEngineType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QQmlApplicationEngineType__h__
