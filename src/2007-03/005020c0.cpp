// roc 2007-03 005020c0  unit: seg_00500000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005020c0
//
// 005020c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005020c3  8b542404             mov edx, dword ptr [esp + 4]
// 005020c7  56                   push esi
// 005020c8  8d3410               lea esi, [eax + edx]
// 005020cb  3b7118               cmp esi, dword ptr [ecx + 0x18]
// 005020ce  5e                   pop esi
// 005020cf  7206                 jb 0x5020d7
// 005020d1  83c8ff               or eax, 0xffffffff
// 005020d4  c20400               ret 4
// 005020d7  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005020da  03c8                 add ecx, eax
// 005020dc  0fb60411             movzx eax, byte ptr [ecx + edx]
// 005020e0  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
