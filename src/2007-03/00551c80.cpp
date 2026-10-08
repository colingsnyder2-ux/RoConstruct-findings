// roc 2007-03 00551c80  unit: seg_00550000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551c80
//
// 00551c80  56                   push esi
// 00551c81  8bf1                 mov esi, ecx
// 00551c83  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 00551c8d  e8ae781e00           call 0x739540
// 00551c92  d900                 fld dword ptr [eax]
// 00551c94  d99e04010000         fstp dword ptr [esi + 0x104]
// 00551c9a  d94004               fld dword ptr [eax + 4]
// 00551c9d  d99e08010000         fstp dword ptr [esi + 0x108]
// 00551ca3  d94008               fld dword ptr [eax + 8]
// 00551ca6  d99e0c010000         fstp dword ptr [esi + 0x10c]
// 00551cac  d9400c               fld dword ptr [eax + 0xc]
// 00551caf  d99e10010000         fstp dword ptr [esi + 0x110]
// 00551cb5  c6861801000001       mov byte ptr [esi + 0x118], 1
// 00551cbc  5e                   pop esi
// 00551cbd  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?init@TopMenuBar@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
