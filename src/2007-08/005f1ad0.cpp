// roc 2007-08 005f1ad0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1ad0
//
// 005f1ad0  6aff                 push -1
// 005f1ad2  68a8137500           push 0x7513a8
// 005f1ad7  64a100000000         mov eax, dword ptr fs:[0]
// 005f1add  50                   push eax
// 005f1ade  64892500000000       mov dword ptr fs:[0], esp
// 005f1ae5  51                   push ecx
// 005f1ae6  56                   push esi
// 005f1ae7  8bf1                 mov esi, ecx
// 005f1ae9  89742404             mov dword ptr [esp + 4], esi
// 005f1aed  33c9                 xor ecx, ecx
// 005f1aef  3bf1                 cmp esi, ecx
// 005f1af1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1af5  7403                 je 0x5f1afa
// 005f1af7  8d4e08               lea ecx, [esi + 8]
// 005f1afa  e8f1661300           call 0x7281f0
// 005f1aff  8bce                 mov ecx, esi
// 005f1b01  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005f1b09  e85208eaff           call 0x492360
// 005f1b0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1b12  5e                   pop esi
// 005f1b13  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1b1a  83c410               add esp, 0x10
// 005f1b1d  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ??1?$signal1@X_NU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AX_N@ZV?$allocator@X@std@@@2@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
