// roc 2007-03 004b8860  unit: seg_004b0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8860
//
// 004b8860  8bc1                 mov eax, ecx
// 004b8862  c70000000000         mov dword ptr [eax], 0
// 004b8868  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
