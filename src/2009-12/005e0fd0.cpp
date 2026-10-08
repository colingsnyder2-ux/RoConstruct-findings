// roc 2009-12 005e0fd0  unit: RBX::RbxG3D::RenderScene  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0fd0
//
// 005e0fd0  56                   push esi
// 005e0fd1  8bf1                 mov esi, ecx
// 005e0fd3  8b4640               mov eax, dword ptr [esi + 0x40]
// 005e0fd6  85c0                 test eax, eax
// 005e0fd8  742c                 je 0x5e1006
// 005e0fda  83c004               add eax, 4
// 005e0fdd  50                   push eax
// 005e0fde  ff1508b29800         call dword ptr [0x98b208]
// 005e0fe4  85c0                 test eax, eax
// 005e0fe6  7517                 jne 0x5e0fff
// 005e0fe8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005e0feb  e830a0e6ff           call 0x44b020
// 005e0ff0  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005e0ff3  85c9                 test ecx, ecx
// 005e0ff5  7408                 je 0x5e0fff
// 005e0ff7  8b01                 mov eax, dword ptr [ecx]
// 005e0ff9  8b10                 mov edx, dword ptr [eax]
// 005e0ffb  6a01                 push 1
// 005e0ffd  ffd2                 call edx
// 005e0fff  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005e1006  5e                   pop esi
// 005e1007  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Arg@ArgList@GPUProgram@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
