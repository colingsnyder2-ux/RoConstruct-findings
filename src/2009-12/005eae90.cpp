// roc 2009-12 005eae90  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eae90
//
// 005eae90  64a100000000         mov eax, dword ptr fs:[0]
// 005eae96  6aff                 push -1
// 005eae98  682eec9300           push 0x93ec2e
// 005eae9d  50                   push eax
// 005eae9e  64892500000000       mov dword ptr fs:[0], esp
// 005eaea5  e816faffff           call 0x5ea8c0
// 005eaeaa  b801000000           mov eax, 1
// 005eaeaf  8405003eb800         test byte ptr [0xb83e00], al
// 005eaeb5  752b                 jne 0x5eaee2
// 005eaeb7  0905003eb800         or dword ptr [0xb83e00], eax
// 005eaebd  688035b800           push 0xb83580
// 005eaec2  b9e43db800           mov ecx, 0xb83de4
// 005eaec7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaecf  ff15f4b69800         call dword ptr [0x98b6f4]
// 005eaed5  68c00e9800           push 0x980ec0
// 005eaeda  e84a9a2000           call 0x7f4929
// 005eaedf  83c404               add esp, 4
// 005eaee2  8b0c24               mov ecx, dword ptr [esp]
// 005eaee5  b8e43db800           mov eax, 0xb83de4
// 005eaeea  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaef1  83c40c               add esp, 0xc
// 005eaef4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
