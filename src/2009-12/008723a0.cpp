// roc 2009-12 008723a0  unit: CXTPRibbonTheme  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008723a0
//
// 008723a0  81ec0c020000         sub esp, 0x20c
// 008723a6  a10052b600           mov eax, dword ptr [0xb65200]
// 008723ab  33c4                 xor eax, esp
// 008723ad  89842408020000       mov dword ptr [esp + 0x208], eax
// 008723b4  53                   push ebx
// 008723b5  55                   push ebp
// 008723b6  8be9                 mov ebp, ecx
// 008723b8  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 008723bf  e80cb2f8ff           call 0x7fd5d0
// 008723c4  8d4c2408             lea ecx, [esp + 8]
// 008723c8  e8e3b1f8ff           call 0x7fd5b0
// 008723cd  8b9c245c010000       mov ebx, dword ptr [esp + 0x15c]
// 008723d4  85db                 test ebx, ebx
// 008723d6  7d02                 jge 0x8723da
// 008723d8  f7db                 neg ebx
// 008723da  8b8564060000         mov eax, dword ptr [ebp + 0x664]
// 008723e0  83f80b               cmp eax, 0xb
// 008723e3  7e02                 jle 0x8723e7
// 008723e5  8bd8                 mov ebx, eax
// 008723e7  83fb0c               cmp ebx, 0xc
// 008723ea  7f05                 jg 0x8723f1
// 008723ec  bb0b000000           mov ebx, 0xb
// 008723f1  837d7000             cmp dword ptr [ebp + 0x70], 0
// 008723f5  8a842473010000       mov al, byte ptr [esp + 0x173]
// 008723fc  8a8c2476010000       mov cl, byte ptr [esp + 0x176]
// 00872403  c744241890010000     mov dword ptr [esp + 0x18], 0x190
// 0087240b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00872410  8844241f             mov byte ptr [esp + 0x1f], al
// 00872414  884c2422             mov byte ptr [esp + 0x22], cl
// 00872418  7424                 je 0x87243e
// 0087241a  e80193fcff           call 0x83b720
// 0087241f  8bc8                 mov ecx, eax
// 00872421  e83a9cfcff           call 0x83c060
// 00872426  85c0                 test eax, eax
// 00872428  7414                 je 0x87243e
// 0087242a  b005                 mov al, 5
// 0087242c  88442422             mov byte ptr [esp + 0x22], al
// 00872430  88842432010000       mov byte ptr [esp + 0x132], al
// 00872437  888424b2010000       mov byte ptr [esp + 0x1b2], al
// 0087243e  83bd1801000000       cmp dword ptr [ebp + 0x118], 0
// 00872445  56                   push esi
// 00872446  57                   push edi
// 00872447  744d                 je 0x872496
// 00872449  8db51c010000         lea esi, [ebp + 0x11c]
// 0087244f  8bce                 mov ecx, esi
// 00872451  ff1580de9800         call dword ptr [0x98de80]
// 00872457  50                   push eax
// 00872458  e803b6f8ff           call 0x7fda60
// 0087245d  83c404               add esp, 4
// 00872460  85c0                 test eax, eax
// 00872462  7432                 je 0x872496
// 00872464  8bce                 mov ecx, esi
// 00872466  ff1580de9800         call dword ptr [0x98de80]
// 0087246c  8b3dc8b79800         mov edi, dword ptr [0x98b7c8]
// 00872472  50                   push eax
// 00872473  8d542430             lea edx, [esp + 0x30]
// 00872477  6a20                 push 0x20
// 00872479  52                   push edx
// 0087247a  ffd7                 call edi
// 0087247c  83c40c               add esp, 0xc
// 0087247f  8bce                 mov ecx, esi
// 00872481  ff1580de9800         call dword ptr [0x98de80]
// 00872487  50                   push eax
// 00872488  8d8424c0010000       lea eax, [esp + 0x1c0]
// 0087248f  6a20                 push 0x20
// 00872491  50                   push eax
// 00872492  ffd7                 call edi
// 00872494  eb15                 jmp 0x8724ab
// 00872496  8d8c2480010000       lea ecx, [esp + 0x180]
// 0087249d  51                   push ecx
// 0087249e  8d542430             lea edx, [esp + 0x30]
// 008724a2  6a20                 push 0x20
// 008724a4  52                   push edx
// 008724a5  ff15c8b79800         call dword ptr [0x98b7c8]
// 008724ab  8bcb                 mov ecx, ebx
// 008724ad  c1e104               shl ecx, 4
// 008724b0  2bcb                 sub ecx, ebx
// 008724b2  03c9                 add ecx, ecx
// 008724b4  03c9                 add ecx, ecx
// 008724b6  03c9                 add ecx, ecx
// 008724b8  b8abaaaa2a           mov eax, 0x2aaaaaab
// 008724bd  f7e9                 imul ecx
// 008724bf  c1fa04               sar edx, 4
// 008724c2  8bc2                 mov eax, edx
// 008724c4  c1e81f               shr eax, 0x1f
// 008724c7  03c2                 add eax, edx
// 008724c9  83c40c               add esp, 0xc
// 008724cc  83bd2001000000       cmp dword ptr [ebp + 0x120], 0
// 008724d3  89442410             mov dword ptr [esp + 0x10], eax
// 008724d7  7423                 je 0x8724fc
// 008724d9  b90f000000           mov ecx, 0xf
// 008724de  8d742410             lea esi, [esp + 0x10]
// 008724e2  8dbc2488000000       lea edi, [esp + 0x88]
// 008724e9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008724eb  6a01                 push 1
// 008724ed  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008724f4  51                   push ecx
// 008724f5  8bcd                 mov ecx, ebp
// 008724f7  e8f4d5f8ff           call 0x7ffaf0
// 008724fc  8d0cdb               lea ecx, [ebx + ebx*8]
// 008724ff  c1e104               shl ecx, 4
// 00872502  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00872507  f7e9                 imul ecx
// 00872509  c1fa04               sar edx, 4
// 0087250c  8bca                 mov ecx, edx
// 0087250e  c1e91f               shr ecx, 0x1f
// 00872511  03ca                 add ecx, edx
// 00872513  8d4106               lea eax, [ecx + 6]
// 00872516  83f816               cmp eax, 0x16
// 00872519  be16000000           mov esi, 0x16
// 0087251e  7c02                 jl 0x872522
// 00872520  8bf0                 mov esi, eax
// 00872522  69dbc3000000         imul ebx, ebx, 0xc3
// 00872528  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0087252d  f7eb                 imul ebx
// 0087252f  c1fa04               sar edx, 4
// 00872532  8bc2                 mov eax, edx
// 00872534  c1e81f               shr eax, 0x1f
// 00872537  03c2                 add eax, edx
// 00872539  83f816               cmp eax, 0x16
// 0087253c  89b510010000         mov dword ptr [ebp + 0x110], esi
// 00872542  7d05                 jge 0x872549
// 00872544  b816000000           mov eax, 0x16
// 00872549  83f816               cmp eax, 0x16
// 0087254c  898514010000         mov dword ptr [ebp + 0x114], eax
// 00872552  7e05                 jle 0x872559
// 00872554  83c002               add eax, 2
// 00872557  eb05                 jmp 0x87255e
// 00872559  b817000000           mov eax, 0x17
// 0087255e  83f911               cmp ecx, 0x11
// 00872561  898550060000         mov dword ptr [ebp + 0x650], eax
// 00872567  7d05                 jge 0x87256e
// 00872569  b911000000           mov ecx, 0x11
// 0087256e  8bc6                 mov eax, esi
// 00872570  99                   cdq 
// 00872571  2bc2                 sub eax, edx
// 00872573  d1f8                 sar eax, 1
// 00872575  83f80c               cmp eax, 0xc
// 00872578  898d60060000         mov dword ptr [ebp + 0x660], ecx
// 0087257e  7d05                 jge 0x872585
// 00872580  b80c000000           mov eax, 0xc
// 00872585  8b1d28b19800         mov ebx, dword ptr [0x98b128]
// 0087258b  8db554060000         lea esi, [ebp + 0x654]
// 00872591  8985c8000000         mov dword ptr [ebp + 0xc8], eax
// 00872597  837e0800             cmp dword ptr [esi + 8], 0
// 0087259b  7506                 jne 0x8725a3
// 0087259d  837e0400             cmp dword ptr [esi + 4], 0
// 008725a1  7516                 jne 0x8725b9
// 008725a3  8bce                 mov ecx, esi
// 008725a5  e87418f8ff           call 0x7f3e1e
// 008725aa  8d542410             lea edx, [esp + 0x10]
// 008725ae  52                   push edx
// 008725af  ffd3                 call ebx
// 008725b1  50                   push eax
// 008725b2  8bce                 mov ecx, esi
// 008725b4  e87118f8ff           call 0x7f3e2a
// 008725b9  8d842480010000       lea eax, [esp + 0x180]
// 008725c0  50                   push eax
// 008725c1  b90f000000           mov ecx, 0xf
// 008725c6  8d742414             lea esi, [esp + 0x14]
// 008725ca  8d7c2450             lea edi, [esp + 0x50]
// 008725ce  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008725d0  8d4c246c             lea ecx, [esp + 0x6c]
// 008725d4  6a20                 push 0x20
// 008725d6  51                   push ecx
// 008725d7  ff15c8b79800         call dword ptr [0x98b7c8]
// 008725dd  8db5a4000000         lea esi, [ebp + 0xa4]
// 008725e3  83c40c               add esp, 0xc
// 008725e6  837e0800             cmp dword ptr [esi + 8], 0
// 008725ea  7506                 jne 0x8725f2
// 008725ec  837e0400             cmp dword ptr [esi + 4], 0
// 008725f0  7516                 jne 0x872608
// 008725f2  8bce                 mov ecx, esi
// 008725f4  e82518f8ff           call 0x7f3e1e
// 008725f9  8d54244c             lea edx, [esp + 0x4c]
// 008725fd  52                   push edx
// 008725fe  ffd3                 call ebx
// 00872600  50                   push eax
// 00872601  8bce                 mov ecx, esi
// 00872603  e82218f8ff           call 0x7f3e2a
// 00872608  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 0087260f  8db5b0000000         lea esi, [ebp + 0xb0]
// 00872615  c744245cbc020000     mov dword ptr [esp + 0x5c], 0x2bc
// 0087261d  7506                 jne 0x872625
// 0087261f  837e0400             cmp dword ptr [esi + 4], 0
// 00872623  7516                 jne 0x87263b
// 00872625  8bce                 mov ecx, esi
// 00872627  e8f217f8ff           call 0x7f3e1e
// 0087262c  8d44244c             lea eax, [esp + 0x4c]
// 00872630  50                   push eax
// 00872631  ffd3                 call ebx
// 00872633  50                   push eax
// 00872634  8bce                 mov ecx, esi
// 00872636  e8ef17f8ff           call 0x7f3e2a
// 0087263b  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00872641  8b11                 mov edx, dword ptr [ecx]
// 00872643  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00872646  ffd0                 call eax
// 00872648  6a01                 push 1
// 0087264a  8d4c2414             lea ecx, [esp + 0x14]
// 0087264e  51                   push ecx
// 0087264f  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00872655  e896e60500           call 0x8d0cf0
// 0087265a  83bda000000000       cmp dword ptr [ebp + 0xa0], 0
// 00872661  8db598000000         lea esi, [ebp + 0x98]
// 00872667  7506                 jne 0x87266f
// 00872669  837e0400             cmp dword ptr [esi + 4], 0
// 0087266d  7519                 jne 0x872688
// 0087266f  8bce                 mov ecx, esi
// 00872671  e8a817f8ff           call 0x7f3e1e
// 00872676  8d942420010000       lea edx, [esp + 0x120]
// 0087267d  52                   push edx
// 0087267e  ffd3                 call ebx
// 00872680  50                   push eax
// 00872681  8bce                 mov ecx, esi
// 00872683  e8a217f8ff           call 0x7f3e2a
// 00872688  81c5bc000000         add ebp, 0xbc
// 0087268e  837d0800             cmp dword ptr [ebp + 8], 0
// 00872692  5f                   pop edi
// 00872693  5e                   pop esi
// 00872694  7506                 jne 0x87269c
// 00872696  837d0400             cmp dword ptr [ebp + 4], 0
// 0087269a  7519                 jne 0x8726b5
// 0087269c  8bcd                 mov ecx, ebp
// 0087269e  e87b17f8ff           call 0x7f3e1e
// 008726a3  8d842498010000       lea eax, [esp + 0x198]
// 008726aa  50                   push eax
// 008726ab  ffd3                 call ebx
// 008726ad  50                   push eax
// 008726ae  8bcd                 mov ecx, ebp
// 008726b0  e87517f8ff           call 0x7f3e2a
// 008726b5  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 008726bc  5d                   pop ebp
// 008726bd  5b                   pop ebx
// 008726be  33cc                 xor ecx, esp
// 008726c0  e8d52cf8ff           call 0x7f539a
// 008726c5  81c40c020000         add esp, 0x20c
// 008726cb  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPRibbonTheme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp