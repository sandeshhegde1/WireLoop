﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1617991543;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3296401497;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t2249125290;
// System.Collections.ArrayList
struct ArrayList_t2664224523;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t588719229;
// System.Collections.Stack
struct Stack_t4229600365;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t243087119;
// System.Collections.IList
struct IList_t1803103581;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2721356056;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2415519632;
// System.Byte[]
struct ByteU5BU5D_t1916254710;
// System.Collections.IEnumerator
struct IEnumerator_t1899644301;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t4113056388;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t3103504035;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t1049691935;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2045399945;
// System.String[]
struct StringU5BU5D_t2594094198;
// System.Type[]
struct TypeU5BU5D_t2466154967;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t2425844768;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3075433836;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3388578192;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2163760811;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t689872619;
// System.IntPtr[]
struct IntPtrU5BU5D_t758745098;
// System.Collections.IDictionary
struct IDictionary_t3113714697;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t3707057229;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3768076955;
// System.Exception
struct Exception_t1818378607;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t2162409876;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t991030083;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2642910396;
// System.Reflection.MethodBase
struct MethodBase_t2837957059;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t1932105862;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t2601474956;
// System.MarshalByRefObject
struct MarshalByRefObject_t1340560424;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2735802879;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3001979396;
// System.Runtime.Remoting.Identity
struct Identity_t186446214;
// System.Int32[]
struct Int32U5BU5D_t1800966719;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Char[]
struct CharU5BU5D_t873651423;
// System.Void
struct Void_t992034528;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2852189298;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3677874190;
// System.WeakReference
struct WeakReference_t1512884176;
// System.DelegateData
struct DelegateData_t4189349723;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t94758400;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t84374037;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1090906206;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1256933330;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t475287172;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3293482408;
// System.IAsyncResult
struct IAsyncResult_t2184805100;
// System.AsyncCallback
struct AsyncCallback_t458760344;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DICTIONARYENUMERATOR_T2745036575_H
#define DICTIONARYENUMERATOR_T2745036575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t2745036575  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t1617991543 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2745036575, ____methodDictionary_0)); }
	inline MethodDictionary_t1617991543 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t1617991543 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t1617991543 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2745036575, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2745036575, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T2745036575_H
#ifndef REMOTINGCONFIGURATION_T3553872005_H
#define REMOTINGCONFIGURATION_T3553872005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t3553872005  : public RuntimeObject
{
public:

public:
};

struct RemotingConfiguration_t3553872005_StaticFields
{
public:
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.String System.Runtime.Remoting.RemotingConfiguration::_errorMode
	String_t* ____errorMode_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t2249125290 * ___wellKnownClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t2249125290 * ___activatedClientEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t2249125290 * ___wellKnownServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t2249125290 * ___activatedServiceEntries_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t2249125290 * ___channelTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t2249125290 * ___clientProviderTemplates_11;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t2249125290 * ___serverProviderTemplates_12;

public:
	inline static int32_t get_offset_of_applicationID_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___applicationID_0)); }
	inline String_t* get_applicationID_0() const { return ___applicationID_0; }
	inline String_t** get_address_of_applicationID_0() { return &___applicationID_0; }
	inline void set_applicationID_0(String_t* value)
	{
		___applicationID_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationID_0), value);
	}

	inline static int32_t get_offset_of_applicationName_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___applicationName_1)); }
	inline String_t* get_applicationName_1() const { return ___applicationName_1; }
	inline String_t** get_address_of_applicationName_1() { return &___applicationName_1; }
	inline void set_applicationName_1(String_t* value)
	{
		___applicationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___applicationName_1), value);
	}

	inline static int32_t get_offset_of_processGuid_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___processGuid_2)); }
	inline String_t* get_processGuid_2() const { return ___processGuid_2; }
	inline String_t** get_address_of_processGuid_2() { return &___processGuid_2; }
	inline void set_processGuid_2(String_t* value)
	{
		___processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&___processGuid_2), value);
	}

	inline static int32_t get_offset_of_defaultConfigRead_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___defaultConfigRead_3)); }
	inline bool get_defaultConfigRead_3() const { return ___defaultConfigRead_3; }
	inline bool* get_address_of_defaultConfigRead_3() { return &___defaultConfigRead_3; }
	inline void set_defaultConfigRead_3(bool value)
	{
		___defaultConfigRead_3 = value;
	}

	inline static int32_t get_offset_of_defaultDelayedConfigRead_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___defaultDelayedConfigRead_4)); }
	inline bool get_defaultDelayedConfigRead_4() const { return ___defaultDelayedConfigRead_4; }
	inline bool* get_address_of_defaultDelayedConfigRead_4() { return &___defaultDelayedConfigRead_4; }
	inline void set_defaultDelayedConfigRead_4(bool value)
	{
		___defaultDelayedConfigRead_4 = value;
	}

	inline static int32_t get_offset_of__errorMode_5() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ____errorMode_5)); }
	inline String_t* get__errorMode_5() const { return ____errorMode_5; }
	inline String_t** get_address_of__errorMode_5() { return &____errorMode_5; }
	inline void set__errorMode_5(String_t* value)
	{
		____errorMode_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMode_5), value);
	}

	inline static int32_t get_offset_of_wellKnownClientEntries_6() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___wellKnownClientEntries_6)); }
	inline Hashtable_t2249125290 * get_wellKnownClientEntries_6() const { return ___wellKnownClientEntries_6; }
	inline Hashtable_t2249125290 ** get_address_of_wellKnownClientEntries_6() { return &___wellKnownClientEntries_6; }
	inline void set_wellKnownClientEntries_6(Hashtable_t2249125290 * value)
	{
		___wellKnownClientEntries_6 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownClientEntries_6), value);
	}

	inline static int32_t get_offset_of_activatedClientEntries_7() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___activatedClientEntries_7)); }
	inline Hashtable_t2249125290 * get_activatedClientEntries_7() const { return ___activatedClientEntries_7; }
	inline Hashtable_t2249125290 ** get_address_of_activatedClientEntries_7() { return &___activatedClientEntries_7; }
	inline void set_activatedClientEntries_7(Hashtable_t2249125290 * value)
	{
		___activatedClientEntries_7 = value;
		Il2CppCodeGenWriteBarrier((&___activatedClientEntries_7), value);
	}

	inline static int32_t get_offset_of_wellKnownServiceEntries_8() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___wellKnownServiceEntries_8)); }
	inline Hashtable_t2249125290 * get_wellKnownServiceEntries_8() const { return ___wellKnownServiceEntries_8; }
	inline Hashtable_t2249125290 ** get_address_of_wellKnownServiceEntries_8() { return &___wellKnownServiceEntries_8; }
	inline void set_wellKnownServiceEntries_8(Hashtable_t2249125290 * value)
	{
		___wellKnownServiceEntries_8 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownServiceEntries_8), value);
	}

	inline static int32_t get_offset_of_activatedServiceEntries_9() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___activatedServiceEntries_9)); }
	inline Hashtable_t2249125290 * get_activatedServiceEntries_9() const { return ___activatedServiceEntries_9; }
	inline Hashtable_t2249125290 ** get_address_of_activatedServiceEntries_9() { return &___activatedServiceEntries_9; }
	inline void set_activatedServiceEntries_9(Hashtable_t2249125290 * value)
	{
		___activatedServiceEntries_9 = value;
		Il2CppCodeGenWriteBarrier((&___activatedServiceEntries_9), value);
	}

	inline static int32_t get_offset_of_channelTemplates_10() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___channelTemplates_10)); }
	inline Hashtable_t2249125290 * get_channelTemplates_10() const { return ___channelTemplates_10; }
	inline Hashtable_t2249125290 ** get_address_of_channelTemplates_10() { return &___channelTemplates_10; }
	inline void set_channelTemplates_10(Hashtable_t2249125290 * value)
	{
		___channelTemplates_10 = value;
		Il2CppCodeGenWriteBarrier((&___channelTemplates_10), value);
	}

	inline static int32_t get_offset_of_clientProviderTemplates_11() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___clientProviderTemplates_11)); }
	inline Hashtable_t2249125290 * get_clientProviderTemplates_11() const { return ___clientProviderTemplates_11; }
	inline Hashtable_t2249125290 ** get_address_of_clientProviderTemplates_11() { return &___clientProviderTemplates_11; }
	inline void set_clientProviderTemplates_11(Hashtable_t2249125290 * value)
	{
		___clientProviderTemplates_11 = value;
		Il2CppCodeGenWriteBarrier((&___clientProviderTemplates_11), value);
	}

	inline static int32_t get_offset_of_serverProviderTemplates_12() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3553872005_StaticFields, ___serverProviderTemplates_12)); }
	inline Hashtable_t2249125290 * get_serverProviderTemplates_12() const { return ___serverProviderTemplates_12; }
	inline Hashtable_t2249125290 ** get_address_of_serverProviderTemplates_12() { return &___serverProviderTemplates_12; }
	inline void set_serverProviderTemplates_12(Hashtable_t2249125290 * value)
	{
		___serverProviderTemplates_12 = value;
		Il2CppCodeGenWriteBarrier((&___serverProviderTemplates_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGCONFIGURATION_T3553872005_H
#ifndef CONFIGHANDLER_T4050063948_H
#define CONFIGHANDLER_T4050063948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t4050063948  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t2664224523 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t2664224523 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t588719229 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t4229600365 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___typeEntries_0)); }
	inline ArrayList_t2664224523 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t2664224523 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t2664224523 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeEntries_0), value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___channelInstances_1)); }
	inline ArrayList_t2664224523 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t2664224523 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t2664224523 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier((&___channelInstances_1), value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___currentChannel_2)); }
	inline ChannelData_t588719229 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t588719229 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t588719229 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentChannel_2), value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___currentProviderData_3)); }
	inline Stack_t4229600365 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t4229600365 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t4229600365 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentProviderData_3), value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentClientUrl_4), value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier((&___appName_5), value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentXmlPath_6), value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t4050063948_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t243087119 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t243087119 * ___U3CU3Ef__switchU24map28_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948_StaticFields, ___U3CU3Ef__switchU24map27_8)); }
	inline Dictionary_2_t243087119 * get_U3CU3Ef__switchU24map27_8() const { return ___U3CU3Ef__switchU24map27_8; }
	inline Dictionary_2_t243087119 ** get_address_of_U3CU3Ef__switchU24map27_8() { return &___U3CU3Ef__switchU24map27_8; }
	inline void set_U3CU3Ef__switchU24map27_8(Dictionary_2_t243087119 * value)
	{
		___U3CU3Ef__switchU24map27_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t4050063948_StaticFields, ___U3CU3Ef__switchU24map28_9)); }
	inline Dictionary_2_t243087119 * get_U3CU3Ef__switchU24map28_9() const { return ___U3CU3Ef__switchU24map28_9; }
	inline Dictionary_2_t243087119 ** get_address_of_U3CU3Ef__switchU24map28_9() { return &___U3CU3Ef__switchU24map28_9; }
	inline void set_U3CU3Ef__switchU24map28_9(Dictionary_2_t243087119 * value)
	{
		___U3CU3Ef__switchU24map28_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGHANDLER_T4050063948_H
#ifndef FORMATTERSERVICES_T1970690943_H
#define FORMATTERSERVICES_T1970690943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t1970690943  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T1970690943_H
#ifndef PROVIDERDATA_T384469769_H
#define PROVIDERDATA_T384469769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ProviderData
struct  ProviderData_t384469769  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ProviderData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ProviderData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ProviderData::Id
	String_t* ___Id_2;
	// System.Collections.Hashtable System.Runtime.Remoting.ProviderData::CustomProperties
	Hashtable_t2249125290 * ___CustomProperties_3;
	// System.Collections.IList System.Runtime.Remoting.ProviderData::CustomData
	RuntimeObject* ___CustomData_4;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ProviderData_t384469769, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ProviderData_t384469769, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ProviderData_t384469769, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_CustomProperties_3() { return static_cast<int32_t>(offsetof(ProviderData_t384469769, ___CustomProperties_3)); }
	inline Hashtable_t2249125290 * get_CustomProperties_3() const { return ___CustomProperties_3; }
	inline Hashtable_t2249125290 ** get_address_of_CustomProperties_3() { return &___CustomProperties_3; }
	inline void set_CustomProperties_3(Hashtable_t2249125290 * value)
	{
		___CustomProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___CustomProperties_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ProviderData_t384469769, ___CustomData_4)); }
	inline RuntimeObject* get_CustomData_4() const { return ___CustomData_4; }
	inline RuntimeObject** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(RuntimeObject* value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERDATA_T384469769_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2157265603_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2157265603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2157265603  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2157265603_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T3235322842_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T3235322842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t3235322842  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T3235322842_H
#ifndef ASYMMETRICALGORITHM_T1046158009_H
#define ASYMMETRICALGORITHM_T1046158009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t1046158009  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2721356056* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1046158009, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1046158009, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2721356056* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2721356056** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2721356056* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T1046158009_H
#ifndef X509CERTIFICATE_T264923951_H
#define X509CERTIFICATE_T264923951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t264923951  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t2415519632 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t1916254710* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t264923951, ___x509_0)); }
	inline X509Certificate_t2415519632 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t2415519632 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t2415519632 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t264923951, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t264923951, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t1916254710* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t1916254710** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t1916254710* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t264923951, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t264923951, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T264923951_H
#ifndef SERIALIZATIONINFOENUMERATOR_T3243678153_H
#define SERIALIZATIONINFOENUMERATOR_T3243678153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t3243678153  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t3243678153, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T3243678153_H
#ifndef OBJREF_T689872619_H
#define OBJREF_T689872619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ObjRef
struct  ObjRef_t689872619  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	RuntimeObject* ___channel_info_0;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri_1;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	RuntimeObject* ___typeInfo_2;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	RuntimeObject* ___envoyInfo_3;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags_4;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType_5;

public:
	inline static int32_t get_offset_of_channel_info_0() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ___channel_info_0)); }
	inline RuntimeObject* get_channel_info_0() const { return ___channel_info_0; }
	inline RuntimeObject** get_address_of_channel_info_0() { return &___channel_info_0; }
	inline void set_channel_info_0(RuntimeObject* value)
	{
		___channel_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___channel_info_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_typeInfo_2() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ___typeInfo_2)); }
	inline RuntimeObject* get_typeInfo_2() const { return ___typeInfo_2; }
	inline RuntimeObject** get_address_of_typeInfo_2() { return &___typeInfo_2; }
	inline void set_typeInfo_2(RuntimeObject* value)
	{
		___typeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_2), value);
	}

	inline static int32_t get_offset_of_envoyInfo_3() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ___envoyInfo_3)); }
	inline RuntimeObject* get_envoyInfo_3() const { return ___envoyInfo_3; }
	inline RuntimeObject** get_address_of_envoyInfo_3() { return &___envoyInfo_3; }
	inline void set_envoyInfo_3(RuntimeObject* value)
	{
		___envoyInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___envoyInfo_3), value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__serverType_5() { return static_cast<int32_t>(offsetof(ObjRef_t689872619, ____serverType_5)); }
	inline Type_t * get__serverType_5() const { return ____serverType_5; }
	inline Type_t ** get_address_of__serverType_5() { return &____serverType_5; }
	inline void set__serverType_5(Type_t * value)
	{
		____serverType_5 = value;
		Il2CppCodeGenWriteBarrier((&____serverType_5), value);
	}
};

struct ObjRef_t689872619_StaticFields
{
public:
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef_6;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t243087119 * ___U3CU3Ef__switchU24map26_8;

public:
	inline static int32_t get_offset_of_MarshalledObjectRef_6() { return static_cast<int32_t>(offsetof(ObjRef_t689872619_StaticFields, ___MarshalledObjectRef_6)); }
	inline int32_t get_MarshalledObjectRef_6() const { return ___MarshalledObjectRef_6; }
	inline int32_t* get_address_of_MarshalledObjectRef_6() { return &___MarshalledObjectRef_6; }
	inline void set_MarshalledObjectRef_6(int32_t value)
	{
		___MarshalledObjectRef_6 = value;
	}

	inline static int32_t get_offset_of_WellKnowObjectRef_7() { return static_cast<int32_t>(offsetof(ObjRef_t689872619_StaticFields, ___WellKnowObjectRef_7)); }
	inline int32_t get_WellKnowObjectRef_7() const { return ___WellKnowObjectRef_7; }
	inline int32_t* get_address_of_WellKnowObjectRef_7() { return &___WellKnowObjectRef_7; }
	inline void set_WellKnowObjectRef_7(int32_t value)
	{
		___WellKnowObjectRef_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_8() { return static_cast<int32_t>(offsetof(ObjRef_t689872619_StaticFields, ___U3CU3Ef__switchU24map26_8)); }
	inline Dictionary_2_t243087119 * get_U3CU3Ef__switchU24map26_8() const { return ___U3CU3Ef__switchU24map26_8; }
	inline Dictionary_2_t243087119 ** get_address_of_U3CU3Ef__switchU24map26_8() { return &___U3CU3Ef__switchU24map26_8; }
	inline void set_U3CU3Ef__switchU24map26_8(Dictionary_2_t243087119 * value)
	{
		___U3CU3Ef__switchU24map26_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map26_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREF_T689872619_H
#ifndef SERIALIZATIONINFO_T94758400_H
#define SERIALIZATIONINFO_T94758400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t94758400  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t2249125290 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2664224523 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t94758400, ___serialized_0)); }
	inline Hashtable_t2249125290 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t2249125290 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t2249125290 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t94758400, ___values_1)); }
	inline ArrayList_t2664224523 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2664224523 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2664224523 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t94758400, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t94758400, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t94758400, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T94758400_H
#ifndef TYPEINFO_T1567486481_H
#define TYPEINFO_T1567486481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t1567486481  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t2249125290 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t2249125290 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t1567486481, ___Attributes_0)); }
	inline Hashtable_t2249125290 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t2249125290 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t2249125290 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t1567486481, ___Elements_1)); }
	inline Hashtable_t2249125290 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t2249125290 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t2249125290 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1567486481_H
#ifndef TYPEENTRY_T2211176445_H
#define TYPEENTRY_T2211176445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t2211176445  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t2211176445, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t2211176445, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T2211176445_H
#ifndef TYPEINFO_T2854981928_H
#define TYPEINFO_T2854981928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t2854981928  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t2594094198* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t2594094198* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t2854981928, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t2854981928, ___serverHierarchy_1)); }
	inline StringU5BU5D_t2594094198* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t2594094198** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t2594094198* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t2854981928, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t2594094198* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t2594094198** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t2594094198* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T2854981928_H
#ifndef SERIALIZATIONCALLBACKS_T1345845367_H
#define SERIALIZATIONCALLBACKS_T1345845367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t1345845367  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t2664224523 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t2664224523 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t2664224523 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t2664224523 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367, ___onSerializingList_0)); }
	inline ArrayList_t2664224523 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t2664224523 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t2664224523 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367, ___onSerializedList_1)); }
	inline ArrayList_t2664224523 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t2664224523 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t2664224523 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367, ___onDeserializingList_2)); }
	inline ArrayList_t2664224523 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t2664224523 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t2664224523 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367, ___onDeserializedList_3)); }
	inline ArrayList_t2664224523 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t2664224523 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t2664224523 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t1345845367_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t2249125290 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367_StaticFields, ___cache_4)); }
	inline Hashtable_t2249125290 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t2249125290 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t2249125290 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t1345845367_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T1345845367_H
#ifndef SERIALIZATIONBINDER_T475287172_H
#define SERIALIZATIONBINDER_T475287172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t475287172  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T475287172_H
#ifndef BINARYCOMMON_T1773848477_H
#define BINARYCOMMON_T1773848477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t1773848477  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t1773848477_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t1916254710* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t2466154967* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t1916254710* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t1773848477_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t1916254710* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t1916254710** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t1916254710* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t1773848477_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t2466154967* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t2466154967** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t2466154967* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t1773848477_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t1916254710* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t1916254710** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t1916254710* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t1773848477_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T1773848477_H
#ifndef MESSAGEFORMATTER_T609480300_H
#define MESSAGEFORMATTER_T609480300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t609480300  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T609480300_H
#ifndef TYPEMETADATA_T4276700493_H
#define TYPEMETADATA_T4276700493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t4276700493  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t2466154967* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t2594094198* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t2425844768* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___MemberTypes_1)); }
	inline TypeU5BU5D_t2466154967* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t2466154967** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t2466154967* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___MemberNames_2)); }
	inline StringU5BU5D_t2594094198* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t2594094198** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t2594094198* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t2425844768* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t2425844768** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t2425844768* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t4276700493, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T4276700493_H
#ifndef ARRAYNULLFILLER_T1398832580_H
#define ARRAYNULLFILLER_T1398832580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t1398832580  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t1398832580, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T1398832580_H
#ifndef BASEFIXUPRECORD_T1090906206_H
#define BASEFIXUPRECORD_T1090906206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t1090906206  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t3075433836 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t3075433836 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t1090906206 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t1090906206 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1090906206, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t3075433836 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t3075433836 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t3075433836 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1090906206, ___ObjectRequired_1)); }
	inline ObjectRecord_t3075433836 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t3075433836 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t3075433836 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1090906206, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t1090906206 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t1090906206 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t1090906206 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1090906206, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t1090906206 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t1090906206 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t1090906206 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T1090906206_H
#ifndef SOAPSERVICES_T1454221811_H
#define SOAPSERVICES_T1454221811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t1454221811  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t1454221811_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t2249125290 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t2249125290 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t2249125290 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t2249125290 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t2249125290 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t1454221811_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t2249125290 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t2249125290 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t2249125290 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t1454221811_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t2249125290 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t2249125290 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t2249125290 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t1454221811_StaticFields, ____soapActions_2)); }
	inline Hashtable_t2249125290 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t2249125290 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t2249125290 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t1454221811_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t2249125290 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t2249125290 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t2249125290 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t1454221811_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t2249125290 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t2249125290 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t2249125290 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T1454221811_H
#ifndef INTERNALREMOTINGSERVICES_T3739422930_H
#define INTERNALREMOTINGSERVICES_T3739422930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t3739422930  : public RuntimeObject
{
public:

public:
};

struct InternalRemotingServices_t3739422930_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t2249125290 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t3739422930_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t2249125290 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t2249125290 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t2249125290 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((&____soapAttributes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALREMOTINGSERVICES_T3739422930_H
#ifndef CHANNELDATA_T588719229_H
#define CHANNELDATA_T588719229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelData
struct  ChannelData_t588719229  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ChannelData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ChannelData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ChannelData::Id
	String_t* ___Id_2;
	// System.String System.Runtime.Remoting.ChannelData::DelayLoadAsClientChannel
	String_t* ___DelayLoadAsClientChannel_3;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_serverProviders
	ArrayList_t2664224523 * ____serverProviders_4;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_clientProviders
	ArrayList_t2664224523 * ____clientProviders_5;
	// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::_customProperties
	Hashtable_t2249125290 * ____customProperties_6;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_DelayLoadAsClientChannel_3() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ___DelayLoadAsClientChannel_3)); }
	inline String_t* get_DelayLoadAsClientChannel_3() const { return ___DelayLoadAsClientChannel_3; }
	inline String_t** get_address_of_DelayLoadAsClientChannel_3() { return &___DelayLoadAsClientChannel_3; }
	inline void set_DelayLoadAsClientChannel_3(String_t* value)
	{
		___DelayLoadAsClientChannel_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelayLoadAsClientChannel_3), value);
	}

	inline static int32_t get_offset_of__serverProviders_4() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ____serverProviders_4)); }
	inline ArrayList_t2664224523 * get__serverProviders_4() const { return ____serverProviders_4; }
	inline ArrayList_t2664224523 ** get_address_of__serverProviders_4() { return &____serverProviders_4; }
	inline void set__serverProviders_4(ArrayList_t2664224523 * value)
	{
		____serverProviders_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverProviders_4), value);
	}

	inline static int32_t get_offset_of__clientProviders_5() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ____clientProviders_5)); }
	inline ArrayList_t2664224523 * get__clientProviders_5() const { return ____clientProviders_5; }
	inline ArrayList_t2664224523 ** get_address_of__clientProviders_5() { return &____clientProviders_5; }
	inline void set__clientProviders_5(ArrayList_t2664224523 * value)
	{
		____clientProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&____clientProviders_5), value);
	}

	inline static int32_t get_offset_of__customProperties_6() { return static_cast<int32_t>(offsetof(ChannelData_t588719229, ____customProperties_6)); }
	inline Hashtable_t2249125290 * get__customProperties_6() const { return ____customProperties_6; }
	inline Hashtable_t2249125290 ** get_address_of__customProperties_6() { return &____customProperties_6; }
	inline void set__customProperties_6(Hashtable_t2249125290 * value)
	{
		____customProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&____customProperties_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATA_T588719229_H
#ifndef IDENTITY_T186446214_H
#define IDENTITY_T186446214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t186446214  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t2163760811 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t2163760811 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t689872619 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t2163760811 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t2163760811 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t2163760811 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t2163760811 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t2163760811 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t2163760811 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____objRef_5)); }
	inline ObjRef_t689872619 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t689872619 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t689872619 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t186446214, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T186446214_H
#ifndef EXCEPTION_T1818378607_H
#define EXCEPTION_T1818378607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1818378607  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t758745098* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1818378607 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t758745098* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t758745098** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t758745098* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___inner_exception_1)); }
	inline Exception_t1818378607 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1818378607 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1818378607 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1818378607, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1818378607_H
#ifndef MONOMETHODMESSAGE_T2292274837_H
#define MONOMETHODMESSAGE_T2292274837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t2292274837  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t3707057229* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t1916254710* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t3768076955 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t1818378607 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t2466154967* ___methodSignature_7;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___args_1)); }
	inline ObjectU5BU5D_t3707057229* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t3707057229** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t3707057229* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___arg_types_2)); }
	inline ByteU5BU5D_t1916254710* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t1916254710** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t1916254710* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_2), value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___ctx_3)); }
	inline LogicalCallContext_t3768076955 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t3768076955 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t3768076955 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_3), value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___rval_4)); }
	inline RuntimeObject * get_rval_4() const { return ___rval_4; }
	inline RuntimeObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(RuntimeObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier((&___rval_4), value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___exc_5)); }
	inline Exception_t1818378607 * get_exc_5() const { return ___exc_5; }
	inline Exception_t1818378607 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t1818378607 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier((&___exc_5), value);
	}

	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___uri_6)); }
	inline String_t* get_uri_6() const { return ___uri_6; }
	inline String_t** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(String_t* value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_methodSignature_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2292274837, ___methodSignature_7)); }
	inline TypeU5BU5D_t2466154967* get_methodSignature_7() const { return ___methodSignature_7; }
	inline TypeU5BU5D_t2466154967** get_address_of_methodSignature_7() { return &___methodSignature_7; }
	inline void set_methodSignature_7(TypeU5BU5D_t2466154967* value)
	{
		___methodSignature_7 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHODMESSAGE_T2292274837_H
#ifndef REMOTINGSURROGATE_T991030083_H
#define REMOTINGSURROGATE_T991030083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t991030083  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T991030083_H
#ifndef OBJREFSURROGATE_T2162409876_H
#define OBJREFSURROGATE_T2162409876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t2162409876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T2162409876_H
#ifndef REMOTINGSURROGATESELECTOR_T127176623_H
#define REMOTINGSURROGATESELECTOR_T127176623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t127176623  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t127176623, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t127176623_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t2162409876 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t991030083 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t127176623_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t127176623_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t2162409876 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t2162409876 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t2162409876 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t127176623_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t991030083 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t991030083 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t991030083 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T127176623_H
#ifndef RETURNMESSAGE_T1159869275_H
#define RETURNMESSAGE_T1159869275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t1159869275  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t3707057229* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t3707057229* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t3768076955 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t1818378607 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t2837957059 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t2466154967* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t1932105862 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t2601474956 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____outArgs_0)); }
	inline ObjectU5BU5D_t3707057229* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t3707057229** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t3707057229* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____args_1)); }
	inline ObjectU5BU5D_t3707057229* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t3707057229** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t3707057229* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____callCtx_3)); }
	inline LogicalCallContext_t3768076955 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t3768076955 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t3768076955 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier((&____uri_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____exception_6)); }
	inline Exception_t1818378607 * get__exception_6() const { return ____exception_6; }
	inline Exception_t1818378607 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t1818378607 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____methodBase_7)); }
	inline MethodBase_t2837957059 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t2837957059 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t2837957059 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_7), value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_8), value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____methodSignature_9)); }
	inline TypeU5BU5D_t2466154967* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t2466154967** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t2466154967* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_9), value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_10), value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____properties_11)); }
	inline MethodReturnDictionary_t1932105862 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t1932105862 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t1932105862 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier((&____properties_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t1159869275, ____inArgInfo_12)); }
	inline ArgInfo_t2601474956 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t2601474956 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t2601474956 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T1159869275_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1738171300_H
#define ASYMMETRICSIGNATUREFORMATTER_T1738171300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1738171300  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1738171300_H
#ifndef SERVEROBJECTTERMINATORSINK_T2843998811_H
#define SERVEROBJECTTERMINATORSINK_T2843998811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t2843998811  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t2843998811, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T2843998811_H
#ifndef STACKBUILDERSINK_T2363468529_H
#define STACKBUILDERSINK_T2363468529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t2363468529  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t1340560424 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t2735802879 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t2363468529, ____target_0)); }
	inline MarshalByRefObject_t1340560424 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t1340560424 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t1340560424 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t2363468529, ____rp_1)); }
	inline RealProxy_t2735802879 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t2735802879 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t2735802879 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T2363468529_H
#ifndef VALUETYPE_T3667373237_H
#define VALUETYPE_T3667373237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3667373237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3667373237_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3667373237_marshaled_com
{
};
#endif // VALUETYPE_T3667373237_H
#ifndef SERVERCONTEXTTERMINATORSINK_T3975607404_H
#define SERVERCONTEXTTERMINATORSINK_T3975607404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t3975607404  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T3975607404_H
#ifndef FORMATTERCONVERTER_T1660900981_H
#define FORMATTERCONVERTER_T1660900981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t1660900981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T1660900981_H
#ifndef ENVOYINFO_T4220562616_H
#define ENVOYINFO_T4220562616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t4220562616  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	RuntimeObject* ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t4220562616, ___envoySinks_0)); }
	inline RuntimeObject* get_envoySinks_0() const { return ___envoySinks_0; }
	inline RuntimeObject** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(RuntimeObject* value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___envoySinks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYINFO_T4220562616_H
#ifndef ATTRIBUTE_T2314169029_H
#define ATTRIBUTE_T2314169029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2314169029  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2314169029_H
#ifndef METHODDICTIONARY_T1617991543_H
#define METHODDICTIONARY_T1617991543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t1617991543  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t2594094198* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543, ____methodKeys_2)); }
	inline StringU5BU5D_t2594094198* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t2594094198** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t2594094198* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t1617991543_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t243087119 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t243087119 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t243087119 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t243087119 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t243087119 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t1617991543_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t243087119 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t243087119 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t243087119 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T1617991543_H
#ifndef TRANSPARENTPROXY_T1559573439_H
#define TRANSPARENTPROXY_T1559573439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t1559573439  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t2735802879 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t1559573439, ____rp_0)); }
	inline RealProxy_t2735802879 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t2735802879 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t2735802879 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier((&____rp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPARENTPROXY_T1559573439_H
#ifndef BASE64CONSTANTS_T2995694635_H
#define BASE64CONSTANTS_T2995694635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t2995694635  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t2995694635_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t1916254710* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t1916254710* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t2995694635_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t1916254710* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t1916254710** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t1916254710* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t2995694635_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t1916254710* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t1916254710** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t1916254710* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T2995694635_H
#ifndef REALPROXY_T2735802879_H
#define REALPROXY_T2735802879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t2735802879  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_1;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_2;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t186446214 * ____objectIdentity_3;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_4;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t2735802879, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetDomainId_1() { return static_cast<int32_t>(offsetof(RealProxy_t2735802879, ____targetDomainId_1)); }
	inline int32_t get__targetDomainId_1() const { return ____targetDomainId_1; }
	inline int32_t* get_address_of__targetDomainId_1() { return &____targetDomainId_1; }
	inline void set__targetDomainId_1(int32_t value)
	{
		____targetDomainId_1 = value;
	}

	inline static int32_t get_offset_of__targetUri_2() { return static_cast<int32_t>(offsetof(RealProxy_t2735802879, ____targetUri_2)); }
	inline String_t* get__targetUri_2() const { return ____targetUri_2; }
	inline String_t** get_address_of__targetUri_2() { return &____targetUri_2; }
	inline void set__targetUri_2(String_t* value)
	{
		____targetUri_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_2), value);
	}

	inline static int32_t get_offset_of__objectIdentity_3() { return static_cast<int32_t>(offsetof(RealProxy_t2735802879, ____objectIdentity_3)); }
	inline Identity_t186446214 * get__objectIdentity_3() const { return ____objectIdentity_3; }
	inline Identity_t186446214 ** get_address_of__objectIdentity_3() { return &____objectIdentity_3; }
	inline void set__objectIdentity_3(Identity_t186446214 * value)
	{
		____objectIdentity_3 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_3), value);
	}

	inline static int32_t get_offset_of__objTP_4() { return static_cast<int32_t>(offsetof(RealProxy_t2735802879, ____objTP_4)); }
	inline RuntimeObject * get__objTP_4() const { return ____objTP_4; }
	inline RuntimeObject ** get_address_of__objTP_4() { return &____objTP_4; }
	inline void set__objTP_4(RuntimeObject * value)
	{
		____objTP_4 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T2735802879_H
#ifndef CRYPTOCONFIG_T4211700741_H
#define CRYPTOCONFIG_T4211700741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t4211700741  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t4211700741_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t2249125290 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t2249125290 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t4211700741_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t4211700741_StaticFields, ___algorithms_1)); }
	inline Hashtable_t2249125290 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t2249125290 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t2249125290 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t4211700741_StaticFields, ___oid_2)); }
	inline Hashtable_t2249125290 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t2249125290 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t2249125290 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T4211700741_H
#ifndef TRACKINGSERVICES_T3268956958_H
#define TRACKINGSERVICES_T3268956958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t3268956958  : public RuntimeObject
{
public:

public:
};

struct TrackingServices_t3268956958_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t2664224523 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t3268956958_StaticFields, ____handlers_0)); }
	inline ArrayList_t2664224523 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t2664224523 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t2664224523 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&____handlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSERVICES_T3268956958_H
#ifndef ARRAYFIXUPRECORD_T3493106359_H
#define ARRAYFIXUPRECORD_T3493106359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t3493106359  : public BaseFixupRecord_t1090906206
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t3493106359, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T3493106359_H
#ifndef MULTIARRAYFIXUPRECORD_T3706158192_H
#define MULTIARRAYFIXUPRECORD_T3706158192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t3706158192  : public BaseFixupRecord_t1090906206
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t1800966719* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t3706158192, ____indices_4)); }
	inline Int32U5BU5D_t1800966719* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t1800966719** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t1800966719* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T3706158192_H
#ifndef FIXUPRECORD_T3248507907_H
#define FIXUPRECORD_T3248507907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t3248507907  : public BaseFixupRecord_t1090906206
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t3248507907, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T3248507907_H
#ifndef ONDESERIALIZEDATTRIBUTE_T3976077587_H
#define ONDESERIALIZEDATTRIBUTE_T3976077587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t3976077587  : public Attribute_t2314169029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T3976077587_H
#ifndef SERIALIZATIONENTRY_T914845795_H
#define SERIALIZATIONENTRY_T914845795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t914845795 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t914845795, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t914845795, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t914845795, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t914845795_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t914845795_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T914845795_H
#ifndef ONDESERIALIZINGATTRIBUTE_T1295034841_H
#define ONDESERIALIZINGATTRIBUTE_T1295034841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t1295034841  : public Attribute_t2314169029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T1295034841_H
#ifndef ONSERIALIZEDATTRIBUTE_T2314156225_H
#define ONSERIALIZEDATTRIBUTE_T2314156225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t2314156225  : public Attribute_t2314169029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T2314156225_H
#ifndef ONSERIALIZINGATTRIBUTE_T2242842266_H
#define ONSERIALIZINGATTRIBUTE_T2242842266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t2242842266  : public Attribute_t2314169029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T2242842266_H
#ifndef SYSTEMEXCEPTION_T1917029196_H
#define SYSTEMEXCEPTION_T1917029196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1917029196  : public Exception_t1818378607
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1917029196_H
#ifndef ENUM_T3709965283_H
#define ENUM_T3709965283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3709965283  : public ValueType_t3667373237
{
public:

public:
};

struct Enum_t3709965283_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t873651423* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3709965283_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t873651423* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t873651423** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t873651423* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3709965283_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3709965283_marshaled_com
{
};
#endif // ENUM_T3709965283_H
#ifndef DELAYEDFIXUPRECORD_T1355530418_H
#define DELAYEDFIXUPRECORD_T1355530418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t1355530418  : public BaseFixupRecord_t1090906206
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t1355530418, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T1355530418_H
#ifndef VOID_T992034528_H
#define VOID_T992034528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t992034528 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T992034528_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODRETURNDICTIONARY_T1932105862_H
#define METHODRETURNDICTIONARY_T1932105862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t1932105862  : public MethodDictionary_t1617991543
{
public:

public:
};

struct MethodReturnDictionary_t1932105862_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t2594094198* ___InternalReturnKeys_6;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t2594094198* ___InternalExceptionKeys_7;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_6() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t1932105862_StaticFields, ___InternalReturnKeys_6)); }
	inline StringU5BU5D_t2594094198* get_InternalReturnKeys_6() const { return ___InternalReturnKeys_6; }
	inline StringU5BU5D_t2594094198** get_address_of_InternalReturnKeys_6() { return &___InternalReturnKeys_6; }
	inline void set_InternalReturnKeys_6(StringU5BU5D_t2594094198* value)
	{
		___InternalReturnKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_6), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_7() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t1932105862_StaticFields, ___InternalExceptionKeys_7)); }
	inline StringU5BU5D_t2594094198* get_InternalExceptionKeys_7() const { return ___InternalExceptionKeys_7; }
	inline StringU5BU5D_t2594094198** get_address_of_InternalExceptionKeys_7() { return &___InternalExceptionKeys_7; }
	inline void set_InternalExceptionKeys_7(StringU5BU5D_t2594094198* value)
	{
		___InternalExceptionKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T1932105862_H
#ifndef SOAPATTRIBUTE_T3083141009_H
#define SOAPATTRIBUTE_T3083141009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t3083141009  : public Attribute_t2314169029
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	RuntimeObject * ___ReflectInfo_2;

public:
	inline static int32_t get_offset_of__useAttribute_0() { return static_cast<int32_t>(offsetof(SoapAttribute_t3083141009, ____useAttribute_0)); }
	inline bool get__useAttribute_0() const { return ____useAttribute_0; }
	inline bool* get_address_of__useAttribute_0() { return &____useAttribute_0; }
	inline void set__useAttribute_0(bool value)
	{
		____useAttribute_0 = value;
	}

	inline static int32_t get_offset_of_ProtXmlNamespace_1() { return static_cast<int32_t>(offsetof(SoapAttribute_t3083141009, ___ProtXmlNamespace_1)); }
	inline String_t* get_ProtXmlNamespace_1() const { return ___ProtXmlNamespace_1; }
	inline String_t** get_address_of_ProtXmlNamespace_1() { return &___ProtXmlNamespace_1; }
	inline void set_ProtXmlNamespace_1(String_t* value)
	{
		___ProtXmlNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProtXmlNamespace_1), value);
	}

	inline static int32_t get_offset_of_ReflectInfo_2() { return static_cast<int32_t>(offsetof(SoapAttribute_t3083141009, ___ReflectInfo_2)); }
	inline RuntimeObject * get_ReflectInfo_2() const { return ___ReflectInfo_2; }
	inline RuntimeObject ** get_address_of_ReflectInfo_2() { return &___ReflectInfo_2; }
	inline void set_ReflectInfo_2(RuntimeObject * value)
	{
		___ReflectInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPATTRIBUTE_T3083141009_H
#ifndef WELLKNOWNCLIENTTYPEENTRY_T936750020_H
#define WELLKNOWNCLIENTTYPEENTRY_T936750020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t936750020  : public TypeEntry_t2211176445
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t936750020, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t936750020, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t936750020, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T936750020_H
#ifndef PROXYATTRIBUTE_T3791674764_H
#define PROXYATTRIBUTE_T3791674764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct  ProxyAttribute_t3791674764  : public Attribute_t2314169029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYATTRIBUTE_T3791674764_H
#ifndef REMOTINGPROXY_T2648398251_H
#define REMOTINGPROXY_T2648398251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RemotingProxy
struct  RemotingProxy_t2648398251  : public RealProxy_t2735802879
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	RuntimeObject* ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t2852189298 * ____ctorCall_9;

public:
	inline static int32_t get_offset_of__sink_7() { return static_cast<int32_t>(offsetof(RemotingProxy_t2648398251, ____sink_7)); }
	inline RuntimeObject* get__sink_7() const { return ____sink_7; }
	inline RuntimeObject** get_address_of__sink_7() { return &____sink_7; }
	inline void set__sink_7(RuntimeObject* value)
	{
		____sink_7 = value;
		Il2CppCodeGenWriteBarrier((&____sink_7), value);
	}

	inline static int32_t get_offset_of__hasEnvoySink_8() { return static_cast<int32_t>(offsetof(RemotingProxy_t2648398251, ____hasEnvoySink_8)); }
	inline bool get__hasEnvoySink_8() const { return ____hasEnvoySink_8; }
	inline bool* get_address_of__hasEnvoySink_8() { return &____hasEnvoySink_8; }
	inline void set__hasEnvoySink_8(bool value)
	{
		____hasEnvoySink_8 = value;
	}

	inline static int32_t get_offset_of__ctorCall_9() { return static_cast<int32_t>(offsetof(RemotingProxy_t2648398251, ____ctorCall_9)); }
	inline ConstructionCall_t2852189298 * get__ctorCall_9() const { return ____ctorCall_9; }
	inline ConstructionCall_t2852189298 ** get_address_of__ctorCall_9() { return &____ctorCall_9; }
	inline void set__ctorCall_9(ConstructionCall_t2852189298 * value)
	{
		____ctorCall_9 = value;
		Il2CppCodeGenWriteBarrier((&____ctorCall_9), value);
	}
};

struct RemotingProxy_t2648398251_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t * ____cache_GetHashCodeMethod_6;

public:
	inline static int32_t get_offset_of__cache_GetTypeMethod_5() { return static_cast<int32_t>(offsetof(RemotingProxy_t2648398251_StaticFields, ____cache_GetTypeMethod_5)); }
	inline MethodInfo_t * get__cache_GetTypeMethod_5() const { return ____cache_GetTypeMethod_5; }
	inline MethodInfo_t ** get_address_of__cache_GetTypeMethod_5() { return &____cache_GetTypeMethod_5; }
	inline void set__cache_GetTypeMethod_5(MethodInfo_t * value)
	{
		____cache_GetTypeMethod_5 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetTypeMethod_5), value);
	}

	inline static int32_t get_offset_of__cache_GetHashCodeMethod_6() { return static_cast<int32_t>(offsetof(RemotingProxy_t2648398251_StaticFields, ____cache_GetHashCodeMethod_6)); }
	inline MethodInfo_t * get__cache_GetHashCodeMethod_6() const { return ____cache_GetHashCodeMethod_6; }
	inline MethodInfo_t ** get_address_of__cache_GetHashCodeMethod_6() { return &____cache_GetHashCodeMethod_6; }
	inline void set__cache_GetHashCodeMethod_6(MethodInfo_t * value)
	{
		____cache_GetHashCodeMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetHashCodeMethod_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGPROXY_T2648398251_H
#ifndef ACTIVATEDCLIENTTYPEENTRY_T839169829_H
#define ACTIVATEDCLIENTTYPEENTRY_T839169829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct  ActivatedClientTypeEntry_t839169829  : public TypeEntry_t2211176445
{
public:
	// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::applicationUrl
	String_t* ___applicationUrl_2;
	// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::obj_type
	Type_t * ___obj_type_3;

public:
	inline static int32_t get_offset_of_applicationUrl_2() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t839169829, ___applicationUrl_2)); }
	inline String_t* get_applicationUrl_2() const { return ___applicationUrl_2; }
	inline String_t** get_address_of_applicationUrl_2() { return &___applicationUrl_2; }
	inline void set_applicationUrl_2(String_t* value)
	{
		___applicationUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___applicationUrl_2), value);
	}

	inline static int32_t get_offset_of_obj_type_3() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t839169829, ___obj_type_3)); }
	inline Type_t * get_obj_type_3() const { return ___obj_type_3; }
	inline Type_t ** get_address_of_obj_type_3() { return &___obj_type_3; }
	inline void set_obj_type_3(Type_t * value)
	{
		___obj_type_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDCLIENTTYPEENTRY_T839169829_H
#ifndef SERVERIDENTITY_T713881090_H
#define SERVERIDENTITY_T713881090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t713881090  : public Identity_t186446214
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1340560424 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t3677874190 * ____context_9;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t713881090, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t713881090, ____serverObject_8)); }
	inline MarshalByRefObject_t1340560424 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t1340560424 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t1340560424 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t713881090, ____context_9)); }
	inline Context_t3677874190 * get__context_9() const { return ____context_9; }
	inline Context_t3677874190 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(Context_t3677874190 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier((&____context_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T713881090_H
#ifndef ACTIVATEDSERVICETYPEENTRY_T1686635877_H
#define ACTIVATEDSERVICETYPEENTRY_T1686635877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct  ActivatedServiceTypeEntry_t1686635877  : public TypeEntry_t2211176445
{
public:
	// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(ActivatedServiceTypeEntry_t1686635877, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDSERVICETYPEENTRY_T1686635877_H
#ifndef CLIENTIDENTITY_T2898733772_H
#define CLIENTIDENTITY_T2898733772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t2898733772  : public Identity_t186446214
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t1512884176 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t2898733772, ____proxyReference_7)); }
	inline WeakReference_t1512884176 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t1512884176 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t1512884176 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier((&____proxyReference_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTIDENTITY_T2898733772_H
#ifndef FORMATTERDATA_T77200356_H
#define FORMATTERDATA_T77200356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.FormatterData
struct  FormatterData_t77200356  : public ProviderData_t384469769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERDATA_T77200356_H
#ifndef STREAMINGCONTEXTSTATES_T1640578762_H
#define STREAMINGCONTEXTSTATES_T1640578762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t1640578762 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t1640578762, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T1640578762_H
#ifndef X509KEYSTORAGEFLAGS_T74958707_H
#define X509KEYSTORAGEFLAGS_T74958707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t74958707 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t74958707, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYSTORAGEFLAGS_T74958707_H
#ifndef REMOTINGEXCEPTION_T1897002430_H
#define REMOTINGEXCEPTION_T1897002430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingException
struct  RemotingException_t1897002430  : public SystemException_t1917029196
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGEXCEPTION_T1897002430_H
#ifndef CIPHERMODE_T3609408655_H
#define CIPHERMODE_T3609408655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3609408655 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3609408655, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T3609408655_H
#ifndef SOAPPARAMETERATTRIBUTE_T2736849394_H
#define SOAPPARAMETERATTRIBUTE_T2736849394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapParameterAttribute
struct  SoapParameterAttribute_t2736849394  : public SoapAttribute_t3083141009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPPARAMETERATTRIBUTE_T2736849394_H
#ifndef BINDINGFLAGS_T768776786_H
#define BINDINGFLAGS_T768776786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t768776786 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t768776786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T768776786_H
#ifndef SOAPMETHODATTRIBUTE_T383709494_H
#define SOAPMETHODATTRIBUTE_T383709494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapMethodAttribute
struct  SoapMethodAttribute_t383709494  : public SoapAttribute_t3083141009
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseElement
	String_t* ____responseElement_3;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseNamespace
	String_t* ____responseNamespace_4;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_returnElement
	String_t* ____returnElement_5;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_soapAction
	String_t* ____soapAction_6;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::_useAttribute
	bool ____useAttribute_7;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_namespace
	String_t* ____namespace_8;

public:
	inline static int32_t get_offset_of__responseElement_3() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____responseElement_3)); }
	inline String_t* get__responseElement_3() const { return ____responseElement_3; }
	inline String_t** get_address_of__responseElement_3() { return &____responseElement_3; }
	inline void set__responseElement_3(String_t* value)
	{
		____responseElement_3 = value;
		Il2CppCodeGenWriteBarrier((&____responseElement_3), value);
	}

	inline static int32_t get_offset_of__responseNamespace_4() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____responseNamespace_4)); }
	inline String_t* get__responseNamespace_4() const { return ____responseNamespace_4; }
	inline String_t** get_address_of__responseNamespace_4() { return &____responseNamespace_4; }
	inline void set__responseNamespace_4(String_t* value)
	{
		____responseNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____responseNamespace_4), value);
	}

	inline static int32_t get_offset_of__returnElement_5() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____returnElement_5)); }
	inline String_t* get__returnElement_5() const { return ____returnElement_5; }
	inline String_t** get_address_of__returnElement_5() { return &____returnElement_5; }
	inline void set__returnElement_5(String_t* value)
	{
		____returnElement_5 = value;
		Il2CppCodeGenWriteBarrier((&____returnElement_5), value);
	}

	inline static int32_t get_offset_of__soapAction_6() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____soapAction_6)); }
	inline String_t* get__soapAction_6() const { return ____soapAction_6; }
	inline String_t** get_address_of__soapAction_6() { return &____soapAction_6; }
	inline void set__soapAction_6(String_t* value)
	{
		____soapAction_6 = value;
		Il2CppCodeGenWriteBarrier((&____soapAction_6), value);
	}

	inline static int32_t get_offset_of__useAttribute_7() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____useAttribute_7)); }
	inline bool get__useAttribute_7() const { return ____useAttribute_7; }
	inline bool* get_address_of__useAttribute_7() { return &____useAttribute_7; }
	inline void set__useAttribute_7(bool value)
	{
		____useAttribute_7 = value;
	}

	inline static int32_t get_offset_of__namespace_8() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t383709494, ____namespace_8)); }
	inline String_t* get__namespace_8() const { return ____namespace_8; }
	inline String_t** get_address_of__namespace_8() { return &____namespace_8; }
	inline void set__namespace_8(String_t* value)
	{
		____namespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPMETHODATTRIBUTE_T383709494_H
#ifndef SOAPTYPEATTRIBUTE_T1956921061_H
#define SOAPTYPEATTRIBUTE_T1956921061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapTypeAttribute
struct  SoapTypeAttribute_t1956921061  : public SoapAttribute_t3083141009
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_useAttribute
	bool ____useAttribute_3;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlElementName
	String_t* ____xmlElementName_4;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlNamespace
	String_t* ____xmlNamespace_5;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeName
	String_t* ____xmlTypeName_6;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeNamespace
	String_t* ____xmlTypeNamespace_7;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isType
	bool ____isType_8;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isElement
	bool ____isElement_9;

public:
	inline static int32_t get_offset_of__useAttribute_3() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____useAttribute_3)); }
	inline bool get__useAttribute_3() const { return ____useAttribute_3; }
	inline bool* get_address_of__useAttribute_3() { return &____useAttribute_3; }
	inline void set__useAttribute_3(bool value)
	{
		____useAttribute_3 = value;
	}

	inline static int32_t get_offset_of__xmlElementName_4() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____xmlElementName_4)); }
	inline String_t* get__xmlElementName_4() const { return ____xmlElementName_4; }
	inline String_t** get_address_of__xmlElementName_4() { return &____xmlElementName_4; }
	inline void set__xmlElementName_4(String_t* value)
	{
		____xmlElementName_4 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElementName_4), value);
	}

	inline static int32_t get_offset_of__xmlNamespace_5() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____xmlNamespace_5)); }
	inline String_t* get__xmlNamespace_5() const { return ____xmlNamespace_5; }
	inline String_t** get_address_of__xmlNamespace_5() { return &____xmlNamespace_5; }
	inline void set__xmlNamespace_5(String_t* value)
	{
		____xmlNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&____xmlNamespace_5), value);
	}

	inline static int32_t get_offset_of__xmlTypeName_6() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____xmlTypeName_6)); }
	inline String_t* get__xmlTypeName_6() const { return ____xmlTypeName_6; }
	inline String_t** get_address_of__xmlTypeName_6() { return &____xmlTypeName_6; }
	inline void set__xmlTypeName_6(String_t* value)
	{
		____xmlTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeName_6), value);
	}

	inline static int32_t get_offset_of__xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____xmlTypeNamespace_7)); }
	inline String_t* get__xmlTypeNamespace_7() const { return ____xmlTypeNamespace_7; }
	inline String_t** get_address_of__xmlTypeNamespace_7() { return &____xmlTypeNamespace_7; }
	inline void set__xmlTypeNamespace_7(String_t* value)
	{
		____xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeNamespace_7), value);
	}

	inline static int32_t get_offset_of__isType_8() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____isType_8)); }
	inline bool get__isType_8() const { return ____isType_8; }
	inline bool* get_address_of__isType_8() { return &____isType_8; }
	inline void set__isType_8(bool value)
	{
		____isType_8 = value;
	}

	inline static int32_t get_offset_of__isElement_9() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1956921061, ____isElement_9)); }
	inline bool get__isElement_9() const { return ____isElement_9; }
	inline bool* get_address_of__isElement_9() { return &____isElement_9; }
	inline void set__isElement_9(bool value)
	{
		____isElement_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPTYPEATTRIBUTE_T1956921061_H
#ifndef TYPEFILTERLEVEL_T369358493_H
#define TYPEFILTERLEVEL_T369358493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t369358493 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t369358493, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_T369358493_H
#ifndef CLIENTACTIVATEDIDENTITY_T480040648_H
#define CLIENTACTIVATEDIDENTITY_T480040648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
struct  ClientActivatedIdentity_t480040648  : public ServerIdentity_t713881090
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTACTIVATEDIDENTITY_T480040648_H
#ifndef TYPETAG_T950278626_H
#define TYPETAG_T950278626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t950278626 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t950278626, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T950278626_H
#ifndef FORMATTERTYPESTYLE_T4065122993_H
#define FORMATTERTYPESTYLE_T4065122993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t4065122993 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t4065122993, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T4065122993_H
#ifndef FORMATTERASSEMBLYSTYLE_T712320608_H
#define FORMATTERASSEMBLYSTYLE_T712320608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t712320608 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t712320608, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T712320608_H
#ifndef DELEGATE_T1376236575_H
#define DELEGATE_T1376236575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1376236575  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t4189349723 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1376236575, ___data_8)); }
	inline DelegateData_t4189349723 * get_data_8() const { return ___data_8; }
	inline DelegateData_t4189349723 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t4189349723 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1376236575_H
#ifndef RETURNTYPETAG_T3516539146_H
#define RETURNTYPETAG_T3516539146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t3516539146 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t3516539146, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T3516539146_H
#ifndef OBJECTRECORDSTATUS_T4052831484_H
#define OBJECTRECORDSTATUS_T4052831484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t4052831484 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t4052831484, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORDSTATUS_T4052831484_H
#ifndef METHODFLAGS_T4285925493_H
#define METHODFLAGS_T4285925493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t4285925493 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t4285925493, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODFLAGS_T4285925493_H
#ifndef SOAPFIELDATTRIBUTE_T755223145_H
#define SOAPFIELDATTRIBUTE_T755223145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapFieldAttribute
struct  SoapFieldAttribute_t755223145  : public SoapAttribute_t3083141009
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::_elementName
	String_t* ____elementName_3;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::_isElement
	bool ____isElement_4;

public:
	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t755223145, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((&____elementName_3), value);
	}

	inline static int32_t get_offset_of__isElement_4() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t755223145, ____isElement_4)); }
	inline bool get__isElement_4() const { return ____isElement_4; }
	inline bool* get_address_of__isElement_4() { return &____isElement_4; }
	inline void set__isElement_4(bool value)
	{
		____isElement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPFIELDATTRIBUTE_T755223145_H
#ifndef WELLKNOWNOBJECTMODE_T3055035319_H
#define WELLKNOWNOBJECTMODE_T3055035319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t3055035319 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t3055035319, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNOBJECTMODE_T3055035319_H
#ifndef SINGLECALLIDENTITY_T1080294316_H
#define SINGLECALLIDENTITY_T1080294316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t1080294316  : public ServerIdentity_t713881090
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T1080294316_H
#ifndef SERIALIZATIONEXCEPTION_T2402685878_H
#define SERIALIZATIONEXCEPTION_T2402685878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t2402685878  : public SystemException_t1917029196
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T2402685878_H
#ifndef SINGLETONIDENTITY_T101332447_H
#define SINGLETONIDENTITY_T101332447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingletonIdentity
struct  SingletonIdentity_t101332447  : public ServerIdentity_t713881090
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONIDENTITY_T101332447_H
#ifndef BINARYELEMENT_T1393823424_H
#define BINARYELEMENT_T1393823424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t1393823424 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t1393823424, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T1393823424_H
#ifndef STREAMINGCONTEXT_T1348506654_H
#define STREAMINGCONTEXT_T1348506654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1348506654 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1348506654, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1348506654, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1348506654_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1348506654_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1348506654_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T1691949274_H
#define WELLKNOWNSERVICETYPEENTRY_T1691949274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t1691949274  : public TypeEntry_t2211176445
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1691949274, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1691949274, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1691949274, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T1691949274_H
#ifndef OBJECTRECORD_T3075433836_H
#define OBJECTRECORD_T3075433836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t3075433836  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t94758400 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t1800966719* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t1090906206 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t1090906206 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t3075433836 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___Info_4)); }
	inline SerializationInfo_t94758400 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t94758400 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t94758400 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t1800966719* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t1800966719** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t1800966719* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t1090906206 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t1090906206 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t1090906206 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t1090906206 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t1090906206 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t1090906206 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t3075433836, ___Next_12)); }
	inline ObjectRecord_t3075433836 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t3075433836 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t3075433836 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T3075433836_H
#ifndef REMOTINGSERVICES_T988070020_H
#define REMOTINGSERVICES_T988070020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingServices
struct  RemotingServices_t988070020  : public RuntimeObject
{
public:

public:
};

struct RemotingServices_t988070020_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t2249125290 * ___uri_hash_0;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t1256933330 * ____serializationFormatter_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t1256933330 * ____deserializationFormatter_2;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id_3;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id_4;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t * ___FieldSetterMethod_6;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t * ___FieldGetterMethod_7;

public:
	inline static int32_t get_offset_of_uri_hash_0() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___uri_hash_0)); }
	inline Hashtable_t2249125290 * get_uri_hash_0() const { return ___uri_hash_0; }
	inline Hashtable_t2249125290 ** get_address_of_uri_hash_0() { return &___uri_hash_0; }
	inline void set_uri_hash_0(Hashtable_t2249125290 * value)
	{
		___uri_hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_hash_0), value);
	}

	inline static int32_t get_offset_of__serializationFormatter_1() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ____serializationFormatter_1)); }
	inline BinaryFormatter_t1256933330 * get__serializationFormatter_1() const { return ____serializationFormatter_1; }
	inline BinaryFormatter_t1256933330 ** get_address_of__serializationFormatter_1() { return &____serializationFormatter_1; }
	inline void set__serializationFormatter_1(BinaryFormatter_t1256933330 * value)
	{
		____serializationFormatter_1 = value;
		Il2CppCodeGenWriteBarrier((&____serializationFormatter_1), value);
	}

	inline static int32_t get_offset_of__deserializationFormatter_2() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ____deserializationFormatter_2)); }
	inline BinaryFormatter_t1256933330 * get__deserializationFormatter_2() const { return ____deserializationFormatter_2; }
	inline BinaryFormatter_t1256933330 ** get_address_of__deserializationFormatter_2() { return &____deserializationFormatter_2; }
	inline void set__deserializationFormatter_2(BinaryFormatter_t1256933330 * value)
	{
		____deserializationFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializationFormatter_2), value);
	}

	inline static int32_t get_offset_of_app_id_3() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___app_id_3)); }
	inline String_t* get_app_id_3() const { return ___app_id_3; }
	inline String_t** get_address_of_app_id_3() { return &___app_id_3; }
	inline void set_app_id_3(String_t* value)
	{
		___app_id_3 = value;
		Il2CppCodeGenWriteBarrier((&___app_id_3), value);
	}

	inline static int32_t get_offset_of_next_id_4() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___next_id_4)); }
	inline int32_t get_next_id_4() const { return ___next_id_4; }
	inline int32_t* get_address_of_next_id_4() { return &___next_id_4; }
	inline void set_next_id_4(int32_t value)
	{
		___next_id_4 = value;
	}

	inline static int32_t get_offset_of_methodBindings_5() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___methodBindings_5)); }
	inline int32_t get_methodBindings_5() const { return ___methodBindings_5; }
	inline int32_t* get_address_of_methodBindings_5() { return &___methodBindings_5; }
	inline void set_methodBindings_5(int32_t value)
	{
		___methodBindings_5 = value;
	}

	inline static int32_t get_offset_of_FieldSetterMethod_6() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___FieldSetterMethod_6)); }
	inline MethodInfo_t * get_FieldSetterMethod_6() const { return ___FieldSetterMethod_6; }
	inline MethodInfo_t ** get_address_of_FieldSetterMethod_6() { return &___FieldSetterMethod_6; }
	inline void set_FieldSetterMethod_6(MethodInfo_t * value)
	{
		___FieldSetterMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&___FieldSetterMethod_6), value);
	}

	inline static int32_t get_offset_of_FieldGetterMethod_7() { return static_cast<int32_t>(offsetof(RemotingServices_t988070020_StaticFields, ___FieldGetterMethod_7)); }
	inline MethodInfo_t * get_FieldGetterMethod_7() const { return ___FieldGetterMethod_7; }
	inline MethodInfo_t ** get_address_of_FieldGetterMethod_7() { return &___FieldGetterMethod_7; }
	inline void set_FieldGetterMethod_7(MethodInfo_t * value)
	{
		___FieldGetterMethod_7 = value;
		Il2CppCodeGenWriteBarrier((&___FieldGetterMethod_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSERVICES_T988070020_H
#ifndef MULTICASTDELEGATE_T2026095437_H
#define MULTICASTDELEGATE_T2026095437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2026095437  : public Delegate_t1376236575
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2026095437 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2026095437 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2026095437, ___prev_9)); }
	inline MulticastDelegate_t2026095437 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2026095437 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2026095437 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2026095437, ___kpm_next_10)); }
	inline MulticastDelegate_t2026095437 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2026095437 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2026095437 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2026095437_H
#ifndef OBJECTMANAGER_T3293482408_H
#define OBJECTMANAGER_T3293482408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t3293482408  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t3075433836 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t3075433836 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t2664224523 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t2664224523 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t2249125290 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t1348506654  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____objectRecordChain_0)); }
	inline ObjectRecord_t3075433836 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t3075433836 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t3075433836 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____lastObjectRecord_1)); }
	inline ObjectRecord_t3075433836 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t3075433836 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t3075433836 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____deserializedRecords_2)); }
	inline ArrayList_t2664224523 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t2664224523 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t2664224523 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t2664224523 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t2664224523 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t2664224523 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____objectRecords_4)); }
	inline Hashtable_t2249125290 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t2249125290 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t2249125290 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____context_7)); }
	inline StreamingContext_t1348506654  get__context_7() const { return ____context_7; }
	inline StreamingContext_t1348506654 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t1348506654  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t3293482408, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T3293482408_H
#ifndef OBJECTREADER_T706282354_H
#define OBJECTREADER_T706282354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t706282354  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t1348506654  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t475287172 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t3293482408 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t2249125290 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t2249125290 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t1916254710* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____context_1)); }
	inline StreamingContext_t1348506654  get__context_1() const { return ____context_1; }
	inline StreamingContext_t1348506654 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t1348506654  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____binder_2)); }
	inline SerializationBinder_t475287172 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t475287172 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t475287172 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____manager_4)); }
	inline ObjectManager_t3293482408 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t3293482408 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t3293482408 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____registeredAssemblies_5)); }
	inline Hashtable_t2249125290 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t2249125290 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t2249125290 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____typeMetadataCache_6)); }
	inline Hashtable_t2249125290 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t2249125290 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t2249125290 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t1916254710* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t1916254710** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t1916254710* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t706282354, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T706282354_H
#ifndef CALLBACKHANDLER_T3746222483_H
#define CALLBACKHANDLER_T3746222483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t3746222483  : public MulticastDelegate_t2026095437
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T3746222483_H
#ifndef BINARYFORMATTER_T1256933330_H
#define BINARYFORMATTER_T1256933330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t1256933330  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t475287172 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t1348506654  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___binder_1)); }
	inline SerializationBinder_t475287172 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t475287172 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t475287172 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___context_2)); }
	inline StreamingContext_t1348506654  get_context_2() const { return ___context_2; }
	inline StreamingContext_t1348506654 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t1348506654  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t1256933330_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1256933330_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T1256933330_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { sizeof (DictionaryEnumerator_t2745036575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable500[3] = 
{
	DictionaryEnumerator_t2745036575::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t2745036575::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t2745036575::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { sizeof (MethodReturnDictionary_t1932105862), -1, sizeof(MethodReturnDictionary_t1932105862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable501[2] = 
{
	MethodReturnDictionary_t1932105862_StaticFields::get_offset_of_InternalReturnKeys_6(),
	MethodReturnDictionary_t1932105862_StaticFields::get_offset_of_InternalExceptionKeys_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { sizeof (MonoMethodMessage_t2292274837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable502[8] = 
{
	MonoMethodMessage_t2292274837::get_offset_of_method_0(),
	MonoMethodMessage_t2292274837::get_offset_of_args_1(),
	MonoMethodMessage_t2292274837::get_offset_of_arg_types_2(),
	MonoMethodMessage_t2292274837::get_offset_of_ctx_3(),
	MonoMethodMessage_t2292274837::get_offset_of_rval_4(),
	MonoMethodMessage_t2292274837::get_offset_of_exc_5(),
	MonoMethodMessage_t2292274837::get_offset_of_uri_6(),
	MonoMethodMessage_t2292274837::get_offset_of_methodSignature_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { sizeof (RemotingSurrogate_t991030083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { sizeof (ObjRefSurrogate_t2162409876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { sizeof (RemotingSurrogateSelector_t127176623), -1, sizeof(RemotingSurrogateSelector_t127176623_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable505[4] = 
{
	RemotingSurrogateSelector_t127176623_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t127176623_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t127176623_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t127176623::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { sizeof (ReturnMessage_t1159869275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable506[13] = 
{
	ReturnMessage_t1159869275::get_offset_of__outArgs_0(),
	ReturnMessage_t1159869275::get_offset_of__args_1(),
	ReturnMessage_t1159869275::get_offset_of__outArgsCount_2(),
	ReturnMessage_t1159869275::get_offset_of__callCtx_3(),
	ReturnMessage_t1159869275::get_offset_of__returnValue_4(),
	ReturnMessage_t1159869275::get_offset_of__uri_5(),
	ReturnMessage_t1159869275::get_offset_of__exception_6(),
	ReturnMessage_t1159869275::get_offset_of__methodBase_7(),
	ReturnMessage_t1159869275::get_offset_of__methodName_8(),
	ReturnMessage_t1159869275::get_offset_of__methodSignature_9(),
	ReturnMessage_t1159869275::get_offset_of__typeName_10(),
	ReturnMessage_t1159869275::get_offset_of__properties_11(),
	ReturnMessage_t1159869275::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { sizeof (ServerContextTerminatorSink_t3975607404), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { sizeof (ServerObjectTerminatorSink_t2843998811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable508[1] = 
{
	ServerObjectTerminatorSink_t2843998811::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { sizeof (StackBuilderSink_t2363468529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable509[2] = 
{
	StackBuilderSink_t2363468529::get_offset_of__target_0(),
	StackBuilderSink_t2363468529::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { sizeof (SoapAttribute_t3083141009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable510[3] = 
{
	SoapAttribute_t3083141009::get_offset_of__useAttribute_0(),
	SoapAttribute_t3083141009::get_offset_of_ProtXmlNamespace_1(),
	SoapAttribute_t3083141009::get_offset_of_ReflectInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { sizeof (SoapFieldAttribute_t755223145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable511[2] = 
{
	SoapFieldAttribute_t755223145::get_offset_of__elementName_3(),
	SoapFieldAttribute_t755223145::get_offset_of__isElement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { sizeof (SoapMethodAttribute_t383709494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable512[6] = 
{
	SoapMethodAttribute_t383709494::get_offset_of__responseElement_3(),
	SoapMethodAttribute_t383709494::get_offset_of__responseNamespace_4(),
	SoapMethodAttribute_t383709494::get_offset_of__returnElement_5(),
	SoapMethodAttribute_t383709494::get_offset_of__soapAction_6(),
	SoapMethodAttribute_t383709494::get_offset_of__useAttribute_7(),
	SoapMethodAttribute_t383709494::get_offset_of__namespace_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { sizeof (SoapParameterAttribute_t2736849394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (SoapTypeAttribute_t1956921061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable514[7] = 
{
	SoapTypeAttribute_t1956921061::get_offset_of__useAttribute_3(),
	SoapTypeAttribute_t1956921061::get_offset_of__xmlElementName_4(),
	SoapTypeAttribute_t1956921061::get_offset_of__xmlNamespace_5(),
	SoapTypeAttribute_t1956921061::get_offset_of__xmlTypeName_6(),
	SoapTypeAttribute_t1956921061::get_offset_of__xmlTypeNamespace_7(),
	SoapTypeAttribute_t1956921061::get_offset_of__isType_8(),
	SoapTypeAttribute_t1956921061::get_offset_of__isElement_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (ProxyAttribute_t3791674764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (TransparentProxy_t1559573439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable516[1] = 
{
	TransparentProxy_t1559573439::get_offset_of__rp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (RealProxy_t2735802879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable517[5] = 
{
	RealProxy_t2735802879::get_offset_of_class_to_proxy_0(),
	RealProxy_t2735802879::get_offset_of__targetDomainId_1(),
	RealProxy_t2735802879::get_offset_of__targetUri_2(),
	RealProxy_t2735802879::get_offset_of__objectIdentity_3(),
	RealProxy_t2735802879::get_offset_of__objTP_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { sizeof (RemotingProxy_t2648398251), -1, sizeof(RemotingProxy_t2648398251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable518[5] = 
{
	RemotingProxy_t2648398251_StaticFields::get_offset_of__cache_GetTypeMethod_5(),
	RemotingProxy_t2648398251_StaticFields::get_offset_of__cache_GetHashCodeMethod_6(),
	RemotingProxy_t2648398251::get_offset_of__sink_7(),
	RemotingProxy_t2648398251::get_offset_of__hasEnvoySink_8(),
	RemotingProxy_t2648398251::get_offset_of__ctorCall_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { sizeof (TrackingServices_t3268956958), -1, sizeof(TrackingServices_t3268956958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable520[1] = 
{
	TrackingServices_t3268956958_StaticFields::get_offset_of__handlers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (ActivatedClientTypeEntry_t839169829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable521[2] = 
{
	ActivatedClientTypeEntry_t839169829::get_offset_of_applicationUrl_2(),
	ActivatedClientTypeEntry_t839169829::get_offset_of_obj_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (ActivatedServiceTypeEntry_t1686635877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable522[1] = 
{
	ActivatedServiceTypeEntry_t1686635877::get_offset_of_obj_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (EnvoyInfo_t4220562616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable523[1] = 
{
	EnvoyInfo_t4220562616::get_offset_of_envoySinks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (Identity_t186446214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable527[7] = 
{
	Identity_t186446214::get_offset_of__objectUri_0(),
	Identity_t186446214::get_offset_of__channelSink_1(),
	Identity_t186446214::get_offset_of__envoySink_2(),
	Identity_t186446214::get_offset_of__clientDynamicProperties_3(),
	Identity_t186446214::get_offset_of__serverDynamicProperties_4(),
	Identity_t186446214::get_offset_of__objRef_5(),
	Identity_t186446214::get_offset_of__disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { sizeof (ClientIdentity_t2898733772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable528[1] = 
{
	ClientIdentity_t2898733772::get_offset_of__proxyReference_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { sizeof (InternalRemotingServices_t3739422930), -1, sizeof(InternalRemotingServices_t3739422930_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable529[1] = 
{
	InternalRemotingServices_t3739422930_StaticFields::get_offset_of__soapAttributes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { sizeof (ObjRef_t689872619), -1, sizeof(ObjRef_t689872619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable530[9] = 
{
	ObjRef_t689872619::get_offset_of_channel_info_0(),
	ObjRef_t689872619::get_offset_of_uri_1(),
	ObjRef_t689872619::get_offset_of_typeInfo_2(),
	ObjRef_t689872619::get_offset_of_envoyInfo_3(),
	ObjRef_t689872619::get_offset_of_flags_4(),
	ObjRef_t689872619::get_offset_of__serverType_5(),
	ObjRef_t689872619_StaticFields::get_offset_of_MarshalledObjectRef_6(),
	ObjRef_t689872619_StaticFields::get_offset_of_WellKnowObjectRef_7(),
	ObjRef_t689872619_StaticFields::get_offset_of_U3CU3Ef__switchU24map26_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { sizeof (RemotingConfiguration_t3553872005), -1, sizeof(RemotingConfiguration_t3553872005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable531[13] = 
{
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_applicationID_0(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_applicationName_1(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_processGuid_2(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_defaultConfigRead_3(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_defaultDelayedConfigRead_4(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of__errorMode_5(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_wellKnownClientEntries_6(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_activatedClientEntries_7(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_wellKnownServiceEntries_8(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_activatedServiceEntries_9(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_channelTemplates_10(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_clientProviderTemplates_11(),
	RemotingConfiguration_t3553872005_StaticFields::get_offset_of_serverProviderTemplates_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { sizeof (ConfigHandler_t4050063948), -1, sizeof(ConfigHandler_t4050063948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable532[10] = 
{
	ConfigHandler_t4050063948::get_offset_of_typeEntries_0(),
	ConfigHandler_t4050063948::get_offset_of_channelInstances_1(),
	ConfigHandler_t4050063948::get_offset_of_currentChannel_2(),
	ConfigHandler_t4050063948::get_offset_of_currentProviderData_3(),
	ConfigHandler_t4050063948::get_offset_of_currentClientUrl_4(),
	ConfigHandler_t4050063948::get_offset_of_appName_5(),
	ConfigHandler_t4050063948::get_offset_of_currentXmlPath_6(),
	ConfigHandler_t4050063948::get_offset_of_onlyDelayedChannels_7(),
	ConfigHandler_t4050063948_StaticFields::get_offset_of_U3CU3Ef__switchU24map27_8(),
	ConfigHandler_t4050063948_StaticFields::get_offset_of_U3CU3Ef__switchU24map28_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { sizeof (ChannelData_t588719229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable533[7] = 
{
	ChannelData_t588719229::get_offset_of_Ref_0(),
	ChannelData_t588719229::get_offset_of_Type_1(),
	ChannelData_t588719229::get_offset_of_Id_2(),
	ChannelData_t588719229::get_offset_of_DelayLoadAsClientChannel_3(),
	ChannelData_t588719229::get_offset_of__serverProviders_4(),
	ChannelData_t588719229::get_offset_of__clientProviders_5(),
	ChannelData_t588719229::get_offset_of__customProperties_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { sizeof (ProviderData_t384469769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable534[5] = 
{
	ProviderData_t384469769::get_offset_of_Ref_0(),
	ProviderData_t384469769::get_offset_of_Type_1(),
	ProviderData_t384469769::get_offset_of_Id_2(),
	ProviderData_t384469769::get_offset_of_CustomProperties_3(),
	ProviderData_t384469769::get_offset_of_CustomData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { sizeof (FormatterData_t77200356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { sizeof (RemotingException_t1897002430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { sizeof (RemotingServices_t988070020), -1, sizeof(RemotingServices_t988070020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable537[8] = 
{
	RemotingServices_t988070020_StaticFields::get_offset_of_uri_hash_0(),
	RemotingServices_t988070020_StaticFields::get_offset_of__serializationFormatter_1(),
	RemotingServices_t988070020_StaticFields::get_offset_of__deserializationFormatter_2(),
	RemotingServices_t988070020_StaticFields::get_offset_of_app_id_3(),
	RemotingServices_t988070020_StaticFields::get_offset_of_next_id_4(),
	RemotingServices_t988070020_StaticFields::get_offset_of_methodBindings_5(),
	RemotingServices_t988070020_StaticFields::get_offset_of_FieldSetterMethod_6(),
	RemotingServices_t988070020_StaticFields::get_offset_of_FieldGetterMethod_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (ServerIdentity_t713881090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable538[3] = 
{
	ServerIdentity_t713881090::get_offset_of__objectType_7(),
	ServerIdentity_t713881090::get_offset_of__serverObject_8(),
	ServerIdentity_t713881090::get_offset_of__context_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (ClientActivatedIdentity_t480040648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (SingletonIdentity_t101332447), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { sizeof (SingleCallIdentity_t1080294316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { sizeof (SoapServices_t1454221811), -1, sizeof(SoapServices_t1454221811_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable542[5] = 
{
	SoapServices_t1454221811_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t1454221811_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t1454221811_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t1454221811_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t1454221811_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { sizeof (TypeInfo_t1567486481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable543[2] = 
{
	TypeInfo_t1567486481::get_offset_of_Attributes_0(),
	TypeInfo_t1567486481::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (TypeEntry_t2211176445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable544[2] = 
{
	TypeEntry_t2211176445::get_offset_of_assembly_name_0(),
	TypeEntry_t2211176445::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (TypeInfo_t2854981928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable545[3] = 
{
	TypeInfo_t2854981928::get_offset_of_serverType_0(),
	TypeInfo_t2854981928::get_offset_of_serverHierarchy_1(),
	TypeInfo_t2854981928::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (WellKnownClientTypeEntry_t936750020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable546[3] = 
{
	WellKnownClientTypeEntry_t936750020::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t936750020::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t936750020::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (WellKnownObjectMode_t3055035319)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable547[3] = 
{
	WellKnownObjectMode_t3055035319::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { sizeof (WellKnownServiceTypeEntry_t1691949274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable548[3] = 
{
	WellKnownServiceTypeEntry_t1691949274::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t1691949274::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t1691949274::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { sizeof (BinaryCommon_t1773848477), -1, sizeof(BinaryCommon_t1773848477_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable549[4] = 
{
	BinaryCommon_t1773848477_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t1773848477_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t1773848477_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t1773848477_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (BinaryElement_t1393823424)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable550[24] = 
{
	BinaryElement_t1393823424::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (TypeTag_t950278626)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable551[9] = 
{
	TypeTag_t950278626::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (MethodFlags_t4285925493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable552[11] = 
{
	MethodFlags_t4285925493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (ReturnTypeTag_t3516539146)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable553[5] = 
{
	ReturnTypeTag_t3516539146::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (BinaryFormatter_t1256933330), -1, sizeof(BinaryFormatter_t1256933330_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable554[7] = 
{
	BinaryFormatter_t1256933330::get_offset_of_assembly_format_0(),
	BinaryFormatter_t1256933330::get_offset_of_binder_1(),
	BinaryFormatter_t1256933330::get_offset_of_context_2(),
	BinaryFormatter_t1256933330::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t1256933330::get_offset_of_type_format_4(),
	BinaryFormatter_t1256933330::get_offset_of_filter_level_5(),
	BinaryFormatter_t1256933330_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (MessageFormatter_t609480300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (ObjectReader_t706282354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable556[12] = 
{
	ObjectReader_t706282354::get_offset_of__surrogateSelector_0(),
	ObjectReader_t706282354::get_offset_of__context_1(),
	ObjectReader_t706282354::get_offset_of__binder_2(),
	ObjectReader_t706282354::get_offset_of__filterLevel_3(),
	ObjectReader_t706282354::get_offset_of__manager_4(),
	ObjectReader_t706282354::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t706282354::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t706282354::get_offset_of__lastObject_7(),
	ObjectReader_t706282354::get_offset_of__lastObjectID_8(),
	ObjectReader_t706282354::get_offset_of__rootObjectID_9(),
	ObjectReader_t706282354::get_offset_of_arrayBuffer_10(),
	ObjectReader_t706282354::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (TypeMetadata_t4276700493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable557[6] = 
{
	TypeMetadata_t4276700493::get_offset_of_Type_0(),
	TypeMetadata_t4276700493::get_offset_of_MemberTypes_1(),
	TypeMetadata_t4276700493::get_offset_of_MemberNames_2(),
	TypeMetadata_t4276700493::get_offset_of_MemberInfos_3(),
	TypeMetadata_t4276700493::get_offset_of_FieldCount_4(),
	TypeMetadata_t4276700493::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { sizeof (ArrayNullFiller_t1398832580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable558[1] = 
{
	ArrayNullFiller_t1398832580::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { sizeof (FormatterAssemblyStyle_t712320608)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable559[3] = 
{
	FormatterAssemblyStyle_t712320608::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { sizeof (FormatterTypeStyle_t4065122993)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable560[4] = 
{
	FormatterTypeStyle_t4065122993::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { sizeof (TypeFilterLevel_t369358493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable561[3] = 
{
	TypeFilterLevel_t369358493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { sizeof (FormatterConverter_t1660900981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { sizeof (FormatterServices_t1970690943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { sizeof (ObjectManager_t3293482408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable570[9] = 
{
	ObjectManager_t3293482408::get_offset_of__objectRecordChain_0(),
	ObjectManager_t3293482408::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t3293482408::get_offset_of__deserializedRecords_2(),
	ObjectManager_t3293482408::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t3293482408::get_offset_of__objectRecords_4(),
	ObjectManager_t3293482408::get_offset_of__finalFixup_5(),
	ObjectManager_t3293482408::get_offset_of__selector_6(),
	ObjectManager_t3293482408::get_offset_of__context_7(),
	ObjectManager_t3293482408::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (BaseFixupRecord_t1090906206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable571[4] = 
{
	BaseFixupRecord_t1090906206::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t1090906206::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t1090906206::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t1090906206::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (ArrayFixupRecord_t3493106359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable572[1] = 
{
	ArrayFixupRecord_t3493106359::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (MultiArrayFixupRecord_t3706158192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable573[1] = 
{
	MultiArrayFixupRecord_t3706158192::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (FixupRecord_t3248507907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable574[1] = 
{
	FixupRecord_t3248507907::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { sizeof (DelayedFixupRecord_t1355530418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable575[1] = 
{
	DelayedFixupRecord_t1355530418::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { sizeof (ObjectRecordStatus_t4052831484)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable576[5] = 
{
	ObjectRecordStatus_t4052831484::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { sizeof (ObjectRecord_t3075433836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable577[13] = 
{
	ObjectRecord_t3075433836::get_offset_of_Status_0(),
	ObjectRecord_t3075433836::get_offset_of_OriginalObject_1(),
	ObjectRecord_t3075433836::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t3075433836::get_offset_of_ObjectID_3(),
	ObjectRecord_t3075433836::get_offset_of_Info_4(),
	ObjectRecord_t3075433836::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t3075433836::get_offset_of_Surrogate_6(),
	ObjectRecord_t3075433836::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t3075433836::get_offset_of_Member_8(),
	ObjectRecord_t3075433836::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t3075433836::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t3075433836::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t3075433836::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { sizeof (OnDeserializedAttribute_t3976077587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { sizeof (OnDeserializingAttribute_t1295034841), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { sizeof (OnSerializedAttribute_t2314156225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { sizeof (OnSerializingAttribute_t2242842266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { sizeof (SerializationBinder_t475287172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { sizeof (SerializationCallbacks_t1345845367), -1, sizeof(SerializationCallbacks_t1345845367_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable583[6] = 
{
	SerializationCallbacks_t1345845367::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t1345845367::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t1345845367::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t1345845367::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t1345845367_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t1345845367_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { sizeof (CallbackHandler_t3746222483), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { sizeof (SerializationEntry_t914845795)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable585[3] = 
{
	SerializationEntry_t914845795::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t914845795::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t914845795::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { sizeof (SerializationException_t2402685878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (SerializationInfo_t94758400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable587[5] = 
{
	SerializationInfo_t94758400::get_offset_of_serialized_0(),
	SerializationInfo_t94758400::get_offset_of_values_1(),
	SerializationInfo_t94758400::get_offset_of_assemblyName_2(),
	SerializationInfo_t94758400::get_offset_of_fullTypeName_3(),
	SerializationInfo_t94758400::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (SerializationInfoEnumerator_t3243678153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable588[1] = 
{
	SerializationInfoEnumerator_t3243678153::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (StreamingContext_t1348506654)+ sizeof (RuntimeObject), sizeof(StreamingContext_t1348506654_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable589[2] = 
{
	StreamingContext_t1348506654::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t1348506654::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (StreamingContextStates_t1640578762)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable590[10] = 
{
	StreamingContextStates_t1640578762::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (X509Certificate_t264923951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable591[5] = 
{
	X509Certificate_t264923951::get_offset_of_x509_0(),
	X509Certificate_t264923951::get_offset_of_hideDates_1(),
	X509Certificate_t264923951::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t264923951::get_offset_of_issuer_name_3(),
	X509Certificate_t264923951::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (X509KeyStorageFlags_t74958707)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable592[7] = 
{
	X509KeyStorageFlags_t74958707::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (AsymmetricAlgorithm_t1046158009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable593[2] = 
{
	AsymmetricAlgorithm_t1046158009::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t1046158009::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (AsymmetricKeyExchangeFormatter_t3235322842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (AsymmetricSignatureDeformatter_t2157265603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (AsymmetricSignatureFormatter_t1738171300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (Base64Constants_t2995694635), -1, sizeof(Base64Constants_t2995694635_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable597[2] = 
{
	Base64Constants_t2995694635_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t2995694635_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (CipherMode_t3609408655)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable598[6] = 
{
	CipherMode_t3609408655::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (CryptoConfig_t4211700741), -1, sizeof(CryptoConfig_t4211700741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable599[3] = 
{
	CryptoConfig_t4211700741_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t4211700741_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t4211700741_StaticFields::get_offset_of_oid_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
