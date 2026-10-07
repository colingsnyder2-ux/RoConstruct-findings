// roc 2010-06 0048ecf0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ecf0
//
// 0048ecf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ecf4  83ec40               sub esp, 0x40
// 0048ecf7  33c0                 xor eax, eax
// 0048ecf9  83c108               add ecx, 8
// 0048ecfc  8d642400             lea esp, [esp]
// 0048ed00  d941f8               fld dword ptr [ecx - 8]
// 0048ed03  40                   inc eax
// 0048ed04  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 0048ed08  83c110               add ecx, 0x10
// 0048ed0b  83f804               cmp eax, 4
// 0048ed0e  d941ec               fld dword ptr [ecx - 0x14]
// 0048ed11  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 0048ed15  d941f0               fld dword ptr [ecx - 0x10]
// 0048ed18  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 0048ed1c  d941f4               fld dword ptr [ecx - 0xc]
// 0048ed1f  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 0048ed23  7cdb                 jl 0x48ed00
// 0048ed25  8d0424               lea eax, [esp]
// 0048ed28  50                   push eax
// 0048ed29  ff1548ab9e00         call dword ptr [0x9eab48]
// 0048ed2f  83c440               add esp, 0x40
// 0048ed32  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
