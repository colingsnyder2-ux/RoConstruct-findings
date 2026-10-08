// from server: 100% by auto
// roc 2007-08 005b9100  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9100
//
// 005b9100  8b542408             mov edx, dword ptr [esp + 8]
// 005b9104  8bc1                 mov eax, ecx
// 005b9106  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b910a  8908                 mov dword ptr [eax], ecx
// 005b910c  895004               mov dword ptr [eax + 4], edx
// 005b910f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0?$_Revranit@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$iterator@Urandom_access_iterator_tag@std@@DHPADAAD@2@@std@@QAE@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
