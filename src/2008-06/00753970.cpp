// roc 2008-06 00753970  unit: CXTPReportNavigator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753970
//
// 00753970  56                   push esi
// 00753971  8bf1                 mov esi, ecx
// 00753973  e818d5f4ff           call 0x6a0e90
// 00753978  33c0                 xor eax, eax
// 0075397a  894654               mov dword ptr [esi + 0x54], eax
// 0075397d  894658               mov dword ptr [esi + 0x58], eax
// 00753980  89465c               mov dword ptr [esi + 0x5c], eax
// 00753983  c706cc4a8600         mov dword ptr [esi], 0x864acc
// 00753989  8bc6                 mov eax, esi
// 0075398b  5e                   pop esi
// 0075398c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
