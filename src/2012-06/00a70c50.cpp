// roc 2012-06 00a70c50  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70c50
//
// 00a70c50  56                   push esi
// 00a70c51  8bf1                 mov esi, ecx
// 00a70c53  e8288dfaff           call 0xa19980
// 00a70c58  c7067c66c200         mov dword ptr [esi], 0xc2667c
// 00a70c5e  c746201c66c200       mov dword ptr [esi + 0x20], 0xc2661c
// 00a70c65  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 00a70c6f  8bc6                 mov eax, esi
// 00a70c71  5e                   pop esi
// 00a70c72  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
