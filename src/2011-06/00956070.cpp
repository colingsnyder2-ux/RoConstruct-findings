// from server: 100% by auto
// roc 2011-06 00956070  unit: Ogre::UTVertexTangent3DTexSurfaceTex::?$SpecializedMeshGen  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00956070
//
// 00956070  51                   push ecx
// 00956071  8b542410             mov edx, dword ptr [esp + 0x10]
// 00956075  56                   push esi
// 00956076  8b742410             mov esi, dword ptr [esp + 0x10]
// 0095607a  57                   push edi
// 0095607b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0095607f  c644240800           mov byte ptr [esp + 8], 0
// 00956084  8b442408             mov eax, dword ptr [esp + 8]
// 00956088  50                   push eax
// 00956089  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0095608d  52                   push edx
// 0095608e  51                   push ecx
// 0095608f  50                   push eax
// 00956090  56                   push esi
// 00956091  57                   push edi
// 00956092  e839feffff           call 0x955ed0
// 00956097  8bce                 mov ecx, esi
// 00956099  83c418               add esp, 0x18
// 0095609c  c1e104               shl ecx, 4
// 0095609f  03ce                 add ecx, esi
// 009560a1  8d048f               lea eax, [edi + ecx*4]
// 009560a4  5f                   pop edi
// 009560a5  5e                   pop esi
// 009560a6  59                   pop ecx
// 009560a7  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
