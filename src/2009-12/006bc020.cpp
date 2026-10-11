// roc 2009-12 006bc020  unit: RBX::Decal  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bc020
//
// 006bc020  83ec14               sub esp, 0x14
// 006bc023  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006bc027  8b08                 mov ecx, dword ptr [eax]
// 006bc029  56                   push esi
// 006bc02a  51                   push ecx
// 006bc02b  6844069c00           push 0x9c0644
// 006bc030  8d542410             lea edx, [esp + 0x10]
// 006bc034  6a10                 push 0x10
// 006bc036  52                   push edx
// 006bc037  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006bc03f  ff1538b89800         call dword ptr [0x98b838]
// 006bc045  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006bc049  83c410               add esp, 0x10
// 006bc04c  8d442408             lea eax, [esp + 8]
// 006bc050  50                   push eax
// 006bc051  8bce                 mov ecx, esi
// 006bc053  ff15f4b69800         call dword ptr [0x98b6f4]
// 006bc059  8bc6                 mov eax, esi
// 006bc05b  5e                   pop esi
// 006bc05c  83c414               add esp, 0x14
// 006bc05f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
