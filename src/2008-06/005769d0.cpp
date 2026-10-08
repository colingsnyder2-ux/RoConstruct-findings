// roc 2008-06 005769d0  unit: RBX::DataModel  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005769d0
//
// 005769d0  6aff                 push -1
// 005769d2  6818067d00           push 0x7d0618
// 005769d7  64a100000000         mov eax, dword ptr fs:[0]
// 005769dd  50                   push eax
// 005769de  64892500000000       mov dword ptr fs:[0], esp
// 005769e5  83ec08               sub esp, 8
// 005769e8  56                   push esi
// 005769e9  8bf1                 mov esi, ecx
// 005769eb  83ec1c               sub esp, 0x1c
// 005769ee  8d442454             lea eax, [esp + 0x54]
// 005769f2  89642420             mov dword ptr [esp + 0x20], esp
// 005769f6  8bcc                 mov ecx, esp
// 005769f8  50                   push eax
// 005769f9  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00576a01  ff155c248000         call dword ptr [0x80245c]
// 00576a07  83ec1c               sub esp, 0x1c
// 00576a0a  8d542454             lea edx, [esp + 0x54]
// 00576a0e  89642440             mov dword ptr [esp + 0x40], esp
// 00576a12  8bcc                 mov ecx, esp
// 00576a14  52                   push edx
// 00576a15  c644245002           mov byte ptr [esp + 0x50], 2
// 00576a1a  ff155c248000         call dword ptr [0x80245c]
// 00576a20  8bce                 mov ecx, esi
// 00576a22  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00576a27  e844fbffff           call 0x576570
// 00576a2c  8d4c241c             lea ecx, [esp + 0x1c]
// 00576a30  c644241400           mov byte ptr [esp + 0x14], 0
// 00576a35  ff1568248000         call dword ptr [0x802468]
// 00576a3b  8d4c2438             lea ecx, [esp + 0x38]
// 00576a3f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00576a47  ff1568248000         call dword ptr [0x802468]
// 00576a4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00576a51  8bc6                 mov eax, esi
// 00576a53  64890d00000000       mov dword ptr fs:[0], ecx
// 00576a5a  5e                   pop esi
// 00576a5b  83c414               add esp, 0x14
// 00576a5e  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
