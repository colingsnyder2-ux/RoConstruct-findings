// from server: 100% by auto
// roc 2010-06 00498cd0  unit: G3D::Shader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498cd0
//
// 00498cd0  6aff                 push -1
// 00498cd2  6889009a00           push 0x9a0089
// 00498cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00498cdd  50                   push eax
// 00498cde  64892500000000       mov dword ptr fs:[0], esp
// 00498ce5  51                   push ecx
// 00498ce6  56                   push esi
// 00498ce7  8bf1                 mov esi, ecx
// 00498ce9  89742404             mov dword ptr [esp + 4], esi
// 00498ced  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00498cf0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00498cf8  85c0                 test eax, eax
// 00498cfa  742c                 je 0x498d28
// 00498cfc  83c004               add eax, 4
// 00498cff  50                   push eax
// 00498d00  ff157ca39e00         call dword ptr [0x9ea37c]
// 00498d06  85c0                 test eax, eax
// 00498d08  7517                 jne 0x498d21
// 00498d0a  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00498d0d  e80eaefeff           call 0x483b20
// 00498d12  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00498d15  85c9                 test ecx, ecx
// 00498d17  7408                 je 0x498d21
// 00498d19  8b01                 mov eax, dword ptr [ecx]
// 00498d1b  8b10                 mov edx, dword ptr [eax]
// 00498d1d  6a01                 push 1
// 00498d1f  ffd2                 call edx
// 00498d21  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00498d28  8bce                 mov ecx, esi
// 00498d2a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00498d32  ff1500a49e00         call dword ptr [0x9ea400]
// 00498d38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00498d3c  5e                   pop esi
// 00498d3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00498d44  83c410               add esp, 0x10
// 00498d47  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
