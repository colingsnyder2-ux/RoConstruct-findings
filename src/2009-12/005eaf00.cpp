// roc 2009-12 005eaf00  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eaf00
//
// 005eaf00  64a100000000         mov eax, dword ptr fs:[0]
// 005eaf06  6aff                 push -1
// 005eaf08  684eec9300           push 0x93ec4e
// 005eaf0d  50                   push eax
// 005eaf0e  64892500000000       mov dword ptr fs:[0], esp
// 005eaf15  e8a6f9ffff           call 0x5ea8c0
// 005eaf1a  b801000000           mov eax, 1
// 005eaf1f  8405203eb800         test byte ptr [0xb83e20], al
// 005eaf25  752b                 jne 0x5eaf52
// 005eaf27  0905203eb800         or dword ptr [0xb83e20], eax
// 005eaf2d  688039b800           push 0xb83980
// 005eaf32  b9043eb800           mov ecx, 0xb83e04
// 005eaf37  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaf3f  ff15f4b69800         call dword ptr [0x98b6f4]
// 005eaf45  68d00e9800           push 0x980ed0
// 005eaf4a  e8da992000           call 0x7f4929
// 005eaf4f  83c404               add esp, 4
// 005eaf52  8b0c24               mov ecx, dword ptr [esp]
// 005eaf55  b8043eb800           mov eax, 0xb83e04
// 005eaf5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaf61  83c40c               add esp, 0xc
// 005eaf64  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
