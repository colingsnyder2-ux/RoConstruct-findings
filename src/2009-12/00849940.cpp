// roc 2009-12 00849940  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849940
//
// 00849940  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 00849946  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 0084994d  8b442404             mov eax, dword ptr [esp + 4]
// 00849951  8910                 mov dword ptr [eax], edx
// 00849953  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 00849959  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 00849960  895004               mov dword ptr [eax + 4], edx
// 00849963  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
