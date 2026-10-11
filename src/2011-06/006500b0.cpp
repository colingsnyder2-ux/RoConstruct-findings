// roc 2011-06 006500b0  unit: RBX::DropperTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006500b0
//
// 006500b0  83ec14               sub esp, 0x14
// 006500b3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006500b7  8b08                 mov ecx, dword ptr [eax]
// 006500b9  56                   push esi
// 006500ba  51                   push ecx
// 006500bb  681c91a600           push 0xa6911c
// 006500c0  8d542410             lea edx, [esp + 0x10]
// 006500c4  6a10                 push 0x10
// 006500c6  52                   push edx
// 006500c7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006500cf  ff15b809a400         call dword ptr [0xa409b8]
// 006500d5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006500d9  83c410               add esp, 0x10
// 006500dc  8d442408             lea eax, [esp + 8]
// 006500e0  50                   push eax
// 006500e1  8bce                 mov ecx, esi
// 006500e3  ff15c404a400         call dword ptr [0xa404c4]
// 006500e9  8bc6                 mov eax, esi
// 006500eb  5e                   pop esi
// 006500ec  83c414               add esp, 0x14
// 006500ef  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
