// roc 2010-06 0082d2d0  unit: CXTPRibbonTheme  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082d2d0
//
// 0082d2d0  81ec0c020000         sub esp, 0x20c
// 0082d2d6  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082d2db  33c4                 xor eax, esp
// 0082d2dd  89842408020000       mov dword ptr [esp + 0x208], eax
// 0082d2e4  53                   push ebx
// 0082d2e5  55                   push ebp
// 0082d2e6  8be9                 mov ebp, ecx
// 0082d2e8  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 0082d2ef  e8fca3feff           call 0x8176f0
// 0082d2f4  8d4c2408             lea ecx, [esp + 8]
// 0082d2f8  e8b3fdf7ff           call 0x7ad0b0
// 0082d2fd  8b9c245c010000       mov ebx, dword ptr [esp + 0x15c]
// 0082d304  85db                 test ebx, ebx
// 0082d306  7d02                 jge 0x82d30a
// 0082d308  f7db                 neg ebx
// 0082d30a  8b8564060000         mov eax, dword ptr [ebp + 0x664]
// 0082d310  83f80b               cmp eax, 0xb
// 0082d313  7e02                 jle 0x82d317
// 0082d315  8bd8                 mov ebx, eax
// 0082d317  83fb0c               cmp ebx, 0xc
// 0082d31a  7f05                 jg 0x82d321
// 0082d31c  bb0b000000           mov ebx, 0xb
// 0082d321  837d7000             cmp dword ptr [ebp + 0x70], 0
// 0082d325  8a842473010000       mov al, byte ptr [esp + 0x173]
// 0082d32c  8a8c2476010000       mov cl, byte ptr [esp + 0x176]
// 0082d333  c744241890010000     mov dword ptr [esp + 0x18], 0x190
// 0082d33b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0082d340  8844241f             mov byte ptr [esp + 0x1f], al
// 0082d344  884c2422             mov byte ptr [esp + 0x22], cl
// 0082d348  7424                 je 0x82d36e
// 0082d34a  e82125fcff           call 0x7ef870
// 0082d34f  8bc8                 mov ecx, eax
// 0082d351  e86a2efcff           call 0x7f01c0
// 0082d356  85c0                 test eax, eax
// 0082d358  7414                 je 0x82d36e
// 0082d35a  b005                 mov al, 5
// 0082d35c  88442422             mov byte ptr [esp + 0x22], al
// 0082d360  88842432010000       mov byte ptr [esp + 0x132], al
// 0082d367  888424b2010000       mov byte ptr [esp + 0x1b2], al
// 0082d36e  83bd1801000000       cmp dword ptr [ebp + 0x118], 0
// 0082d375  56                   push esi
// 0082d376  57                   push edi
// 0082d377  744d                 je 0x82d3c6
// 0082d379  8db51c010000         lea esi, [ebp + 0x11c]
// 0082d37f  8bce                 mov ecx, esi
// 0082d381  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082d387  50                   push eax
// 0082d388  e8a301f8ff           call 0x7ad530
// 0082d38d  83c404               add esp, 4
// 0082d390  85c0                 test eax, eax
// 0082d392  7432                 je 0x82d3c6
// 0082d394  8bce                 mov ecx, esi
// 0082d396  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082d39c  8b3d78a89e00         mov edi, dword ptr [0x9ea878]
// 0082d3a2  50                   push eax
// 0082d3a3  8d542430             lea edx, [esp + 0x30]
// 0082d3a7  6a20                 push 0x20
// 0082d3a9  52                   push edx
// 0082d3aa  ffd7                 call edi
// 0082d3ac  83c40c               add esp, 0xc
// 0082d3af  8bce                 mov ecx, esi
// 0082d3b1  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082d3b7  50                   push eax
// 0082d3b8  8d8424c0010000       lea eax, [esp + 0x1c0]
// 0082d3bf  6a20                 push 0x20
// 0082d3c1  50                   push eax
// 0082d3c2  ffd7                 call edi
// 0082d3c4  eb15                 jmp 0x82d3db
// 0082d3c6  8d8c2480010000       lea ecx, [esp + 0x180]
// 0082d3cd  51                   push ecx
// 0082d3ce  8d542430             lea edx, [esp + 0x30]
// 0082d3d2  6a20                 push 0x20
// 0082d3d4  52                   push edx
// 0082d3d5  ff1578a89e00         call dword ptr [0x9ea878]
// 0082d3db  8bcb                 mov ecx, ebx
// 0082d3dd  c1e104               shl ecx, 4
// 0082d3e0  2bcb                 sub ecx, ebx
// 0082d3e2  03c9                 add ecx, ecx
// 0082d3e4  03c9                 add ecx, ecx
// 0082d3e6  03c9                 add ecx, ecx
// 0082d3e8  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0082d3ed  f7e9                 imul ecx
// 0082d3ef  c1fa04               sar edx, 4
// 0082d3f2  8bc2                 mov eax, edx
// 0082d3f4  c1e81f               shr eax, 0x1f
// 0082d3f7  03c2                 add eax, edx
// 0082d3f9  83c40c               add esp, 0xc
// 0082d3fc  83bd2001000000       cmp dword ptr [ebp + 0x120], 0
// 0082d403  89442410             mov dword ptr [esp + 0x10], eax
// 0082d407  7423                 je 0x82d42c
// 0082d409  b90f000000           mov ecx, 0xf
// 0082d40e  8d742410             lea esi, [esp + 0x10]
// 0082d412  8dbc2488000000       lea edi, [esp + 0x88]
// 0082d419  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0082d41b  6a01                 push 1
// 0082d41d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0082d424  51                   push ecx
// 0082d425  8bcd                 mov ecx, ebp
// 0082d427  e8d421f8ff           call 0x7af600
// 0082d42c  8d0cdb               lea ecx, [ebx + ebx*8]
// 0082d42f  c1e104               shl ecx, 4
// 0082d432  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0082d437  f7e9                 imul ecx
// 0082d439  c1fa04               sar edx, 4
// 0082d43c  8bca                 mov ecx, edx
// 0082d43e  c1e91f               shr ecx, 0x1f
// 0082d441  03ca                 add ecx, edx
// 0082d443  8d4106               lea eax, [ecx + 6]
// 0082d446  83f816               cmp eax, 0x16
// 0082d449  be16000000           mov esi, 0x16
// 0082d44e  7c02                 jl 0x82d452
// 0082d450  8bf0                 mov esi, eax
// 0082d452  69dbc3000000         imul ebx, ebx, 0xc3
// 0082d458  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0082d45d  f7eb                 imul ebx
// 0082d45f  c1fa04               sar edx, 4
// 0082d462  8bc2                 mov eax, edx
// 0082d464  c1e81f               shr eax, 0x1f
// 0082d467  03c2                 add eax, edx
// 0082d469  83f816               cmp eax, 0x16
// 0082d46c  89b510010000         mov dword ptr [ebp + 0x110], esi
// 0082d472  7d05                 jge 0x82d479
// 0082d474  b816000000           mov eax, 0x16
// 0082d479  83f816               cmp eax, 0x16
// 0082d47c  898514010000         mov dword ptr [ebp + 0x114], eax
// 0082d482  7e05                 jle 0x82d489
// 0082d484  83c002               add eax, 2
// 0082d487  eb05                 jmp 0x82d48e
// 0082d489  b817000000           mov eax, 0x17
// 0082d48e  83f911               cmp ecx, 0x11
// 0082d491  898550060000         mov dword ptr [ebp + 0x650], eax
// 0082d497  7d05                 jge 0x82d49e
// 0082d499  b911000000           mov ecx, 0x11
// 0082d49e  8bc6                 mov eax, esi
// 0082d4a0  99                   cdq 
// 0082d4a1  2bc2                 sub eax, edx
// 0082d4a3  d1f8                 sar eax, 1
// 0082d4a5  83f80c               cmp eax, 0xc
// 0082d4a8  898d60060000         mov dword ptr [ebp + 0x660], ecx
// 0082d4ae  7d05                 jge 0x82d4b5
// 0082d4b0  b80c000000           mov eax, 0xc
// 0082d4b5  8b1d70a19e00         mov ebx, dword ptr [0x9ea170]
// 0082d4bb  8db554060000         lea esi, [ebp + 0x654]
// 0082d4c1  8985c8000000         mov dword ptr [ebp + 0xc8], eax
// 0082d4c7  837e0800             cmp dword ptr [esi + 8], 0
// 0082d4cb  7506                 jne 0x82d4d3
// 0082d4cd  837e0400             cmp dword ptr [esi + 4], 0
// 0082d4d1  7516                 jne 0x82d4e9
// 0082d4d3  8bce                 mov ecx, esi
// 0082d4d5  e884aaf7ff           call 0x7a7f5e
// 0082d4da  8d542410             lea edx, [esp + 0x10]
// 0082d4de  52                   push edx
// 0082d4df  ffd3                 call ebx
// 0082d4e1  50                   push eax
// 0082d4e2  8bce                 mov ecx, esi
// 0082d4e4  e881aaf7ff           call 0x7a7f6a
// 0082d4e9  8d842480010000       lea eax, [esp + 0x180]
// 0082d4f0  50                   push eax
// 0082d4f1  b90f000000           mov ecx, 0xf
// 0082d4f6  8d742414             lea esi, [esp + 0x14]
// 0082d4fa  8d7c2450             lea edi, [esp + 0x50]
// 0082d4fe  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0082d500  8d4c246c             lea ecx, [esp + 0x6c]
// 0082d504  6a20                 push 0x20
// 0082d506  51                   push ecx
// 0082d507  ff1578a89e00         call dword ptr [0x9ea878]
// 0082d50d  8db5a4000000         lea esi, [ebp + 0xa4]
// 0082d513  83c40c               add esp, 0xc
// 0082d516  837e0800             cmp dword ptr [esi + 8], 0
// 0082d51a  7506                 jne 0x82d522
// 0082d51c  837e0400             cmp dword ptr [esi + 4], 0
// 0082d520  7516                 jne 0x82d538
// 0082d522  8bce                 mov ecx, esi
// 0082d524  e835aaf7ff           call 0x7a7f5e
// 0082d529  8d54244c             lea edx, [esp + 0x4c]
// 0082d52d  52                   push edx
// 0082d52e  ffd3                 call ebx
// 0082d530  50                   push eax
// 0082d531  8bce                 mov ecx, esi
// 0082d533  e832aaf7ff           call 0x7a7f6a
// 0082d538  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 0082d53f  8db5b0000000         lea esi, [ebp + 0xb0]
// 0082d545  c744245cbc020000     mov dword ptr [esp + 0x5c], 0x2bc
// 0082d54d  7506                 jne 0x82d555
// 0082d54f  837e0400             cmp dword ptr [esi + 4], 0
// 0082d553  7516                 jne 0x82d56b
// 0082d555  8bce                 mov ecx, esi
// 0082d557  e802aaf7ff           call 0x7a7f5e
// 0082d55c  8d44244c             lea eax, [esp + 0x4c]
// 0082d560  50                   push eax
// 0082d561  ffd3                 call ebx
// 0082d563  50                   push eax
// 0082d564  8bce                 mov ecx, esi
// 0082d566  e8ffa9f7ff           call 0x7a7f6a
// 0082d56b  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 0082d571  8b11                 mov edx, dword ptr [ecx]
// 0082d573  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0082d576  ffd0                 call eax
// 0082d578  6a01                 push 1
// 0082d57a  8d4c2414             lea ecx, [esp + 0x14]
// 0082d57e  51                   push ecx
// 0082d57f  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 0082d585  e816790500           call 0x884ea0
// 0082d58a  83bda000000000       cmp dword ptr [ebp + 0xa0], 0
// 0082d591  8db598000000         lea esi, [ebp + 0x98]
// 0082d597  7506                 jne 0x82d59f
// 0082d599  837e0400             cmp dword ptr [esi + 4], 0
// 0082d59d  7519                 jne 0x82d5b8
// 0082d59f  8bce                 mov ecx, esi
// 0082d5a1  e8b8a9f7ff           call 0x7a7f5e
// 0082d5a6  8d942420010000       lea edx, [esp + 0x120]
// 0082d5ad  52                   push edx
// 0082d5ae  ffd3                 call ebx
// 0082d5b0  50                   push eax
// 0082d5b1  8bce                 mov ecx, esi
// 0082d5b3  e8b2a9f7ff           call 0x7a7f6a
// 0082d5b8  81c5bc000000         add ebp, 0xbc
// 0082d5be  837d0800             cmp dword ptr [ebp + 8], 0
// 0082d5c2  5f                   pop edi
// 0082d5c3  5e                   pop esi
// 0082d5c4  7506                 jne 0x82d5cc
// 0082d5c6  837d0400             cmp dword ptr [ebp + 4], 0
// 0082d5ca  7519                 jne 0x82d5e5
// 0082d5cc  8bcd                 mov ecx, ebp
// 0082d5ce  e88ba9f7ff           call 0x7a7f5e
// 0082d5d3  8d842498010000       lea eax, [esp + 0x198]
// 0082d5da  50                   push eax
// 0082d5db  ffd3                 call ebx
// 0082d5dd  50                   push eax
// 0082d5de  8bcd                 mov ecx, ebp
// 0082d5e0  e885a9f7ff           call 0x7a7f6a
// 0082d5e5  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 0082d5ec  5d                   pop ebp
// 0082d5ed  5b                   pop ebx
// 0082d5ee  33cc                 xor ecx, esp
// 0082d5f0  e8dfbef7ff           call 0x7a94d4
// 0082d5f5  81c40c020000         add esp, 0x20c
// 0082d5fb  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPRibbonTheme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp