// roc 2009-12 0063f1e0  unit: std::runtime_error  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063f1e0
//
// 0063f1e0  6aff                 push -1
// 0063f1e2  6828429400           push 0x944228
// 0063f1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0063f1ed  50                   push eax
// 0063f1ee  64892500000000       mov dword ptr fs:[0], esp
// 0063f1f5  83ec08               sub esp, 8
// 0063f1f8  56                   push esi
// 0063f1f9  8bf1                 mov esi, ecx
// 0063f1fb  89742404             mov dword ptr [esp + 4], esi
// 0063f1ff  83ec1c               sub esp, 0x1c
// 0063f202  8d442438             lea eax, [esp + 0x38]
// 0063f206  89642424             mov dword ptr [esp + 0x24], esp
// 0063f20a  8bcc                 mov ecx, esp
// 0063f20c  50                   push eax
// 0063f20d  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0063f215  ff15f0b69800         call dword ptr [0x98b6f0]
// 0063f21b  8bce                 mov ecx, esi
// 0063f21d  e8ee39deff           call 0x422c10
// 0063f222  8d542438             lea edx, [esp + 0x38]
// 0063f226  8d4e1c               lea ecx, [esi + 0x1c]
// 0063f229  52                   push edx
// 0063f22a  c644241802           mov byte ptr [esp + 0x18], 2
// 0063f22f  ff15f0b69800         call dword ptr [0x98b6f0]
// 0063f235  8d4c241c             lea ecx, [esp + 0x1c]
// 0063f239  c644241400           mov byte ptr [esp + 0x14], 0
// 0063f23e  ff15e4b69800         call dword ptr [0x98b6e4]
// 0063f244  8d4c2438             lea ecx, [esp + 0x38]
// 0063f248  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0063f250  ff15e4b69800         call dword ptr [0x98b6e4]
// 0063f256  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063f25a  8bc6                 mov eax, esi
// 0063f25c  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f263  5e                   pop esi
// 0063f264  83c414               add esp, 0x14
// 0063f267  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
