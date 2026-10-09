// roc 2009-12 00832150  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00832150
//
// 00832150  83ec78               sub esp, 0x78
// 00832153  56                   push esi
// 00832154  57                   push edi
// 00832155  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 0083215c  8bf1                 mov esi, ecx
// 0083215e  85ff                 test edi, edi
// 00832160  750a                 jne 0x83216c
// 00832162  5f                   pop edi
// 00832163  33c0                 xor eax, eax
// 00832165  5e                   pop esi
// 00832166  83c478               add esp, 0x78
// 00832169  c20c00               ret 0xc
// 0083216c  837e0400             cmp dword ptr [esi + 4], 0
// 00832170  752d                 jne 0x83219f
// 00832172  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00832179  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00832180  8b7634               mov esi, dword ptr [esi + 0x34]
// 00832183  6a00                 push 0
// 00832185  50                   push eax
// 00832186  51                   push ecx
// 00832187  6a00                 push 0
// 00832189  6a00                 push 0
// 0083218b  6a00                 push 0
// 0083218d  6a08                 push 8
// 0083218f  57                   push edi
// 00832190  8bce                 mov ecx, esi
// 00832192  e84d20fcff           call 0x7f41e4
// 00832197  5f                   pop edi
// 00832198  5e                   pop esi
// 00832199  83c478               add esp, 0x78
// 0083219c  c20c00               ret 0xc
// 0083219f  8b4634               mov eax, dword ptr [esi + 0x34]
// 008321a2  8b5020               mov edx, dword ptr [eax + 0x20]
// 008321a5  55                   push ebp
// 008321a6  6a00                 push 0
// 008321a8  6a09                 push 9
// 008321aa  680a110000           push 0x110a
// 008321af  52                   push edx
// 008321b0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008321b6  8be8                 mov ebp, eax
// 008321b8  33c0                 xor eax, eax
// 008321ba  3bef                 cmp ebp, edi
// 008321bc  0f94c0               sete al
// 008321bf  89442410             mov dword ptr [esp + 0x10], eax
// 008321c3  85ed                 test ebp, ebp
// 008321c5  7417                 je 0x8321de
// 008321c7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008321ca  6a02                 push 2
// 008321cc  55                   push ebp
// 008321cd  e834450f00           call 0x926706
// 008321d2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008321da  a802                 test al, 2
// 008321dc  7508                 jne 0x8321e6
// 008321de  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008321e6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008321e9  53                   push ebx
// 008321ea  6a02                 push 2
// 008321ec  57                   push edi
// 008321ed  e814450f00           call 0x926706
// 008321f2  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 008321f9  8bf8                 mov edi, eax
// 008321fb  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00832202  83e0fe               and eax, 0xfffffffe
// 00832205  d1ef                 shr edi, 1
// 00832207  83e701               and edi, 1
// 0083220a  89442410             mov dword ptr [esp + 0x10], eax
// 0083220e  83e3fe               and ebx, 0xfffffffe
// 00832211  e80a950000           call 0x83b720
// 00832216  8bc8                 mov ecx, eax
// 00832218  e8239e0000           call 0x83c040
// 0083221d  f684249400000001     test byte ptr [esp + 0x94], 1
// 00832225  0fb6c0               movzx eax, al
// 00832228  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083222c  0f8456010000         je 0x832388
// 00832232  f684249000000001     test byte ptr [esp + 0x90], 1
// 0083223a  0f84e9000000         je 0x832329
// 00832240  85c0                 test eax, eax
// 00832242  745e                 je 0x8322a2
// 00832244  837c241400           cmp dword ptr [esp + 0x14], 0
// 00832249  751b                 jne 0x832266
// 0083224b  85ed                 test ebp, ebp
// 0083224d  7417                 je 0x832266
// 0083224f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832252  6a00                 push 0
// 00832254  e897f6ffff           call 0x8318f0
// 00832259  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0083225c  6a02                 push 2
// 0083225e  6a02                 push 2
// 00832260  55                   push ebp
// 00832261  e8aaf6ffff           call 0x831910
// 00832266  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083226d  51                   push ecx
// 0083226e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832271  e87af6ffff           call 0x8318f0
// 00832276  85c0                 test eax, eax
// 00832278  0f8494010000         je 0x832412
// 0083227e  837c241400           cmp dword ptr [esp + 0x14], 0
// 00832283  7567                 jne 0x8322ec
// 00832285  85ed                 test ebp, ebp
// 00832287  7463                 je 0x8322ec
// 00832289  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083228d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832290  f7da                 neg edx
// 00832292  1bd2                 sbb edx, edx
// 00832294  6a02                 push 2
// 00832296  83e202               and edx, 2
// 00832299  52                   push edx
// 0083229a  55                   push ebp
// 0083229b  e870f6ffff           call 0x831910
// 008322a0  eb4a                 jmp 0x8322ec
// 008322a2  837c241400           cmp dword ptr [esp + 0x14], 0
// 008322a7  752b                 jne 0x8322d4
// 008322a9  837c241800           cmp dword ptr [esp + 0x18], 0
// 008322ae  7424                 je 0x8322d4
// 008322b0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008322b3  6a00                 push 0
// 008322b5  e836f6ffff           call 0x8318f0
// 008322ba  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008322bd  6a02                 push 2
// 008322bf  6a02                 push 2
// 008322c1  55                   push ebp
// 008322c2  e849f6ffff           call 0x831910
// 008322c7  8b4634               mov eax, dword ptr [esi + 0x34]
// 008322ca  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008322cd  51                   push ecx
// 008322ce  ff15a4ca9800         call dword ptr [0x98caa4]
// 008322d4  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 008322db  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008322de  52                   push edx
// 008322df  e80cf6ffff           call 0x8318f0
// 008322e4  85c0                 test eax, eax
// 008322e6  0f8426010000         je 0x832412
// 008322ec  f684249400000002     test byte ptr [esp + 0x94], 2
// 008322f4  7425                 je 0x83231b
// 008322f6  f684249000000002     test byte ptr [esp + 0x90], 2
// 008322fe  0f8484000000         je 0x832388
// 00832304  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00832309  757d                 jne 0x832388
// 0083230b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00832310  746e                 je 0x832380
// 00832312  837c241800           cmp dword ptr [esp + 0x18], 0
// 00832317  746f                 je 0x832388
// 00832319  eb65                 jmp 0x832380
// 0083231b  85ff                 test edi, edi
// 0083231d  7569                 jne 0x832388
// 0083231f  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00832324  83cb02               or ebx, 2
// 00832327  eb5f                 jmp 0x832388
// 00832329  837c241400           cmp dword ptr [esp + 0x14], 0
// 0083232e  7458                 je 0x832388
// 00832330  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832333  6a00                 push 0
// 00832335  e8b6f5ffff           call 0x8318f0
// 0083233a  f684249400000002     test byte ptr [esp + 0x94], 2
// 00832342  751a                 jne 0x83235e
// 00832344  85ff                 test edi, edi
// 00832346  7440                 je 0x832388
// 00832348  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0083234f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832352  6a02                 push 2
// 00832354  6a02                 push 2
// 00832356  50                   push eax
// 00832357  e8b4f5ffff           call 0x831910
// 0083235c  eb2a                 jmp 0x832388
// 0083235e  f684249000000002     test byte ptr [esp + 0x90], 2
// 00832366  7420                 je 0x832388
// 00832368  85ff                 test edi, edi
// 0083236a  7414                 je 0x832380
// 0083236c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00832373  6a02                 push 2
// 00832375  6a02                 push 2
// 00832377  51                   push ecx
// 00832378  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0083237b  e890f5ffff           call 0x831910
// 00832380  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00832385  83e3fd               and ebx, 0xfffffffd
// 00832388  85db                 test ebx, ebx
// 0083238a  0f84c8000000         je 0x832458
// 00832390  f6c302               test bl, 2
// 00832393  0f84b4000000         je 0x83244d
// 00832399  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083239c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0083239f  89542420             mov dword ptr [esp + 0x20], edx
// 008323a3  8b4020               mov eax, dword ptr [eax + 0x20]
// 008323a6  50                   push eax
// 008323a7  ff15e8ca9800         call dword ptr [0x98cae8]
// 008323ad  89442424             mov dword ptr [esp + 0x24], eax
// 008323b1  33c0                 xor eax, eax
// 008323b3  f644241002           test byte ptr [esp + 0x10], 2
// 008323b8  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 008323c0  89442458             mov dword ptr [esp + 0x58], eax
// 008323c4  89442430             mov dword ptr [esp + 0x30], eax
// 008323c8  8944245c             mov dword ptr [esp + 0x5c], eax
// 008323cc  89442434             mov dword ptr [esp + 0x34], eax
// 008323d0  8d7c2458             lea edi, [esp + 0x58]
// 008323d4  7504                 jne 0x8323da
// 008323d6  8d7c2430             lea edi, [esp + 0x30]
// 008323da  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 008323e1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008323e4  55                   push ebp
// 008323e5  c70714000000         mov dword ptr [edi], 0x14
// 008323eb  896f04               mov dword ptr [edi + 4], ebp
// 008323ee  e81b1efcff           call 0x7f420e
// 008323f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008323f7  8b16                 mov edx, dword ptr [esi]
// 008323f9  8b524c               mov edx, dword ptr [edx + 0x4c]
// 008323fc  894724               mov dword ptr [edi + 0x24], eax
// 008323ff  8d442420             lea eax, [esp + 0x20]
// 00832403  894f08               mov dword ptr [edi + 8], ecx
// 00832406  50                   push eax
// 00832407  8bce                 mov ecx, esi
// 00832409  895f0c               mov dword ptr [edi + 0xc], ebx
// 0083240c  ffd2                 call edx
// 0083240e  85c0                 test eax, eax
// 00832410  740c                 je 0x83241e
// 00832412  5b                   pop ebx
// 00832413  5d                   pop ebp
// 00832414  5f                   pop edi
// 00832415  33c0                 xor eax, eax
// 00832417  5e                   pop esi
// 00832418  83c478               add esp, 0x78
// 0083241b  c20c00               ret 0xc
// 0083241e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00832422  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832425  53                   push ebx
// 00832426  50                   push eax
// 00832427  55                   push ebp
// 00832428  e8e3f4ffff           call 0x831910
// 0083242d  8b16                 mov edx, dword ptr [esi]
// 0083242f  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00832432  8d442420             lea eax, [esp + 0x20]
// 00832436  50                   push eax
// 00832437  8bce                 mov ecx, esi
// 00832439  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 00832441  ffd2                 call edx
// 00832443  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00832448  83e3fd               and ebx, 0xfffffffd
// 0083244b  eb07                 jmp 0x832454
// 0083244d  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00832454  85db                 test ebx, ebx
// 00832456  750f                 jne 0x832467
// 00832458  5b                   pop ebx
// 00832459  5d                   pop ebp
// 0083245a  5f                   pop edi
// 0083245b  b801000000           mov eax, 1
// 00832460  5e                   pop esi
// 00832461  83c478               add esp, 0x78
// 00832464  c20c00               ret 0xc
// 00832467  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083246b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0083246e  53                   push ebx
// 0083246f  50                   push eax
// 00832470  55                   push ebp
// 00832471  e89af4ffff           call 0x831910
// 00832476  5b                   pop ebx
// 00832477  5d                   pop ebp
// 00832478  5f                   pop edi
// 00832479  5e                   pop esi
// 0083247a  83c478               add esp, 0x78
// 0083247d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
