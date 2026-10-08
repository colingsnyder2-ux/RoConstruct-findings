// roc 2007-03 00642b00  unit: seg_00640000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00642b00
//
// 00642b00  56                   push esi
// 00642b01  8bf1                 mov esi, ecx
// 00642b03  e898ffffff           call 0x642aa0
// 00642b08  c706a8567c00         mov dword ptr [esi], 0x7c56a8
// 00642b0e  8bc6                 mov eax, esi
// 00642b10  5e                   pop esi
// 00642b11  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0bad_weak_ptr@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
