// roc 2009-06 0064b390  unit: RBX::DataModel  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b390
//
// 0064b390  83ec14               sub esp, 0x14
// 0064b393  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064b397  8b08                 mov ecx, dword ptr [eax]
// 0064b399  56                   push esi
// 0064b39a  51                   push ecx
// 0064b39b  68683b8b00           push 0x8b3b68
// 0064b3a0  8d542410             lea edx, [esp + 0x10]
// 0064b3a4  6a10                 push 0x10
// 0064b3a6  52                   push edx
// 0064b3a7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064b3af  ff15e0e88900         call dword ptr [0x89e8e0]
// 0064b3b5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064b3b9  83c410               add esp, 0x10
// 0064b3bc  8d442408             lea eax, [esp + 8]
// 0064b3c0  50                   push eax
// 0064b3c1  8bce                 mov ecx, esi
// 0064b3c3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064b3c9  8bc6                 mov eax, esi
// 0064b3cb  5e                   pop esi
// 0064b3cc  83c414               add esp, 0x14
// 0064b3cf  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
