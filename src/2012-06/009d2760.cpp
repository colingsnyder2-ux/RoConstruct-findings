// roc 2012-06 009d2760  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d2760
//
// 009d2760  56                   push esi
// 009d2761  8bf1                 mov esi, ecx
// 009d2763  e818720400           call 0xa19980
// 009d2768  c706d456c100         mov dword ptr [esi], 0xc156d4
// 009d276e  c746207456c100       mov dword ptr [esi + 0x20], 0xc15674
// 009d2775  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 009d277f  8bc6                 mov eax, esi
// 009d2781  5e                   pop esi
// 009d2782  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
