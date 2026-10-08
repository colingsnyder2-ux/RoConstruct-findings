// roc 2010-06 007fc970  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc970
//
// 007fc970  56                   push esi
// 007fc971  8bf1                 mov esi, ecx
// 007fc973  e8e8790400           call 0x844360
// 007fc978  c706ecf6a500         mov dword ptr [esi], 0xa5f6ec
// 007fc97e  c746208cf6a500       mov dword ptr [esi + 0x20], 0xa5f68c
// 007fc985  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 007fc98f  8bc6                 mov eax, esi
// 007fc991  5e                   pop esi
// 007fc992  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
