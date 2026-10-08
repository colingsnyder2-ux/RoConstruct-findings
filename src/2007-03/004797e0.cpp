// roc 2007-03 004797e0  unit: seg_00470000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004797e0
//
// 004797e0  56                   push esi
// 004797e1  8bf1                 mov esi, ecx
// 004797e3  8d8620010000         lea eax, [esi + 0x120]
// 004797e9  50                   push eax
// 004797ea  8d8e80080000         lea ecx, [esi + 0x880]
// 004797f0  e8bbf0ffff           call 0x4788b0
// 004797f5  83467c01             add dword ptr [esi + 0x7c], 1
// 004797f9  32c0                 xor al, al
// 004797fb  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 00479801  888678080000         mov byte ptr [esi + 0x878], al
// 00479807  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 00479811  5e                   pop esi
// 00479812  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
