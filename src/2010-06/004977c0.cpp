// roc 2010-06 004977c0  unit: seg_00490000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004977c0
//
// 004977c0  56                   push esi
// 004977c1  8bf1                 mov esi, ecx
// 004977c3  8d8620010000         lea eax, [esi + 0x120]
// 004977c9  50                   push eax
// 004977ca  8d8e80080000         lea ecx, [esi + 0x880]
// 004977d0  e8cbf0ffff           call 0x4968a0
// 004977d5  ff467c               inc dword ptr [esi + 0x7c]
// 004977d8  32c0                 xor al, al
// 004977da  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 004977e0  888678080000         mov byte ptr [esi + 0x878], al
// 004977e6  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004977f0  5e                   pop esi
// 004977f1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
