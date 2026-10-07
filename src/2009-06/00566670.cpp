// roc 2009-06 00566670  unit: RBX::RbxG3D::RenderScene  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566670
//
// 00566670  56                   push esi
// 00566671  8bf1                 mov esi, ecx
// 00566673  8b4640               mov eax, dword ptr [esi + 0x40]
// 00566676  85c0                 test eax, eax
// 00566678  742c                 je 0x5666a6
// 0056667a  83c004               add eax, 4
// 0056667d  50                   push eax
// 0056667e  ff15a4e18900         call dword ptr [0x89e1a4]
// 00566684  85c0                 test eax, eax
// 00566686  7517                 jne 0x56669f
// 00566688  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0056668b  e8f0e6edff           call 0x444d80
// 00566690  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00566693  85c9                 test ecx, ecx
// 00566695  7408                 je 0x56669f
// 00566697  8b01                 mov eax, dword ptr [ecx]
// 00566699  8b10                 mov edx, dword ptr [eax]
// 0056669b  6a01                 push 1
// 0056669d  ffd2                 call edx
// 0056669f  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005666a6  5e                   pop esi
// 005666a7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Arg@ArgList@GPUProgram@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
