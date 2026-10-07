// roc 2010-06 008f6850  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008f6850
//
// 008f6850  51                   push ecx
// 008f6851  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f6855  56                   push esi
// 008f6856  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f685a  57                   push edi
// 008f685b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f685f  c644240800           mov byte ptr [esp + 8], 0
// 008f6864  8b442408             mov eax, dword ptr [esp + 8]
// 008f6868  50                   push eax
// 008f6869  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f686d  52                   push edx
// 008f686e  83c108               add ecx, 8
// 008f6871  51                   push ecx
// 008f6872  50                   push eax
// 008f6873  56                   push esi
// 008f6874  57                   push edi
// 008f6875  e886ecffff           call 0x8f5500
// 008f687a  8bce                 mov ecx, esi
// 008f687c  83c418               add esp, 0x18
// 008f687f  c1e104               shl ecx, 4
// 008f6882  03ce                 add ecx, esi
// 008f6884  8d048f               lea eax, [edi + ecx*4]
// 008f6887  5f                   pop edi
// 008f6888  5e                   pop esi
// 008f6889  59                   pop ecx
// 008f688a  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
