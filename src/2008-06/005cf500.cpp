// roc 2008-06 005cf500  unit: RBX::VWidget::?$NonFactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf500
//
// 005cf500  e85b55f4ff           call 0x514a60
// 005cf505  8bc8                 mov ecx, eax
// 005cf507  8b442404             mov eax, dword ptr [esp + 4]
// 005cf50b  d901                 fld dword ptr [ecx]
// 005cf50d  d918                 fstp dword ptr [eax]
// 005cf50f  d94104               fld dword ptr [ecx + 4]
// 005cf512  d95804               fstp dword ptr [eax + 4]
// 005cf515  d94108               fld dword ptr [ecx + 8]
// 005cf518  d95808               fstp dword ptr [eax + 8]
// 005cf51b  d9e8                 fld1 
// 005cf51d  d9580c               fstp dword ptr [eax + 0xc]
// 005cf520  c20400               ret 4
// library rbxgs/gui\Widget.cpp (function ?getFontColor@Widget@RBX@@MAE?AVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/Widget.cpp
