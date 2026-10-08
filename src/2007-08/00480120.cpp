// from server: 100% by auto
// roc 2007-08 00480120  unit: G3D::Win32Window  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480120
//
// 00480120  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00480124  83ec40               sub esp, 0x40
// 00480127  33c0                 xor eax, eax
// 00480129  83c108               add ecx, 8
// 0048012c  8d642400             lea esp, [esp]
// 00480130  d941f8               fld dword ptr [ecx - 8]
// 00480133  83c001               add eax, 1
// 00480136  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 0048013a  83c110               add ecx, 0x10
// 0048013d  83f804               cmp eax, 4
// 00480140  d941ec               fld dword ptr [ecx - 0x14]
// 00480143  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 00480147  d941f0               fld dword ptr [ecx - 0x10]
// 0048014a  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 0048014e  d941f4               fld dword ptr [ecx - 0xc]
// 00480151  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 00480155  7cd9                 jl 0x480130
// 00480157  8d0424               lea eax, [esp]
// 0048015a  50                   push eax
// 0048015b  ff158cea7700         call dword ptr [0x77ea8c]
// 00480161  83c440               add esp, 0x40
// 00480164  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
