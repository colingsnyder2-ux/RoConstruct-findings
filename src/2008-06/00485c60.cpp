// roc 2008-06 00485c60  unit: G3D::Shader  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485c60
//
// 00485c60  56                   push esi
// 00485c61  8bf1                 mov esi, ecx
// 00485c63  8b4640               mov eax, dword ptr [esi + 0x40]
// 00485c66  85c0                 test eax, eax
// 00485c68  742c                 je 0x485c96
// 00485c6a  83c004               add eax, 4
// 00485c6d  50                   push eax
// 00485c6e  ff15ac218000         call dword ptr [0x8021ac]
// 00485c74  85c0                 test eax, eax
// 00485c76  7517                 jne 0x485c8f
// 00485c78  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00485c7b  e81051fdff           call 0x45ad90
// 00485c80  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00485c83  85c9                 test ecx, ecx
// 00485c85  7408                 je 0x485c8f
// 00485c87  8b01                 mov eax, dword ptr [ecx]
// 00485c89  8b10                 mov edx, dword ptr [eax]
// 00485c8b  6a01                 push 1
// 00485c8d  ffd2                 call edx
// 00485c8f  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00485c96  5e                   pop esi
// 00485c97  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Arg@ArgList@GPUProgram@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
