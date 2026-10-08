// roc 2008-06 0047d360  unit: seg_00470000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d360
//
// 0047d360  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 0047d366  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 0047d36c  69c060070000         imul eax, eax, 0x760
// 0047d372  56                   push esi
// 0047d373  8db180080000         lea esi, [ecx + 0x880]
// 0047d379  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 0047d380  50                   push eax
// 0047d381  e86ad1ffff           call 0x47a4f0
// 0047d386  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047d389  49                   dec ecx
// 0047d38a  6a00                 push 0
// 0047d38c  51                   push ecx
// 0047d38d  8bce                 mov ecx, esi
// 0047d38f  e8ace8ffff           call 0x47bc40
// 0047d394  5e                   pop esi
// 0047d395  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
