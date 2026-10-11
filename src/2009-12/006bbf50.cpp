// roc 2009-12 006bbf50  unit: RBX::Decal  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bbf50
//
// 006bbf50  83ec14               sub esp, 0x14
// 006bbf53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006bbf57  8b08                 mov ecx, dword ptr [eax]
// 006bbf59  56                   push esi
// 006bbf5a  51                   push ecx
// 006bbf5b  68d4689a00           push 0x9a68d4
// 006bbf60  8d542410             lea edx, [esp + 0x10]
// 006bbf64  6a10                 push 0x10
// 006bbf66  52                   push edx
// 006bbf67  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006bbf6f  ff1538b89800         call dword ptr [0x98b838]
// 006bbf75  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006bbf79  83c410               add esp, 0x10
// 006bbf7c  8d442408             lea eax, [esp + 8]
// 006bbf80  50                   push eax
// 006bbf81  8bce                 mov ecx, esi
// 006bbf83  ff15f4b69800         call dword ptr [0x98b6f4]
// 006bbf89  8bc6                 mov eax, esi
// 006bbf8b  5e                   pop esi
// 006bbf8c  83c414               add esp, 0x14
// 006bbf8f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
