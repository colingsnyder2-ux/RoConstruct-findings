// from server: 100% by auto
// roc 2008-06 006f6200  unit: CXTPControlSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6200
//
// 006f6200  8b919c010000         mov edx, dword ptr [ecx + 0x19c]
// 006f6206  0faf918c010000       imul edx, dword ptr [ecx + 0x18c]
// 006f620d  8b442404             mov eax, dword ptr [esp + 4]
// 006f6211  8910                 mov dword ptr [eax], edx
// 006f6213  8b91a0010000         mov edx, dword ptr [ecx + 0x1a0]
// 006f6219  0faf9190010000       imul edx, dword ptr [ecx + 0x190]
// 006f6220  895004               mov dword ptr [eax + 4], edx
// 006f6223  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetSize@CXTPControlSelector@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
