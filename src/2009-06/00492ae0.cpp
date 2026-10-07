// roc 2009-06 00492ae0  unit: Ogre::RbxMaterialAdapter  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00492ae0
//
// 00492ae0  51                   push ecx
// 00492ae1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00492ae5  56                   push esi
// 00492ae6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00492aea  57                   push edi
// 00492aeb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00492aef  c644240800           mov byte ptr [esp + 8], 0
// 00492af4  8b442408             mov eax, dword ptr [esp + 8]
// 00492af8  50                   push eax
// 00492af9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00492afd  52                   push edx
// 00492afe  83c108               add ecx, 8
// 00492b01  51                   push ecx
// 00492b02  50                   push eax
// 00492b03  56                   push esi
// 00492b04  57                   push edi
// 00492b05  e836fdffff           call 0x492840
// 00492b0a  8bce                 mov ecx, esi
// 00492b0c  83c418               add esp, 0x18
// 00492b0f  c1e104               shl ecx, 4
// 00492b12  03ce                 add ecx, esi
// 00492b14  8d048f               lea eax, [edi + ecx*4]
// 00492b17  5f                   pop edi
// 00492b18  5e                   pop esi
// 00492b19  59                   pop ecx
// 00492b1a  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
