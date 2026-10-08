// from server: 100% by auto
// roc 2010-06 0054e4e0  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e4e0
//
// 0054e4e0  64a100000000         mov eax, dword ptr fs:[0]
// 0054e4e6  6aff                 push -1
// 0054e4e8  68ee099900           push 0x9909ee
// 0054e4ed  50                   push eax
// 0054e4ee  64892500000000       mov dword ptr fs:[0], esp
// 0054e4f5  e8a6f9ffff           call 0x54dea0
// 0054e4fa  b801000000           mov eax, 1
// 0054e4ff  8405e89ec000         test byte ptr [0xc09ee8], al
// 0054e505  752b                 jne 0x54e532
// 0054e507  0905e89ec000         or dword ptr [0xc09ee8], eax
// 0054e50d  68489ac000           push 0xc09a48
// 0054e512  b9cc9ec000           mov ecx, 0xc09ecc
// 0054e517  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054e51f  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e525  68d0e09d00           push 0x9de0d0
// 0054e52a  e834a52500           call 0x7a8a63
// 0054e52f  83c404               add esp, 4
// 0054e532  8b0c24               mov ecx, dword ptr [esp]
// 0054e535  b8cc9ec000           mov eax, 0xc09ecc
// 0054e53a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e541  83c40c               add esp, 0xc
// 0054e544  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
