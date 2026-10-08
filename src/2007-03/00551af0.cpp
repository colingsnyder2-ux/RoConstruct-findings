// roc 2007-03 00551af0  unit: seg_00550000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551af0
//
// 00551af0  8b442404             mov eax, dword ptr [esp + 4]
// 00551af4  c70000000000         mov dword ptr [eax], 0
// 00551afa  c7400400000000       mov dword ptr [eax + 4], 0
// 00551b01  c20800               ret 8
// library rbxgs/gui\GUI.cpp (function ?process@GuiTarget@RBX@@UAE?AVGuiResponse@2@ABVGuiEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
