// roc 2012-06 004fa410  unit: Ogre::UTVertexTangent3DTex::?$SpecializedMeshGen  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fa410
//
// 004fa410  51                   push ecx
// 004fa411  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fa415  56                   push esi
// 004fa416  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fa41a  57                   push edi
// 004fa41b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fa41f  c644240800           mov byte ptr [esp + 8], 0
// 004fa424  8b442408             mov eax, dword ptr [esp + 8]
// 004fa428  50                   push eax
// 004fa429  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fa42d  52                   push edx
// 004fa42e  51                   push ecx
// 004fa42f  50                   push eax
// 004fa430  56                   push esi
// 004fa431  57                   push edi
// 004fa432  e879feffff           call 0x4fa2b0
// 004fa437  8bce                 mov ecx, esi
// 004fa439  83c418               add esp, 0x18
// 004fa43c  c1e104               shl ecx, 4
// 004fa43f  2bce                 sub ecx, esi
// 004fa441  8d048f               lea eax, [edi + ecx*4]
// 004fa444  5f                   pop edi
// 004fa445  5e                   pop esi
// 004fa446  59                   pop ecx
// 004fa447  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
