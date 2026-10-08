// roc 2009-06 007b5ad0  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b5ad0
//
// 007b5ad0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b5ad4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007b5ad8  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007b5ade  6a01                 push 1
// 007b5ae0  50                   push eax
// 007b5ae1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b5ae5  52                   push edx
// 007b5ae6  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b5aea  50                   push eax
// 007b5aeb  52                   push edx
// 007b5aec  e83f77fbff           call 0x76d230
// 007b5af1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
