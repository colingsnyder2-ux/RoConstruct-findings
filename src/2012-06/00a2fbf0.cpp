// roc 2012-06 00a2fbf0  unit: CXTPReportNavigator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2fbf0
//
// 00a2fbf0  56                   push esi
// 00a2fbf1  8bf1                 mov esi, ecx
// 00a2fbf3  e8ce2df5ff           call 0x9829c6
// 00a2fbf8  33c0                 xor eax, eax
// 00a2fbfa  894654               mov dword ptr [esi + 0x54], eax
// 00a2fbfd  894658               mov dword ptr [esi + 0x58], eax
// 00a2fc00  89465c               mov dword ptr [esi + 0x5c], eax
// 00a2fc03  c7067c00c200         mov dword ptr [esi], 0xc2007c
// 00a2fc09  8bc6                 mov eax, esi
// 00a2fc0b  5e                   pop esi
// 00a2fc0c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPCommandBarEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
