// roc 2010-06 0054e380  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e380
//
// 0054e380  64a100000000         mov eax, dword ptr fs:[0]
// 0054e386  6aff                 push -1
// 0054e388  688e099900           push 0x99098e
// 0054e38d  50                   push eax
// 0054e38e  64892500000000       mov dword ptr fs:[0], esp
// 0054e395  e806fbffff           call 0x54dea0
// 0054e39a  b801000000           mov eax, 1
// 0054e39f  8405889ec000         test byte ptr [0xc09e88], al
// 0054e3a5  752b                 jne 0x54e3d2
// 0054e3a7  0905889ec000         or dword ptr [0xc09e88], eax
// 0054e3ad  68d8b1b900           push 0xb9b1d8
// 0054e3b2  b96c9ec000           mov ecx, 0xc09e6c
// 0054e3b7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054e3bf  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e3c5  68a0e09d00           push 0x9de0a0
// 0054e3ca  e894a62500           call 0x7a8a63
// 0054e3cf  83c404               add esp, 4
// 0054e3d2  8b0c24               mov ecx, dword ptr [esp]
// 0054e3d5  b86c9ec000           mov eax, 0xc09e6c
// 0054e3da  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e3e1  83c40c               add esp, 0xc
// 0054e3e4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?cpuVendor@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
