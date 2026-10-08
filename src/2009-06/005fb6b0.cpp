// roc 2009-06 005fb6b0  unit: RBX::DataModel  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fb6b0
//
// 005fb6b0  6aff                 push -1
// 005fb6b2  68f8658600           push 0x8665f8
// 005fb6b7  64a100000000         mov eax, dword ptr fs:[0]
// 005fb6bd  50                   push eax
// 005fb6be  64892500000000       mov dword ptr fs:[0], esp
// 005fb6c5  83ec08               sub esp, 8
// 005fb6c8  56                   push esi
// 005fb6c9  8bf1                 mov esi, ecx
// 005fb6cb  89742404             mov dword ptr [esp + 4], esi
// 005fb6cf  83ec1c               sub esp, 0x1c
// 005fb6d2  8d442438             lea eax, [esp + 0x38]
// 005fb6d6  89642424             mov dword ptr [esp + 0x24], esp
// 005fb6da  8bcc                 mov ecx, esp
// 005fb6dc  50                   push eax
// 005fb6dd  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005fb6e5  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fb6eb  8bce                 mov ecx, esi
// 005fb6ed  e81e69e2ff           call 0x422010
// 005fb6f2  8d542438             lea edx, [esp + 0x38]
// 005fb6f6  8d4e1c               lea ecx, [esi + 0x1c]
// 005fb6f9  52                   push edx
// 005fb6fa  c644241802           mov byte ptr [esp + 0x18], 2
// 005fb6ff  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fb705  8d4c241c             lea ecx, [esp + 0x1c]
// 005fb709  c644241400           mov byte ptr [esp + 0x14], 0
// 005fb70e  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fb714  8d4c2438             lea ecx, [esp + 0x38]
// 005fb718  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fb720  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fb726  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fb72a  8bc6                 mov eax, esi
// 005fb72c  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb733  5e                   pop esi
// 005fb734  83c414               add esp, 0x14
// 005fb737  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
