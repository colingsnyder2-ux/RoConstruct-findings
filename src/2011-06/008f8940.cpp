// roc 2011-06 008f8940  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8940
//
// 008f8940  56                   push esi
// 008f8941  8bf1                 mov esi, ecx
// 008f8943  e8e88bfaff           call 0x8a1530
// 008f8948  c706f4afad00         mov dword ptr [esi], 0xadaff4
// 008f894e  c7462094afad00       mov dword ptr [esi + 0x20], 0xadaf94
// 008f8955  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 008f895f  8bc6                 mov eax, esi
// 008f8961  5e                   pop esi
// 008f8962  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
