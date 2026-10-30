// roc 2009-06 0076ebb0  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ebb0
//
// 0076ebb0  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 0076ebb6  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 0076ebbd  8b442404             mov eax, dword ptr [esp + 4]
// 0076ebc1  8910                 mov dword ptr [eax], edx
// 0076ebc3  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 0076ebc9  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 0076ebd0  895004               mov dword ptr [eax + 4], edx
// 0076ebd3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
