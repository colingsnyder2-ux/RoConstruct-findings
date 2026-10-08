// roc 2009-06 00817280  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817280
//
// 00817280  56                   push esi
// 00817281  8bf1                 mov esi, ecx
// 00817283  e81877faff           call 0x7be9a0
// 00817288  c706b4eb9000         mov dword ptr [esi], 0x90ebb4
// 0081728e  c7462054eb9000       mov dword ptr [esi + 0x20], 0x90eb54
// 00817295  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 0081729f  8bc6                 mov eax, esi
// 008172a1  5e                   pop esi
// 008172a2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
