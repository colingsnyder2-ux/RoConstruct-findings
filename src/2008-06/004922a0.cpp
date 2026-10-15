// roc 2008-06 004922a0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004922a0
//
// 004922a0  6aff                 push -1
// 004922a2  68c8657c00           push 0x7c65c8
// 004922a7  64a100000000         mov eax, dword ptr fs:[0]
// 004922ad  50                   push eax
// 004922ae  64892500000000       mov dword ptr fs:[0], esp
// 004922b5  51                   push ecx
// 004922b6  56                   push esi
// 004922b7  83ec20               sub esp, 0x20
// 004922ba  8d44244c             lea eax, [esp + 0x4c]
// 004922be  89642424             mov dword ptr [esp + 0x24], esp
// 004922c2  8bcc                 mov ecx, esp
// 004922c4  50                   push eax
// 004922c5  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004922cd  e86eb1ffff           call 0x48d440
// 004922d2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004922d6  8b542440             mov edx, dword ptr [esp + 0x40]
// 004922da  51                   push ecx
// 004922db  52                   push edx
// 004922dc  e80ff0ffff           call 0x4912f0
// 004922e1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004922e5  8b742440             mov esi, dword ptr [esp + 0x40]
// 004922e9  890e                 mov dword ptr [esi], ecx
// 004922eb  83c428               add esp, 0x28
// 004922ee  8d4c242c             lea ecx, [esp + 0x2c]
// 004922f2  89442420             mov dword ptr [esp + 0x20], eax
// 004922f6  894604               mov dword ptr [esi + 4], eax
// 004922f9  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00492301  e89ab4ffff           call 0x48d7a0
// 00492306  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049230a  8bc6                 mov eax, esi
// 0049230c  64890d00000000       mov dword ptr fs:[0], ecx
// 00492313  5e                   pop esi
// 00492314  83c410               add esp, 0x10
// 00492317  c3                   ret 
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$find_if@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$is_any_ofF@D@detail@algorithm@boost@@@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@V10@0U?$is_any_ofF@D@detail@algorithm@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
