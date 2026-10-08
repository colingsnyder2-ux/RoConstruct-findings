// roc 2008-06 0047d3a0  unit: seg_00470000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d3a0
//
// 0047d3a0  6aff                 push -1
// 0047d3a2  68684e7c00           push 0x7c4e68
// 0047d3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0047d3ad  50                   push eax
// 0047d3ae  64892500000000       mov dword ptr fs:[0], esp
// 0047d3b5  83ec14               sub esp, 0x14
// 0047d3b8  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 0047d3be  33c0                 xor eax, eax
// 0047d3c0  d95c2404             fstp dword ptr [esp + 4]
// 0047d3c4  890424               mov dword ptr [esp], eax
// 0047d3c7  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 0047d3cd  d95c2408             fstp dword ptr [esp + 8]
// 0047d3d1  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 0047d3d7  d95c240c             fstp dword ptr [esp + 0xc]
// 0047d3db  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 0047d3e1  d95c2410             fstp dword ptr [esp + 0x10]
// 0047d3e5  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047d3e9  8d442404             lea eax, [esp + 4]
// 0047d3ed  50                   push eax
// 0047d3ee  8d542404             lea edx, [esp + 4]
// 0047d3f2  52                   push edx
// 0047d3f3  e808feffff           call 0x47d200
// 0047d3f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d3fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d403  83c420               add esp, 0x20
// 0047d406  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
