// roc 2011-06 0088a360  unit: CXTPRibbonTheme  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088a360
//
// 0088a360  81ec0c020000         sub esp, 0x20c
// 0088a366  a12058c900           mov eax, dword ptr [0xc95820]
// 0088a36b  33c4                 xor eax, esp
// 0088a36d  89842408020000       mov dword ptr [esp + 0x208], eax
// 0088a374  53                   push ebx
// 0088a375  55                   push ebp
// 0088a376  8be9                 mov ebp, ecx
// 0088a378  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 0088a37f  e8bc51f8ff           call 0x80f540
// 0088a384  8d4c2408             lea ecx, [esp + 8]
// 0088a388  e89351f8ff           call 0x80f520
// 0088a38d  8b9c245c010000       mov ebx, dword ptr [esp + 0x15c]
// 0088a394  85db                 test ebx, ebx
// 0088a396  7d02                 jge 0x88a39a
// 0088a398  f7db                 neg ebx
// 0088a39a  8b8564060000         mov eax, dword ptr [ebp + 0x664]
// 0088a3a0  83f80b               cmp eax, 0xb
// 0088a3a3  7e02                 jle 0x88a3a7
// 0088a3a5  8bd8                 mov ebx, eax
// 0088a3a7  83fb0c               cmp ebx, 0xc
// 0088a3aa  7f05                 jg 0x88a3b1
// 0088a3ac  bb0b000000           mov ebx, 0xb
// 0088a3b1  837d7000             cmp dword ptr [ebp + 0x70], 0
// 0088a3b5  8a842473010000       mov al, byte ptr [esp + 0x173]
// 0088a3bc  8a8c2476010000       mov cl, byte ptr [esp + 0x176]
// 0088a3c3  c744241890010000     mov dword ptr [esp + 0x18], 0x190
// 0088a3cb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0088a3d0  8844241f             mov byte ptr [esp + 0x1f], al
// 0088a3d4  884c2422             mov byte ptr [esp + 0x22], cl
// 0088a3d8  7424                 je 0x88a3fe
// 0088a3da  e8e16cfcff           call 0x8510c0
// 0088a3df  8bc8                 mov ecx, eax
// 0088a3e1  e81a76fcff           call 0x851a00
// 0088a3e6  85c0                 test eax, eax
// 0088a3e8  7414                 je 0x88a3fe
// 0088a3ea  b005                 mov al, 5
// 0088a3ec  88442422             mov byte ptr [esp + 0x22], al
// 0088a3f0  88842432010000       mov byte ptr [esp + 0x132], al
// 0088a3f7  888424b2010000       mov byte ptr [esp + 0x1b2], al
// 0088a3fe  83bd1801000000       cmp dword ptr [ebp + 0x118], 0
// 0088a405  56                   push esi
// 0088a406  57                   push edi
// 0088a407  744d                 je 0x88a456
// 0088a409  8db51c010000         lea esi, [ebp + 0x11c]
// 0088a40f  8bce                 mov ecx, esi
// 0088a411  ff15c82da400         call dword ptr [0xa42dc8]
// 0088a417  50                   push eax
// 0088a418  e8b355f8ff           call 0x80f9d0
// 0088a41d  83c404               add esp, 4
// 0088a420  85c0                 test eax, eax
// 0088a422  7432                 je 0x88a456
// 0088a424  8bce                 mov ecx, esi
// 0088a426  ff15c82da400         call dword ptr [0xa42dc8]
// 0088a42c  8b3ddc09a400         mov edi, dword ptr [0xa409dc]
// 0088a432  50                   push eax
// 0088a433  8d542430             lea edx, [esp + 0x30]
// 0088a437  6a20                 push 0x20
// 0088a439  52                   push edx
// 0088a43a  ffd7                 call edi
// 0088a43c  83c40c               add esp, 0xc
// 0088a43f  8bce                 mov ecx, esi
// 0088a441  ff15c82da400         call dword ptr [0xa42dc8]
// 0088a447  50                   push eax
// 0088a448  8d8424c0010000       lea eax, [esp + 0x1c0]
// 0088a44f  6a20                 push 0x20
// 0088a451  50                   push eax
// 0088a452  ffd7                 call edi
// 0088a454  eb15                 jmp 0x88a46b
// 0088a456  8d8c2480010000       lea ecx, [esp + 0x180]
// 0088a45d  51                   push ecx
// 0088a45e  8d542430             lea edx, [esp + 0x30]
// 0088a462  6a20                 push 0x20
// 0088a464  52                   push edx
// 0088a465  ff15dc09a400         call dword ptr [0xa409dc]
// 0088a46b  8bcb                 mov ecx, ebx
// 0088a46d  c1e104               shl ecx, 4
// 0088a470  2bcb                 sub ecx, ebx
// 0088a472  03c9                 add ecx, ecx
// 0088a474  03c9                 add ecx, ecx
// 0088a476  03c9                 add ecx, ecx
// 0088a478  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0088a47d  f7e9                 imul ecx
// 0088a47f  c1fa04               sar edx, 4
// 0088a482  8bc2                 mov eax, edx
// 0088a484  c1e81f               shr eax, 0x1f
// 0088a487  03c2                 add eax, edx
// 0088a489  83c40c               add esp, 0xc
// 0088a48c  83bd2001000000       cmp dword ptr [ebp + 0x120], 0
// 0088a493  89442410             mov dword ptr [esp + 0x10], eax
// 0088a497  7423                 je 0x88a4bc
// 0088a499  b90f000000           mov ecx, 0xf
// 0088a49e  8d742410             lea esi, [esp + 0x10]
// 0088a4a2  8dbc2488000000       lea edi, [esp + 0x88]
// 0088a4a9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0088a4ab  6a01                 push 1
// 0088a4ad  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0088a4b4  51                   push ecx
// 0088a4b5  8bcd                 mov ecx, ebp
// 0088a4b7  e85475f8ff           call 0x811a10
// 0088a4bc  8d0cdb               lea ecx, [ebx + ebx*8]
// 0088a4bf  c1e104               shl ecx, 4
// 0088a4c2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0088a4c7  f7e9                 imul ecx
// 0088a4c9  c1fa04               sar edx, 4
// 0088a4cc  8bca                 mov ecx, edx
// 0088a4ce  c1e91f               shr ecx, 0x1f
// 0088a4d1  03ca                 add ecx, edx
// 0088a4d3  8d4106               lea eax, [ecx + 6]
// 0088a4d6  83f816               cmp eax, 0x16
// 0088a4d9  be16000000           mov esi, 0x16
// 0088a4de  7c02                 jl 0x88a4e2
// 0088a4e0  8bf0                 mov esi, eax
// 0088a4e2  69dbc3000000         imul ebx, ebx, 0xc3
// 0088a4e8  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0088a4ed  f7eb                 imul ebx
// 0088a4ef  c1fa04               sar edx, 4
// 0088a4f2  8bc2                 mov eax, edx
// 0088a4f4  c1e81f               shr eax, 0x1f
// 0088a4f7  03c2                 add eax, edx
// 0088a4f9  83f816               cmp eax, 0x16
// 0088a4fc  89b510010000         mov dword ptr [ebp + 0x110], esi
// 0088a502  7d05                 jge 0x88a509
// 0088a504  b816000000           mov eax, 0x16
// 0088a509  83f816               cmp eax, 0x16
// 0088a50c  898514010000         mov dword ptr [ebp + 0x114], eax
// 0088a512  7e05                 jle 0x88a519
// 0088a514  83c002               add eax, 2
// 0088a517  eb05                 jmp 0x88a51e
// 0088a519  b817000000           mov eax, 0x17
// 0088a51e  83f911               cmp ecx, 0x11
// 0088a521  898550060000         mov dword ptr [ebp + 0x650], eax
// 0088a527  7d05                 jge 0x88a52e
// 0088a529  b911000000           mov ecx, 0x11
// 0088a52e  8bc6                 mov eax, esi
// 0088a530  99                   cdq 
// 0088a531  2bc2                 sub eax, edx
// 0088a533  d1f8                 sar eax, 1
// 0088a535  83f80c               cmp eax, 0xc
// 0088a538  898d60060000         mov dword ptr [ebp + 0x660], ecx
// 0088a53e  7d05                 jge 0x88a545
// 0088a540  b80c000000           mov eax, 0xc
// 0088a545  8b1d2001a400         mov ebx, dword ptr [0xa40120]
// 0088a54b  8db554060000         lea esi, [ebp + 0x654]
// 0088a551  8985c8000000         mov dword ptr [ebp + 0xc8], eax
// 0088a557  837e0800             cmp dword ptr [esi + 8], 0
// 0088a55b  7506                 jne 0x88a563
// 0088a55d  837e0400             cmp dword ptr [esi + 4], 0
// 0088a561  7516                 jne 0x88a579
// 0088a563  8bce                 mov ecx, esi
// 0088a565  e8b200f8ff           call 0x80a61c
// 0088a56a  8d542410             lea edx, [esp + 0x10]
// 0088a56e  52                   push edx
// 0088a56f  ffd3                 call ebx
// 0088a571  50                   push eax
// 0088a572  8bce                 mov ecx, esi
// 0088a574  e8af00f8ff           call 0x80a628
// 0088a579  8d842480010000       lea eax, [esp + 0x180]
// 0088a580  50                   push eax
// 0088a581  b90f000000           mov ecx, 0xf
// 0088a586  8d742414             lea esi, [esp + 0x14]
// 0088a58a  8d7c2450             lea edi, [esp + 0x50]
// 0088a58e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0088a590  8d4c246c             lea ecx, [esp + 0x6c]
// 0088a594  6a20                 push 0x20
// 0088a596  51                   push ecx
// 0088a597  ff15dc09a400         call dword ptr [0xa409dc]
// 0088a59d  8db5a4000000         lea esi, [ebp + 0xa4]
// 0088a5a3  83c40c               add esp, 0xc
// 0088a5a6  837e0800             cmp dword ptr [esi + 8], 0
// 0088a5aa  7506                 jne 0x88a5b2
// 0088a5ac  837e0400             cmp dword ptr [esi + 4], 0
// 0088a5b0  7516                 jne 0x88a5c8
// 0088a5b2  8bce                 mov ecx, esi
// 0088a5b4  e86300f8ff           call 0x80a61c
// 0088a5b9  8d54244c             lea edx, [esp + 0x4c]
// 0088a5bd  52                   push edx
// 0088a5be  ffd3                 call ebx
// 0088a5c0  50                   push eax
// 0088a5c1  8bce                 mov ecx, esi
// 0088a5c3  e86000f8ff           call 0x80a628
// 0088a5c8  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 0088a5cf  8db5b0000000         lea esi, [ebp + 0xb0]
// 0088a5d5  c744245cbc020000     mov dword ptr [esp + 0x5c], 0x2bc
// 0088a5dd  7506                 jne 0x88a5e5
// 0088a5df  837e0400             cmp dword ptr [esi + 4], 0
// 0088a5e3  7516                 jne 0x88a5fb
// 0088a5e5  8bce                 mov ecx, esi
// 0088a5e7  e83000f8ff           call 0x80a61c
// 0088a5ec  8d44244c             lea eax, [esp + 0x4c]
// 0088a5f0  50                   push eax
// 0088a5f1  ffd3                 call ebx
// 0088a5f3  50                   push eax
// 0088a5f4  8bce                 mov ecx, esi
// 0088a5f6  e82d00f8ff           call 0x80a628
// 0088a5fb  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 0088a601  8b11                 mov edx, dword ptr [ecx]
// 0088a603  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0088a606  ffd0                 call eax
// 0088a608  6a01                 push 1
// 0088a60a  8d4c2414             lea ecx, [esp + 0x14]
// 0088a60e  51                   push ecx
// 0088a60f  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 0088a615  e8c6b70400           call 0x8d5de0
// 0088a61a  83bda000000000       cmp dword ptr [ebp + 0xa0], 0
// 0088a621  8db598000000         lea esi, [ebp + 0x98]
// 0088a627  7506                 jne 0x88a62f
// 0088a629  837e0400             cmp dword ptr [esi + 4], 0
// 0088a62d  7519                 jne 0x88a648
// 0088a62f  8bce                 mov ecx, esi
// 0088a631  e8e6fff7ff           call 0x80a61c
// 0088a636  8d942420010000       lea edx, [esp + 0x120]
// 0088a63d  52                   push edx
// 0088a63e  ffd3                 call ebx
// 0088a640  50                   push eax
// 0088a641  8bce                 mov ecx, esi
// 0088a643  e8e0fff7ff           call 0x80a628
// 0088a648  81c5bc000000         add ebp, 0xbc
// 0088a64e  837d0800             cmp dword ptr [ebp + 8], 0
// 0088a652  5f                   pop edi
// 0088a653  5e                   pop esi
// 0088a654  7506                 jne 0x88a65c
// 0088a656  837d0400             cmp dword ptr [ebp + 4], 0
// 0088a65a  7519                 jne 0x88a675
// 0088a65c  8bcd                 mov ecx, ebp
// 0088a65e  e8b9fff7ff           call 0x80a61c
// 0088a663  8d842498010000       lea eax, [esp + 0x198]
// 0088a66a  50                   push eax
// 0088a66b  ffd3                 call ebx
// 0088a66d  50                   push eax
// 0088a66e  8bcd                 mov ecx, ebp
// 0088a670  e8b3fff7ff           call 0x80a628
// 0088a675  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 0088a67c  5d                   pop ebp
// 0088a67d  5b                   pop ebx
// 0088a67e  33cc                 xor ecx, esp
// 0088a680  e87212f8ff           call 0x80b8f7
// 0088a685  81c40c020000         add esp, 0x20c
// 0088a68b  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPRibbonTheme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp