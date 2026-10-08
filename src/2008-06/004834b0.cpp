// from server: 100% by auto
// roc 2008-06 004834b0  unit: G3D::Win32Window  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004834b0
//
// 004834b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004834b4  83ec40               sub esp, 0x40
// 004834b7  33c0                 xor eax, eax
// 004834b9  83c108               add ecx, 8
// 004834bc  8d642400             lea esp, [esp]
// 004834c0  d941f8               fld dword ptr [ecx - 8]
// 004834c3  40                   inc eax
// 004834c4  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 004834c8  83c110               add ecx, 0x10
// 004834cb  83f804               cmp eax, 4
// 004834ce  d941ec               fld dword ptr [ecx - 0x14]
// 004834d1  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 004834d5  d941f0               fld dword ptr [ecx - 0x10]
// 004834d8  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 004834dc  d941f4               fld dword ptr [ecx - 0xc]
// 004834df  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 004834e3  7cdb                 jl 0x4834c0
// 004834e5  8d0424               lea eax, [esp]
// 004834e8  50                   push eax
// 004834e9  ff15582a8000         call dword ptr [0x802a58]
// 004834ef  83c440               add esp, 0x40
// 004834f2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
