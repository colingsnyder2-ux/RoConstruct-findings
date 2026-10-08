// from server: 100% by auto
// roc 2007-08 00486170  unit: G3D::VertexAndPixelShader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486170
//
// 00486170  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00486173  83e800               sub eax, 0
// 00486176  56                   push esi
// 00486177  7422                 je 0x48619b
// 00486179  83e801               sub eax, 1
// 0048617c  7536                 jne 0x4861b4
// 0048617e  8b742408             mov esi, dword ptr [esp + 8]
// 00486182  56                   push esi
// 00486183  83c10c               add ecx, 0xc
// 00486186  e845ffffff           call 0x4860d0
// 0048618b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048618f  50                   push eax
// 00486190  56                   push esi
// 00486191  ff155cd98b00         call dword ptr [0x8bd95c]
// 00486197  5e                   pop esi
// 00486198  c20800               ret 8
// 0048619b  8b742408             mov esi, dword ptr [esp + 8]
// 0048619f  56                   push esi
// 004861a0  83c10c               add ecx, 0xc
// 004861a3  e878ffffff           call 0x486120
// 004861a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004861ac  51                   push ecx
// 004861ad  56                   push esi
// 004861ae  ff1534d98b00         call dword ptr [0x8bd934]
// 004861b4  5e                   pop esi
// 004861b5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?bindProgram@GPUProgram@G3D@@IBEXHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
