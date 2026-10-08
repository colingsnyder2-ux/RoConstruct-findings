// roc 2010-06 007fd9e0  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fd9e0
//
// 007fd9e0  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 007fd9e6  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 007fd9ed  8b442404             mov eax, dword ptr [esp + 4]
// 007fd9f1  8910                 mov dword ptr [eax], edx
// 007fd9f3  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 007fd9f9  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 007fda00  895004               mov dword ptr [eax + 4], edx
// 007fda03  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
