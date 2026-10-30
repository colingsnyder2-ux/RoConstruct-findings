// roc 2009-12 00872730  unit: CXTPRibbonTheme  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872730
//
// 00872730  6aff                 push -1
// 00872732  68f2fe9500           push 0x95fef2
// 00872737  64a100000000         mov eax, dword ptr fs:[0]
// 0087273d  50                   push eax
// 0087273e  83ec40               sub esp, 0x40
// 00872741  53                   push ebx
// 00872742  55                   push ebp
// 00872743  56                   push esi
// 00872744  57                   push edi
// 00872745  a10052b600           mov eax, dword ptr [0xb65200]
// 0087274a  33c4                 xor eax, esp
// 0087274c  50                   push eax
// 0087274d  8d442454             lea eax, [esp + 0x54]
// 00872751  64a300000000         mov dword ptr fs:[0], eax
// 00872757  8bf1                 mov esi, ecx
// 00872759  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0087275d  6a01                 push 1
// 0087275f  8bcf                 mov ecx, edi
// 00872761  e82a3d0b00           call 0x926490
// 00872766  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0087276a  50                   push eax
// 0087276b  8d4c2418             lea ecx, [esp + 0x18]
// 0087276f  e85c8bfdff           call 0x84b2d0
// 00872774  68bfdbff00           push 0xffdbbf
// 00872779  8d4c2418             lea ecx, [esp + 0x18]
// 0087277d  51                   push ecx
// 0087277e  8bcf                 mov ecx, edi
// 00872780  e8791ef8ff           call 0x7f45fe
// 00872785  6a03                 push 3
// 00872787  6a03                 push 3
// 00872789  8d54241c             lea edx, [esp + 0x1c]
// 0087278d  52                   push edx
// 0087278e  ff1558ca9800         call dword ptr [0x98ca58]
// 00872794  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00872798  e8636d0700           call 0x8e9500
// 0087279d  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008727a3  85c0                 test eax, eax
// 008727a5  746e                 je 0x872815
// 008727a7  50                   push eax
// 008727a8  8d442470             lea eax, [esp + 0x70]
// 008727ac  50                   push eax
// 008727ad  e8eee8ffff           call 0x8710a0
// 008727b2  83c408               add esp, 8
// 008727b5  8bc8                 mov ecx, eax
// 008727b7  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008727bf  ff1580de9800         call dword ptr [0x98de80]
// 008727c5  50                   push eax
// 008727c6  8d4c2468             lea ecx, [esp + 0x68]
// 008727ca  689c12a000           push 0xa0129c
// 008727cf  51                   push ecx
// 008727d0  e85be8ffff           call 0x871030
// 008727d5  83c40c               add esp, 0xc
// 008727d8  8bc8                 mov ecx, eax
// 008727da  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008727df  ff1580de9800         call dword ptr [0x98de80]
// 008727e5  50                   push eax
// 008727e6  8bce                 mov ecx, esi
// 008727e8  e813c50000           call 0x87ed00
// 008727ed  8d4c2464             lea ecx, [esp + 0x64]
// 008727f1  8bf0                 mov esi, eax
// 008727f3  ff15c0de9800         call dword ptr [0x98dec0]
// 008727f9  8d4c246c             lea ecx, [esp + 0x6c]
// 008727fd  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00872805  ff15c0de9800         call dword ptr [0x98dec0]
// 0087280b  85f6                 test esi, esi
// 0087280d  746d                 je 0x87287c
// 0087280f  8d542434             lea edx, [esp + 0x34]
// 00872813  eb16                 jmp 0x87282b
// 00872815  688c12a000           push 0xa0128c
// 0087281a  8bce                 mov ecx, esi
// 0087281c  e8dfc40000           call 0x87ed00
// 00872821  8bf0                 mov esi, eax
// 00872823  85f6                 test esi, esi
// 00872825  7455                 je 0x87287c
// 00872827  8d542444             lea edx, [esp + 0x44]
// 0087282b  6a01                 push 1
// 0087282d  6a00                 push 0
// 0087282f  bd08000000           mov ebp, 8
// 00872834  52                   push edx
// 00872835  8bce                 mov ecx, esi
// 00872837  8bdd                 mov ebx, ebp
// 00872839  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0087283d  e87ee00600           call 0x8e08c0
// 00872842  83ec10               sub esp, 0x10
// 00872845  8bcc                 mov ecx, esp
// 00872847  8919                 mov dword ptr [ecx], ebx
// 00872849  896904               mov dword ptr [ecx + 4], ebp
// 0087284c  8bd3                 mov edx, ebx
// 0087284e  895108               mov dword ptr [ecx + 8], edx
// 00872851  89510c               mov dword ptr [ecx + 0xc], edx
// 00872854  8b10                 mov edx, dword ptr [eax]
// 00872856  83ec10               sub esp, 0x10
// 00872859  8bcc                 mov ecx, esp
// 0087285b  8911                 mov dword ptr [ecx], edx
// 0087285d  8b5004               mov edx, dword ptr [eax + 4]
// 00872860  895104               mov dword ptr [ecx + 4], edx
// 00872863  8b5008               mov edx, dword ptr [eax + 8]
// 00872866  8b400c               mov eax, dword ptr [eax + 0xc]
// 00872869  895108               mov dword ptr [ecx + 8], edx
// 0087286c  89410c               mov dword ptr [ecx + 0xc], eax
// 0087286f  8d4c2434             lea ecx, [esp + 0x34]
// 00872873  51                   push ecx
// 00872874  57                   push edi
// 00872875  8bce                 mov ecx, esi
// 00872877  e814d90600           call 0x8e0190
// 0087287c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00872880  64890d00000000       mov dword ptr fs:[0], ecx
// 00872887  59                   pop ecx
// 00872888  5f                   pop edi
// 00872889  5e                   pop esi
// 0087288a  5d                   pop ebp
// 0087288b  5b                   pop ebx
// 0087288c  83c44c               add esp, 0x4c
// 0087288f  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillGroupPopupToolBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp