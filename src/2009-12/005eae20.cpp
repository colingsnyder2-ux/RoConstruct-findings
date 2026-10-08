// roc 2009-12 005eae20  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eae20
//
// 005eae20  64a100000000         mov eax, dword ptr fs:[0]
// 005eae26  6aff                 push -1
// 005eae28  680eec9300           push 0x93ec0e
// 005eae2d  50                   push eax
// 005eae2e  64892500000000       mov dword ptr fs:[0], esp
// 005eae35  e886faffff           call 0x5ea8c0
// 005eae3a  b801000000           mov eax, 1
// 005eae3f  8405e03db800         test byte ptr [0xb83de0], al
// 005eae45  752b                 jne 0x5eae72
// 005eae47  0905e03db800         or dword ptr [0xb83de0], eax
// 005eae4d  687031b800           push 0xb83170
// 005eae52  b9c43db800           mov ecx, 0xb83dc4
// 005eae57  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eae5f  ff15f4b69800         call dword ptr [0x98b6f4]
// 005eae65  68b00e9800           push 0x980eb0
// 005eae6a  e8ba9a2000           call 0x7f4929
// 005eae6f  83c404               add esp, 4
// 005eae72  8b0c24               mov ecx, dword ptr [esp]
// 005eae75  b8c43db800           mov eax, 0xb83dc4
// 005eae7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae81  83c40c               add esp, 0xc
// 005eae84  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
