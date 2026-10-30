// roc 2011-06 008474c0  unit: CRobloxTreeCtrl  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008474c0
//
// 008474c0  6aff                 push -1
// 008474c2  68c454a000           push 0xa054c4
// 008474c7  64a100000000         mov eax, dword ptr fs:[0]
// 008474cd  50                   push eax
// 008474ce  83ec10               sub esp, 0x10
// 008474d1  53                   push ebx
// 008474d2  55                   push ebp
// 008474d3  56                   push esi
// 008474d4  57                   push edi
// 008474d5  a12058c900           mov eax, dword ptr [0xc95820]
// 008474da  33c4                 xor eax, esp
// 008474dc  50                   push eax
// 008474dd  8d442424             lea eax, [esp + 0x24]
// 008474e1  64a300000000         mov dword ptr fs:[0], eax
// 008474e7  8bd9                 mov ebx, ecx
// 008474e9  8b742440             mov esi, dword ptr [esp + 0x40]
// 008474ed  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 008474f0  56                   push esi
// 008474f1  e880531800           call 0x9cc876
// 008474f6  85c0                 test eax, eax
// 008474f8  7460                 je 0x84755a
// 008474fa  8b442434             mov eax, dword ptr [esp + 0x34]
// 008474fe  50                   push eax
// 008474ff  8d4c2418             lea ecx, [esp + 0x18]
// 00847503  ff15002ea400         call dword ptr [0xa42e00]
// 00847509  8d4c2414             lea ecx, [esp + 0x14]
// 0084750d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00847515  ff15a826a400         call dword ptr [0xa426a8]
// 0084751b  89442418             mov dword ptr [esp + 0x18], eax
// 0084751f  85c0                 test eax, eax
// 00847521  742d                 je 0x847550
// 00847523  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00847527  85ff                 test edi, edi
// 00847529  750a                 jne 0x847535
// 0084752b  8d4c2414             lea ecx, [esp + 0x14]
// 0084752f  ff15e428a400         call dword ptr [0xa428e4]
// 00847535  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00847538  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084753b  56                   push esi
// 0084753c  6a04                 push 4
// 0084753e  680a110000           push 0x110a
// 00847543  51                   push ecx
// 00847544  ff15c019a400         call dword ptr [0xa419c0]
// 0084754a  8be8                 mov ebp, eax
// 0084754c  85ed                 test ebp, ebp
// 0084754e  7526                 jne 0x847576
// 00847550  8d4c2414             lea ecx, [esp + 0x14]
// 00847554  ff15082ea400         call dword ptr [0xa42e08]
// 0084755a  33c0                 xor eax, eax
// 0084755c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00847560  64890d00000000       mov dword ptr fs:[0], ecx
// 00847567  59                   pop ecx
// 00847568  5f                   pop edi
// 00847569  5e                   pop esi
// 0084756a  5d                   pop ebp
// 0084756b  5b                   pop ebx
// 0084756c  83c41c               add esp, 0x1c
// 0084756f  c21000               ret 0x10
// 00847572  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00847576  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00847579  55                   push ebp
// 0084757a  e8f7521800           call 0x9cc876
// 0084757f  85c0                 test eax, eax
// 00847581  741f                 je 0x8475a2
// 00847583  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00847587  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084758b  8b13                 mov edx, dword ptr [ebx]
// 0084758d  8b5218               mov edx, dword ptr [edx + 0x18]
// 00847590  55                   push ebp
// 00847591  50                   push eax
// 00847592  57                   push edi
// 00847593  51                   push ecx
// 00847594  8bcb                 mov ecx, ebx
// 00847596  ffd2                 call edx
// 00847598  8bf0                 mov esi, eax
// 0084759a  85f6                 test esi, esi
// 0084759c  0f85ab010000         jne 0x84774d
// 008475a2  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 008475a5  55                   push ebp
// 008475a6  8d442444             lea eax, [esp + 0x44]
// 008475aa  50                   push eax
// 008475ab  e8cc521800           call 0x9cc87c
// 008475b0  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008475b5  85ff                 test edi, edi
// 008475b7  750a                 jne 0x8475c3
// 008475b9  8d4c2440             lea ecx, [esp + 0x40]
// 008475bd  ff15e428a400         call dword ptr [0xa428e4]
// 008475c3  6a00                 push 0
// 008475c5  8d4c2418             lea ecx, [esp + 0x18]
// 008475c9  ff15c82da400         call dword ptr [0xa42dc8]
// 008475cf  50                   push eax
// 008475d0  8d4c2448             lea ecx, [esp + 0x48]
// 008475d4  ff15a428a400         call dword ptr [0xa428a4]
// 008475da  8bf8                 mov edi, eax
// 008475dc  83ffff               cmp edi, -1
// 008475df  0f8435010000         je 0x84771a
// 008475e5  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008475ea  0f841c010000         je 0x84770c
// 008475f0  85ff                 test edi, edi
// 008475f2  7467                 je 0x84765b
// 008475f4  8d77ff               lea esi, [edi - 1]
// 008475f7  56                   push esi
// 008475f8  8d4c2444             lea ecx, [esp + 0x44]
// 008475fc  ff153c25a400         call dword ptr [0xa4253c]
// 00847602  0fbec8               movsx ecx, al
// 00847605  51                   push ecx
// 00847606  ff156407a400         call dword ptr [0xa40764]
// 0084760c  83c404               add esp, 4
// 0084760f  85c0                 test eax, eax
// 00847611  750f                 jne 0x847622
// 00847613  56                   push esi
// 00847614  8d4c2444             lea ecx, [esp + 0x44]
// 00847618  ff153c25a400         call dword ptr [0xa4253c]
// 0084761e  3c5f                 cmp al, 0x5f
// 00847620  7539                 jne 0x84765b
// 00847622  8d4c2440             lea ecx, [esp + 0x40]
// 00847626  ff15a826a400         call dword ptr [0xa426a8]
// 0084762c  2bc7                 sub eax, edi
// 0084762e  2b442418             sub eax, dword ptr [esp + 0x18]
// 00847632  8d54241c             lea edx, [esp + 0x1c]
// 00847636  50                   push eax
// 00847637  52                   push edx
// 00847638  8d4c2448             lea ecx, [esp + 0x48]
// 0084763c  ff154829a400         call dword ptr [0xa42948]
// 00847642  50                   push eax
// 00847643  8d4c2444             lea ecx, [esp + 0x44]
// 00847647  c644243002           mov byte ptr [esp + 0x30], 2
// 0084764c  ff156425a400         call dword ptr [0xa42564]
// 00847652  8d4c241c             lea ecx, [esp + 0x1c]
// 00847656  e982000000           jmp 0x8476dd
// 0084765b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084765f  8d4c2440             lea ecx, [esp + 0x40]
// 00847663  8d3407               lea esi, [edi + eax]
// 00847666  ff15a826a400         call dword ptr [0xa426a8]
// 0084766c  3bc6                 cmp eax, esi
// 0084766e  0f8e98000000         jle 0x84770c
// 00847674  56                   push esi
// 00847675  8d4c2444             lea ecx, [esp + 0x44]
// 00847679  ff153c25a400         call dword ptr [0xa4253c]
// 0084767f  0fbec8               movsx ecx, al
// 00847682  51                   push ecx
// 00847683  ff156407a400         call dword ptr [0xa40764]
// 00847689  83c404               add esp, 4
// 0084768c  85c0                 test eax, eax
// 0084768e  750f                 jne 0x84769f
// 00847690  56                   push esi
// 00847691  8d4c2444             lea ecx, [esp + 0x44]
// 00847695  ff153c25a400         call dword ptr [0xa4253c]
// 0084769b  3c5f                 cmp al, 0x5f
// 0084769d  756d                 jne 0x84770c
// 0084769f  8d4c2440             lea ecx, [esp + 0x40]
// 008476a3  ff15a826a400         call dword ptr [0xa426a8]
// 008476a9  8bf0                 mov esi, eax
// 008476ab  8d4c2414             lea ecx, [esp + 0x14]
// 008476af  2bf7                 sub esi, edi
// 008476b1  ff15a826a400         call dword ptr [0xa426a8]
// 008476b7  2bf0                 sub esi, eax
// 008476b9  56                   push esi
// 008476ba  8d542424             lea edx, [esp + 0x24]
// 008476be  52                   push edx
// 008476bf  8d4c2448             lea ecx, [esp + 0x48]
// 008476c3  ff154829a400         call dword ptr [0xa42948]
// 008476c9  50                   push eax
// 008476ca  8d4c2444             lea ecx, [esp + 0x44]
// 008476ce  c644243003           mov byte ptr [esp + 0x30], 3
// 008476d3  ff156425a400         call dword ptr [0xa42564]
// 008476d9  8d4c2420             lea ecx, [esp + 0x20]
// 008476dd  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008476e2  ff15082ea400         call dword ptr [0xa42e08]
// 008476e8  6a00                 push 0
// 008476ea  8d4c2418             lea ecx, [esp + 0x18]
// 008476ee  ff15c82da400         call dword ptr [0xa42dc8]
// 008476f4  50                   push eax
// 008476f5  8d4c2448             lea ecx, [esp + 0x48]
// 008476f9  ff15a428a400         call dword ptr [0xa428a4]
// 008476ff  8bf8                 mov edi, eax
// 00847701  83ffff               cmp edi, -1
// 00847704  0f85dbfeffff         jne 0x8475e5
// 0084770a  eb0e                 jmp 0x84771a
// 0084770c  8b03                 mov eax, dword ptr [ebx]
// 0084770e  8b5068               mov edx, dword ptr [eax + 0x68]
// 00847711  55                   push ebp
// 00847712  8bcb                 mov ecx, ebx
// 00847714  ffd2                 call edx
// 00847716  85c0                 test eax, eax
// 00847718  7544                 jne 0x84775e
// 0084771a  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0084771d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847720  55                   push ebp
// 00847721  6a01                 push 1
// 00847723  680a110000           push 0x110a
// 00847728  50                   push eax
// 00847729  ff15c019a400         call dword ptr [0xa419c0]
// 0084772f  8d4c2440             lea ecx, [esp + 0x40]
// 00847733  8be8                 mov ebp, eax
// 00847735  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0084773a  ff15082ea400         call dword ptr [0xa42e08]
// 00847740  85ed                 test ebp, ebp
// 00847742  0f852afeffff         jne 0x847572
// 00847748  e903feffff           jmp 0x847550
// 0084774d  8d4c2414             lea ecx, [esp + 0x14]
// 00847751  ff15082ea400         call dword ptr [0xa42e08]
// 00847757  8bc6                 mov eax, esi
// 00847759  e9fefdffff           jmp 0x84755c
// 0084775e  8d4c2440             lea ecx, [esp + 0x40]
// 00847762  ff15082ea400         call dword ptr [0xa42e08]
// 00847768  8d4c2414             lea ecx, [esp + 0x14]
// 0084776c  ff15082ea400         call dword ptr [0xa42e08]
// 00847772  8bc5                 mov eax, ebp
// 00847774  e9e3fdffff           jmp 0x84755c
// copied from an identical function in another client (function ?FindItemInBranch@CXTTreeBase@@UAEPAU_TREEITEM@@PBDHHPAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp