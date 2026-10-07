// roc 2007-08 00507140  unit: G3D::GCamera  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00507140
//
// 00507140  56                   push esi
// 00507141  8bf1                 mov esi, ecx
// 00507143  33c0                 xor eax, eax
// 00507145  394604               cmp dword ptr [esi + 4], eax
// 00507148  7e1a                 jle 0x507164
// 0050714a  33c9                 xor ecx, ecx
// 0050714c  bafc057a00           mov edx, 0x7a05fc
// 00507151  53                   push ebx
// 00507152  8b1e                 mov ebx, dword ptr [esi]
// 00507154  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 00507158  83c001               add eax, 1
// 0050715b  83c124               add ecx, 0x24
// 0050715e  3b4604               cmp eax, dword ptr [esi + 4]
// 00507161  7cef                 jl 0x507152
// 00507163  5b                   pop ebx
// 00507164  8b06                 mov eax, dword ptr [esi]
// 00507166  50                   push eax
// 00507167  e8a486ffff           call 0x4ff810
// 0050716c  83c404               add esp, 4
// 0050716f  c70600000000         mov dword ptr [esi], 0
// 00507175  c7460400000000       mov dword ptr [esi + 4], 0
// 0050717c  c7460800000000       mov dword ptr [esi + 8], 0
// 00507183  5e                   pop esi
// 00507184  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
