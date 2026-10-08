// roc 2009-12 004d9f00  unit: G3D::Win32Window  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9f00
//
// 004d9f00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d9f04  83ec40               sub esp, 0x40
// 004d9f07  33c0                 xor eax, eax
// 004d9f09  83c108               add ecx, 8
// 004d9f0c  8d642400             lea esp, [esp]
// 004d9f10  d941f8               fld dword ptr [ecx - 8]
// 004d9f13  40                   inc eax
// 004d9f14  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 004d9f18  83c110               add ecx, 0x10
// 004d9f1b  83f804               cmp eax, 4
// 004d9f1e  d941ec               fld dword ptr [ecx - 0x14]
// 004d9f21  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 004d9f25  d941f0               fld dword ptr [ecx - 0x10]
// 004d9f28  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 004d9f2c  d941f4               fld dword ptr [ecx - 0xc]
// 004d9f2f  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 004d9f33  7cdb                 jl 0x4d9f10
// 004d9f35  8d0424               lea eax, [esp]
// 004d9f38  50                   push eax
// 004d9f39  ff15f0ba9800         call dword ptr [0x98baf0]
// 004d9f3f  83c440               add esp, 0x40
// 004d9f42  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
