// roc 2012-06 00a14460  unit: CXTPControlEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14460
//
// 00a14460  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00a14466  8b542404             mov edx, dword ptr [esp + 4]
// 00a1446a  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00a14470  85c0                 test eax, eax
// 00a14472  7418                 je 0xa1448c
// 00a14474  83782000             cmp dword ptr [eax + 0x20], 0
// 00a14478  7412                 je 0xa1448c
// 00a1447a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a1447d  6a00                 push 0
// 00a1447f  52                   push edx
// 00a14480  68cf000000           push 0xcf
// 00a14485  50                   push eax
// 00a14486  ff15043cb200         call dword ptr [0xb23c04]
// 00a1448c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
