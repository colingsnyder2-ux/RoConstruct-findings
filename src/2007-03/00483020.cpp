// roc 2007-03 00483020  unit: seg_00480000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00483020
//
// 00483020  8b442408             mov eax, dword ptr [esp + 8]
// 00483024  83ec40               sub esp, 0x40
// 00483027  56                   push esi
// 00483028  8bf1                 mov esi, ecx
// 0048302a  50                   push eax
// 0048302b  8d4c2408             lea ecx, [esp + 8]
// 0048302f  e80cd30700           call 0x500340
// 00483034  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00483038  50                   push eax
// 00483039  51                   push ecx
// 0048303a  8bce                 mov ecx, esi
// 0048303c  e84ff2ffff           call 0x482290
// 00483041  5e                   pop esi
// 00483042  83c440               add esp, 0x40
// 00483045  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?set@ArgList@GPUProgram@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVCoordinateFrame@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
