// roc 2007-03 0047a2c0  unit: seg_00470000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a2c0
//
// 0047a2c0  51                   push ecx
// 0047a2c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047a2c5  8b01                 mov eax, dword ptr [ecx]
// 0047a2c7  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047a2ca  52                   push edx
// 0047a2cb  8d542404             lea edx, [esp + 4]
// 0047a2cf  52                   push edx
// 0047a2d0  8d542418             lea edx, [esp + 0x18]
// 0047a2d4  52                   push edx
// 0047a2d5  ffd0                 call eax
// 0047a2d7  db442410             fild dword ptr [esp + 0x10]
// 0047a2db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047a2df  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047a2e3  dd19                 fstp qword ptr [ecx]
// 0047a2e5  db0424               fild dword ptr [esp]
// 0047a2e8  dd1a                 fstp qword ptr [edx]
// 0047a2ea  59                   pop ecx
// 0047a2eb  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAN0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
