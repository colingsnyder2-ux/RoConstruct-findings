// roc 2010-06 008dd3a0  unit: Ogre::RbxMaterialAdapter  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008dd3a0
//
// 008dd3a0  51                   push ecx
// 008dd3a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008dd3a5  56                   push esi
// 008dd3a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 008dd3aa  57                   push edi
// 008dd3ab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008dd3af  c644240800           mov byte ptr [esp + 8], 0
// 008dd3b4  8b442408             mov eax, dword ptr [esp + 8]
// 008dd3b8  50                   push eax
// 008dd3b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd3bd  52                   push edx
// 008dd3be  83c108               add ecx, 8
// 008dd3c1  51                   push ecx
// 008dd3c2  50                   push eax
// 008dd3c3  56                   push esi
// 008dd3c4  57                   push edi
// 008dd3c5  e8e6f5ffff           call 0x8dc9b0
// 008dd3ca  8bce                 mov ecx, esi
// 008dd3cc  83c418               add esp, 0x18
// 008dd3cf  c1e104               shl ecx, 4
// 008dd3d2  03ce                 add ecx, esi
// 008dd3d4  8d048f               lea eax, [edi + ecx*4]
// 008dd3d7  5f                   pop edi
// 008dd3d8  5e                   pop esi
// 008dd3d9  59                   pop ecx
// 008dd3da  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
