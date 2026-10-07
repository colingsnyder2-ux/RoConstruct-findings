// roc 2009-06 005f23b0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f23b0
//
// 005f23b0  e8cb41f8ff           call 0x576580
// 005f23b5  8bc8                 mov ecx, eax
// 005f23b7  8b442404             mov eax, dword ptr [esp + 4]
// 005f23bb  d901                 fld dword ptr [ecx]
// 005f23bd  d918                 fstp dword ptr [eax]
// 005f23bf  d94104               fld dword ptr [ecx + 4]
// 005f23c2  d95804               fstp dword ptr [eax + 4]
// 005f23c5  d94108               fld dword ptr [ecx + 8]
// 005f23c8  d95808               fstp dword ptr [eax + 8]
// 005f23cb  d9e8                 fld1 
// 005f23cd  d9580c               fstp dword ptr [eax + 0xc]
// 005f23d0  c20400               ret 4
// library rbxgs/gui\Widget.cpp (function ?getFontColor@Widget@RBX@@MAE?AVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/Widget.cpp
