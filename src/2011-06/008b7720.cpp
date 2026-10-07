// roc 2011-06 008b7720  unit: CXTPReportNavigator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7720
//
// 008b7720  56                   push esi
// 008b7721  8bf1                 mov esi, ecx
// 008b7723  e81e32f5ff           call 0x80a946
// 008b7728  33c0                 xor eax, eax
// 008b772a  894654               mov dword ptr [esi + 0x54], eax
// 008b772d  894658               mov dword ptr [esi + 0x58], eax
// 008b7730  89465c               mov dword ptr [esi + 0x5c], eax
// 008b7733  c706ec49ad00         mov dword ptr [esi], 0xad49ec
// 008b7739  8bc6                 mov eax, esi
// 008b773b  5e                   pop esi
// 008b773c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPCommandBarEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
