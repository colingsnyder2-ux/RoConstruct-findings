// roc 2008-06 006de610  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006de610
//
// 006de610  83ec08               sub esp, 8
// 006de613  56                   push esi
// 006de614  8bf1                 mov esi, ecx
// 006de616  837e0400             cmp dword ptr [esi + 4], 0
// 006de61a  750f                 jne 0x6de62b
// 006de61c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006de61f  e84426fcff           call 0x6a0c68
// 006de624  5e                   pop esi
// 006de625  83c408               add esp, 8
// 006de628  c20c00               ret 0xc
// 006de62b  53                   push ebx
// 006de62c  57                   push edi
// 006de62d  8b3da42d8000         mov edi, dword ptr [0x802da4]
// 006de633  6a11                 push 0x11
// 006de635  ffd7                 call edi
// 006de637  33db                 xor ebx, ebx
// 006de639  6685c0               test ax, ax
// 006de63c  0f9cc3               setl bl
// 006de63f  6a10                 push 0x10
// 006de641  895c2414             mov dword ptr [esp + 0x14], ebx
// 006de645  ffd7                 call edi
// 006de647  33c9                 xor ecx, ecx
// 006de649  6685c0               test ax, ax
// 006de64c  0f9cc1               setl cl
// 006de64f  8bc1                 mov eax, ecx
// 006de651  8944240c             mov dword ptr [esp + 0xc], eax
// 006de655  85db                 test ebx, ebx
// 006de657  7530                 jne 0x6de689
// 006de659  85c0                 test eax, eax
// 006de65b  752c                 jne 0x6de689
// 006de65d  8bce                 mov ecx, esi
// 006de65f  e8ccf8ffff           call 0x6ddf30
// 006de664  83f801               cmp eax, 1
// 006de667  7715                 ja 0x6de67e
// 006de669  751e                 jne 0x6de689
// 006de66b  8bce                 mov ecx, esi
// 006de66d  e87edbffff           call 0x6dc1f0
// 006de672  50                   push eax
// 006de673  8bce                 mov ecx, esi
// 006de675  e8e6d7ffff           call 0x6dbe60
// 006de67a  85c0                 test eax, eax
// 006de67c  750b                 jne 0x6de689
// 006de67e  6a00                 push 0
// 006de680  6a00                 push 0
// 006de682  8bce                 mov ecx, esi
// 006de684  e837e8ffff           call 0x6dcec0
// 006de689  55                   push ebp
// 006de68a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006de68e  8d45df               lea eax, [ebp - 0x21]
// 006de691  33ff                 xor edi, edi
// 006de693  83f807               cmp eax, 7
// 006de696  773c                 ja 0x6de6d4
// 006de698  0fb69084e76d00       movzx edx, byte ptr [eax + 0x6de784]
// 006de69f  ff24957ce76d00       jmp dword ptr [edx*4 + 0x6de77c]
// 006de6a6  8b4634               mov eax, dword ptr [esi + 0x34]
// 006de6a9  8b4020               mov eax, dword ptr [eax + 0x20]
// 006de6ac  6a00                 push 0
// 006de6ae  6a09                 push 9
// 006de6b0  680a110000           push 0x110a
// 006de6b5  50                   push eax
// 006de6b6  ff15142e8000         call dword ptr [0x802e14]
// 006de6bc  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006de6c0  8bf8                 mov edi, eax
// 006de6c2  7503                 jne 0x6de6c7
// 006de6c4  897e0c               mov dword ptr [esi + 0xc], edi
// 006de6c7  85db                 test ebx, ebx
// 006de6c9  7509                 jne 0x6de6d4
// 006de6cb  395c2410             cmp dword ptr [esp + 0x10], ebx
// 006de6cf  7503                 jne 0x6de6d4
// 006de6d1  895e0c               mov dword ptr [esi + 0xc], ebx
// 006de6d4  83fd26               cmp ebp, 0x26
// 006de6d7  7409                 je 0x6de6e2
// 006de6d9  83fd21               cmp ebp, 0x21
// 006de6dc  7404                 je 0x6de6e2
// 006de6de  33db                 xor ebx, ebx
// 006de6e0  eb05                 jmp 0x6de6e7
// 006de6e2  bb01000000           mov ebx, 1
// 006de6e7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006de6ea  e87925fcff           call 0x6a0c68
// 006de6ef  85ff                 test edi, edi
// 006de6f1  747c                 je 0x6de76f
// 006de6f3  837c241400           cmp dword ptr [esp + 0x14], 0
// 006de6f8  7507                 jne 0x6de701
// 006de6fa  837c241000           cmp dword ptr [esp + 0x10], 0
// 006de6ff  746e                 je 0x6de76f
// 006de701  83fd22               cmp ebp, 0x22
// 006de704  741b                 je 0x6de721
// 006de706  83fd21               cmp ebp, 0x21
// 006de709  7416                 je 0x6de721
// 006de70b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006de70e  57                   push edi
// 006de70f  85db                 test ebx, ebx
// 006de711  7407                 je 0x6de71a
// 006de713  e868daffff           call 0x6dc180
// 006de718  eb1d                 jmp 0x6de737
// 006de71a  e841daffff           call 0x6dc160
// 006de71f  eb16                 jmp 0x6de737
// 006de721  8b4634               mov eax, dword ptr [esi + 0x34]
// 006de724  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006de727  6a00                 push 0
// 006de729  6a09                 push 9
// 006de72b  680a110000           push 0x110a
// 006de730  51                   push ecx
// 006de731  ff15142e8000         call dword ptr [0x802e14]
// 006de737  85c0                 test eax, eax
// 006de739  7502                 jne 0x6de73d
// 006de73b  8bc7                 mov eax, edi
// 006de73d  837c241000           cmp dword ptr [esp + 0x10], 0
// 006de742  7418                 je 0x6de75c
// 006de744  8b560c               mov edx, dword ptr [esi + 0xc]
// 006de747  6a01                 push 1
// 006de749  50                   push eax
// 006de74a  52                   push edx
// 006de74b  8bce                 mov ecx, esi
// 006de74d  e87ee8ffff           call 0x6dcfd0
// 006de752  5d                   pop ebp
// 006de753  5f                   pop edi
// 006de754  5b                   pop ebx
// 006de755  5e                   pop esi
// 006de756  83c408               add esp, 8
// 006de759  c20c00               ret 0xc
// 006de75c  837c241400           cmp dword ptr [esp + 0x14], 0
// 006de761  740c                 je 0x6de76f
// 006de763  6a01                 push 1
// 006de765  6a01                 push 1
// 006de767  50                   push eax
// 006de768  8bce                 mov ecx, esi
// 006de76a  e891e2ffff           call 0x6dca00
// 006de76f  5d                   pop ebp
// 006de770  5f                   pop edi
// 006de771  5b                   pop ebx
// 006de772  5e                   pop esi
// 006de773  83c408               add esp, 8
// 006de776  c20c00               ret 0xc
// 006de779  8d4900               lea ecx, [ecx]
// 006de77c  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 006de77d  e66d                 out 0x6d, al
// 006de77f  00d4                 add ah, dl
// 006de781  e66d                 out 0x6d, al
// 006de783  0000                 add byte ptr [eax], al
// 006de785  0001                 add byte ptr [ecx], al
// 006de787  0101                 add dword ptr [ecx], eax
// 006de789  0001                 add byte ptr [ecx], al
// library xtp-11.2.2-lib-strlen/Source\Controls\XTTreeBase.cpp (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTTreeBase.cpp
