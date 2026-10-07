// roc 2007-08 00482a20  unit: G3D::Shader  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482a20
//
// 00482a20  56                   push esi
// 00482a21  8bf1                 mov esi, ecx
// 00482a23  8b4640               mov eax, dword ptr [esi + 0x40]
// 00482a26  85c0                 test eax, eax
// 00482a28  742c                 je 0x482a56
// 00482a2a  83c004               add eax, 4
// 00482a2d  50                   push eax
// 00482a2e  ff15e8d27700         call dword ptr [0x77d2e8]
// 00482a34  85c0                 test eax, eax
// 00482a36  7517                 jne 0x482a4f
// 00482a38  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00482a3b  e89053fdff           call 0x457dd0
// 00482a40  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00482a43  85c9                 test ecx, ecx
// 00482a45  7408                 je 0x482a4f
// 00482a47  8b01                 mov eax, dword ptr [ecx]
// 00482a49  8b10                 mov edx, dword ptr [eax]
// 00482a4b  6a01                 push 1
// 00482a4d  ffd2                 call edx
// 00482a4f  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00482a56  5e                   pop esi
// 00482a57  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Arg@ArgList@GPUProgram@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
