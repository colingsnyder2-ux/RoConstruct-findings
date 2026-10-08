// roc 2010-06 005a1030  unit: std::runtime_error  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a1030
//
// 005a1030  6aff                 push -1
// 005a1032  68b8669900           push 0x9966b8
// 005a1037  64a100000000         mov eax, dword ptr fs:[0]
// 005a103d  50                   push eax
// 005a103e  64892500000000       mov dword ptr fs:[0], esp
// 005a1045  83ec08               sub esp, 8
// 005a1048  56                   push esi
// 005a1049  8bf1                 mov esi, ecx
// 005a104b  89742404             mov dword ptr [esp + 4], esi
// 005a104f  83ec1c               sub esp, 0x1c
// 005a1052  8d442438             lea eax, [esp + 0x38]
// 005a1056  89642424             mov dword ptr [esp + 0x24], esp
// 005a105a  8bcc                 mov ecx, esp
// 005a105c  50                   push eax
// 005a105d  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005a1065  ff150ca49e00         call dword ptr [0x9ea40c]
// 005a106b  8bce                 mov ecx, esi
// 005a106d  e8fe1fe8ff           call 0x423070
// 005a1072  8d542438             lea edx, [esp + 0x38]
// 005a1076  8d4e1c               lea ecx, [esi + 0x1c]
// 005a1079  52                   push edx
// 005a107a  c644241802           mov byte ptr [esp + 0x18], 2
// 005a107f  ff150ca49e00         call dword ptr [0x9ea40c]
// 005a1085  8d4c241c             lea ecx, [esp + 0x1c]
// 005a1089  c644241400           mov byte ptr [esp + 0x14], 0
// 005a108e  ff1500a49e00         call dword ptr [0x9ea400]
// 005a1094  8d4c2438             lea ecx, [esp + 0x38]
// 005a1098  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a10a0  ff1500a49e00         call dword ptr [0x9ea400]
// 005a10a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a10aa  8bc6                 mov eax, esi
// 005a10ac  64890d00000000       mov dword ptr fs:[0], ecx
// 005a10b3  5e                   pop esi
// 005a10b4  83c414               add esp, 0x14
// 005a10b7  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
