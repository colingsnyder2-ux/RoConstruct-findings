// from server: 100% by auto
// roc 2009-06 004ad3c0  unit: G3D::Win32Window  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad3c0
//
// 004ad3c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad3c4  83ec40               sub esp, 0x40
// 004ad3c7  33c0                 xor eax, eax
// 004ad3c9  83c108               add ecx, 8
// 004ad3cc  8d642400             lea esp, [esp]
// 004ad3d0  d941f8               fld dword ptr [ecx - 8]
// 004ad3d3  40                   inc eax
// 004ad3d4  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 004ad3d8  83c110               add ecx, 0x10
// 004ad3db  83f804               cmp eax, 4
// 004ad3de  d941ec               fld dword ptr [ecx - 0x14]
// 004ad3e1  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 004ad3e5  d941f0               fld dword ptr [ecx - 0x10]
// 004ad3e8  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 004ad3ec  d941f4               fld dword ptr [ecx - 0xc]
// 004ad3ef  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 004ad3f3  7cdb                 jl 0x4ad3d0
// 004ad3f5  8d0424               lea eax, [esp]
// 004ad3f8  50                   push eax
// 004ad3f9  ff1500eb8900         call dword ptr [0x89eb00]
// 004ad3ff  83c440               add esp, 0x40
// 004ad402  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
