// roc 2009-06 007674b0  unit: CXTPPopupBar  size: 1063 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007674b0
//
// 007674b0  6aff                 push -1
// 007674b2  68c68c8700           push 0x878cc6
// 007674b7  64a100000000         mov eax, dword ptr fs:[0]
// 007674bd  50                   push eax
// 007674be  81ec9c000000         sub esp, 0x9c
// 007674c4  53                   push ebx
// 007674c5  55                   push ebp
// 007674c6  56                   push esi
// 007674c7  57                   push edi
// 007674c8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007674cd  33c4                 xor eax, esp
// 007674cf  50                   push eax
// 007674d0  8d8424b0000000       lea eax, [esp + 0xb0]
// 007674d7  64a300000000         mov dword ptr fs:[0], eax
// 007674dd  8bf1                 mov esi, ecx
// 007674df  33db                 xor ebx, ebx
// 007674e1  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 007674e7  0f85d0030000         jne 0x7678bd
// 007674ed  395e20               cmp dword ptr [esi + 0x20], ebx
// 007674f0  0f84c7030000         je 0x7678bd
// 007674f6  399ee0000000         cmp dword ptr [esi + 0xe0], ebx
// 007674fc  0f84bb030000         je 0x7678bd
// 00767502  8b06                 mov eax, dword ptr [esi]
// 00767504  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 0076750a  ffd2                 call edx
// 0076750c  8b06                 mov eax, dword ptr [esi]
// 0076750e  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 00767514  8bce                 mov ecx, esi
// 00767516  ffd2                 call edx
// 00767518  8b3e                 mov edi, dword ptr [esi]
// 0076751a  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00767520  53                   push ebx
// 00767521  53                   push ebx
// 00767522  8d44245c             lea eax, [esp + 0x5c]
// 00767526  50                   push eax
// 00767527  8bce                 mov ecx, esi
// 00767529  ffd2                 call edx
// 0076752b  8b4804               mov ecx, dword ptr [eax + 4]
// 0076752e  8b10                 mov edx, dword ptr [eax]
// 00767530  51                   push ecx
// 00767531  52                   push edx
// 00767532  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 00767538  8d44241c             lea eax, [esp + 0x1c]
// 0076753c  50                   push eax
// 0076753d  8bce                 mov ecx, esi
// 0076753f  ffd2                 call edx
// 00767541  56                   push esi
// 00767542  8d4c2474             lea ecx, [esp + 0x74]
// 00767546  e8258f0000           call 0x770470
// 0076754b  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 00767551  7528                 jne 0x76757b
// 00767553  8d442470             lea eax, [esp + 0x70]
// 00767557  50                   push eax
// 00767558  8d4c2418             lea ecx, [esp + 0x18]
// 0076755c  51                   push ecx
// 0076755d  ff15acee8900         call dword ptr [0x89eeac]
// 00767563  85c0                 test eax, eax
// 00767565  7414                 je 0x76757b
// 00767567  8b16                 mov edx, dword ptr [esi]
// 00767569  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0076756f  6a01                 push 1
// 00767571  53                   push ebx
// 00767572  8bce                 mov ecx, esi
// 00767574  ffd0                 call eax
// 00767576  e942030000           jmp 0x7678bd
// 0076757b  8bce                 mov ecx, esi
// 0076757d  e80e5efcff           call 0x72d390
// 00767582  8bce                 mov ecx, esi
// 00767584  8be8                 mov ebp, eax
// 00767586  e80521fcff           call 0x729690
// 0076758b  8bf8                 mov edi, eax
// 0076758d  897c2454             mov dword ptr [esp + 0x54], edi
// 00767591  3bfb                 cmp edi, ebx
// 00767593  740b                 je 0x7675a0
// 00767595  3beb                 cmp ebp, ebx
// 00767597  7407                 je 0x7675a0
// 00767599  8bcd                 mov ecx, ebp
// 0076759b  e88038fcff           call 0x72ae20
// 007675a0  56                   push esi
// 007675a1  e83ae40700           call 0x7e59e0
// 007675a6  8bc8                 mov ecx, eax
// 007675a8  e8e3e30700           call 0x7e5990
// 007675ad  33ed                 xor ebp, ebp
// 007675af  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 007675b5  0f8462020000         je 0x76781d
// 007675bb  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007675bf  33c9                 xor ecx, ecx
// 007675c1  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007675c5  0f9cc1               setl cl
// 007675c8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007675cc  8bce                 mov ecx, esi
// 007675ce  e8bdfcffff           call 0x767290
// 007675d3  50                   push eax
// 007675d4  e807f5ffff           call 0x766ae0
// 007675d9  83c404               add esp, 4
// 007675dc  85c0                 test eax, eax
// 007675de  0f8427020000         je 0x76780b
// 007675e4  8b2de8ec8900         mov ebp, dword ptr [0x89ece8]
// 007675ea  ffd5                 call ebp
// 007675ec  50                   push eax
// 007675ed  e81017fbff           call 0x718d02
// 007675f2  8bc8                 mov ecx, eax
// 007675f4  e85759fdff           call 0x73cf50
// 007675f9  8bf8                 mov edi, eax
// 007675fb  895c2428             mov dword ptr [esp + 0x28], ebx
// 007675ff  c744242464f68a00     mov dword ptr [esp + 0x24], 0x8af664
// 00767607  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076760b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0076760f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00767613  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00767617  50                   push eax
// 00767618  51                   push ecx
// 00767619  57                   push edi
// 0076761a  8d4c2430             lea ecx, [esp + 0x30]
// 0076761e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00767625  e876b5fcff           call 0x732ba0
// 0076762a  8d542424             lea edx, [esp + 0x24]
// 0076762e  52                   push edx
// 0076762f  57                   push edi
// 00767630  8d4c2464             lea ecx, [esp + 0x64]
// 00767634  e847940000           call 0x770a80
// 00767639  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076763d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00767641  8b542420             mov edx, dword ptr [esp + 0x20]
// 00767645  682000cc00           push 0xcc0020
// 0076764a  50                   push eax
// 0076764b  51                   push ecx
// 0076764c  57                   push edi
// 0076764d  2bd0                 sub edx, eax
// 0076764f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00767653  52                   push edx
// 00767654  2bc1                 sub eax, ecx
// 00767656  50                   push eax
// 00767657  53                   push ebx
// 00767658  53                   push ebx
// 00767659  8d4c247c             lea ecx, [esp + 0x7c]
// 0076765d  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 00767665  e846bcfbff           call 0x7232b0
// 0076766a  57                   push edi
// 0076766b  ffd5                 call ebp
// 0076766d  50                   push eax
// 0076766e  e88f16fbff           call 0x718d02
// 00767673  8bc8                 mov ecx, eax
// 00767675  e80688fbff           call 0x71fe80
// 0076767a  53                   push ebx
// 0076767b  8bce                 mov ecx, esi
// 0076767d  e89e16fbff           call 0x718d20
// 00767682  8bce                 mov ecx, esi
// 00767684  e8a788fcff           call 0x72ff30
// 00767689  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0076768c  51                   push ecx
// 0076768d  ff15b4ee8900         call dword ptr [0x89eeb4]
// 00767693  8b442418             mov eax, dword ptr [esp + 0x18]
// 00767697  8b542420             mov edx, dword ptr [esp + 0x20]
// 0076769b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076769f  685c020000           push 0x25c
// 007676a4  2bd0                 sub edx, eax
// 007676a6  52                   push edx
// 007676a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 007676ab  2bd1                 sub edx, ecx
// 007676ad  52                   push edx
// 007676ae  50                   push eax
// 007676af  51                   push ecx
// 007676b0  53                   push ebx
// 007676b1  8bce                 mov ecx, esi
// 007676b3  e84c17fbff           call 0x718e04
// 007676b8  8bce                 mov ecx, esi
// 007676ba  e8915dfcff           call 0x72d450
// 007676bf  8b10                 mov edx, dword ptr [eax]
// 007676c1  8bc8                 mov ecx, eax
// 007676c3  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 007676c9  56                   push esi
// 007676ca  ffd0                 call eax
// 007676cc  bd01000000           mov ebp, 1
// 007676d1  56                   push esi
// 007676d2  8d4c2434             lea ecx, [esp + 0x34]
// 007676d6  e81f480e00           call 0x84befa
// 007676db  56                   push esi
// 007676dc  8d4c2448             lea ecx, [esp + 0x48]
// 007676e0  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 007676e8  e8e38d0000           call 0x7704d0
// 007676ed  8d4c2430             lea ecx, [esp + 0x30]
// 007676f1  51                   push ecx
// 007676f2  e8199c0000           call 0x771310
// 007676f7  8d542434             lea edx, [esp + 0x34]
// 007676fb  53                   push ebx
// 007676fc  52                   push edx
// 007676fd  8bf8                 mov edi, eax
// 007676ff  e83c9c0000           call 0x771340
// 00767704  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00767708  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0076770c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00767710  2b542420             sub edx, dword ptr [esp + 0x20]
// 00767714  83c40c               add esp, 0xc
// 00767717  682000cc00           push 0xcc0020
// 0076771c  53                   push ebx
// 0076771d  53                   push ebx
// 0076771e  8d442468             lea eax, [esp + 0x68]
// 00767722  50                   push eax
// 00767723  51                   push ecx
// 00767724  52                   push edx
// 00767725  53                   push ebx
// 00767726  53                   push ebx
// 00767727  8d4c2450             lea ecx, [esp + 0x50]
// 0076772b  e880bbfbff           call 0x7232b0
// 00767730  8d442430             lea eax, [esp + 0x30]
// 00767734  57                   push edi
// 00767735  50                   push eax
// 00767736  e8059c0000           call 0x771340
// 0076773b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0076773f  83c408               add esp, 8
// 00767742  8d4c2444             lea ecx, [esp + 0x44]
// 00767746  51                   push ecx
// 00767747  52                   push edx
// 00767748  8d8c2488000000       lea ecx, [esp + 0x88]
// 0076774f  e8dc8d0000           call 0x770530
// 00767754  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00767758  8b16                 mov edx, dword ptr [esi]
// 0076775a  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 00767760  83ec10               sub esp, 0x10
// 00767763  8bc4                 mov eax, esp
// 00767765  8908                 mov dword ptr [eax], ecx
// 00767767  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0076776b  894804               mov dword ptr [eax + 4], ecx
// 0076776e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00767772  894808               mov dword ptr [eax + 8], ecx
// 00767775  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00767779  89480c               mov dword ptr [eax + 0xc], ecx
// 0076777c  8d842490000000       lea eax, [esp + 0x90]
// 00767783  50                   push eax
// 00767784  8bce                 mov ecx, esi
// 00767786  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 0076778e  ffd2                 call edx
// 00767790  8bce                 mov ecx, esi
// 00767792  e8b95cfcff           call 0x72d450
// 00767797  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0076779b  8b10                 mov edx, dword ptr [eax]
// 0076779d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 007677a3  51                   push ecx
// 007677a4  8d8c2484000000       lea ecx, [esp + 0x84]
// 007677ab  51                   push ecx
// 007677ac  8d4c2438             lea ecx, [esp + 0x38]
// 007677b0  51                   push ecx
// 007677b1  56                   push esi
// 007677b2  8bc8                 mov ecx, eax
// 007677b4  ffd2                 call edx
// 007677b6  8d8c2480000000       lea ecx, [esp + 0x80]
// 007677bd  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 007677c5  e8768f0000           call 0x770740
// 007677ca  8d4c2430             lea ecx, [esp + 0x30]
// 007677ce  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007677d6  e819470e00           call 0x84bef4
// 007677db  8d4c245c             lea ecx, [esp + 0x5c]
// 007677df  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 007677e6  e8a5930000           call 0x770b90
// 007677eb  8d4c2424             lea ecx, [esp + 0x24]
// 007677ef  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 007677fa  c744242464f68a00     mov dword ptr [esp + 0x24], 0x8af664
// 00767802  e8c97ccaff           call 0x40f4d0
// 00767807  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0076780b  6a02                 push 2
// 0076780d  e82e4a0300           call 0x79c240
// 00767812  8bc8                 mov ecx, eax
// 00767814  e8174b0300           call 0x79c330
// 00767819  3beb                 cmp ebp, ebx
// 0076781b  7539                 jne 0x767856
// 0076781d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00767821  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00767825  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00767829  6854020000           push 0x254
// 0076782e  2bc8                 sub ecx, eax
// 00767830  51                   push ecx
// 00767831  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00767835  2bd1                 sub edx, ecx
// 00767837  52                   push edx
// 00767838  50                   push eax
// 00767839  51                   push ecx
// 0076783a  53                   push ebx
// 0076783b  8bce                 mov ecx, esi
// 0076783d  e8c215fbff           call 0x718e04
// 00767842  8bce                 mov ecx, esi
// 00767844  e8075cfcff           call 0x72d450
// 00767849  8b10                 mov edx, dword ptr [eax]
// 0076784b  8bc8                 mov ecx, eax
// 0076784d  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00767853  56                   push esi
// 00767854  ffd0                 call eax
// 00767856  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 0076785d  751c                 jne 0x76787b
// 0076785f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 00767865  7414                 je 0x76787b
// 00767867  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0076786d  51                   push ecx
// 0076786e  56                   push esi
// 0076786f  e86ce10700           call 0x7e59e0
// 00767874  8bc8                 mov ecx, eax
// 00767876  e865eb0700           call 0x7e63e0
// 0076787b  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00767881  3bcb                 cmp ecx, ebx
// 00767883  740a                 je 0x76788f
// 00767885  8b11                 mov edx, dword ptr [ecx]
// 00767887  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0076788d  ffd0                 call eax
// 0076788f  8b16                 mov edx, dword ptr [esi]
// 00767891  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00767897  6a01                 push 1
// 00767899  53                   push ebx
// 0076789a  8bce                 mov ecx, esi
// 0076789c  ffd0                 call eax
// 0076789e  3bfb                 cmp edi, ebx
// 007678a0  7415                 je 0x7678b7
// 007678a2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007678a5  53                   push ebx
// 007678a6  68cacc0000           push 0xccca
// 007678ab  6813010000           push 0x113
// 007678b0  51                   push ecx
// 007678b1  ff159cee8900         call dword ptr [0x89ee9c]
// 007678b7  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 007678bd  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007678c4  64890d00000000       mov dword ptr fs:[0], ecx
// 007678cb  59                   pop ecx
// 007678cc  5f                   pop edi
// 007678cd  5e                   pop esi
// 007678ce  5d                   pop ebp
// 007678cf  5b                   pop ebx
// 007678d0  81c4a8000000         add esp, 0xa8
// 007678d6  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp