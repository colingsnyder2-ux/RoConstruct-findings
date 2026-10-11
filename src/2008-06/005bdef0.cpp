// roc 2008-06 005bdef0  unit: RBX::Soundscape::SoundService  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bdef0
//
// 005bdef0  83ec14               sub esp, 0x14
// 005bdef3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bdef7  8b08                 mov ecx, dword ptr [eax]
// 005bdef9  56                   push esi
// 005bdefa  51                   push ecx
// 005bdefb  68d0358100           push 0x8135d0
// 005bdf00  8d542410             lea edx, [esp + 0x10]
// 005bdf04  6a10                 push 0x10
// 005bdf06  52                   push edx
// 005bdf07  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bdf0f  ff15b4278000         call dword ptr [0x8027b4]
// 005bdf15  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005bdf19  83c410               add esp, 0x10
// 005bdf1c  8d442408             lea eax, [esp + 8]
// 005bdf20  50                   push eax
// 005bdf21  8bce                 mov ecx, esi
// 005bdf23  ff1558248000         call dword ptr [0x802458]
// 005bdf29  8bc6                 mov eax, esi
// 005bdf2b  5e                   pop esi
// 005bdf2c  83c414               add esp, 0x14
// 005bdf2f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@H@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
