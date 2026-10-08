// roc 2007-08 00479690  unit: seg_00470000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479690
//
// 00479690  56                   push esi
// 00479691  8bf1                 mov esi, ecx
// 00479693  8d8620010000         lea eax, [esi + 0x120]
// 00479699  50                   push eax
// 0047969a  8d8e80080000         lea ecx, [esi + 0x880]
// 004796a0  e8bbf0ffff           call 0x478760
// 004796a5  83467c01             add dword ptr [esi + 0x7c], 1
// 004796a9  32c0                 xor al, al
// 004796ab  8886bd030000         mov byte ptr [esi + 0x3bd], al
// 004796b1  888678080000         mov byte ptr [esi + 0x878], al
// 004796b7  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004796c1  5e                   pop esi
// 004796c2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?pushState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
