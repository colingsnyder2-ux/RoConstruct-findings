// roc 2007-03 006efe80  unit: seg_006e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006efe80
//
// 006efe80  56                   push esi
// 006efe81  8bf1                 mov esi, ecx
// 006efe83  e858fdffff           call 0x6efbe0
// 006efe88  c706cca67d00         mov dword ptr [esi], 0x7da6cc
// 006efe8e  8bc6                 mov eax, esi
// 006efe90  5e                   pop esi
// 006efe91  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
