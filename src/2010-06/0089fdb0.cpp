// roc 2010-06 0089fdb0  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fdb0
//
// 0089fdb0  56                   push esi
// 0089fdb1  8bf1                 mov esi, ecx
// 0089fdb3  e8a845faff           call 0x844360
// 0089fdb8  c706c414a700         mov dword ptr [esi], 0xa714c4
// 0089fdbe  c746206414a700       mov dword ptr [esi + 0x20], 0xa71464
// 0089fdc5  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 0089fdcf  8bc6                 mov eax, esi
// 0089fdd1  5e                   pop esi
// 0089fdd2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
