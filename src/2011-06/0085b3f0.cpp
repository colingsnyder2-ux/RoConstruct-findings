// roc 2011-06 0085b3f0  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b3f0
//
// 0085b3f0  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 0085b3f6  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 0085b3fd  8b442404             mov eax, dword ptr [esp + 4]
// 0085b401  8910                 mov dword ptr [eax], edx
// 0085b403  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 0085b409  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 0085b410  895004               mov dword ptr [eax + 4], edx
// 0085b413  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
