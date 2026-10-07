// roc 2007-08 004cd6d0  unit: 0RBX::View  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd6d0
//
// 004cd6d0  56                   push esi
// 004cd6d1  8bf1                 mov esi, ecx
// 004cd6d3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004cd6d6  85c0                 test eax, eax
// 004cd6d8  742c                 je 0x4cd706
// 004cd6da  83c004               add eax, 4
// 004cd6dd  50                   push eax
// 004cd6de  ff15e8d27700         call dword ptr [0x77d2e8]
// 004cd6e4  85c0                 test eax, eax
// 004cd6e6  7517                 jne 0x4cd6ff
// 004cd6e8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004cd6eb  e8e0a6f8ff           call 0x457dd0
// 004cd6f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004cd6f3  85c9                 test ecx, ecx
// 004cd6f5  7408                 je 0x4cd6ff
// 004cd6f7  8b01                 mov eax, dword ptr [ecx]
// 004cd6f9  8b10                 mov edx, dword ptr [eax]
// 004cd6fb  6a01                 push 1
// 004cd6fd  ffd2                 call edx
// 004cd6ff  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004cd706  5e                   pop esi
// 004cd707  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
