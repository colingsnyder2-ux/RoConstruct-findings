// from server: 100% by tester
// roc 2007-03 0059cea0  unit: seg_00590000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059cea0
//
// 0059cea0  e87b3af6ff           call 0x500920
// 0059cea5  8bc8                 mov ecx, eax
// 0059cea7  8b442404             mov eax, dword ptr [esp + 4]
// 0059ceab  d901                 fld dword ptr [ecx]
// 0059cead  d918                 fstp dword ptr [eax]
// 0059ceaf  d94104               fld dword ptr [ecx + 4]
// 0059ceb2  d95804               fstp dword ptr [eax + 4]
// 0059ceb5  d94108               fld dword ptr [ecx + 8]
// 0059ceb8  d95808               fstp dword ptr [eax + 8]
// 0059cebb  d9e8                 fld1 
// 0059cebd  d9580c               fstp dword ptr [eax + 0xc]
// 0059cec0  c20400               ret 4
// library rbxgs/gui\Widget.cpp (function ?getFontColor@Widget@RBX@@MAE?AVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/Widget.cpp
