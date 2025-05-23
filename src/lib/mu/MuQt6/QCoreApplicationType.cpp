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

#include <MuQt6/qtUtils.h>
#include <MuQt6/QCoreApplicationType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>
#include <MuQt6/QWidgetType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt6/QTimerEventType.h>
#include <MuQt6/QObjectType.h>
#include <MuQt6/QEventType.h>

namespace Mu
{
    using namespace std;

    //----------------------------------------------------------------------
    //  INHERITABLE TYPE IMPLEMENTATION

    // destructor
    MuQt_QCoreApplication::~MuQt_QCoreApplication()
    {
        if (_obj)
        {
            *_obj->data<Pointer>() = Pointer(0);
            _obj->releaseExternal();
        }
        _obj = 0;
        _env = 0;
        _baseType = 0;
    }

    bool MuQt_QCoreApplication::notify(QObject* receiver, QEvent* event)
    {
        if (!_env)
            return QCoreApplication::notify(receiver, event);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[0];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(3);
            args[0] = Value(Pointer(_obj));
            args[1] =
                Value(makeinstance<QObjectType>(c, receiver, "qt.QObject"));
            args[2] = Value(makeqpointer<QEventType>(c, event, "qt.QEvent"));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QCoreApplication::notify(receiver, event);
        }
    }

    bool MuQt_QCoreApplication::event(QEvent* e)
    {
        if (!_env)
            return QCoreApplication::event(e);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[1];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(makeqpointer<QEventType>(c, e, "qt.QEvent"));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QCoreApplication::event(e);
        }
    }

    bool MuQt_QCoreApplication::eventFilter(QObject* watched, QEvent* event)
    {
        if (!_env)
            return QCoreApplication::eventFilter(watched, event);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[2];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(3);
            args[0] = Value(Pointer(_obj));
            args[1] =
                Value(makeinstance<QObjectType>(c, watched, "qt.QObject"));
            args[2] = Value(makeqpointer<QEventType>(c, event, "qt.QEvent"));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QCoreApplication::eventFilter(watched, event);
        }
    }

    void MuQt_QCoreApplication::customEvent(QEvent* event)
    {
        if (!_env)
        {
            QCoreApplication::customEvent(event);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[3];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(makeqpointer<QEventType>(c, event, "qt.QEvent"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QCoreApplication::customEvent(event);
        }
    }

    void MuQt_QCoreApplication::timerEvent(QTimerEvent* event)
    {
        if (!_env)
        {
            QCoreApplication::timerEvent(event);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[4];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(
                makeqpointer<QTimerEventType>(c, event, "qt.QTimerEvent"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QCoreApplication::timerEvent(event);
        }
    }

    //----------------------------------------------------------------------
    //  Mu Type CONSTRUCTORS

    QCoreApplicationType::QCoreApplicationType(Context* c, const char* name,
                                               Class* super, Class* super2)
        : Class(c, name, vectorOf2(super, super2))
    {
    }

    QCoreApplicationType::~QCoreApplicationType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    static Pointer
    QCoreApplication_QCoreApplication_QObject(Thread& NODE_THREAD, Pointer obj)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

        if (!widget)
        {
            return 0;
        }
        else if (QCoreApplication* w = object<QCoreApplication>(widget))
        {
            QCoreApplicationType* type =
                c->findSymbolOfTypeByQualifiedName<QCoreApplicationType>(
                    c->internName("qt.QCoreApplication"), false);
            ClassInstance* o = ClassInstance::allocate(type);
            setobject(o, w);
            return o;
        }
        else
        {
            throw BadCastException();
        }
    }

    static NODE_IMPLEMENTATION(castFromObject, Pointer)
    {
        NODE_RETURN(QCoreApplication_QCoreApplication_QObject(
            NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    bool qt_QCoreApplication_notify_bool_QCoreApplication_QObject_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_receiver,
        Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QCoreApplication* arg0 = object<QCoreApplication>(param_this);
        QObject* arg1 = object<QObject>(param_receiver);
        QEvent* arg2 = getqpointer<QEventType>(param_event);
        return isMuQtObject(arg0) ? arg0->QCoreApplication::notify(arg1, arg2)
                                  : arg0->notify(arg1, arg2);
    }

    bool qt_QCoreApplication_event_bool_QCoreApplication_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QCoreApplication* arg0 = object<QCoreApplication>(param_this);
        QEvent* arg1 = getqpointer<QEventType>(param_e);
        return isMuQtObject(arg0)
                   ? ((MuQt_QCoreApplication*)arg0)->event_pub_parent(arg1)
                   : ((MuQt_QCoreApplication*)arg0)->event_pub(arg1);
    }

    bool qt_QCoreApplication_eventFilter_bool_QCoreApplication_QObject_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_watched,
        Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QCoreApplication* arg0 = object<QCoreApplication>(param_this);
        QObject* arg1 = object<QObject>(param_watched);
        QEvent* arg2 = getqpointer<QEventType>(param_event);
        return isMuQtObject(arg0)
                   ? arg0->QCoreApplication::eventFilter(arg1, arg2)
                   : arg0->eventFilter(arg1, arg2);
    }

    void qt_QCoreApplication_customEvent_void_QCoreApplication_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QCoreApplication* arg0 = object<QCoreApplication>(param_this);
        QEvent* arg1 = getqpointer<QEventType>(param_event);
        if (isMuQtObject(arg0))
            ((MuQt_QCoreApplication*)arg0)->customEvent_pub_parent(arg1);
        else
            ((MuQt_QCoreApplication*)arg0)->customEvent_pub(arg1);
    }

    void qt_QCoreApplication_timerEvent_void_QCoreApplication_QTimerEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QCoreApplication* arg0 = object<QCoreApplication>(param_this);
        QTimerEvent* arg1 = getqpointer<QTimerEventType>(param_event);
        if (isMuQtObject(arg0))
            ((MuQt_QCoreApplication*)arg0)->timerEvent_pub_parent(arg1);
        else
            ((MuQt_QCoreApplication*)arg0)->timerEvent_pub(arg1);
    }

    void qt_QCoreApplication_addLibraryPath_void_string(Mu::Thread& NODE_THREAD,
                                                        Pointer param_path)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_path);
        QCoreApplication::addLibraryPath(arg0);
    }

    Pointer
    qt_QCoreApplication_applicationDirPath_string(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestring(c, QCoreApplication::applicationDirPath());
    }

    Pointer
    qt_QCoreApplication_applicationFilePath_string(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestring(c, QCoreApplication::applicationFilePath());
    }

    int64 qt_QCoreApplication_applicationPid_int64(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return QCoreApplication::applicationPid();
    }

    Pointer
    qt_QCoreApplication_arguments_stringBSB_ESB_(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestringlist(c, QCoreApplication::arguments());
    }

    bool qt_QCoreApplication_closingDown_bool(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return QCoreApplication::closingDown();
    }

    int qt_QCoreApplication_exec_int(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return QCoreApplication::exec();
    }

    Pointer
    qt_QCoreApplication_instance_QCoreApplication(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makeinstance<QCoreApplicationType>(
            c, QCoreApplication::instance(), "qt.QCoreApplication");
    }

    bool qt_QCoreApplication_isSetuidAllowed_bool(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return QCoreApplication::isSetuidAllowed();
    }

    Pointer
    qt_QCoreApplication_libraryPaths_stringBSB_ESB_(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makestringlist(c, QCoreApplication::libraryPaths());
    }

    void qt_QCoreApplication_postEvent_void_QObject_QEvent_int(
        Mu::Thread& NODE_THREAD, Pointer param_receiver, Pointer param_event,
        int param_priority)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QObject* arg0 = object<QObject>(param_receiver);
        QEvent* arg1 = getqpointer<QEventType>(param_event);
        int arg2 = (int)(param_priority);
        QCoreApplication::postEvent(arg0, arg1, arg2);
    }

    void qt_QCoreApplication_processEvents_void_int(Mu::Thread& NODE_THREAD,
                                                    int param_flags)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEventLoop::ProcessEventsFlags arg0 =
            (QEventLoop::ProcessEventsFlags)(param_flags);
        QCoreApplication::processEvents(arg0);
    }

    void qt_QCoreApplication_processEvents_void_int_int(Mu::Thread& NODE_THREAD,
                                                        int param_flags,
                                                        int param_ms)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEventLoop::ProcessEventsFlags arg0 =
            (QEventLoop::ProcessEventsFlags)(param_flags);
        int arg1 = (int)(param_ms);
        QCoreApplication::processEvents(arg0, arg1);
    }

    void
    qt_QCoreApplication_removeLibraryPath_void_string(Mu::Thread& NODE_THREAD,
                                                      Pointer param_path)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_path);
        QCoreApplication::removeLibraryPath(arg0);
    }

    void qt_QCoreApplication_removePostedEvents_void_QObject_int(
        Mu::Thread& NODE_THREAD, Pointer param_receiver, int param_eventType)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QObject* arg0 = object<QObject>(param_receiver);
        int arg1 = (int)(param_eventType);
        QCoreApplication::removePostedEvents(arg0, arg1);
    }

    bool qt_QCoreApplication_sendEvent_bool_QObject_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_receiver, Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QObject* arg0 = object<QObject>(param_receiver);
        QEvent* arg1 = getqpointer<QEventType>(param_event);
        return QCoreApplication::sendEvent(arg0, arg1);
    }

    void qt_QCoreApplication_sendPostedEvents_void_QObject_int(
        Mu::Thread& NODE_THREAD, Pointer param_receiver, int param_event_type)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QObject* arg0 = object<QObject>(param_receiver);
        int arg1 = (int)(param_event_type);
        QCoreApplication::sendPostedEvents(arg0, arg1);
    }

    void qt_QCoreApplication_setAttribute_void_int_bool(Mu::Thread& NODE_THREAD,
                                                        int param_attribute,
                                                        bool param_on)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        Qt::ApplicationAttribute arg0 =
            (Qt::ApplicationAttribute)(param_attribute);
        bool arg1 = (bool)(param_on);
        QCoreApplication::setAttribute(arg0, arg1);
    }

    void qt_QCoreApplication_setLibraryPaths_void_stringBSB_ESB_(
        Mu::Thread& NODE_THREAD, Pointer param_paths)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QStringList arg0 = qstringlist(param_paths);
        QCoreApplication::setLibraryPaths(arg0);
    }

    void qt_QCoreApplication_setSetuidAllowed_void_bool(Mu::Thread& NODE_THREAD,
                                                        bool param_allow)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        bool arg0 = (bool)(param_allow);
        QCoreApplication::setSetuidAllowed(arg0);
    }

    bool qt_QCoreApplication_startingUp_bool(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return QCoreApplication::startingUp();
    }

    bool qt_QCoreApplication_testAttribute_bool_int(Mu::Thread& NODE_THREAD,
                                                    int param_attribute)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        Qt::ApplicationAttribute arg0 =
            (Qt::ApplicationAttribute)(param_attribute);
        return QCoreApplication::testAttribute(arg0);
    }

    static NODE_IMPLEMENTATION(_n_notify0, bool)
    {
        NODE_RETURN(
            qt_QCoreApplication_notify_bool_QCoreApplication_QObject_QEvent(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_event0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_event_bool_QCoreApplication_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
    {
        NODE_RETURN(
            qt_QCoreApplication_eventFilter_bool_QCoreApplication_QObject_QEvent(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_customEvent0, void)
    {
        qt_QCoreApplication_customEvent_void_QCoreApplication_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_timerEvent0, void)
    {
        qt_QCoreApplication_timerEvent_void_QCoreApplication_QTimerEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_addLibraryPath0, void)
    {
        qt_QCoreApplication_addLibraryPath_void_string(NODE_THREAD,
                                                       NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_applicationDirPath0, Pointer)
    {
        NODE_RETURN(qt_QCoreApplication_applicationDirPath_string(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_applicationFilePath0, Pointer)
    {
        NODE_RETURN(
            qt_QCoreApplication_applicationFilePath_string(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_applicationPid0, int64)
    {
        NODE_RETURN(qt_QCoreApplication_applicationPid_int64(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_arguments0, Pointer)
    {
        NODE_RETURN(qt_QCoreApplication_arguments_stringBSB_ESB_(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_closingDown0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_closingDown_bool(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_exec0, int)
    {
        NODE_RETURN(qt_QCoreApplication_exec_int(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_instance0, Pointer)
    {
        NODE_RETURN(qt_QCoreApplication_instance_QCoreApplication(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_isSetuidAllowed0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_isSetuidAllowed_bool(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_libraryPaths0, Pointer)
    {
        NODE_RETURN(
            qt_QCoreApplication_libraryPaths_stringBSB_ESB_(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_postEvent0, void)
    {
        qt_QCoreApplication_postEvent_void_QObject_QEvent_int(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, int));
    }

    static NODE_IMPLEMENTATION(_n_processEvents0, void)
    {
        qt_QCoreApplication_processEvents_void_int(NODE_THREAD,
                                                   NODE_ARG(0, int));
    }

    static NODE_IMPLEMENTATION(_n_processEvents1, void)
    {
        qt_QCoreApplication_processEvents_void_int_int(
            NODE_THREAD, NODE_ARG(0, int), NODE_ARG(1, int));
    }

    static NODE_IMPLEMENTATION(_n_removeLibraryPath0, void)
    {
        qt_QCoreApplication_removeLibraryPath_void_string(NODE_THREAD,
                                                          NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_removePostedEvents0, void)
    {
        qt_QCoreApplication_removePostedEvents_void_QObject_int(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, int));
    }

    static NODE_IMPLEMENTATION(_n_sendEvent0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_sendEvent_bool_QObject_QEvent(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_sendPostedEvents0, void)
    {
        qt_QCoreApplication_sendPostedEvents_void_QObject_int(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, int));
    }

    static NODE_IMPLEMENTATION(_n_setAttribute0, void)
    {
        qt_QCoreApplication_setAttribute_void_int_bool(
            NODE_THREAD, NODE_ARG(0, int), NODE_ARG(1, bool));
    }

    static NODE_IMPLEMENTATION(_n_setLibraryPaths0, void)
    {
        qt_QCoreApplication_setLibraryPaths_void_stringBSB_ESB_(
            NODE_THREAD, NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setSetuidAllowed0, void)
    {
        qt_QCoreApplication_setSetuidAllowed_void_bool(NODE_THREAD,
                                                       NODE_ARG(0, bool));
    }

    static NODE_IMPLEMENTATION(_n_startingUp0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_startingUp_bool(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_testAttribute0, bool)
    {
        NODE_RETURN(qt_QCoreApplication_testAttribute_bool_int(
            NODE_THREAD, NODE_ARG(0, int)));
    }

    void QCoreApplicationType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate,
                                None, Return, ftn, End),

                   new Function(c, tn, castFromObject, Cast, Compiled,
                                QCoreApplication_QCoreApplication_QObject,
                                Return, ftn, Parameters,
                                new Param(c, "object", "qt.QObject"), End),

                   EndArguments);

        addSymbols(
            // enums
            // member functions
            // MISSING: QCoreApplication (QCoreApplication; QCoreApplication
            // this, "int &" argc, "char * *" argv) MISSING: checkPermission
            // (flags Qt::PermissionStatus; QCoreApplication this, "const
            // QPermission &" permission) MISSING: installNativeEventFilter
            // (void; QCoreApplication this, "QAbstractNativeEventFilter *"
            // filterObj)
            _func[0] = new MemberFunction(
                c, "notify", _n_notify0, None, Compiled,
                qt_QCoreApplication_notify_bool_QCoreApplication_QObject_QEvent,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QCoreApplication"),
                new Param(c, "receiver", "qt.QObject"),
                new Param(c, "event", "qt.QEvent"), End),
            // MISSING: removeNativeEventFilter (void; QCoreApplication this,
            // "QAbstractNativeEventFilter *" filterObject) MISSING:
            // requestPermission (void; QCoreApplication this, "const
            // QPermission &" permission, QObject context, "Functor" functor)
            _func[1] = new MemberFunction(
                c, "event", _n_event0, None, Compiled,
                qt_QCoreApplication_event_bool_QCoreApplication_QEvent, Return,
                "bool", Parameters, new Param(c, "this", "qt.QCoreApplication"),
                new Param(c, "e", "qt.QEvent"), End),
            _func[2] = new MemberFunction(
                c, "eventFilter", _n_eventFilter0, None, Compiled,
                qt_QCoreApplication_eventFilter_bool_QCoreApplication_QObject_QEvent,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QCoreApplication"),
                new Param(c, "watched", "qt.QObject"),
                new Param(c, "event", "qt.QEvent"), End),
            // MISSING: metaObject ("const QMetaObject *"; QCoreApplication
            // this) MISSING: childEvent (void; QCoreApplication this,
            // "QChildEvent *" event) // protected MISSING: connectNotify (void;
            // QCoreApplication this, "const QMetaMethod &" signal) // protected
            _func[3] = new MemberFunction(
                c, "customEvent", _n_customEvent0, None, Compiled,
                qt_QCoreApplication_customEvent_void_QCoreApplication_QEvent,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QCoreApplication"),
                new Param(c, "event", "qt.QEvent"), End),
            // MISSING: disconnectNotify (void; QCoreApplication this, "const
            // QMetaMethod &" signal) // protected
            _func[4] = new MemberFunction(
                c, "timerEvent", _n_timerEvent0, None, Compiled,
                qt_QCoreApplication_timerEvent_void_QCoreApplication_QTimerEvent,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QCoreApplication"),
                new Param(c, "event", "qt.QTimerEvent"), End),
            // static functions
            new Function(
                c, "addLibraryPath", _n_addLibraryPath0, None, Compiled,
                qt_QCoreApplication_addLibraryPath_void_string, Return, "void",
                Parameters, new Param(c, "path", "string"), End),
            new Function(c, "applicationDirPath", _n_applicationDirPath0, None,
                         Compiled,
                         qt_QCoreApplication_applicationDirPath_string, Return,
                         "string", End),
            new Function(c, "applicationFilePath", _n_applicationFilePath0,
                         None, Compiled,
                         qt_QCoreApplication_applicationFilePath_string, Return,
                         "string", End),
            new Function(c, "applicationPid", _n_applicationPid0, None,
                         Compiled, qt_QCoreApplication_applicationPid_int64,
                         Return, "int64", End),
            new Function(c, "arguments", _n_arguments0, None, Compiled,
                         qt_QCoreApplication_arguments_stringBSB_ESB_, Return,
                         "string[]", End),
            new Function(c, "closingDown", _n_closingDown0, None, Compiled,
                         qt_QCoreApplication_closingDown_bool, Return, "bool",
                         End),
            // MISSING: eventDispatcher ("QAbstractEventDispatcher *"; )
            new Function(c, "exec", _n_exec0, None, Compiled,
                         qt_QCoreApplication_exec_int, Return, "int", End),
            // MISSING: installTranslator (bool; "QTranslator *"
            // translationFile)
            new Function(c, "instance", _n_instance0, None, Compiled,
                         qt_QCoreApplication_instance_QCoreApplication, Return,
                         "qt.QCoreApplication", End),
            new Function(c, "isSetuidAllowed", _n_isSetuidAllowed0, None,
                         Compiled, qt_QCoreApplication_isSetuidAllowed_bool,
                         Return, "bool", End),
            new Function(c, "libraryPaths", _n_libraryPaths0, None, Compiled,
                         qt_QCoreApplication_libraryPaths_stringBSB_ESB_,
                         Return, "string[]", End),
            new Function(c, "postEvent", _n_postEvent0, None, Compiled,
                         qt_QCoreApplication_postEvent_void_QObject_QEvent_int,
                         Return, "void", Parameters,
                         new Param(c, "receiver", "qt.QObject"),
                         new Param(c, "event", "qt.QEvent"),
                         new Param(c, "priority", "int",
                                   Value((int)Qt::NormalEventPriority)),
                         End),
            new Function(
                c, "processEvents", _n_processEvents0, None, Compiled,
                qt_QCoreApplication_processEvents_void_int, Return, "void",
                Parameters,
                new Param(c, "flags", "int", Value((int)QEventLoop::AllEvents)),
                End),
            new Function(c, "processEvents", _n_processEvents1, None, Compiled,
                         qt_QCoreApplication_processEvents_void_int_int, Return,
                         "void", Parameters, new Param(c, "flags", "int"),
                         new Param(c, "ms", "int"), End),
            new Function(
                c, "removeLibraryPath", _n_removeLibraryPath0, None, Compiled,
                qt_QCoreApplication_removeLibraryPath_void_string, Return,
                "void", Parameters, new Param(c, "path", "string"), End),
            new Function(
                c, "removePostedEvents", _n_removePostedEvents0, None, Compiled,
                qt_QCoreApplication_removePostedEvents_void_QObject_int, Return,
                "void", Parameters, new Param(c, "receiver", "qt.QObject"),
                new Param(c, "eventType", "int", Value((int)0)), End),
            // MISSING: removeTranslator (bool; "QTranslator *" translationFile)
            new Function(c, "sendEvent", _n_sendEvent0, None, Compiled,
                         qt_QCoreApplication_sendEvent_bool_QObject_QEvent,
                         Return, "bool", Parameters,
                         new Param(c, "receiver", "qt.QObject"),
                         new Param(c, "event", "qt.QEvent"), End),
            new Function(
                c, "sendPostedEvents", _n_sendPostedEvents0, None, Compiled,
                qt_QCoreApplication_sendPostedEvents_void_QObject_int, Return,
                "void", Parameters, new Param(c, "receiver", "qt.QObject"),
                new Param(c, "event_type", "int", Value((int)0)), End),
            new Function(c, "setAttribute", _n_setAttribute0, None, Compiled,
                         qt_QCoreApplication_setAttribute_void_int_bool, Return,
                         "void", Parameters, new Param(c, "attribute", "int"),
                         new Param(c, "on", "bool"), End),
            // MISSING: setEventDispatcher (void; "QAbstractEventDispatcher *"
            // eventDispatcher)
            new Function(
                c, "setLibraryPaths", _n_setLibraryPaths0, None, Compiled,
                qt_QCoreApplication_setLibraryPaths_void_stringBSB_ESB_, Return,
                "void", Parameters, new Param(c, "paths", "string[]"), End),
            new Function(
                c, "setSetuidAllowed", _n_setSetuidAllowed0, None, Compiled,
                qt_QCoreApplication_setSetuidAllowed_void_bool, Return, "void",
                Parameters, new Param(c, "allow", "bool"), End),
            new Function(c, "startingUp", _n_startingUp0, None, Compiled,
                         qt_QCoreApplication_startingUp_bool, Return, "bool",
                         End),
            new Function(c, "testAttribute", _n_testAttribute0, None, Compiled,
                         qt_QCoreApplication_testAttribute_bool_int, Return,
                         "bool", Parameters, new Param(c, "attribute", "int"),
                         End),
            // MISSING: translate (string; "const char *" context, "const char
            // *" sourceText, "const char *" disambiguation, int n)
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);

        const char** propExclusions = 0;

        populate(this, QCoreApplication::staticMetaObject, propExclusions);
    }

} // namespace Mu
