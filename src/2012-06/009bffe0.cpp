// roc 2012-06 009bffe0  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bffe0
//
// 009bffe0  83ec78               sub esp, 0x78
// 009bffe3  56                   push esi
// 009bffe4  57                   push edi
// 009bffe5  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 009bffec  8bf1                 mov esi, ecx
// 009bffee  85ff                 test edi, edi
// 009bfff0  750a                 jne 0x9bfffc
// 009bfff2  5f                   pop edi
// 009bfff3  33c0                 xor eax, eax
// 009bfff5  5e                   pop esi
// 009bfff6  83c478               add esp, 0x78
// 009bfff9  c20c00               ret 0xc
// 009bfffc  837e0400             cmp dword ptr [esi + 4], 0
// 009c0000  752d                 jne 0x9c002f
// 009c0002  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009c0009  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 009c0010  8b7634               mov esi, dword ptr [esi + 0x34]
// 009c0013  6a00                 push 0
// 009c0015  50                   push eax
// 009c0016  51                   push ecx
// 009c0017  6a00                 push 0
// 009c0019  6a00                 push 0
// 009c001b  6a00                 push 0
// 009c001d  6a08                 push 8
// 009c001f  57                   push edi
// 009c0020  8bce                 mov ecx, esi
// 009c0022  e83b2afcff           call 0x982a62
// 009c0027  5f                   pop edi
// 009c0028  5e                   pop esi
// 009c0029  83c478               add esp, 0x78
// 009c002c  c20c00               ret 0xc
// 009c002f  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0032  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c0035  55                   push ebp
// 009c0036  6a00                 push 0
// 009c0038  6a09                 push 9
// 009c003a  680a110000           push 0x110a
// 009c003f  52                   push edx
// 009c0040  ff15043cb200         call dword ptr [0xb23c04]
// 009c0046  8be8                 mov ebp, eax
// 009c0048  33c0                 xor eax, eax
// 009c004a  3bef                 cmp ebp, edi
// 009c004c  0f94c0               sete al
// 009c004f  89442410             mov dword ptr [esp + 0x10], eax
// 009c0053  85ed                 test ebp, ebp
// 009c0055  7417                 je 0x9c006e
// 009c0057  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c005a  6a02                 push 2
// 009c005c  55                   push ebp
// 009c005d  e8b0970d00           call 0xa99812
// 009c0062  c744241401000000     mov dword ptr [esp + 0x14], 1
// 009c006a  a802                 test al, 2
// 009c006c  7508                 jne 0x9c0076
// 009c006e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009c0076  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0079  53                   push ebx
// 009c007a  6a02                 push 2
// 009c007c  57                   push edi
// 009c007d  e890970d00           call 0xa99812
// 009c0082  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 009c0089  8bf8                 mov edi, eax
// 009c008b  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 009c0092  83e0fe               and eax, 0xfffffffe
// 009c0095  d1ef                 shr edi, 1
// 009c0097  83e701               and edi, 1
// 009c009a  89442410             mov dword ptr [esp + 0x10], eax
// 009c009e  83e3fe               and ebx, 0xfffffffe
// 009c00a1  e8ea940000           call 0x9c9590
// 009c00a6  8bc8                 mov ecx, eax
// 009c00a8  e8f39d0000           call 0x9c9ea0
// 009c00ad  f684249400000001     test byte ptr [esp + 0x94], 1
// 009c00b5  0fb6c0               movzx eax, al
// 009c00b8  8944241c             mov dword ptr [esp + 0x1c], eax
// 009c00bc  0f8456010000         je 0x9c0218
// 009c00c2  f684249000000001     test byte ptr [esp + 0x90], 1
// 009c00ca  0f84e9000000         je 0x9c01b9
// 009c00d0  85c0                 test eax, eax
// 009c00d2  745e                 je 0x9c0132
// 009c00d4  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c00d9  751b                 jne 0x9c00f6
// 009c00db  85ed                 test ebp, ebp
// 009c00dd  7417                 je 0x9c00f6
// 009c00df  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c00e2  6a00                 push 0
// 009c00e4  e897f6ffff           call 0x9bf780
// 009c00e9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c00ec  6a02                 push 2
// 009c00ee  6a02                 push 2
// 009c00f0  55                   push ebp
// 009c00f1  e8aaf6ffff           call 0x9bf7a0
// 009c00f6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009c00fd  51                   push ecx
// 009c00fe  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0101  e87af6ffff           call 0x9bf780
// 009c0106  85c0                 test eax, eax
// 009c0108  0f8494010000         je 0x9c02a2
// 009c010e  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c0113  7567                 jne 0x9c017c
// 009c0115  85ed                 test ebp, ebp
// 009c0117  7463                 je 0x9c017c
// 009c0119  8b542418             mov edx, dword ptr [esp + 0x18]
// 009c011d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0120  f7da                 neg edx
// 009c0122  1bd2                 sbb edx, edx
// 009c0124  6a02                 push 2
// 009c0126  83e202               and edx, 2
// 009c0129  52                   push edx
// 009c012a  55                   push ebp
// 009c012b  e870f6ffff           call 0x9bf7a0
// 009c0130  eb4a                 jmp 0x9c017c
// 009c0132  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c0137  752b                 jne 0x9c0164
// 009c0139  837c241800           cmp dword ptr [esp + 0x18], 0
// 009c013e  7424                 je 0x9c0164
// 009c0140  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0143  6a00                 push 0
// 009c0145  e836f6ffff           call 0x9bf780
// 009c014a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c014d  6a02                 push 2
// 009c014f  6a02                 push 2
// 009c0151  55                   push ebp
// 009c0152  e849f6ffff           call 0x9bf7a0
// 009c0157  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c015a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c015d  51                   push ecx
// 009c015e  ff15c43cb200         call dword ptr [0xb23cc4]
// 009c0164  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 009c016b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c016e  52                   push edx
// 009c016f  e80cf6ffff           call 0x9bf780
// 009c0174  85c0                 test eax, eax
// 009c0176  0f8426010000         je 0x9c02a2
// 009c017c  f684249400000002     test byte ptr [esp + 0x94], 2
// 009c0184  7425                 je 0x9c01ab
// 009c0186  f684249000000002     test byte ptr [esp + 0x90], 2
// 009c018e  0f8484000000         je 0x9c0218
// 009c0194  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009c0199  757d                 jne 0x9c0218
// 009c019b  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c01a0  746e                 je 0x9c0210
// 009c01a2  837c241800           cmp dword ptr [esp + 0x18], 0
// 009c01a7  746f                 je 0x9c0218
// 009c01a9  eb65                 jmp 0x9c0210
// 009c01ab  85ff                 test edi, edi
// 009c01ad  7569                 jne 0x9c0218
// 009c01af  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 009c01b4  83cb02               or ebx, 2
// 009c01b7  eb5f                 jmp 0x9c0218
// 009c01b9  837c241400           cmp dword ptr [esp + 0x14], 0
// 009c01be  7458                 je 0x9c0218
// 009c01c0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c01c3  6a00                 push 0
// 009c01c5  e8b6f5ffff           call 0x9bf780
// 009c01ca  f684249400000002     test byte ptr [esp + 0x94], 2
// 009c01d2  751a                 jne 0x9c01ee
// 009c01d4  85ff                 test edi, edi
// 009c01d6  7440                 je 0x9c0218
// 009c01d8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009c01df  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c01e2  6a02                 push 2
// 009c01e4  6a02                 push 2
// 009c01e6  50                   push eax
// 009c01e7  e8b4f5ffff           call 0x9bf7a0
// 009c01ec  eb2a                 jmp 0x9c0218
// 009c01ee  f684249000000002     test byte ptr [esp + 0x90], 2
// 009c01f6  7420                 je 0x9c0218
// 009c01f8  85ff                 test edi, edi
// 009c01fa  7414                 je 0x9c0210
// 009c01fc  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009c0203  6a02                 push 2
// 009c0205  6a02                 push 2
// 009c0207  51                   push ecx
// 009c0208  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c020b  e890f5ffff           call 0x9bf7a0
// 009c0210  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 009c0215  83e3fd               and ebx, 0xfffffffd
// 009c0218  85db                 test ebx, ebx
// 009c021a  0f84c8000000         je 0x9c02e8
// 009c0220  f6c302               test bl, 2
// 009c0223  0f84b4000000         je 0x9c02dd
// 009c0229  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c022c  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c022f  89542420             mov dword ptr [esp + 0x20], edx
// 009c0233  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0236  50                   push eax
// 009c0237  ff15043db200         call dword ptr [0xb23d04]
// 009c023d  89442424             mov dword ptr [esp + 0x24], eax
// 009c0241  33c0                 xor eax, eax
// 009c0243  f644241002           test byte ptr [esp + 0x10], 2
// 009c0248  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 009c0250  89442458             mov dword ptr [esp + 0x58], eax
// 009c0254  89442430             mov dword ptr [esp + 0x30], eax
// 009c0258  8944245c             mov dword ptr [esp + 0x5c], eax
// 009c025c  89442434             mov dword ptr [esp + 0x34], eax
// 009c0260  8d7c2458             lea edi, [esp + 0x58]
// 009c0264  7504                 jne 0x9c026a
// 009c0266  8d7c2430             lea edi, [esp + 0x30]
// 009c026a  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 009c0271  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0274  55                   push ebp
// 009c0275  c70714000000         mov dword ptr [edi], 0x14
// 009c027b  896f04               mov dword ptr [edi + 4], ebp
// 009c027e  e80928fcff           call 0x982a8c
// 009c0283  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c0287  8b16                 mov edx, dword ptr [esi]
// 009c0289  8b524c               mov edx, dword ptr [edx + 0x4c]
// 009c028c  894724               mov dword ptr [edi + 0x24], eax
// 009c028f  8d442420             lea eax, [esp + 0x20]
// 009c0293  894f08               mov dword ptr [edi + 8], ecx
// 009c0296  50                   push eax
// 009c0297  8bce                 mov ecx, esi
// 009c0299  895f0c               mov dword ptr [edi + 0xc], ebx
// 009c029c  ffd2                 call edx
// 009c029e  85c0                 test eax, eax
// 009c02a0  740c                 je 0x9c02ae
// 009c02a2  5b                   pop ebx
// 009c02a3  5d                   pop ebp
// 009c02a4  5f                   pop edi
// 009c02a5  33c0                 xor eax, eax
// 009c02a7  5e                   pop esi
// 009c02a8  83c478               add esp, 0x78
// 009c02ab  c20c00               ret 0xc
// 009c02ae  8b442410             mov eax, dword ptr [esp + 0x10]
// 009c02b2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c02b5  53                   push ebx
// 009c02b6  50                   push eax
// 009c02b7  55                   push ebp
// 009c02b8  e8e3f4ffff           call 0x9bf7a0
// 009c02bd  8b16                 mov edx, dword ptr [esi]
// 009c02bf  8b524c               mov edx, dword ptr [edx + 0x4c]
// 009c02c2  8d442420             lea eax, [esp + 0x20]
// 009c02c6  50                   push eax
// 009c02c7  8bce                 mov ecx, esi
// 009c02c9  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 009c02d1  ffd2                 call edx
// 009c02d3  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 009c02d8  83e3fd               and ebx, 0xfffffffd
// 009c02db  eb07                 jmp 0x9c02e4
// 009c02dd  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 009c02e4  85db                 test ebx, ebx
// 009c02e6  750f                 jne 0x9c02f7
// 009c02e8  5b                   pop ebx
// 009c02e9  5d                   pop ebp
// 009c02ea  5f                   pop edi
// 009c02eb  b801000000           mov eax, 1
// 009c02f0  5e                   pop esi
// 009c02f1  83c478               add esp, 0x78
// 009c02f4  c20c00               ret 0xc
// 009c02f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 009c02fb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c02fe  53                   push ebx
// 009c02ff  50                   push eax
// 009c0300  55                   push ebp
// 009c0301  e89af4ffff           call 0x9bf7a0
// 009c0306  5b                   pop ebx
// 009c0307  5d                   pop ebp
// 009c0308  5f                   pop edi
// 009c0309  5e                   pop esi
// 009c030a  83c478               add esp, 0x78
// 009c030d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
