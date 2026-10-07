// roc 2011-06 00954e60  unit: Ogre::UTVertexTangent3DTex::?$SpecializedMeshGen  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00954e60
//
// 00954e60  51                   push ecx
// 00954e61  8b542410             mov edx, dword ptr [esp + 0x10]
// 00954e65  56                   push esi
// 00954e66  8b742410             mov esi, dword ptr [esp + 0x10]
// 00954e6a  57                   push edi
// 00954e6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00954e6f  c644240800           mov byte ptr [esp + 8], 0
// 00954e74  8b442408             mov eax, dword ptr [esp + 8]
// 00954e78  50                   push eax
// 00954e79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00954e7d  52                   push edx
// 00954e7e  51                   push ecx
// 00954e7f  50                   push eax
// 00954e80  56                   push esi
// 00954e81  57                   push edi
// 00954e82  e879feffff           call 0x954d00
// 00954e87  8bce                 mov ecx, esi
// 00954e89  83c418               add esp, 0x18
// 00954e8c  c1e104               shl ecx, 4
// 00954e8f  2bce                 sub ecx, esi
// 00954e91  8d048f               lea eax, [edi + ecx*4]
// 00954e94  5f                   pop edi
// 00954e95  5e                   pop esi
// 00954e96  59                   pop ecx
// 00954e97  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
