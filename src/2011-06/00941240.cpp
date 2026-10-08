// from server: 100% by auto
// roc 2011-06 00941240  unit: Ogre::RbxMaterialAdapter  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00941240
//
// 00941240  51                   push ecx
// 00941241  8b542410             mov edx, dword ptr [esp + 0x10]
// 00941245  56                   push esi
// 00941246  8b742410             mov esi, dword ptr [esp + 0x10]
// 0094124a  57                   push edi
// 0094124b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0094124f  c644240800           mov byte ptr [esp + 8], 0
// 00941254  8b442408             mov eax, dword ptr [esp + 8]
// 00941258  50                   push eax
// 00941259  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0094125d  52                   push edx
// 0094125e  51                   push ecx
// 0094125f  50                   push eax
// 00941260  56                   push esi
// 00941261  57                   push edi
// 00941262  e89923d9ff           call 0x6d3600
// 00941267  8d0c76               lea ecx, [esi + esi*2]
// 0094126a  83c418               add esp, 0x18
// 0094126d  8d048f               lea eax, [edi + ecx*4]
// 00941270  5f                   pop edi
// 00941271  5e                   pop esi
// 00941272  59                   pop ecx
// 00941273  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
