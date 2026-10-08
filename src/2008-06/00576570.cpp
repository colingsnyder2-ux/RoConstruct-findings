// roc 2008-06 00576570  unit: RBX::DataModel  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576570
//
// 00576570  6aff                 push -1
// 00576572  6818067d00           push 0x7d0618
// 00576577  64a100000000         mov eax, dword ptr fs:[0]
// 0057657d  50                   push eax
// 0057657e  64892500000000       mov dword ptr fs:[0], esp
// 00576585  83ec08               sub esp, 8
// 00576588  56                   push esi
// 00576589  8bf1                 mov esi, ecx
// 0057658b  89742404             mov dword ptr [esp + 4], esi
// 0057658f  83ec1c               sub esp, 0x1c
// 00576592  8d442438             lea eax, [esp + 0x38]
// 00576596  89642424             mov dword ptr [esp + 0x24], esp
// 0057659a  8bcc                 mov ecx, esp
// 0057659c  50                   push eax
// 0057659d  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005765a5  ff155c248000         call dword ptr [0x80245c]
// 005765ab  8bce                 mov ecx, esi
// 005765ad  e8fe0debff           call 0x4273b0
// 005765b2  8d542438             lea edx, [esp + 0x38]
// 005765b6  8d4e1c               lea ecx, [esi + 0x1c]
// 005765b9  52                   push edx
// 005765ba  c644241802           mov byte ptr [esp + 0x18], 2
// 005765bf  ff155c248000         call dword ptr [0x80245c]
// 005765c5  8d4c241c             lea ecx, [esp + 0x1c]
// 005765c9  c644241400           mov byte ptr [esp + 0x14], 0
// 005765ce  ff1568248000         call dword ptr [0x802468]
// 005765d4  8d4c2438             lea ecx, [esp + 0x38]
// 005765d8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005765e0  ff1568248000         call dword ptr [0x802468]
// 005765e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005765ea  8bc6                 mov eax, esi
// 005765ec  64890d00000000       mov dword ptr fs:[0], ecx
// 005765f3  5e                   pop esi
// 005765f4  83c414               add esp, 0x14
// 005765f7  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
