// roc 2007-08 004796d0  unit: seg_00470000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004796d0
//
// 004796d0  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 004796d6  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 004796dc  69c060070000         imul eax, eax, 0x760
// 004796e2  56                   push esi
// 004796e3  8db180080000         lea esi, [ecx + 0x880]
// 004796e9  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 004796f0  50                   push eax
// 004796f1  e88adcffff           call 0x477380
// 004796f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004796f9  83e901               sub ecx, 1
// 004796fc  6a00                 push 0
// 004796fe  51                   push ecx
// 004796ff  8bce                 mov ecx, esi
// 00479701  e8baeeffff           call 0x4785c0
// 00479706  5e                   pop esi
// 00479707  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
