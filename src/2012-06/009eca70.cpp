// roc 2012-06 009eca70  unit: CXTPToolTipContext  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eca70
//
// 009eca70  837c240400           cmp dword ptr [esp + 4], 0
// 009eca75  56                   push esi
// 009eca76  8bf1                 mov esi, ecx
// 009eca78  7437                 je 0x9ecab1
// 009eca7a  833dfc9be50000       cmp dword ptr [0xe59bfc], 0
// 009eca81  755a                 jne 0x9ecadd
// 009eca83  833d009ce50000       cmp dword ptr [0xe59c00], 0
// 009eca8a  7551                 jne 0x9ecadd
// 009eca8c  ff15a021b200         call dword ptr [0xb221a0]
// 009eca92  50                   push eax
// 009eca93  6a00                 push 0
// 009eca95  68c0c99e00           push 0x9ec9c0
// 009eca9a  6a07                 push 7
// 009eca9c  ff15f43cb200         call dword ptr [0xb23cf4]
// 009ecaa2  8935009ce500         mov dword ptr [0xe59c00], esi
// 009ecaa8  a3fc9be500           mov dword ptr [0xe59bfc], eax
// 009ecaad  5e                   pop esi
// 009ecaae  c20400               ret 4
// 009ecab1  a1fc9be500           mov eax, dword ptr [0xe59bfc]
// 009ecab6  85c0                 test eax, eax
// 009ecab8  7423                 je 0x9ecadd
// 009ecaba  3935009ce500         cmp dword ptr [0xe59c00], esi
// 009ecac0  751b                 jne 0x9ecadd
// 009ecac2  50                   push eax
// 009ecac3  ff15f03cb200         call dword ptr [0xb23cf0]
// 009ecac9  c705fc9be50000000000 mov dword ptr [0xe59bfc], 0
// 009ecad3  c705009ce50000000000 mov dword ptr [0xe59c00], 0
// 009ecadd  5e                   pop esi
// 009ecade  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?HookMouseMove@CXTPToolTipContextToolTip@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
