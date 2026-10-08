// roc 2007-03 0068e000  unit: seg_00680000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068e000
//
// 0068e000  56                   push esi
// 0068e001  8bf1                 mov esi, ecx
// 0068e003  e898e10700           call 0x70c1a0
// 0068e008  c706bc017d00         mov dword ptr [esi], 0x7d01bc
// 0068e00e  8bc6                 mov eax, esi
// 0068e010  5e                   pop esi
// 0068e011  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
