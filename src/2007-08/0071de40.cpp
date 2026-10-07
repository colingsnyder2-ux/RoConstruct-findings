// roc 2007-08 0071de40  unit: CXTPDialogBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071de40
//
// 0071de40  56                   push esi
// 0071de41  8bf1                 mov esi, ecx
// 0071de43  e818c6faff           call 0x6ca460
// 0071de48  c706ec0d7e00         mov dword ptr [esi], 0x7e0dec
// 0071de4e  c746208c0d7e00       mov dword ptr [esi + 0x20], 0x7e0d8c
// 0071de55  c786d40000001a000000 mov dword ptr [esi + 0xd4], 0x1a
// 0071de5f  8bc6                 mov eax, esi
// 0071de61  5e                   pop esi
// 0071de62  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlButtonHide@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
