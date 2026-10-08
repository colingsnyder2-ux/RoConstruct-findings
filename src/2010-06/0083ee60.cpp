// roc 2010-06 0083ee60  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ee60
//
// 0083ee60  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0083ee66  8b542404             mov edx, dword ptr [esp + 4]
// 0083ee6a  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0083ee70  85c0                 test eax, eax
// 0083ee72  7418                 je 0x83ee8c
// 0083ee74  83782000             cmp dword ptr [eax + 0x20], 0
// 0083ee78  7412                 je 0x83ee8c
// 0083ee7a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083ee7d  6a00                 push 0
// 0083ee7f  52                   push edx
// 0083ee80  68cf000000           push 0xcf
// 0083ee85  50                   push eax
// 0083ee86  ff1554ba9e00         call dword ptr [0x9eba54]
// 0083ee8c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
