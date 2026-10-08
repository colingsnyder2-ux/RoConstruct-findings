// roc 2009-12 005eada0  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eada0
//
// 005eada0  64a100000000         mov eax, dword ptr fs:[0]
// 005eada6  6aff                 push -1
// 005eada8  68eeeb9300           push 0x93ebee
// 005eadad  50                   push eax
// 005eadae  64892500000000       mov dword ptr fs:[0], esp
// 005eadb5  e806fbffff           call 0x5ea8c0
// 005eadba  b801000000           mov eax, 1
// 005eadbf  8405c03db800         test byte ptr [0xb83dc0], al
// 005eadc5  752b                 jne 0x5eadf2
// 005eadc7  0905c03db800         or dword ptr [0xb83dc0], eax
// 005eadcd  68986bb200           push 0xb26b98
// 005eadd2  b9a43db800           mov ecx, 0xb83da4
// 005eadd7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaddf  ff15f4b69800         call dword ptr [0x98b6f4]
// 005eade5  68a00e9800           push 0x980ea0
// 005eadea  e83a9b2000           call 0x7f4929
// 005eadef  83c404               add esp, 4
// 005eadf2  8b0c24               mov ecx, dword ptr [esp]
// 005eadf5  b8a43db800           mov eax, 0xb83da4
// 005eadfa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae01  83c40c               add esp, 0xc
// 005eae04  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
