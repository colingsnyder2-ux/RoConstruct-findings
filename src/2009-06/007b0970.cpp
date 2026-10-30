// roc 2009-06 007b0970  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0970
//
// 007b0970  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 007b0976  8b542404             mov edx, dword ptr [esp + 4]
// 007b097a  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 007b0980  85c0                 test eax, eax
// 007b0982  7418                 je 0x7b099c
// 007b0984  83782000             cmp dword ptr [eax + 0x20], 0
// 007b0988  7412                 je 0x7b099c
// 007b098a  8b4020               mov eax, dword ptr [eax + 0x20]
// 007b098d  6a00                 push 0
// 007b098f  52                   push edx
// 007b0990  68cf000000           push 0xcf
// 007b0995  50                   push eax
// 007b0996  ff1590ee8900         call dword ptr [0x89ee90]
// 007b099c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
