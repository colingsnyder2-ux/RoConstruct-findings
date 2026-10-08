// roc 2007-03 0047e5d0  unit: seg_00470000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e5d0
//
// 0047e5d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047e5d4  83ec40               sub esp, 0x40
// 0047e5d7  33c0                 xor eax, eax
// 0047e5d9  83c108               add ecx, 8
// 0047e5dc  8d642400             lea esp, [esp]
// 0047e5e0  d941f8               fld dword ptr [ecx - 8]
// 0047e5e3  83c001               add eax, 1
// 0047e5e6  d95c84fc             fstp dword ptr [esp + eax*4 - 4]
// 0047e5ea  83c110               add ecx, 0x10
// 0047e5ed  83f804               cmp eax, 4
// 0047e5f0  d941ec               fld dword ptr [ecx - 0x14]
// 0047e5f3  d95c840c             fstp dword ptr [esp + eax*4 + 0xc]
// 0047e5f7  d941f0               fld dword ptr [ecx - 0x10]
// 0047e5fa  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 0047e5fe  d941f4               fld dword ptr [ecx - 0xc]
// 0047e601  d95c842c             fstp dword ptr [esp + eax*4 + 0x2c]
// 0047e605  7cd9                 jl 0x47e5e0
// 0047e607  8d0424               lea eax, [esp]
// 0047e60a  50                   push eax
// 0047e60b  ff1530ec7700         call dword ptr [0x77ec30]
// 0047e611  83c440               add esp, 0x40
// 0047e614  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVMatrix4@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/glcalls.cpp
