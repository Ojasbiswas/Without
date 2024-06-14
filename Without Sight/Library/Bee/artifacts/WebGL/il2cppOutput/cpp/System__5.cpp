#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA;
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD;
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
struct ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26;
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6;
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyCollectionChangedAction_tA580EA64F38D1FB2B1470FDD8266E5F32666D9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15375DE6C2C6723E0BF14A945F98D2277708A5A7;
IL2CPP_EXTERN_C String_t* _stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F48C4E423A99B63DF6FEA241F4A52091B94195D;
IL2CPP_EXTERN_C String_t* _stringLiteral3077B1DBC1670A4AD79D7F238CABD9D63683ECF9;
IL2CPP_EXTERN_C String_t* _stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD;
IL2CPP_EXTERN_C String_t* _stringLiteral33D3BFD348BA1B2A43037217D72EF484B5BE540D;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral556AC0B24A2AF1A340D62991486F553DFCE845AC;
IL2CPP_EXTERN_C String_t* _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668;
IL2CPP_EXTERN_C String_t* _stringLiteral74ADAFFFEA0873318DEE194E1C238D984D1EA8B8;
IL2CPP_EXTERN_C String_t* _stringLiteral84F70A03D9BE22135962B657D18E18C094CC4003;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB4968672ECEECF5A6B270993641EFC5B884A56AF;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD6D46CAED62BB807F974C4EB2AC0FA0A5F8B5F38;
IL2CPP_EXTERN_C String_t* _stringLiteralE7402FA6F316888185F5F063979A07622A0A91A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* BitVector32_CreateMask_m0ACC7DE42199CE528024519E7AB92A38930A1419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_m010974C04F22D47110DCD77005CA026F7EA2F7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_m1EE75703595F07CE93EFC0861AAE02EE9B3AC823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_m4C36BCE7D7E31A5A659E5770024C202216EB36AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_m839DE4731C24001AE7820BFE9F7B56DC05CE1CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_m94EF19F0CEA17A580708E067B4553B8683DE70DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotifyCollectionChangedEventArgs__ctor_mBFD6D3F3F7E50F8D7E6B6C005DC983BD8F4FEB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_Add_mC5EA9EFF5D26B7606728991FFC6E88DD03999863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_Clear_m0C567FCFAAB790EE982D46DB8B87BFD847698E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_Insert_m29B0C734BD6BAFBD53E7395772E45B0A2AF8CFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_RemoveAt_m1026337FA651B838D9D32A821603ABD528610F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_Remove_m8D76E55846BE4BCA1013598F8142EF229FE4CE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyList_set_Item_mFE533AA6D5F8EDD51D96F8035A7B70F0AA859270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306  : public RuntimeObject
{
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets;
	int32_t ____count;
	int32_t ____occupancy;
	int32_t ____loadsize;
	float ____loadFactor;
	int32_t ____version;
	bool ____isWriterInProgress;
	RuntimeObject* ____keys;
	RuntimeObject* ____values;
	RuntimeObject* ____keycomparer;
	RuntimeObject* ____syncRoot;
};
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objectsArray;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____objectsTable;
	int32_t ____initialCapacity;
	RuntimeObject* ____comparer;
	bool ____readOnly;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26  : public RuntimeObject
{
	RuntimeObject* ____list;
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6  : public RuntimeObject
{
	int32_t ____objectReturnType;
	RuntimeObject* ____arrayEnumerator;
};
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objects;
	bool ____isKeys;
};
struct BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 
{
	uint32_t ____data;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};
struct NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	int32_t ____action;
	RuntimeObject* ____newItems;
	RuntimeObject* ____oldItems;
	int32_t ____newStartingIndex;
	int32_t ____oldStartingIndex;
};
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	String_t* ____propertyName;
};
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ____typeId;
	bool ___U3CReloadableU3Ek__BackingField;
	String_t* ___U3CSerializerTypeNameU3Ek__BackingField;
	String_t* ___U3CSerializerBaseTypeNameU3Ek__BackingField;
};
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};
#pragma pack(pop, tp)
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF  : public MulticastDelegate_t
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5;
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B;
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70;
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C;
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
};
struct EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields
{
	PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___CountPropertyChanged;
	PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___IndexerPropertyChanged;
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___ResetCollectionChanged;
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5 (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m1EE75703595F07CE93EFC0861AAE02EE9B3AC823 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitVector32_get_Item_m978AB1B65BC7B75C93FCE24924081447F631DC09 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, int32_t ___0_bit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitVector32_set_Item_m82B1DDA9331F4DE283448290BABA401D5A8F9B61 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, int32_t ___0_bit, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitVector32_CreateMask_m0ACC7DE42199CE528024519E7AB92A38930A1419 (int32_t ___0_previous, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitVector32_Equals_m368F62302C158E3DB686B71B62ACC2808048517B (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitVector32_GetHashCode_m01BD766B915C417C7D2B44B377996FC3898461FF (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitVector32_ToString_mF92746CCFCC80A1270F18B93B172F7CFA4E7BD42 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitVector32_ToString_m90CE30F60597CAB14FD487C829BB4427613CD292 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_array, bool ___1_isKeys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___0_capacity, RuntimeObject* ___1_equalityComparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_array, int32_t ___1_objectReturnType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItems, int32_t ___2_newStartingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m91061D13938039EF55D33DE5150DCB9786E28B21 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_changedItems, int32_t ___2_startingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_mA18855C84984DAF7952B26047F9C37C52CC00BF8 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItems, RuntimeObject* ___2_oldItems, int32_t ___3_startingIndex, int32_t ___4_oldStartingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeRemove_m61F5E3739B3F364E3300414333D585C8510222F2 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_oldItems, int32_t ___2_oldStartingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList__ctor_mEFFA6FCD2CFC5CE8EFD6E0E96153D1E6A96BF039 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, String_t* ___0_serializerTypeName, String_t* ___1_baseSerializerTypeName, bool ___2_reloadable, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_serializerTypeName;
		__this->___U3CSerializerTypeNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerTypeNameU3Ek__BackingField), (void*)L_0);
		String_t* L_1 = ___1_baseSerializerTypeName;
		__this->___U3CSerializerBaseTypeNameU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerBaseTypeNameU3Ek__BackingField), (void*)L_1);
		bool L_2 = ___2_reloadable;
		__this->___U3CReloadableU3Ek__BackingField = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSerializerBaseTypeNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RootDesignerSerializerAttribute_get_TypeId_m3177E104F2130582DB56C4321979B6952B7E0098 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->____typeId;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_1;
		L_1 = RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline(__this, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)44), NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, L_6, NULL);
		V_0 = L_7;
	}

IL_0025:
	{
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, L_10, NULL);
		__this->____typeId = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____typeId), (void*)L_11);
	}

IL_003c:
	{
		String_t* L_12 = __this->____typeId;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgsCache__cctor_m6CE864346D80879E6242465E97D2A283445E196E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_0 = (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*)il2cpp_codegen_object_new(PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5(L_0, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___CountPropertyChanged = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___CountPropertyChanged), (void*)L_0);
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_1 = (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*)il2cpp_codegen_object_new(PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5(L_1, _stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD, NULL);
		((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___IndexerPropertyChanged = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___IndexerPropertyChanged), (void*)L_1);
		NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* L_2 = (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA*)il2cpp_codegen_object_new(NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA_il2cpp_TypeInfo_var);
		NotifyCollectionChangedEventArgs__ctor_m1EE75703595F07CE93EFC0861AAE02EE9B3AC823(L_2, 4, NULL);
		((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___ResetCollectionChanged = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_StaticFields*)il2cpp_codegen_static_fields_for(EventArgsCache_t83EE078D98C288757C13156D876E52A00C50B306_il2cpp_TypeInfo_var))->___ResetCollectionChanged), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitVector32_get_Item_m978AB1B65BC7B75C93FCE24924081447F631DC09 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, int32_t ___0_bit, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____data;
		int32_t L_1 = ___0_bit;
		int32_t L_2 = ___0_bit;
		return (bool)((((int64_t)((int64_t)(((int64_t)(uint64_t)L_0)&((int64_t)L_1)))) == ((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BitVector32_get_Item_m978AB1B65BC7B75C93FCE24924081447F631DC09_AdjustorThunk (RuntimeObject* __this, int32_t ___0_bit, const RuntimeMethod* method)
{
	BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*>(__this + _offset);
	bool _returnValue;
	_returnValue = BitVector32_get_Item_m978AB1B65BC7B75C93FCE24924081447F631DC09(_thisAdjusted, ___0_bit, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitVector32_set_Item_m82B1DDA9331F4DE283448290BABA401D5A8F9B61 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, int32_t ___0_bit, bool ___1_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_value;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_1 = __this->____data;
		int32_t L_2 = ___0_bit;
		__this->____data = ((int32_t)((int32_t)L_1|L_2));
		return;
	}

IL_0012:
	{
		uint32_t L_3 = __this->____data;
		int32_t L_4 = ___0_bit;
		__this->____data = ((int32_t)((int32_t)L_3&((~L_4))));
		return;
	}
}
IL2CPP_EXTERN_C  void BitVector32_set_Item_m82B1DDA9331F4DE283448290BABA401D5A8F9B61_AdjustorThunk (RuntimeObject* __this, int32_t ___0_bit, bool ___1_value, const RuntimeMethod* method)
{
	BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*>(__this + _offset);
	BitVector32_set_Item_m82B1DDA9331F4DE283448290BABA401D5A8F9B61(_thisAdjusted, ___0_bit, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitVector32_CreateMask_m0201B8F0CF84BB78DDF1C491E9075FDF1D86A583 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BitVector32_CreateMask_m0ACC7DE42199CE528024519E7AB92A38930A1419(0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitVector32_CreateMask_m0ACC7DE42199CE528024519E7AB92A38930A1419 (int32_t ___0_previous, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_previous;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		int32_t L_1 = ___0_previous;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15375DE6C2C6723E0BF14A945F98D2277708A5A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitVector32_CreateMask_m0ACC7DE42199CE528024519E7AB92A38930A1419_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = ___0_previous;
		return ((int32_t)(L_3<<1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitVector32_Equals_m368F62302C158E3DB686B71B62ACC2808048517B (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		uint32_t L_1 = __this->____data;
		RuntimeObject* L_2 = ___0_o;
		uint32_t L_3 = ((BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*)UnBox(L_2, BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var))->____data;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BitVector32_Equals_m368F62302C158E3DB686B71B62ACC2808048517B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*>(__this + _offset);
	bool _returnValue;
	_returnValue = BitVector32_Equals_m368F62302C158E3DB686B71B62ACC2808048517B(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitVector32_GetHashCode_m01BD766B915C417C7D2B44B377996FC3898461FF (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 L_0 = (*(BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*)__this);
		BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 L_1 = L_0;
		RuntimeObject* L_2 = Box(BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t BitVector32_GetHashCode_m01BD766B915C417C7D2B44B377996FC3898461FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BitVector32_GetHashCode_m01BD766B915C417C7D2B44B377996FC3898461FF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitVector32_ToString_mF92746CCFCC80A1270F18B93B172F7CFA4E7BD42 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F70A03D9BE22135962B657D18E18C094CC4003);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)45), NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral84F70A03D9BE22135962B657D18E18C094CC4003, NULL);
		BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 L_3 = ___0_value;
		uint32_t L_4 = L_3.____data;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0046;
	}

IL_001f:
	{
		int32_t L_5 = V_1;
		if (!((int64_t)(((int64_t)L_5)&((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0035;
		}
	}
	{
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)49), NULL);
		goto IL_003e;
	}

IL_0035:
	{
		StringBuilder_t* L_8 = V_0;
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)48), NULL);
	}

IL_003e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)(L_10<<1));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0046:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)32))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_13 = V_0;
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)125), NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_15);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitVector32_ToString_m90CE30F60597CAB14FD487C829BB4427613CD292 (BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* __this, const RuntimeMethod* method) 
{
	{
		BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119 L_0 = (*(BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*)__this);
		String_t* L_1;
		L_1 = BitVector32_ToString_mF92746CCFCC80A1270F18B93B172F7CFA4E7BD42(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* BitVector32_ToString_m90CE30F60597CAB14FD487C829BB4427613CD292_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BitVector32_tC6B6129CEBD8DF65CED77CE48509E6C27F8BB119*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BitVector32_ToString_m90CE30F60597CAB14FD487C829BB4427613CD292(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mBEC4CCF86E1A22330C31E1C069B2F21695445A10 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600(__this, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66(__this, L_0, (RuntimeObject*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		__this->____initialCapacity = L_0;
		RuntimeObject* L_1 = ___1_comparer;
		__this->____comparer = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m442555F1C427B3EF7DC305AE414FD5EBD90A4861 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Keys_m39D726F42E6E2A524AE555A41AE203F06E4F6792 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* L_1 = (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F*)il2cpp_codegen_object_new(OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64(L_1, L_0, (bool)1, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objectsArray;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_2, L_1, NULL);
		__this->____objectsArray = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsArray), (void*)L_2);
	}

IL_0019:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->____objectsArray;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____objectsTable;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity;
		RuntimeObject* L_2 = __this->____comparer;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		__this->____objectsTable = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsTable), (void*)L_3);
	}

IL_001f:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____objectsTable;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m67C653BEB9C1E451229203FAE5B6453681E7FBDB (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Item_m9A7727E95D9B4BE319E42496CF9FCF61D33ADB9B (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25, L_0, L_1);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Item_m5755C415F2E5CAC5A0AE3EFBB5A8D84915B37ED8 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___0_key;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(23, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___0_key;
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(20, L_2, L_3);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5;
		L_5 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_6 = ___0_key;
		RuntimeObject* L_7 = ___1_value;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24, L_5, L_6, L_7);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8;
		L_8 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_9 = ___0_key;
		int32_t L_10;
		L_10 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_9, NULL);
		RuntimeObject* L_11 = ___0_key;
		RuntimeObject* L_12 = ___1_value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13;
		memset((&L_13), 0, sizeof(L_13));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_13), L_11, L_12, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
		RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(26, L_8, L_10, L_15);
		return;
	}

IL_004d:
	{
		RuntimeObject* L_16 = ___0_key;
		RuntimeObject* L_17 = ___1_value;
		OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3(__this, L_16, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Values_m14CFA04FF0A8DC8B41386192B029EC604AF551BA (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* L_1 = (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F*)il2cpp_codegen_object_new(OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64(L_1, L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___0_key;
		RuntimeObject* L_4 = ___1_value;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(17, L_2, L_3, L_4);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5;
		L_5 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_6 = ___0_key;
		RuntimeObject* L_7 = ___1_value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27, L_5, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		VirtualActionInvoker0::Invoke(18, L_2);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3;
		L_3 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		VirtualActionInvoker0::Invoke(29, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_Contains_m63AFE431564000B20908A732633780B192F7F95E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___0_key;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(20, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_CopyTo_m96E73EF7B84BA4D1ABA184134465F41DFFE73C2A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(22, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25, L_0, L_1);
		V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = __this->____comparer;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = ___0_key;
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = ___0_key;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_10, L_11);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		int32_t L_15 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16;
		L_16 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(21, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->____readOnly;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_key;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___0_key;
		int32_t L_5;
		L_5 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7;
		L_7 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_8 = ___0_key;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(30, L_7, L_8);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9;
		L_9 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_10 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(40, L_9, L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_GetEnumerator_mECA50DD161EDC87F84CD75764643826BFF14C16F (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m4AC8186C465CF478A39CC2FADBDBA75AA9DA5084 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_3, L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		bool L_7 = __this->____readOnly;
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->____initialCapacity;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, L_9, NULL);
		int32_t L_10;
		L_10 = OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_0 = L_11;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = __this->____objectsArray;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		VirtualActionInvoker1< RuntimeArray* >::Invoke(32, L_12, (RuntimeArray*)L_13);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_14, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, (RuntimeObject*)L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m600671E042DB3E5BD39D5439D3C88010EEA1E95A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_sender;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(22, __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_1 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}

IL_0013:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_4, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = __this->____siInfo;
		bool L_7;
		L_7 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		__this->____readOnly = L_7;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = __this->____siInfo;
		int32_t L_9;
		L_9 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, NULL);
		__this->____initialCapacity = L_9;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, L_12, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		V_1 = L_15;
		V_2 = 0;
		goto IL_00d7;
	}

IL_008d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
	}
	try
	{
		RuntimeObject* L_20 = V_3;
		V_4 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_20, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		goto IL_00a7;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_21 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}

IL_00a7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_22;
		L_22 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_23 = V_4;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_24 = L_23;
		RuntimeObject* L_25 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27, L_22, L_25);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27;
		L_27 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_28;
		L_28 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_4), NULL);
		RuntimeObject* L_29;
		L_29 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_4), NULL);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(17, L_27, L_28, L_29);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d7:
	{
		int32_t L_31 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00dd:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_array, int32_t ___1_objectReturnType, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___0_array;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35, L_0);
		__this->____arrayEnumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayEnumerator), (void*)L_1);
		int32_t L_2 = ___1_objectReturnType;
		__this->____objectReturnType = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Current_m1513DF120F398083CA52B7B330D7FF9D5FD6BC69 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____objectReturnType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->____arrayEnumerator;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_3;
	}

IL_0022:
	{
		int32_t L_4 = __this->____objectReturnType;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_5 = __this->____arrayEnumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_6, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_7;
		L_7 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_7;
	}

IL_0044:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		L_8 = OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____arrayEnumerator;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_3);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_4, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_5;
		L_5 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Key_mAE1632D8B4767AC6A321CDDCECFA3B943CFEB202 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Value_m3D9DB591978A7EA9C640AD820A301AD176665AB9 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m25E708E43E6B36CEAB84121CB0831590F40985BF (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m6878E0A1524911AEBEEC87C578C75584DAFD9022 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_array, bool ___1_isKeys, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___0_array;
		__this->____objects = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects), (void*)L_0);
		bool L_1 = ___1_isKeys;
		__this->____isKeys = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	RuntimeArray* G_B8_0 = NULL;
	RuntimeArray* G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeArray* G_B9_1 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_0028:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = __this->____objects;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{
				{
					RuntimeObject* L_9 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0089:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_006f_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_12 = V_0;
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_1 = L_13;
				RuntimeArray* L_14 = ___0_array;
				bool L_15 = __this->____isKeys;
				if (L_15)
				{
					G_B8_0 = L_14;
					goto IL_0056_1;
				}
				G_B7_0 = L_14;
			}
			{
				RuntimeObject* L_16 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_16, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_17;
				L_17 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				G_B9_0 = L_17;
				G_B9_1 = G_B7_0;
				goto IL_0064_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_18 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_18, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_19;
				L_19 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				G_B9_0 = L_19;
				G_B9_1 = G_B8_0;
			}

IL_0064_1:
			{
				int32_t L_20 = ___1_index;
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(G_B9_1, G_B9_0, L_20, NULL);
				int32_t L_21 = ___1_index;
				___1_index = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_006f_1:
			{
				RuntimeObject* L_22 = V_0;
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_008a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m7E6084DFB4648AD05337326CC87BC5AAAC2B310B (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m970D75F7E81A1BB6FA21D797A7D0A068D749E511 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m915EACF605AF9EBDC96A2BDB466682095A03154D (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B2_0 = NULL;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B3_1 = NULL;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects;
		bool L_1 = __this->____isKeys;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
		G_B1_0 = L_0;
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_2 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_2, G_B3_1, G_B3_0, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m1EE75703595F07CE93EFC0861AAE02EE9B3AC823 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = 4;
		RuntimeObject* L_2 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedAction_tA580EA64F38D1FB2B1470FDD8266E5F32666D9FF_il2cpp_TypeInfo_var)), &L_1);
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3077B1DBC1670A4AD79D7F238CABD9D63683ECF9)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m1EE75703595F07CE93EFC0861AAE02EE9B3AC823_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_5 = ___0_action;
		NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B(__this, L_5, (RuntimeObject*)NULL, (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m010974C04F22D47110DCD77005CA026F7EA2F7B7 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_changedItem, int32_t ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___0_action;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = ___0_action;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral556AC0B24A2AF1A340D62991486F553DFCE845AC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m010974C04F22D47110DCD77005CA026F7EA2F7B7_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_4 = ___0_action;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_5 = ___1_changedItem;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33D3BFD348BA1B2A43037217D72EF484B5BE540D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m010974C04F22D47110DCD77005CA026F7EA2F7B7_RuntimeMethod_var)));
	}

IL_0046:
	{
		int32_t L_7 = ___2_index;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7402FA6F316888185F5F063979A07622A0A91A5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m010974C04F22D47110DCD77005CA026F7EA2F7B7_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_9 = ___0_action;
		NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B(__this, L_9, (RuntimeObject*)NULL, (-1), NULL);
		return;
	}

IL_0064:
	{
		int32_t L_10 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		RuntimeObject* L_13 = ___1_changedItem;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		int32_t L_14 = ___2_index;
		NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m91061D13938039EF55D33DE5150DCB9786E28B21(__this, L_10, (RuntimeObject*)L_12, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m94EF19F0CEA17A580708E067B4553B8683DE70DE (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_changedItems, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___0_action;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = ___0_action;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral556AC0B24A2AF1A340D62991486F553DFCE845AC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m94EF19F0CEA17A580708E067B4553B8683DE70DE_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_4 = ___0_action;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_5 = ___1_changedItems;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33D3BFD348BA1B2A43037217D72EF484B5BE540D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m94EF19F0CEA17A580708E067B4553B8683DE70DE_RuntimeMethod_var)));
	}

IL_0046:
	{
		int32_t L_7 = ___0_action;
		NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B(__this, L_7, (RuntimeObject*)NULL, (-1), NULL);
		return;
	}

IL_0050:
	{
		RuntimeObject* L_8 = ___1_changedItems;
		if (L_8)
		{
			goto IL_005e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4968672ECEECF5A6B270993641EFC5B884A56AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m94EF19F0CEA17A580708E067B4553B8683DE70DE_RuntimeMethod_var)));
	}

IL_005e:
	{
		int32_t L_10 = ___0_action;
		RuntimeObject* L_11 = ___1_changedItems;
		NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m91061D13938039EF55D33DE5150DCB9786E28B21(__this, L_10, L_11, (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m839DE4731C24001AE7820BFE9F7B56DC05CE1CD3 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItem, RuntimeObject* ___2_oldItem, int32_t ___3_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = 2;
		RuntimeObject* L_2 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedAction_tA580EA64F38D1FB2B1470FDD8266E5F32666D9FF_il2cpp_TypeInfo_var)), &L_1);
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3077B1DBC1670A4AD79D7F238CABD9D63683ECF9)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m839DE4731C24001AE7820BFE9F7B56DC05CE1CD3_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_5 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		RuntimeObject* L_8 = ___1_newItem;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		RuntimeObject* L_11 = ___2_oldItem;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		int32_t L_12 = ___3_index;
		int32_t L_13 = ___3_index;
		NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_mA18855C84984DAF7952B26047F9C37C52CC00BF8(__this, L_5, (RuntimeObject*)L_7, (RuntimeObject*)L_10, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_mBFD6D3F3F7E50F8D7E6B6C005DC983BD8F4FEB0D (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItems, RuntimeObject* ___2_oldItems, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = 2;
		RuntimeObject* L_2 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedAction_tA580EA64F38D1FB2B1470FDD8266E5F32666D9FF_il2cpp_TypeInfo_var)), &L_1);
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3077B1DBC1670A4AD79D7F238CABD9D63683ECF9)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_mBFD6D3F3F7E50F8D7E6B6C005DC983BD8F4FEB0D_RuntimeMethod_var)));
	}

IL_0033:
	{
		RuntimeObject* L_5 = ___1_newItems;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74ADAFFFEA0873318DEE194E1C238D984D1EA8B8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_mBFD6D3F3F7E50F8D7E6B6C005DC983BD8F4FEB0D_RuntimeMethod_var)));
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___2_oldItems;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F48C4E423A99B63DF6FEA241F4A52091B94195D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_mBFD6D3F3F7E50F8D7E6B6C005DC983BD8F4FEB0D_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_9 = ___0_action;
		RuntimeObject* L_10 = ___1_newItems;
		RuntimeObject* L_11 = ___2_oldItems;
		NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_mA18855C84984DAF7952B26047F9C37C52CC00BF8(__this, L_9, L_10, L_11, (-1), (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m4C36BCE7D7E31A5A659E5770024C202216EB36AE (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_changedItem, int32_t ___2_index, int32_t ___3_oldIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		__this->____newStartingIndex = (-1);
		__this->____oldStartingIndex = (-1);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		int32_t L_0 = ___0_action;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = 3;
		RuntimeObject* L_2 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedAction_tA580EA64F38D1FB2B1470FDD8266E5F32666D9FF_il2cpp_TypeInfo_var)), &L_1);
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3077B1DBC1670A4AD79D7F238CABD9D63683ECF9)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m4C36BCE7D7E31A5A659E5770024C202216EB36AE_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_5 = ___2_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6D46CAED62BB807F974C4EB2AC0FA0A5F8B5F38)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotifyCollectionChangedEventArgs__ctor_m4C36BCE7D7E31A5A659E5770024C202216EB36AE_RuntimeMethod_var)));
	}

IL_0047:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		RuntimeObject* L_9 = ___1_changedItem;
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		V_0 = L_8;
		int32_t L_10 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		int32_t L_13 = ___2_index;
		int32_t L_14 = ___3_oldIndex;
		NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_mA18855C84984DAF7952B26047F9C37C52CC00BF8(__this, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_12, L_13, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeAddOrRemove_m91061D13938039EF55D33DE5150DCB9786E28B21 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_changedItems, int32_t ___2_startingIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_action;
		RuntimeObject* L_2 = ___1_changedItems;
		int32_t L_3 = ___2_startingIndex;
		NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B(__this, L_1, L_2, L_3, NULL);
		return;
	}

IL_000d:
	{
		int32_t L_4 = ___0_action;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = ___0_action;
		RuntimeObject* L_6 = ___1_changedItems;
		int32_t L_7 = ___2_startingIndex;
		NotifyCollectionChangedEventArgs_InitializeRemove_m61F5E3739B3F364E3300414333D585C8510222F2(__this, L_5, L_6, L_7, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItems, int32_t ___2_newStartingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B2_0 = NULL;
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B1_0 = NULL;
	ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* G_B3_0 = NULL;
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B3_1 = NULL;
	{
		int32_t L_0 = ___0_action;
		__this->____action = L_0;
		RuntimeObject* L_1 = ___1_newItems;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_newItems;
		ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* L_3 = (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26*)il2cpp_codegen_object_new(ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26_il2cpp_TypeInfo_var);
		ReadOnlyList__ctor_mEFFA6FCD2CFC5CE8EFD6E0E96153D1E6A96BF039(L_3, L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = ((ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->____newItems = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____newItems), (void*)G_B3_0);
		int32_t L_4 = ___2_newStartingIndex;
		__this->____newStartingIndex = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeRemove_m61F5E3739B3F364E3300414333D585C8510222F2 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_oldItems, int32_t ___2_oldStartingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B2_0 = NULL;
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B1_0 = NULL;
	ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* G_B3_0 = NULL;
	NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* G_B3_1 = NULL;
	{
		int32_t L_0 = ___0_action;
		__this->____action = L_0;
		RuntimeObject* L_1 = ___1_oldItems;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
		G_B1_0 = __this;
	}
	{
		RuntimeObject* L_2 = ___1_oldItems;
		ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* L_3 = (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26*)il2cpp_codegen_object_new(ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26_il2cpp_TypeInfo_var);
		ReadOnlyList__ctor_mEFFA6FCD2CFC5CE8EFD6E0E96153D1E6A96BF039(L_3, L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = ((ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->____oldItems = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____oldItems), (void*)G_B3_0);
		int32_t L_4 = ___2_oldStartingIndex;
		__this->____oldStartingIndex = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_InitializeMoveOrReplace_mA18855C84984DAF7952B26047F9C37C52CC00BF8 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, int32_t ___0_action, RuntimeObject* ___1_newItems, RuntimeObject* ___2_oldItems, int32_t ___3_startingIndex, int32_t ___4_oldStartingIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_action;
		RuntimeObject* L_1 = ___1_newItems;
		int32_t L_2 = ___3_startingIndex;
		NotifyCollectionChangedEventArgs_InitializeAdd_m1AC9FACD6220A738DA66A449564DD5E363DB845B(__this, L_0, L_1, L_2, NULL);
		int32_t L_3 = ___0_action;
		RuntimeObject* L_4 = ___2_oldItems;
		int32_t L_5 = ___4_oldStartingIndex;
		NotifyCollectionChangedEventArgs_InitializeRemove_m61F5E3739B3F364E3300414333D585C8510222F2(__this, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_Action_m45A25E02C58C0AEACB21DE61DBA9C8BADC2D86AA (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____action;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_NewItems_m4AABDF9BB8BB6C3183707CEFE675DFFDD7EF3955 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____newItems;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_OldItems_m1525FC123B7B96A350E8C69956E4200CD5524580 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____oldItems;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_NewStartingIndex_mAFF91323BCDAFC21C1060A62F6852628DE08A1B7 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____newStartingIndex;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_OldStartingIndex_m9BE6A1555B0316B4727DFC9B74225F10FCCAC807 (NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____oldStartingIndex;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_Multicast(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* currentDelegate = reinterpret_cast<NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenInst(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenStatic(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenVirtual(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	VirtualActionInvoker1< NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenInterface(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenGenericVirtual(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* >::Invoke(method, ___0_sender, ___1_e);
}
void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenGenericInterface(NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* >::Invoke(method, ___0_sender, ___1_e);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventHandler__ctor_m4DAF76BAC5E44532E6E784CD15A0C4493156E05D (NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventHandler_Invoke_m8DED5705E365E59E2F6BDCBC6D6D762DA1ECA194 (NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* __this, RuntimeObject* ___0_sender, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, NotifyCollectionChangedEventArgs_tFF32515F3E2B116CAB376B5B57C6A8CB617351FA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList__ctor_mEFFA6FCD2CFC5CE8EFD6E0E96153D1E6A96BF039 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		__this->____list = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_get_Count_m21C57F4781DD2FBC6E47B2F9F8EF56797210B9E3 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_get_IsReadOnly_m7E366BA830F46F8D69533A520239533E1A5AC2D8 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_get_IsFixedSize_m4D51649CF764A59C584C34CB1BB6105DF817672B (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_get_Item_m5B19E8CFDD199FE65179EB0441A32E6DBEB3A13E (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_set_Item_mFE533AA6D5F8EDD51D96F8035A7B70F0AA859270 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_set_Item_mFE533AA6D5F8EDD51D96F8035A7B70F0AA859270_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_get_SyncRoot_mFF7F6D135C816AC7B1504A159FA83C0BD55D801A (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_Add_mC5EA9EFF5D26B7606728991FFC6E88DD03999863 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_Add_mC5EA9EFF5D26B7606728991FFC6E88DD03999863_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_Clear_m0C567FCFAAB790EE982D46DB8B87BFD847698E01 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_Clear_m0C567FCFAAB790EE982D46DB8B87BFD847698E01_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_Contains_mAC8062A6604D1FA617721F8D0065C0D04D98FDCA (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		RuntimeObject* L_1 = ___0_value;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_CopyTo_mC0A9938C10677E20420A7D9CB8493E1B3614E294 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_GetEnumerator_mED6C8E2999D5218BF737568166C8C551B17B05DE (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_IndexOf_mC750BF222AD5888F83E191F8DD1A2FD4CC9CFE9E (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list;
		RuntimeObject* L_1 = ___0_value;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_Insert_m29B0C734BD6BAFBD53E7395772E45B0A2AF8CFCE (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_Insert_m29B0C734BD6BAFBD53E7395772E45B0A2AF8CFCE_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_Remove_m8D76E55846BE4BCA1013598F8142EF229FE4CE9C (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_Remove_m8D76E55846BE4BCA1013598F8142EF229FE4CE9C_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_RemoveAt_m1026337FA651B838D9D32A821603ABD528610F43 (ReadOnlyList_t80196709F8B06337A4F30A6D703DA44901C6BD26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyList_RemoveAt_m1026337FA651B838D9D32A821603ABD528610F43_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSerializerBaseTypeNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
