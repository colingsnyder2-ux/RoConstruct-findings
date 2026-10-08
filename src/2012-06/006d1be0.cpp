// roc 2012-06 006d1be0  unit: std::D::DU?$char_traits::?$basic_altstringbuf  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d1be0
//
// 006d1be0  6aff                 push -1
// 006d1be2  6878aeab00           push 0xabae78
// 006d1be7  64a100000000         mov eax, dword ptr fs:[0]
// 006d1bed  50                   push eax
// 006d1bee  64892500000000       mov dword ptr fs:[0], esp
// 006d1bf5  83ec08               sub esp, 8
// 006d1bf8  56                   push esi
// 006d1bf9  8bf1                 mov esi, ecx
// 006d1bfb  89742404             mov dword ptr [esp + 4], esi
// 006d1bff  83ec1c               sub esp, 0x1c
// 006d1c02  8d442438             lea eax, [esp + 0x38]
// 006d1c06  89642424             mov dword ptr [esp + 0x24], esp
// 006d1c0a  8bcc                 mov ecx, esp
// 006d1c0c  50                   push eax
// 006d1c0d  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006d1c15  ff154426b200         call dword ptr [0xb22644]
// 006d1c1b  8bce                 mov ecx, esi
// 006d1c1d  e86eefd5ff           call 0x430b90
// 006d1c22  8d542438             lea edx, [esp + 0x38]
// 006d1c26  8d4e1c               lea ecx, [esi + 0x1c]
// 006d1c29  52                   push edx
// 006d1c2a  c644241802           mov byte ptr [esp + 0x18], 2
// 006d1c2f  ff154426b200         call dword ptr [0xb22644]
// 006d1c35  8d4c241c             lea ecx, [esp + 0x1c]
// 006d1c39  c644241400           mov byte ptr [esp + 0x14], 0
// 006d1c3e  ff153c26b200         call dword ptr [0xb2263c]
// 006d1c44  8d4c2438             lea ecx, [esp + 0x38]
// 006d1c48  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d1c50  ff153c26b200         call dword ptr [0xb2263c]
// 006d1c56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d1c5a  8bc6                 mov eax, esi
// 006d1c5c  64890d00000000       mov dword ptr fs:[0], ecx
// 006d1c63  5e                   pop esi
// 006d1c64  83c414               add esp, 0x14
// 006d1c67  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
