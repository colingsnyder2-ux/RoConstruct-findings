// roc 2012-06 009d37d0  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d37d0
//
// 009d37d0  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 009d37d6  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 009d37dd  8b442404             mov eax, dword ptr [esp + 4]
// 009d37e1  8910                 mov dword ptr [eax], edx
// 009d37e3  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 009d37e9  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 009d37f0  895004               mov dword ptr [eax + 4], edx
// 009d37f3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
