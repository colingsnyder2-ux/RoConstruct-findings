// roc 2009-06 007572d0  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007572d0
//
// 007572d0  83ec78               sub esp, 0x78
// 007572d3  56                   push esi
// 007572d4  57                   push edi
// 007572d5  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 007572dc  8bf1                 mov esi, ecx
// 007572de  85ff                 test edi, edi
// 007572e0  750a                 jne 0x7572ec
// 007572e2  5f                   pop edi
// 007572e3  33c0                 xor eax, eax
// 007572e5  5e                   pop esi
// 007572e6  83c478               add esp, 0x78
// 007572e9  c20c00               ret 0xc
// 007572ec  837e0400             cmp dword ptr [esi + 4], 0
// 007572f0  752d                 jne 0x75731f
// 007572f2  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007572f9  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00757300  8b7634               mov esi, dword ptr [esi + 0x34]
// 00757303  6a00                 push 0
// 00757305  50                   push eax
// 00757306  51                   push ecx
// 00757307  6a00                 push 0
// 00757309  6a00                 push 0
// 0075730b  6a00                 push 0
// 0075730d  6a08                 push 8
// 0075730f  57                   push edi
// 00757310  8bce                 mov ecx, esi
// 00757312  e8a520fcff           call 0x7193bc
// 00757317  5f                   pop edi
// 00757318  5e                   pop esi
// 00757319  83c478               add esp, 0x78
// 0075731c  c20c00               ret 0xc
// 0075731f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757322  8b5020               mov edx, dword ptr [eax + 0x20]
// 00757325  55                   push ebp
// 00757326  6a00                 push 0
// 00757328  6a09                 push 9
// 0075732a  680a110000           push 0x110a
// 0075732f  52                   push edx
// 00757330  ff1590ee8900         call dword ptr [0x89ee90]
// 00757336  8be8                 mov ebp, eax
// 00757338  33c0                 xor eax, eax
// 0075733a  3bef                 cmp ebp, edi
// 0075733c  0f94c0               sete al
// 0075733f  89442410             mov dword ptr [esp + 0x10], eax
// 00757343  85ed                 test ebp, ebp
// 00757345  7417                 je 0x75735e
// 00757347  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0075734a  6a02                 push 2
// 0075734c  55                   push ebp
// 0075734d  e8484e0f00           call 0x84c19a
// 00757352  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0075735a  a802                 test al, 2
// 0075735c  7508                 jne 0x757366
// 0075735e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00757366  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757369  53                   push ebx
// 0075736a  6a02                 push 2
// 0075736c  57                   push edi
// 0075736d  e8284e0f00           call 0x84c19a
// 00757372  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00757379  8bf8                 mov edi, eax
// 0075737b  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00757382  83e0fe               and eax, 0xfffffffe
// 00757385  d1ef                 shr edi, 1
// 00757387  83e701               and edi, 1
// 0075738a  89442410             mov dword ptr [esp + 0x10], eax
// 0075738e  83e3fe               and ebx, 0xfffffffe
// 00757391  e8ba950000           call 0x760950
// 00757396  8bc8                 mov ecx, eax
// 00757398  e8d39e0000           call 0x761270
// 0075739d  f684249400000001     test byte ptr [esp + 0x94], 1
// 007573a5  0fb6c0               movzx eax, al
// 007573a8  8944241c             mov dword ptr [esp + 0x1c], eax
// 007573ac  0f8456010000         je 0x757508
// 007573b2  f684249000000001     test byte ptr [esp + 0x90], 1
// 007573ba  0f84e9000000         je 0x7574a9
// 007573c0  85c0                 test eax, eax
// 007573c2  745e                 je 0x757422
// 007573c4  837c241400           cmp dword ptr [esp + 0x14], 0
// 007573c9  751b                 jne 0x7573e6
// 007573cb  85ed                 test ebp, ebp
// 007573cd  7417                 je 0x7573e6
// 007573cf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007573d2  6a00                 push 0
// 007573d4  e897f6ffff           call 0x756a70
// 007573d9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007573dc  6a02                 push 2
// 007573de  6a02                 push 2
// 007573e0  55                   push ebp
// 007573e1  e8aaf6ffff           call 0x756a90
// 007573e6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007573ed  51                   push ecx
// 007573ee  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007573f1  e87af6ffff           call 0x756a70
// 007573f6  85c0                 test eax, eax
// 007573f8  0f8494010000         je 0x757592
// 007573fe  837c241400           cmp dword ptr [esp + 0x14], 0
// 00757403  7567                 jne 0x75746c
// 00757405  85ed                 test ebp, ebp
// 00757407  7463                 je 0x75746c
// 00757409  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075740d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757410  f7da                 neg edx
// 00757412  1bd2                 sbb edx, edx
// 00757414  6a02                 push 2
// 00757416  83e202               and edx, 2
// 00757419  52                   push edx
// 0075741a  55                   push ebp
// 0075741b  e870f6ffff           call 0x756a90
// 00757420  eb4a                 jmp 0x75746c
// 00757422  837c241400           cmp dword ptr [esp + 0x14], 0
// 00757427  752b                 jne 0x757454
// 00757429  837c241800           cmp dword ptr [esp + 0x18], 0
// 0075742e  7424                 je 0x757454
// 00757430  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757433  6a00                 push 0
// 00757435  e836f6ffff           call 0x756a70
// 0075743a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0075743d  6a02                 push 2
// 0075743f  6a02                 push 2
// 00757441  55                   push ebp
// 00757442  e849f6ffff           call 0x756a90
// 00757447  8b4634               mov eax, dword ptr [esi + 0x34]
// 0075744a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0075744d  51                   push ecx
// 0075744e  ff15b4ee8900         call dword ptr [0x89eeb4]
// 00757454  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0075745b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0075745e  52                   push edx
// 0075745f  e80cf6ffff           call 0x756a70
// 00757464  85c0                 test eax, eax
// 00757466  0f8426010000         je 0x757592
// 0075746c  f684249400000002     test byte ptr [esp + 0x94], 2
// 00757474  7425                 je 0x75749b
// 00757476  f684249000000002     test byte ptr [esp + 0x90], 2
// 0075747e  0f8484000000         je 0x757508
// 00757484  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00757489  757d                 jne 0x757508
// 0075748b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00757490  746e                 je 0x757500
// 00757492  837c241800           cmp dword ptr [esp + 0x18], 0
// 00757497  746f                 je 0x757508
// 00757499  eb65                 jmp 0x757500
// 0075749b  85ff                 test edi, edi
// 0075749d  7569                 jne 0x757508
// 0075749f  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 007574a4  83cb02               or ebx, 2
// 007574a7  eb5f                 jmp 0x757508
// 007574a9  837c241400           cmp dword ptr [esp + 0x14], 0
// 007574ae  7458                 je 0x757508
// 007574b0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007574b3  6a00                 push 0
// 007574b5  e8b6f5ffff           call 0x756a70
// 007574ba  f684249400000002     test byte ptr [esp + 0x94], 2
// 007574c2  751a                 jne 0x7574de
// 007574c4  85ff                 test edi, edi
// 007574c6  7440                 je 0x757508
// 007574c8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007574cf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007574d2  6a02                 push 2
// 007574d4  6a02                 push 2
// 007574d6  50                   push eax
// 007574d7  e8b4f5ffff           call 0x756a90
// 007574dc  eb2a                 jmp 0x757508
// 007574de  f684249000000002     test byte ptr [esp + 0x90], 2
// 007574e6  7420                 je 0x757508
// 007574e8  85ff                 test edi, edi
// 007574ea  7414                 je 0x757500
// 007574ec  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007574f3  6a02                 push 2
// 007574f5  6a02                 push 2
// 007574f7  51                   push ecx
// 007574f8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007574fb  e890f5ffff           call 0x756a90
// 00757500  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00757505  83e3fd               and ebx, 0xfffffffd
// 00757508  85db                 test ebx, ebx
// 0075750a  0f84c8000000         je 0x7575d8
// 00757510  f6c302               test bl, 2
// 00757513  0f84b4000000         je 0x7575cd
// 00757519  8b4634               mov eax, dword ptr [esi + 0x34]
// 0075751c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075751f  89542420             mov dword ptr [esp + 0x20], edx
// 00757523  8b4020               mov eax, dword ptr [eax + 0x20]
// 00757526  50                   push eax
// 00757527  ff15fcee8900         call dword ptr [0x89eefc]
// 0075752d  89442424             mov dword ptr [esp + 0x24], eax
// 00757531  33c0                 xor eax, eax
// 00757533  f644241002           test byte ptr [esp + 0x10], 2
// 00757538  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 00757540  89442458             mov dword ptr [esp + 0x58], eax
// 00757544  89442430             mov dword ptr [esp + 0x30], eax
// 00757548  8944245c             mov dword ptr [esp + 0x5c], eax
// 0075754c  89442434             mov dword ptr [esp + 0x34], eax
// 00757550  8d7c2458             lea edi, [esp + 0x58]
// 00757554  7504                 jne 0x75755a
// 00757556  8d7c2430             lea edi, [esp + 0x30]
// 0075755a  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00757561  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757564  55                   push ebp
// 00757565  c70714000000         mov dword ptr [edi], 0x14
// 0075756b  896f04               mov dword ptr [edi + 4], ebp
// 0075756e  e8731efcff           call 0x7193e6
// 00757573  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00757577  8b16                 mov edx, dword ptr [esi]
// 00757579  8b524c               mov edx, dword ptr [edx + 0x4c]
// 0075757c  894724               mov dword ptr [edi + 0x24], eax
// 0075757f  8d442420             lea eax, [esp + 0x20]
// 00757583  894f08               mov dword ptr [edi + 8], ecx
// 00757586  50                   push eax
// 00757587  8bce                 mov ecx, esi
// 00757589  895f0c               mov dword ptr [edi + 0xc], ebx
// 0075758c  ffd2                 call edx
// 0075758e  85c0                 test eax, eax
// 00757590  740c                 je 0x75759e
// 00757592  5b                   pop ebx
// 00757593  5d                   pop ebp
// 00757594  5f                   pop edi
// 00757595  33c0                 xor eax, eax
// 00757597  5e                   pop esi
// 00757598  83c478               add esp, 0x78
// 0075759b  c20c00               ret 0xc
// 0075759e  8b442410             mov eax, dword ptr [esp + 0x10]
// 007575a2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007575a5  53                   push ebx
// 007575a6  50                   push eax
// 007575a7  55                   push ebp
// 007575a8  e8e3f4ffff           call 0x756a90
// 007575ad  8b16                 mov edx, dword ptr [esi]
// 007575af  8b524c               mov edx, dword ptr [edx + 0x4c]
// 007575b2  8d442420             lea eax, [esp + 0x20]
// 007575b6  50                   push eax
// 007575b7  8bce                 mov ecx, esi
// 007575b9  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 007575c1  ffd2                 call edx
// 007575c3  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 007575c8  83e3fd               and ebx, 0xfffffffd
// 007575cb  eb07                 jmp 0x7575d4
// 007575cd  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007575d4  85db                 test ebx, ebx
// 007575d6  750f                 jne 0x7575e7
// 007575d8  5b                   pop ebx
// 007575d9  5d                   pop ebp
// 007575da  5f                   pop edi
// 007575db  b801000000           mov eax, 1
// 007575e0  5e                   pop esi
// 007575e1  83c478               add esp, 0x78
// 007575e4  c20c00               ret 0xc
// 007575e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 007575eb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007575ee  53                   push ebx
// 007575ef  50                   push eax
// 007575f0  55                   push ebp
// 007575f1  e89af4ffff           call 0x756a90
// 007575f6  5b                   pop ebx
// 007575f7  5d                   pop ebp
// 007575f8  5f                   pop edi
// 007575f9  5e                   pop esi
// 007575fa  83c478               add esp, 0x78
// 007575fd  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
