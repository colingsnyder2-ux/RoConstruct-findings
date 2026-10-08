// from server: 100% by auto
// roc 2010-06 0055b4f0  unit: G3D::GCamera  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b4f0
//
// 0055b4f0  56                   push esi
// 0055b4f1  8bf1                 mov esi, ecx
// 0055b4f3  33c0                 xor eax, eax
// 0055b4f5  394604               cmp dword ptr [esi + 4], eax
// 0055b4f8  7e18                 jle 0x55b512
// 0055b4fa  33c9                 xor ecx, ecx
// 0055b4fc  ba340aa200           mov edx, 0xa20a34
// 0055b501  53                   push ebx
// 0055b502  8b1e                 mov ebx, dword ptr [esi]
// 0055b504  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 0055b508  40                   inc eax
// 0055b509  83c124               add ecx, 0x24
// 0055b50c  3b4604               cmp eax, dword ptr [esi + 4]
// 0055b50f  7cf1                 jl 0x55b502
// 0055b511  5b                   pop ebx
// 0055b512  8b06                 mov eax, dword ptr [esi]
// 0055b514  50                   push eax
// 0055b515  e8a624ffff           call 0x54d9c0
// 0055b51a  83c404               add esp, 4
// 0055b51d  c70600000000         mov dword ptr [esi], 0
// 0055b523  c7460400000000       mov dword ptr [esi + 4], 0
// 0055b52a  c7460800000000       mov dword ptr [esi + 8], 0
// 0055b531  5e                   pop esi
// 0055b532  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
