// roc 2011-06 0089be30  unit: CXTPControlEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089be30
//
// 0089be30  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0089be36  8b542404             mov edx, dword ptr [esp + 4]
// 0089be3a  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 0089be40  85c0                 test eax, eax
// 0089be42  7418                 je 0x89be5c
// 0089be44  83782000             cmp dword ptr [eax + 0x20], 0
// 0089be48  7412                 je 0x89be5c
// 0089be4a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0089be4d  6a00                 push 0
// 0089be4f  52                   push edx
// 0089be50  68cf000000           push 0xcf
// 0089be55  50                   push eax
// 0089be56  ff15c019a400         call dword ptr [0xa419c0]
// 0089be5c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
