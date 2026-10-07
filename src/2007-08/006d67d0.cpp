// roc 2007-08 006d67d0  unit: CXTPReportNavigator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d67d0
//
// 006d67d0  56                   push esi
// 006d67d1  8bf1                 mov esi, ecx
// 006d67d3  e8029ef5ff           call 0x6305da
// 006d67d8  33c0                 xor eax, eax
// 006d67da  894654               mov dword ptr [esi + 0x54], eax
// 006d67dd  894658               mov dword ptr [esi + 0x58], eax
// 006d67e0  89465c               mov dword ptr [esi + 0x5c], eax
// 006d67e3  c70604887d00         mov dword ptr [esi], 0x7d8804
// 006d67e9  8bc6                 mov eax, esi
// 006d67eb  5e                   pop esi
// 006d67ec  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ??0CXTPEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
