// from server: 100% by auto
// roc 2010-06 00795820  unit: PasteVerb  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795820
//
// 00795820  51                   push ecx
// 00795821  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00795825  56                   push esi
// 00795826  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079582a  8d442414             lea eax, [esp + 0x14]
// 0079582e  50                   push eax
// 0079582f  51                   push ecx
// 00795830  56                   push esi
// 00795831  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00795839  e8f2fdffff           call 0x795630
// 0079583e  83c40c               add esp, 0xc
// 00795841  8bc6                 mov eax, esi
// 00795843  5e                   pop esi
// 00795844  59                   pop ecx
// 00795845  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
