// roc 2008-06 00508900  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508900
//
// 00508900  64a100000000         mov eax, dword ptr fs:[0]
// 00508906  6aff                 push -1
// 00508908  683eba7c00           push 0x7cba3e
// 0050890d  50                   push eax
// 0050890e  64892500000000       mov dword ptr fs:[0], esp
// 00508915  e8f6f7ffff           call 0x508110
// 0050891a  b801000000           mov eax, 1
// 0050891f  840578359700         test byte ptr [0x973578], al
// 00508925  752b                 jne 0x508952
// 00508927  090578359700         or dword ptr [0x973578], eax
// 0050892d  68002d9700           push 0x972d00
// 00508932  b95c359700           mov ecx, 0x97355c
// 00508937  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050893f  ff1558248000         call dword ptr [0x802458]
// 00508945  6810c67f00           push 0x7fc610
// 0050894a  e8608e1900           call 0x6a17af
// 0050894f  83c404               add esp, 4
// 00508952  8b0c24               mov ecx, dword ptr [esp]
// 00508955  b85c359700           mov eax, 0x97355c
// 0050895a  64890d00000000       mov dword ptr fs:[0], ecx
// 00508961  83c40c               add esp, 0xc
// 00508964  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
