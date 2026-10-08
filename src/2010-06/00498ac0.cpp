// from server: 100% by auto
// roc 2010-06 00498ac0  unit: G3D::Shader  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498ac0
//
// 00498ac0  56                   push esi
// 00498ac1  8bf1                 mov esi, ecx
// 00498ac3  8b4640               mov eax, dword ptr [esi + 0x40]
// 00498ac6  85c0                 test eax, eax
// 00498ac8  742c                 je 0x498af6
// 00498aca  83c004               add eax, 4
// 00498acd  50                   push eax
// 00498ace  ff157ca39e00         call dword ptr [0x9ea37c]
// 00498ad4  85c0                 test eax, eax
// 00498ad6  7517                 jne 0x498aef
// 00498ad8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00498adb  e840b0feff           call 0x483b20
// 00498ae0  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00498ae3  85c9                 test ecx, ecx
// 00498ae5  7408                 je 0x498aef
// 00498ae7  8b01                 mov eax, dword ptr [ecx]
// 00498ae9  8b10                 mov edx, dword ptr [eax]
// 00498aeb  6a01                 push 1
// 00498aed  ffd2                 call edx
// 00498aef  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00498af6  5e                   pop esi
// 00498af7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Arg@ArgList@GPUProgram@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
