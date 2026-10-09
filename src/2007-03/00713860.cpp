// roc 2007-03 00713860  unit: seg_00710000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00713860
//
// 00713860  56                   push esi
// 00713861  8bf1                 mov esi, ecx
// 00713863  e8e815faff           call 0x6b4e50
// 00713868  c7066cfa7d00         mov dword ptr [esi], 0x7dfa6c
// 0071386e  c746200cfa7d00       mov dword ptr [esi + 0x20], 0x7dfa0c
// 00713875  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 0071387f  8bc6                 mov eax, esi
// 00713881  5e                   pop esi
// 00713882  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
