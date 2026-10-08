// roc 2007-03 00715730  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715730
//
// 00715730  56                   push esi
// 00715731  8bf1                 mov esi, ecx
// 00715733  e858a30000           call 0x71fa90
// 00715738  c7063c0e7e00         mov dword ptr [esi], 0x7e0e3c
// 0071573e  8bc6                 mov eax, esi
// 00715740  5e                   pop esi
// 00715741  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
