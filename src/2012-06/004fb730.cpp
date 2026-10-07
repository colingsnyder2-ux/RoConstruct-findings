// roc 2012-06 004fb730  unit: Ogre::UTVertexTangent3DTexSurfaceTex::?$SpecializedMeshGen  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fb730
//
// 004fb730  51                   push ecx
// 004fb731  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fb735  56                   push esi
// 004fb736  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fb73a  57                   push edi
// 004fb73b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fb73f  c644240800           mov byte ptr [esp + 8], 0
// 004fb744  8b442408             mov eax, dword ptr [esp + 8]
// 004fb748  50                   push eax
// 004fb749  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fb74d  52                   push edx
// 004fb74e  51                   push ecx
// 004fb74f  50                   push eax
// 004fb750  56                   push esi
// 004fb751  57                   push edi
// 004fb752  e839feffff           call 0x4fb590
// 004fb757  8bce                 mov ecx, esi
// 004fb759  83c418               add esp, 0x18
// 004fb75c  c1e104               shl ecx, 4
// 004fb75f  03ce                 add ecx, esi
// 004fb761  8d048f               lea eax, [edi + ecx*4]
// 004fb764  5f                   pop edi
// 004fb765  5e                   pop esi
// 004fb766  59                   pop ecx
// 004fb767  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
