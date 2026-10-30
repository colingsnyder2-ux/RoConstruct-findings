// roc 2011-06 00902360  unit: CXTCaptionButtonTheme  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00902360
//
// 00902360  6aff                 push -1
// 00902362  6859f7a000           push 0xa0f759
// 00902367  64a100000000         mov eax, dword ptr fs:[0]
// 0090236d  50                   push eax
// 0090236e  83ec1c               sub esp, 0x1c
// 00902371  53                   push ebx
// 00902372  55                   push ebp
// 00902373  56                   push esi
// 00902374  57                   push edi
// 00902375  a12058c900           mov eax, dword ptr [0xc95820]
// 0090237a  33c4                 xor eax, esp
// 0090237c  50                   push eax
// 0090237d  8d442430             lea eax, [esp + 0x30]
// 00902381  64a300000000         mov dword ptr fs:[0], eax
// 00902387  8be9                 mov ebp, ecx
// 00902389  8d4c2414             lea ecx, [esp + 0x14]
// 0090238d  ff15b42da400         call dword ptr [0xa42db4]
// 00902393  8b742454             mov esi, dword ptr [esp + 0x54]
// 00902397  8d442414             lea eax, [esp + 0x14]
// 0090239b  50                   push eax
// 0090239c  8bce                 mov ecx, esi
// 0090239e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 009023a6  e89b82f0ff           call 0x80a646
// 009023ab  e8d0c9f5ff           call 0x85ed80
// 009023b0  8d4c2414             lea ecx, [esp + 0x14]
// 009023b4  51                   push ecx
// 009023b5  e8269af5ff           call 0x85bde0
// 009023ba  83c404               add esp, 4
// 009023bd  8d542418             lea edx, [esp + 0x18]
// 009023c1  52                   push edx
// 009023c2  8d4c2418             lea ecx, [esp + 0x18]
// 009023c6  ff15a826a400         call dword ptr [0xa426a8]
// 009023cc  50                   push eax
// 009023cd  8d4c241c             lea ecx, [esp + 0x1c]
// 009023d1  ff15c82da400         call dword ptr [0xa42dc8]
// 009023d7  50                   push eax
// 009023d8  8b442450             mov eax, dword ptr [esp + 0x50]
// 009023dc  8b4808               mov ecx, dword ptr [eax + 8]
// 009023df  51                   push ecx
// 009023e0  ff153801a400         call dword ptr [0xa40138]
// 009023e6  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 009023ea  8b17                 mov edx, dword ptr [edi]
// 009023ec  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 009023f0  8913                 mov dword ptr [ebx], edx
// 009023f2  8b4704               mov eax, dword ptr [edi + 4]
// 009023f5  8bce                 mov ecx, esi
// 009023f7  894304               mov dword ptr [ebx + 4], eax
// 009023fa  e819a20c00           call 0x9cc618
// 009023ff  837e7800             cmp dword ptr [esi + 0x78], 0
// 00902403  89442454             mov dword ptr [esp + 0x54], eax
// 00902407  7418                 je 0x902421
// 00902409  8d4c2418             lea ecx, [esp + 0x18]
// 0090240d  51                   push ecx
// 0090240e  8bce                 mov ecx, esi
// 00902410  e88b08ffff           call 0x8f2ca0
// 00902415  8b10                 mov edx, dword ptr [eax]
// 00902417  8913                 mov dword ptr [ebx], edx
// 00902419  8b4004               mov eax, dword ptr [eax + 4]
// 0090241c  e980010000           jmp 0x9025a1
// 00902421  8b4d00               mov ecx, dword ptr [ebp]
// 00902424  8d542420             lea edx, [esp + 0x20]
// 00902428  894c2444             mov dword ptr [esp + 0x44], ecx
// 0090242c  52                   push edx
// 0090242d  8bce                 mov ecx, esi
// 0090242f  e82c08ffff           call 0x8f2c60
// 00902434  8b4804               mov ecx, dword ptr [eax + 4]
// 00902437  8b10                 mov edx, dword ptr [eax]
// 00902439  8b442444             mov eax, dword ptr [esp + 0x44]
// 0090243d  56                   push esi
// 0090243e  51                   push ecx
// 0090243f  52                   push edx
// 00902440  8b5040               mov edx, dword ptr [eax + 0x40]
// 00902443  53                   push ebx
// 00902444  8bcd                 mov ecx, ebp
// 00902446  ffd2                 call edx
// 00902448  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0090244b  8903                 mov dword ptr [ebx], eax
// 0090244d  8b16                 mov edx, dword ptr [esi]
// 0090244f  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00902455  8bce                 mov ecx, esi
// 00902457  ffd0                 call eax
// 00902459  8d4c2414             lea ecx, [esp + 0x14]
// 0090245d  a804                 test al, 4
// 0090245f  0f84af000000         je 0x902514
// 00902465  ff15b026a400         call dword ptr [0xa426b0]
// 0090246b  84c0                 test al, al
// 0090246d  751a                 jne 0x902489
// 0090246f  8b4670               mov eax, dword ptr [esi + 0x70]
// 00902472  99                   cdq 
// 00902473  2bc2                 sub eax, edx
// 00902475  8bc8                 mov ecx, eax
// 00902477  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0090247b  99                   cdq 
// 0090247c  2bc2                 sub eax, edx
// 0090247e  d1f8                 sar eax, 1
// 00902480  d1f9                 sar ecx, 1
// 00902482  f7d8                 neg eax
// 00902484  2bc1                 sub eax, ecx
// 00902486  014304               add dword ptr [ebx + 4], eax
// 00902489  8bce                 mov ecx, esi
// 0090248b  e888a10c00           call 0x9cc618
// 00902490  2500030000           and eax, 0x300
// 00902495  3d00010000           cmp eax, 0x100
// 0090249a  0f8404010000         je 0x9025a4
// 009024a0  8bce                 mov ecx, esi
// 009024a2  3d00020000           cmp eax, 0x200
// 009024a7  7450                 je 0x9024f9
// 009024a9  8b6f08               mov ebp, dword ptr [edi + 8]
// 009024ac  2b2f                 sub ebp, dword ptr [edi]
// 009024ae  8d542420             lea edx, [esp + 0x20]
// 009024b2  52                   push edx
// 009024b3  e8a807ffff           call 0x8f2c60
// 009024b8  8bc8                 mov ecx, eax
// 009024ba  8bc5                 mov eax, ebp
// 009024bc  2b01                 sub eax, dword ptr [ecx]
// 009024be  99                   cdq 
// 009024bf  2bc2                 sub eax, edx
// 009024c1  d1f8                 sar eax, 1
// 009024c3  790d                 jns 0x9024d2
// 009024c5  8b0f                 mov ecx, dword ptr [edi]
// 009024c7  33c0                 xor eax, eax
// 009024c9  03c8                 add ecx, eax
// 009024cb  890b                 mov dword ptr [ebx], ecx
// 009024cd  e9d2000000           jmp 0x9025a4
// 009024d2  8b6f08               mov ebp, dword ptr [edi + 8]
// 009024d5  2b2f                 sub ebp, dword ptr [edi]
// 009024d7  8d442418             lea eax, [esp + 0x18]
// 009024db  50                   push eax
// 009024dc  8bce                 mov ecx, esi
// 009024de  e87d07ffff           call 0x8f2c60
// 009024e3  8bc8                 mov ecx, eax
// 009024e5  8bc5                 mov eax, ebp
// 009024e7  2b01                 sub eax, dword ptr [ecx]
// 009024e9  8b0f                 mov ecx, dword ptr [edi]
// 009024eb  99                   cdq 
// 009024ec  2bc2                 sub eax, edx
// 009024ee  d1f8                 sar eax, 1
// 009024f0  03c8                 add ecx, eax
// 009024f2  890b                 mov dword ptr [ebx], ecx
// 009024f4  e9ab000000           jmp 0x9025a4
// 009024f9  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 009024fc  8d542428             lea edx, [esp + 0x28]
// 00902500  52                   push edx
// 00902501  e85a07ffff           call 0x8f2c60
// 00902506  8b4f08               mov ecx, dword ptr [edi + 8]
// 00902509  2b08                 sub ecx, dword ptr [eax]
// 0090250b  2bcd                 sub ecx, ebp
// 0090250d  890b                 mov dword ptr [ebx], ecx
// 0090250f  e990000000           jmp 0x9025a4
// 00902514  ff15b026a400         call dword ptr [0xa426b0]
// 0090251a  84c0                 test al, al
// 0090251c  0f8482000000         je 0x9025a4
// 00902522  8b442454             mov eax, dword ptr [esp + 0x54]
// 00902526  8bd0                 mov edx, eax
// 00902528  81e200030000         and edx, 0x300
// 0090252e  81fa00030000         cmp edx, 0x300
// 00902534  7532                 jne 0x902568
// 00902536  8b6f08               mov ebp, dword ptr [edi + 8]
// 00902539  2b2f                 sub ebp, dword ptr [edi]
// 0090253b  8d442428             lea eax, [esp + 0x28]
// 0090253f  50                   push eax
// 00902540  8bce                 mov ecx, esi
// 00902542  e81907ffff           call 0x8f2c60
// 00902547  3b28                 cmp ebp, dword ptr [eax]
// 00902549  7c19                 jl 0x902564
// 0090254b  8d4c2428             lea ecx, [esp + 0x28]
// 0090254f  51                   push ecx
// 00902550  8bce                 mov ecx, esi
// 00902552  e80907ffff           call 0x8f2c60
// 00902557  8bc8                 mov ecx, eax
// 00902559  8bc5                 mov eax, ebp
// 0090255b  2b01                 sub eax, dword ptr [ecx]
// 0090255d  99                   cdq 
// 0090255e  2bc2                 sub eax, edx
// 00902560  d1f8                 sar eax, 1
// 00902562  8903                 mov dword ptr [ebx], eax
// 00902564  8b442454             mov eax, dword ptr [esp + 0x54]
// 00902568  25000c0000           and eax, 0xc00
// 0090256d  3d000c0000           cmp eax, 0xc00
// 00902572  7530                 jne 0x9025a4
// 00902574  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00902577  2b6f04               sub ebp, dword ptr [edi + 4]
// 0090257a  8d542428             lea edx, [esp + 0x28]
// 0090257e  52                   push edx
// 0090257f  8bce                 mov ecx, esi
// 00902581  e8da06ffff           call 0x8f2c60
// 00902586  3b6804               cmp ebp, dword ptr [eax + 4]
// 00902589  7c19                 jl 0x9025a4
// 0090258b  8d442428             lea eax, [esp + 0x28]
// 0090258f  50                   push eax
// 00902590  8bce                 mov ecx, esi
// 00902592  e8c906ffff           call 0x8f2c60
// 00902597  2b6804               sub ebp, dword ptr [eax + 4]
// 0090259a  8bc5                 mov eax, ebp
// 0090259c  99                   cdq 
// 0090259d  2bc2                 sub eax, edx
// 0090259f  d1f8                 sar eax, 1
// 009025a1  894304               mov dword ptr [ebx + 4], eax
// 009025a4  8d4c2414             lea ecx, [esp + 0x14]
// 009025a8  ff15082ea400         call dword ptr [0xa42e08]
// 009025ae  8bc3                 mov eax, ebx
// 009025b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009025b4  64890d00000000       mov dword ptr fs:[0], ecx
// 009025bb  59                   pop ecx
// 009025bc  5f                   pop edi
// 009025bd  5e                   pop esi
// 009025be  5d                   pop ebp
// 009025bf  5b                   pop ebx
// 009025c0  83c428               add esp, 0x28
// 009025c3  c21800               ret 0x18
// copied from an identical function in another client (function ?CalculateImagePosition@CXTButtonTheme@@MAE?AVCPoint@@PAVCDC@@IAAVCRect@@_NPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp