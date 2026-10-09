// roc 2009-12 0088b7f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b7f0
//
// 0088b7f0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0088b7f6  8b542404             mov edx, dword ptr [esp + 4]
// 0088b7fa  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0088b800  85c0                 test eax, eax
// 0088b802  7418                 je 0x88b81c
// 0088b804  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b808  7412                 je 0x88b81c
// 0088b80a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088b80d  6a00                 push 0
// 0088b80f  52                   push edx
// 0088b810  68cf000000           push 0xcf
// 0088b815  50                   push eax
// 0088b816  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0088b81c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
