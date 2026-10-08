// roc 2010-06 00497800  unit: seg_00490000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497800
//
// 00497800  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 00497806  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 0049780c  69c060070000         imul eax, eax, 0x760
// 00497812  56                   push esi
// 00497813  8db180080000         lea esi, [ecx + 0x880]
// 00497819  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 00497820  50                   push eax
// 00497821  e80ad7ffff           call 0x494f30
// 00497826  8b4e04               mov ecx, dword ptr [esi + 4]
// 00497829  49                   dec ecx
// 0049782a  6a00                 push 0
// 0049782c  51                   push ecx
// 0049782d  8bce                 mov ecx, esi
// 0049782f  e8dceeffff           call 0x496710
// 00497834  5e                   pop esi
// 00497835  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
