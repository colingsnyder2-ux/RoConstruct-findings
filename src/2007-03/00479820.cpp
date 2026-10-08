// roc 2007-03 00479820  unit: seg_00470000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479820
//
// 00479820  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 00479826  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 0047982c  69c060070000         imul eax, eax, 0x760
// 00479832  56                   push esi
// 00479833  8db180080000         lea esi, [ecx + 0x880]
// 00479839  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 00479840  50                   push eax
// 00479841  e89adcffff           call 0x4774e0
// 00479846  8b4e04               mov ecx, dword ptr [esi + 4]
// 00479849  83e901               sub ecx, 1
// 0047984c  6a00                 push 0
// 0047984e  51                   push ecx
// 0047984f  8bce                 mov ecx, esi
// 00479851  e8baeeffff           call 0x478710
// 00479856  5e                   pop esi
// 00479857  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
