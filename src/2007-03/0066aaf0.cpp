// roc 2007-03 0066aaf0  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066aaf0
//
// 0066aaf0  8bc1                 mov eax, ecx
// 0066aaf2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066aaf6  8908                 mov dword ptr [eax], ecx
// 0066aaf8  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0id@locale@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
