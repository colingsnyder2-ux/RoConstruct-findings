// roc 2009-12 00896240  unit: CXTPRibbonBar  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896240
//
// 00896240  6aff                 push -1
// 00896242  68ac179600           push 0x9617ac
// 00896247  64a100000000         mov eax, dword ptr fs:[0]
// 0089624d  50                   push eax
// 0089624e  53                   push ebx
// 0089624f  55                   push ebp
// 00896250  56                   push esi
// 00896251  57                   push edi
// 00896252  a10052b600           mov eax, dword ptr [0xb65200]
// 00896257  33c4                 xor eax, esp
// 00896259  50                   push eax
// 0089625a  8d442414             lea eax, [esp + 0x14]
// 0089625e  64a300000000         mov dword ptr fs:[0], eax
// 00896264  8bf9                 mov edi, ecx
// 00896266  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0089626a  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00896270  55                   push ebp
// 00896271  e88a10fbff           call 0x847300
// 00896276  8bf0                 mov esi, eax
// 00896278  85f6                 test esi, esi
// 0089627a  0f8590010000         jne 0x896410
// 00896280  39442428             cmp dword ptr [esp + 0x28], eax
// 00896284  0f8470010000         je 0x8963fa
// 0089628a  6878010000           push 0x178
// 0089628f  e8ccd5f5ff           call 0x7f3860
// 00896294  83c404               add esp, 4
// 00896297  89442424             mov dword ptr [esp + 0x24], eax
// 0089629b  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089629f  85c0                 test eax, eax
// 008962a1  7410                 je 0x8962b3
// 008962a3  8b8f80020000         mov ecx, dword ptr [edi + 0x280]
// 008962a9  51                   push ecx
// 008962aa  8bc8                 mov ecx, eax
// 008962ac  e8bfe7ffff           call 0x894a70
// 008962b1  eb02                 jmp 0x8962b5
// 008962b3  33c0                 xor eax, eax
// 008962b5  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008962bb  bb01000000           mov ebx, 1
// 008962c0  53                   push ebx
// 008962c1  6aff                 push -1
// 008962c3  6a00                 push 0
// 008962c5  55                   push ebp
// 008962c6  50                   push eax
// 008962c7  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008962cf  e81c1dfbff           call 0x847ff0
// 008962d4  8d4c2428             lea ecx, [esp + 0x28]
// 008962d8  8bf0                 mov esi, eax
// 008962da  ff1574de9800         call dword ptr [0x98de74]
// 008962e0  8bcf                 mov ecx, edi
// 008962e2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008962e6  e8a50df7ff           call 0x807090
// 008962eb  8b5020               mov edx, dword ptr [eax + 0x20]
// 008962ee  6a00                 push 0
// 008962f0  52                   push edx
// 008962f1  ff15f4cb9800         call dword ptr [0x98cbf4]
// 008962f7  50                   push eax
// 008962f8  e8eddbf5ff           call 0x7f3eea
// 008962fd  85c0                 test eax, eax
// 008962ff  744f                 je 0x896350
// 00896301  6a00                 push 0
// 00896303  8d4c242c             lea ecx, [esp + 0x2c]
// 00896307  51                   push ecx
// 00896308  55                   push ebp
// 00896309  8bc8                 mov ecx, eax
// 0089630b  e8bc040900           call 0x9267cc
// 00896310  6a00                 push 0
// 00896312  6a09                 push 9
// 00896314  8d4c2430             lea ecx, [esp + 0x30]
// 00896318  ff1580d69800         call dword ptr [0x98d680]
// 0089631e  85c0                 test eax, eax
// 00896320  7e2e                 jle 0x896350
// 00896322  50                   push eax
// 00896323  8d542428             lea edx, [esp + 0x28]
// 00896327  52                   push edx
// 00896328  8d4c2430             lea ecx, [esp + 0x30]
// 0089632c  ff1544cf9800         call dword ptr [0x98cf44]
// 00896332  50                   push eax
// 00896333  8d4c242c             lea ecx, [esp + 0x2c]
// 00896337  c644242002           mov byte ptr [esp + 0x20], 2
// 0089633c  ff1538d59800         call dword ptr [0x98d538]
// 00896342  8d4c2424             lea ecx, [esp + 0x24]
// 00896346  885c241c             mov byte ptr [esp + 0x1c], bl
// 0089634a  ff15c0de9800         call dword ptr [0x98dec0]
// 00896350  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00896356  85c9                 test ecx, ecx
// 00896358  741b                 je 0x896375
// 0089635a  6856fd9900           push 0x99fd56
// 0089635f  e8ac19f6ff           call 0x7f7d10
// 00896364  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0089636a  6a00                 push 0
// 0089636c  8d4848               lea ecx, [eax + 0x48]
// 0089636f  ff155cde9800         call dword ptr [0x98de5c]
// 00896375  6a00                 push 0
// 00896377  8d8eec000000         lea ecx, [esi + 0xec]
// 0089637d  ff155cde9800         call dword ptr [0x98de5c]
// 00896383  6856fd9900           push 0x99fd56
// 00896388  8bce                 mov ecx, esi
// 0089638a  e8a103f6ff           call 0x7f6730
// 0089638f  8d4c2428             lea ecx, [esp + 0x28]
// 00896393  ff1580de9800         call dword ptr [0x98de80]
// 00896399  50                   push eax
// 0089639a  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008963a0  ff155cde9800         call dword ptr [0x98de5c]
// 008963a6  8d4c2428             lea ecx, [esp + 0x28]
// 008963aa  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008963b2  ff15c0de9800         call dword ptr [0x98dec0]
// 008963b8  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008963bc  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008963bf  8b430c               mov eax, dword ptr [ebx + 0xc]
// 008963c2  8b6b08               mov ebp, dword ptr [ebx + 8]
// 008963c5  8b16                 mov edx, dword ptr [esi]
// 008963c7  8bf9                 mov edi, ecx
// 008963c9  2bf8                 sub edi, eax
// 008963cb  83ec10               sub esp, 0x10
// 008963ce  8bc4                 mov eax, esp
// 008963d0  03fd                 add edi, ebp
// 008963d2  8938                 mov dword ptr [eax], edi
// 008963d4  894804               mov dword ptr [eax + 4], ecx
// 008963d7  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008963da  896808               mov dword ptr [eax + 8], ebp
// 008963dd  89480c               mov dword ptr [eax + 0xc], ecx
// 008963e0  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008963e3  8bce                 mov ecx, esi
// 008963e5  ffd0                 call eax
// 008963e7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008963eb  2bfd                 sub edi, ebp
// 008963ed  017b08               add dword ptr [ebx + 8], edi
// 008963f0  8b16                 mov edx, dword ptr [esi]
// 008963f2  8b5268               mov edx, dword ptr [edx + 0x68]
// 008963f5  50                   push eax
// 008963f6  8bce                 mov ecx, esi
// 008963f8  ffd2                 call edx
// 008963fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008963fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00896405  59                   pop ecx
// 00896406  5f                   pop edi
// 00896407  5e                   pop esi
// 00896408  5d                   pop ebp
// 00896409  5b                   pop ebx
// 0089640a  83c40c               add esp, 0xc
// 0089640d  c21000               ret 0x10
// 00896410  837c242800           cmp dword ptr [esp + 0x28], 0
// 00896415  75a1                 jne 0x8963b8
// 00896417  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0089641d  8b01                 mov eax, dword ptr [ecx]
// 0089641f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00896422  56                   push esi
// 00896423  ebd3                 jmp 0x8963f8
// copied from an identical function in another client (function ?AddCaptionButton@CXTPRibbonBar@@IAEXHHHAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp