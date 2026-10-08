// roc 2007-03 0047a200  unit: seg_00470000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a200
//
// 0047a200  8b442404             mov eax, dword ptr [esp + 4]
// 0047a204  d94004               fld dword ptr [eax + 4]
// 0047a207  8b11                 mov edx, dword ptr [ecx]
// 0047a209  83ec10               sub esp, 0x10
// 0047a20c  dd5c2408             fstp qword ptr [esp + 8]
// 0047a210  d900                 fld dword ptr [eax]
// 0047a212  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0047a215  dd1c24               fstp qword ptr [esp]
// 0047a218  ffd0                 call eax
// 0047a21a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?setRelativeMousePosition@SDLWindow@G3D@@UAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
