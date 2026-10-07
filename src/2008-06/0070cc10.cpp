// roc 2008-06 0070cc10  unit: CXTPToolTipContext  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cc10
//
// 0070cc10  837c240400           cmp dword ptr [esp + 4], 0
// 0070cc15  56                   push esi
// 0070cc16  8bf1                 mov esi, ecx
// 0070cc18  7437                 je 0x70cc51
// 0070cc1a  833d24e9970000       cmp dword ptr [0x97e924], 0
// 0070cc21  755a                 jne 0x70cc7d
// 0070cc23  833d28e9970000       cmp dword ptr [0x97e928], 0
// 0070cc2a  7551                 jne 0x70cc7d
// 0070cc2c  ff1598218000         call dword ptr [0x802198]
// 0070cc32  50                   push eax
// 0070cc33  6a00                 push 0
// 0070cc35  6860cb7000           push 0x70cb60
// 0070cc3a  6a07                 push 7
// 0070cc3c  ff15d82b8000         call dword ptr [0x802bd8]
// 0070cc42  893528e99700         mov dword ptr [0x97e928], esi
// 0070cc48  a324e99700           mov dword ptr [0x97e924], eax
// 0070cc4d  5e                   pop esi
// 0070cc4e  c20400               ret 4
// 0070cc51  a124e99700           mov eax, dword ptr [0x97e924]
// 0070cc56  85c0                 test eax, eax
// 0070cc58  7423                 je 0x70cc7d
// 0070cc5a  393528e99700         cmp dword ptr [0x97e928], esi
// 0070cc60  751b                 jne 0x70cc7d
// 0070cc62  50                   push eax
// 0070cc63  ff15582c8000         call dword ptr [0x802c58]
// 0070cc69  c70524e9970000000000 mov dword ptr [0x97e924], 0
// 0070cc73  c70528e9970000000000 mov dword ptr [0x97e928], 0
// 0070cc7d  5e                   pop esi
// 0070cc7e  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?HookMouseMove@CXTPToolTipContextToolTip@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
