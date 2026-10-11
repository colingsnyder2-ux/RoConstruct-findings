// roc 2008-06 005bdf30  unit: RBX::Soundscape::SoundService  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bdf30
//
// 005bdf30  83ec14               sub esp, 0x14
// 005bdf33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bdf37  8b08                 mov ecx, dword ptr [eax]
// 005bdf39  56                   push esi
// 005bdf3a  51                   push ecx
// 005bdf3b  68146b8200           push 0x826b14
// 005bdf40  8d542410             lea edx, [esp + 0x10]
// 005bdf44  6a10                 push 0x10
// 005bdf46  52                   push edx
// 005bdf47  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bdf4f  ff15b4278000         call dword ptr [0x8027b4]
// 005bdf55  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005bdf59  83c410               add esp, 0x10
// 005bdf5c  8d442408             lea eax, [esp + 8]
// 005bdf60  50                   push eax
// 005bdf61  8bce                 mov ecx, esi
// 005bdf63  ff1558248000         call dword ptr [0x802458]
// 005bdf69  8bc6                 mov eax, esi
// 005bdf6b  5e                   pop esi
// 005bdf6c  83c414               add esp, 0x14
// 005bdf6f  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@I@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
