// roc 2007-03 0071d3d0  unit: seg_00710000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071d3d0
//
// 0071d3d0  56                   push esi
// 0071d3d1  8bf1                 mov esi, ecx
// 0071d3d3  e888feffff           call 0x71d260
// 0071d3d8  c706ec337e00         mov dword ptr [esi], 0x7e33ec
// 0071d3de  8bc6                 mov eax, esi
// 0071d3e0  5e                   pop esi
// 0071d3e1  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
