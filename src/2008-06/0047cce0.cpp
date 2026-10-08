// roc 2008-06 0047cce0  unit: seg_00470000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047cce0
//
// 0047cce0  56                   push esi
// 0047cce1  8bf1                 mov esi, ecx
// 0047cce3  8d8620010000         lea eax, [esi + 0x120]
// 0047cce9  50                   push eax
// 0047ccea  8d8e80080000         lea ecx, [esi + 0x880]
// 0047ccf0  e8cbf0ffff           call 0x47bdc0
// 0047ccf5  ff467c               inc dword ptr [esi + 0x7c]
// 0047ccf8  32c0                 xor al, al
// 0047ccfa  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 0047cd00  888678080000         mov byte ptr [esi + 0x878], al
// 0047cd06  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 0047cd10  5e                   pop esi
// 0047cd11  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
