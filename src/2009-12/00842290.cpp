// roc 2009-12 00842290  unit: CXTPPopupBar  size: 1063 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00842290
//
// 00842290  6aff                 push -1
// 00842292  68e6cf9500           push 0x95cfe6
// 00842297  64a100000000         mov eax, dword ptr fs:[0]
// 0084229d  50                   push eax
// 0084229e  81ec9c000000         sub esp, 0x9c
// 008422a4  53                   push ebx
// 008422a5  55                   push ebp
// 008422a6  56                   push esi
// 008422a7  57                   push edi
// 008422a8  a10052b600           mov eax, dword ptr [0xb65200]
// 008422ad  33c4                 xor eax, esp
// 008422af  50                   push eax
// 008422b0  8d8424b0000000       lea eax, [esp + 0xb0]
// 008422b7  64a300000000         mov dword ptr fs:[0], eax
// 008422bd  8bf1                 mov esi, ecx
// 008422bf  33db                 xor ebx, ebx
// 008422c1  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 008422c7  0f85d0030000         jne 0x84269d
// 008422cd  395e20               cmp dword ptr [esi + 0x20], ebx
// 008422d0  0f84c7030000         je 0x84269d
// 008422d6  399ee0000000         cmp dword ptr [esi + 0xe0], ebx
// 008422dc  0f84bb030000         je 0x84269d
// 008422e2  8b06                 mov eax, dword ptr [esi]
// 008422e4  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 008422ea  ffd2                 call edx
// 008422ec  8b06                 mov eax, dword ptr [esi]
// 008422ee  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 008422f4  8bce                 mov ecx, esi
// 008422f6  ffd2                 call edx
// 008422f8  8b3e                 mov edi, dword ptr [esi]
// 008422fa  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00842300  53                   push ebx
// 00842301  53                   push ebx
// 00842302  8d44245c             lea eax, [esp + 0x5c]
// 00842306  50                   push eax
// 00842307  8bce                 mov ecx, esi
// 00842309  ffd2                 call edx
// 0084230b  8b4804               mov ecx, dword ptr [eax + 4]
// 0084230e  8b10                 mov edx, dword ptr [eax]
// 00842310  51                   push ecx
// 00842311  52                   push edx
// 00842312  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 00842318  8d44241c             lea eax, [esp + 0x1c]
// 0084231c  50                   push eax
// 0084231d  8bce                 mov ecx, esi
// 0084231f  ffd2                 call edx
// 00842321  56                   push esi
// 00842322  8d4c2474             lea ecx, [esp + 0x74]
// 00842326  e8458f0000           call 0x84b270
// 0084232b  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 00842331  7528                 jne 0x84235b
// 00842333  8d442470             lea eax, [esp + 0x70]
// 00842337  50                   push eax
// 00842338  8d4c2418             lea ecx, [esp + 0x18]
// 0084233c  51                   push ecx
// 0084233d  ff15bcca9800         call dword ptr [0x98cabc]
// 00842343  85c0                 test eax, eax
// 00842345  7414                 je 0x84235b
// 00842347  8b16                 mov edx, dword ptr [esi]
// 00842349  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0084234f  6a01                 push 1
// 00842351  53                   push ebx
// 00842352  8bce                 mov ecx, esi
// 00842354  ffd0                 call eax
// 00842356  e942030000           jmp 0x84269d
// 0084235b  8bce                 mov ecx, esi
// 0084235d  e86e21fcff           call 0x8044d0
// 00842362  8bce                 mov ecx, esi
// 00842364  8be8                 mov ebp, eax
// 00842366  e81520fdff           call 0x814380
// 0084236b  8bf8                 mov edi, eax
// 0084236d  897c2454             mov dword ptr [esp + 0x54], edi
// 00842371  3bfb                 cmp edi, ebx
// 00842373  740b                 je 0x842380
// 00842375  3beb                 cmp ebp, ebx
// 00842377  7407                 je 0x842380
// 00842379  8bcd                 mov ecx, ebp
// 0084237b  e85037fdff           call 0x815ad0
// 00842380  56                   push esi
// 00842381  e82ae10700           call 0x8c04b0
// 00842386  8bc8                 mov ecx, eax
// 00842388  e8d3e00700           call 0x8c0460
// 0084238d  33ed                 xor ebp, ebp
// 0084238f  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 00842395  0f8462020000         je 0x8425fd
// 0084239b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0084239f  33c9                 xor ecx, ecx
// 008423a1  3b542420             cmp edx, dword ptr [esp + 0x20]
// 008423a5  0f9cc1               setl cl
// 008423a8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008423ac  8bce                 mov ecx, esi
// 008423ae  e8bdfcffff           call 0x842070
// 008423b3  50                   push eax
// 008423b4  e807f5ffff           call 0x8418c0
// 008423b9  83c404               add esp, 4
// 008423bc  85c0                 test eax, eax
// 008423be  0f8427020000         je 0x8425eb
// 008423c4  8b2de4cb9800         mov ebp, dword ptr [0x98cbe4]
// 008423ca  ffd5                 call ebp
// 008423cc  50                   push eax
// 008423cd  e85817fbff           call 0x7f3b2a
// 008423d2  8bc8                 mov ecx, eax
// 008423d4  e8975afdff           call 0x817e70
// 008423d9  8bf8                 mov edi, eax
// 008423db  895c2428             mov dword ptr [esp + 0x28], ebx
// 008423df  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008423e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008423eb  2b442418             sub eax, dword ptr [esp + 0x18]
// 008423ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008423f3  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008423f7  50                   push eax
// 008423f8  51                   push ecx
// 008423f9  57                   push edi
// 008423fa  8d4c2430             lea ecx, [esp + 0x30]
// 008423fe  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00842405  e84678fcff           call 0x809c50
// 0084240a  8d542424             lea edx, [esp + 0x24]
// 0084240e  52                   push edx
// 0084240f  57                   push edi
// 00842410  8d4c2464             lea ecx, [esp + 0x64]
// 00842414  e867940000           call 0x84b880
// 00842419  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084241d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00842421  8b542420             mov edx, dword ptr [esp + 0x20]
// 00842425  682000cc00           push 0xcc0020
// 0084242a  50                   push eax
// 0084242b  51                   push ecx
// 0084242c  57                   push edi
// 0084242d  2bd0                 sub edx, eax
// 0084242f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00842433  52                   push edx
// 00842434  2bc1                 sub eax, ecx
// 00842436  50                   push eax
// 00842437  53                   push ebx
// 00842438  53                   push ebx
// 00842439  8d4c247c             lea ecx, [esp + 0x7c]
// 0084243d  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 00842445  e816bdfbff           call 0x7fe160
// 0084244a  57                   push edi
// 0084244b  ffd5                 call ebp
// 0084244d  50                   push eax
// 0084244e  e8d716fbff           call 0x7f3b2a
// 00842453  8bc8                 mov ecx, eax
// 00842455  e83641fbff           call 0x7f6590
// 0084245a  53                   push ebx
// 0084245b  8bce                 mov ecx, esi
// 0084245d  e8e616fbff           call 0x7f3b48
// 00842462  8bce                 mov ecx, esi
// 00842464  e8274cfcff           call 0x807090
// 00842469  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084246c  51                   push ecx
// 0084246d  ff15a4ca9800         call dword ptr [0x98caa4]
// 00842473  8b442418             mov eax, dword ptr [esp + 0x18]
// 00842477  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084247b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084247f  685c020000           push 0x25c
// 00842484  2bd0                 sub edx, eax
// 00842486  52                   push edx
// 00842487  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084248b  2bd1                 sub edx, ecx
// 0084248d  52                   push edx
// 0084248e  50                   push eax
// 0084248f  51                   push ecx
// 00842490  53                   push ebx
// 00842491  8bce                 mov ecx, esi
// 00842493  e89417fbff           call 0x7f3c2c
// 00842498  8bce                 mov ecx, esi
// 0084249a  e8f120fcff           call 0x804590
// 0084249f  8b10                 mov edx, dword ptr [eax]
// 008424a1  8bc8                 mov ecx, eax
// 008424a3  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 008424a9  56                   push esi
// 008424aa  ffd0                 call eax
// 008424ac  bd01000000           mov ebp, 1
// 008424b1  56                   push esi
// 008424b2  8d4c2434             lea ecx, [esp + 0x34]
// 008424b6  e8cf3f0e00           call 0x92648a
// 008424bb  56                   push esi
// 008424bc  8d4c2448             lea ecx, [esp + 0x48]
// 008424c0  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 008424c8  e8038e0000           call 0x84b2d0
// 008424cd  8d4c2430             lea ecx, [esp + 0x30]
// 008424d1  51                   push ecx
// 008424d2  e8399c0000           call 0x84c110
// 008424d7  8d542434             lea edx, [esp + 0x34]
// 008424db  53                   push ebx
// 008424dc  52                   push edx
// 008424dd  8bf8                 mov edi, eax
// 008424df  e85c9c0000           call 0x84c140
// 008424e4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008424e8  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 008424ec  8b542428             mov edx, dword ptr [esp + 0x28]
// 008424f0  2b542420             sub edx, dword ptr [esp + 0x20]
// 008424f4  83c40c               add esp, 0xc
// 008424f7  682000cc00           push 0xcc0020
// 008424fc  53                   push ebx
// 008424fd  53                   push ebx
// 008424fe  8d442468             lea eax, [esp + 0x68]
// 00842502  50                   push eax
// 00842503  51                   push ecx
// 00842504  52                   push edx
// 00842505  53                   push ebx
// 00842506  53                   push ebx
// 00842507  8d4c2450             lea ecx, [esp + 0x50]
// 0084250b  e850bcfbff           call 0x7fe160
// 00842510  8d442430             lea eax, [esp + 0x30]
// 00842514  57                   push edi
// 00842515  50                   push eax
// 00842516  e8259c0000           call 0x84c140
// 0084251b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0084251f  83c408               add esp, 8
// 00842522  8d4c2444             lea ecx, [esp + 0x44]
// 00842526  51                   push ecx
// 00842527  52                   push edx
// 00842528  8d8c2488000000       lea ecx, [esp + 0x88]
// 0084252f  e8fc8d0000           call 0x84b330
// 00842534  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00842538  8b16                 mov edx, dword ptr [esi]
// 0084253a  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 00842540  83ec10               sub esp, 0x10
// 00842543  8bc4                 mov eax, esp
// 00842545  8908                 mov dword ptr [eax], ecx
// 00842547  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0084254b  894804               mov dword ptr [eax + 4], ecx
// 0084254e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00842552  894808               mov dword ptr [eax + 8], ecx
// 00842555  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00842559  89480c               mov dword ptr [eax + 0xc], ecx
// 0084255c  8d842490000000       lea eax, [esp + 0x90]
// 00842563  50                   push eax
// 00842564  8bce                 mov ecx, esi
// 00842566  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 0084256e  ffd2                 call edx
// 00842570  8bce                 mov ecx, esi
// 00842572  e81920fcff           call 0x804590
// 00842577  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0084257b  8b10                 mov edx, dword ptr [eax]
// 0084257d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00842583  51                   push ecx
// 00842584  8d8c2484000000       lea ecx, [esp + 0x84]
// 0084258b  51                   push ecx
// 0084258c  8d4c2438             lea ecx, [esp + 0x38]
// 00842590  51                   push ecx
// 00842591  56                   push esi
// 00842592  8bc8                 mov ecx, eax
// 00842594  ffd2                 call edx
// 00842596  8d8c2480000000       lea ecx, [esp + 0x80]
// 0084259d  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 008425a5  e8968f0000           call 0x84b540
// 008425aa  8d4c2430             lea ecx, [esp + 0x30]
// 008425ae  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 008425b6  e8c93e0e00           call 0x926484
// 008425bb  8d4c245c             lea ecx, [esp + 0x5c]
// 008425bf  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 008425c6  e8c5930000           call 0x84b990
// 008425cb  8d4c2424             lea ecx, [esp + 0x24]
// 008425cf  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 008425da  c744242418229a00     mov dword ptr [esp + 0x24], 0x9a2218
// 008425e2  e849ccbcff           call 0x40f230
// 008425e7  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008425eb  6a02                 push 2
// 008425ed  e89edd0200           call 0x870390
// 008425f2  8bc8                 mov ecx, eax
// 008425f4  e887de0200           call 0x870480
// 008425f9  3beb                 cmp ebp, ebx
// 008425fb  7539                 jne 0x842636
// 008425fd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00842601  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00842605  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00842609  6854020000           push 0x254
// 0084260e  2bc8                 sub ecx, eax
// 00842610  51                   push ecx
// 00842611  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00842615  2bd1                 sub edx, ecx
// 00842617  52                   push edx
// 00842618  50                   push eax
// 00842619  51                   push ecx
// 0084261a  53                   push ebx
// 0084261b  8bce                 mov ecx, esi
// 0084261d  e80a16fbff           call 0x7f3c2c
// 00842622  8bce                 mov ecx, esi
// 00842624  e8671ffcff           call 0x804590
// 00842629  8b10                 mov edx, dword ptr [eax]
// 0084262b  8bc8                 mov ecx, eax
// 0084262d  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00842633  56                   push esi
// 00842634  ffd0                 call eax
// 00842636  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 0084263d  751c                 jne 0x84265b
// 0084263f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 00842645  7414                 je 0x84265b
// 00842647  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0084264d  51                   push ecx
// 0084264e  56                   push esi
// 0084264f  e85cde0700           call 0x8c04b0
// 00842654  8bc8                 mov ecx, eax
// 00842656  e855e80700           call 0x8c0eb0
// 0084265b  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00842661  3bcb                 cmp ecx, ebx
// 00842663  740a                 je 0x84266f
// 00842665  8b11                 mov edx, dword ptr [ecx]
// 00842667  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0084266d  ffd0                 call eax
// 0084266f  8b16                 mov edx, dword ptr [esi]
// 00842671  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00842677  6a01                 push 1
// 00842679  53                   push ebx
// 0084267a  8bce                 mov ecx, esi
// 0084267c  ffd0                 call eax
// 0084267e  3bfb                 cmp edi, ebx
// 00842680  7415                 je 0x842697
// 00842682  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00842685  53                   push ebx
// 00842686  68cacc0000           push 0xccca
// 0084268b  6813010000           push 0x113
// 00842690  51                   push ecx
// 00842691  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00842697  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 0084269d  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008426a4  64890d00000000       mov dword ptr fs:[0], ecx
// 008426ab  59                   pop ecx
// 008426ac  5f                   pop edi
// 008426ad  5e                   pop esi
// 008426ae  5d                   pop ebp
// 008426af  5b                   pop ebx
// 008426b0  81c4a8000000         add esp, 0xa8
// 008426b6  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp