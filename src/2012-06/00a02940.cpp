// roc 2012-06 00a02940  unit: CXTPRibbonTheme  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02940
//
// 00a02940  81ec0c020000         sub esp, 0x20c
// 00a02946  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0294b  33c4                 xor eax, esp
// 00a0294d  89842408020000       mov dword ptr [esp + 0x208], eax
// 00a02954  53                   push ebx
// 00a02955  55                   push ebp
// 00a02956  8be9                 mov ebp, ecx
// 00a02958  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00a0295f  e81cabfeff           call 0x9ed480
// 00a02964  8d4c2408             lea ecx, [esp + 8]
// 00a02968  e8c34ef8ff           call 0x987830
// 00a0296d  8b9c245c010000       mov ebx, dword ptr [esp + 0x15c]
// 00a02974  85db                 test ebx, ebx
// 00a02976  7d02                 jge 0xa0297a
// 00a02978  f7db                 neg ebx
// 00a0297a  8b8564060000         mov eax, dword ptr [ebp + 0x664]
// 00a02980  83f80b               cmp eax, 0xb
// 00a02983  7e02                 jle 0xa02987
// 00a02985  8bd8                 mov ebx, eax
// 00a02987  83fb0c               cmp ebx, 0xc
// 00a0298a  7f05                 jg 0xa02991
// 00a0298c  bb0b000000           mov ebx, 0xb
// 00a02991  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00a02995  8a842473010000       mov al, byte ptr [esp + 0x173]
// 00a0299c  8a8c2476010000       mov cl, byte ptr [esp + 0x176]
// 00a029a3  c744241890010000     mov dword ptr [esp + 0x18], 0x190
// 00a029ab  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00a029b0  8844241f             mov byte ptr [esp + 0x1f], al
// 00a029b4  884c2422             mov byte ptr [esp + 0x22], cl
// 00a029b8  7424                 je 0xa029de
// 00a029ba  e8d16bfcff           call 0x9c9590
// 00a029bf  8bc8                 mov ecx, eax
// 00a029c1  e8fa74fcff           call 0x9c9ec0
// 00a029c6  85c0                 test eax, eax
// 00a029c8  7414                 je 0xa029de
// 00a029ca  b005                 mov al, 5
// 00a029cc  88442422             mov byte ptr [esp + 0x22], al
// 00a029d0  88842432010000       mov byte ptr [esp + 0x132], al
// 00a029d7  888424b2010000       mov byte ptr [esp + 0x1b2], al
// 00a029de  83bd1801000000       cmp dword ptr [ebp + 0x118], 0
// 00a029e5  56                   push esi
// 00a029e6  57                   push edi
// 00a029e7  744d                 je 0xa02a36
// 00a029e9  8db51c010000         lea esi, [ebp + 0x11c]
// 00a029ef  8bce                 mov ecx, esi
// 00a029f1  ff159847b200         call dword ptr [0xb24798]
// 00a029f7  50                   push eax
// 00a029f8  e8b352f8ff           call 0x987cb0
// 00a029fd  83c404               add esp, 4
// 00a02a00  85c0                 test eax, eax
// 00a02a02  7432                 je 0xa02a36
// 00a02a04  8bce                 mov ecx, esi
// 00a02a06  ff159847b200         call dword ptr [0xb24798]
// 00a02a0c  8b3dd82ab200         mov edi, dword ptr [0xb22ad8]
// 00a02a12  50                   push eax
// 00a02a13  8d542430             lea edx, [esp + 0x30]
// 00a02a17  6a20                 push 0x20
// 00a02a19  52                   push edx
// 00a02a1a  ffd7                 call edi
// 00a02a1c  83c40c               add esp, 0xc
// 00a02a1f  8bce                 mov ecx, esi
// 00a02a21  ff159847b200         call dword ptr [0xb24798]
// 00a02a27  50                   push eax
// 00a02a28  8d8424c0010000       lea eax, [esp + 0x1c0]
// 00a02a2f  6a20                 push 0x20
// 00a02a31  50                   push eax
// 00a02a32  ffd7                 call edi
// 00a02a34  eb15                 jmp 0xa02a4b
// 00a02a36  8d8c2480010000       lea ecx, [esp + 0x180]
// 00a02a3d  51                   push ecx
// 00a02a3e  8d542430             lea edx, [esp + 0x30]
// 00a02a42  6a20                 push 0x20
// 00a02a44  52                   push edx
// 00a02a45  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a02a4b  8bcb                 mov ecx, ebx
// 00a02a4d  c1e104               shl ecx, 4
// 00a02a50  2bcb                 sub ecx, ebx
// 00a02a52  03c9                 add ecx, ecx
// 00a02a54  03c9                 add ecx, ecx
// 00a02a56  03c9                 add ecx, ecx
// 00a02a58  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00a02a5d  f7e9                 imul ecx
// 00a02a5f  c1fa04               sar edx, 4
// 00a02a62  8bc2                 mov eax, edx
// 00a02a64  c1e81f               shr eax, 0x1f
// 00a02a67  03c2                 add eax, edx
// 00a02a69  83c40c               add esp, 0xc
// 00a02a6c  83bd2001000000       cmp dword ptr [ebp + 0x120], 0
// 00a02a73  89442410             mov dword ptr [esp + 0x10], eax
// 00a02a77  7423                 je 0xa02a9c
// 00a02a79  b90f000000           mov ecx, 0xf
// 00a02a7e  8d742410             lea esi, [esp + 0x10]
// 00a02a82  8dbc2488000000       lea edi, [esp + 0x88]
// 00a02a89  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00a02a8b  6a01                 push 1
// 00a02a8d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a02a94  51                   push ecx
// 00a02a95  8bcd                 mov ecx, ebp
// 00a02a97  e86472f8ff           call 0x989d00
// 00a02a9c  8d0cdb               lea ecx, [ebx + ebx*8]
// 00a02a9f  c1e104               shl ecx, 4
// 00a02aa2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00a02aa7  f7e9                 imul ecx
// 00a02aa9  c1fa04               sar edx, 4
// 00a02aac  8bca                 mov ecx, edx
// 00a02aae  c1e91f               shr ecx, 0x1f
// 00a02ab1  03ca                 add ecx, edx
// 00a02ab3  8d4106               lea eax, [ecx + 6]
// 00a02ab6  83f816               cmp eax, 0x16
// 00a02ab9  be16000000           mov esi, 0x16
// 00a02abe  7c02                 jl 0xa02ac2
// 00a02ac0  8bf0                 mov esi, eax
// 00a02ac2  69dbc3000000         imul ebx, ebx, 0xc3
// 00a02ac8  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00a02acd  f7eb                 imul ebx
// 00a02acf  c1fa04               sar edx, 4
// 00a02ad2  8bc2                 mov eax, edx
// 00a02ad4  c1e81f               shr eax, 0x1f
// 00a02ad7  03c2                 add eax, edx
// 00a02ad9  83f816               cmp eax, 0x16
// 00a02adc  89b510010000         mov dword ptr [ebp + 0x110], esi
// 00a02ae2  7d05                 jge 0xa02ae9
// 00a02ae4  b816000000           mov eax, 0x16
// 00a02ae9  83f816               cmp eax, 0x16
// 00a02aec  898514010000         mov dword ptr [ebp + 0x114], eax
// 00a02af2  7e05                 jle 0xa02af9
// 00a02af4  83c002               add eax, 2
// 00a02af7  eb05                 jmp 0xa02afe
// 00a02af9  b817000000           mov eax, 0x17
// 00a02afe  83f911               cmp ecx, 0x11
// 00a02b01  898550060000         mov dword ptr [ebp + 0x650], eax
// 00a02b07  7d05                 jge 0xa02b0e
// 00a02b09  b911000000           mov ecx, 0x11
// 00a02b0e  8bc6                 mov eax, esi
// 00a02b10  99                   cdq 
// 00a02b11  2bc2                 sub eax, edx
// 00a02b13  d1f8                 sar eax, 1
// 00a02b15  83f80c               cmp eax, 0xc
// 00a02b18  898d60060000         mov dword ptr [ebp + 0x660], ecx
// 00a02b1e  7d05                 jge 0xa02b25
// 00a02b20  b80c000000           mov eax, 0xc
// 00a02b25  8b1da820b200         mov ebx, dword ptr [0xb220a8]
// 00a02b2b  8db554060000         lea esi, [ebp + 0x654]
// 00a02b31  8985c8000000         mov dword ptr [ebp + 0xc8], eax
// 00a02b37  837e0800             cmp dword ptr [esi + 8], 0
// 00a02b3b  7506                 jne 0xa02b43
// 00a02b3d  837e0400             cmp dword ptr [esi + 4], 0
// 00a02b41  7516                 jne 0xa02b59
// 00a02b43  8bce                 mov ecx, esi
// 00a02b45  e882fbf7ff           call 0x9826cc
// 00a02b4a  8d542410             lea edx, [esp + 0x10]
// 00a02b4e  52                   push edx
// 00a02b4f  ffd3                 call ebx
// 00a02b51  50                   push eax
// 00a02b52  8bce                 mov ecx, esi
// 00a02b54  e87ffbf7ff           call 0x9826d8
// 00a02b59  8d842480010000       lea eax, [esp + 0x180]
// 00a02b60  50                   push eax
// 00a02b61  b90f000000           mov ecx, 0xf
// 00a02b66  8d742414             lea esi, [esp + 0x14]
// 00a02b6a  8d7c2450             lea edi, [esp + 0x50]
// 00a02b6e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00a02b70  8d4c246c             lea ecx, [esp + 0x6c]
// 00a02b74  6a20                 push 0x20
// 00a02b76  51                   push ecx
// 00a02b77  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a02b7d  8db5a4000000         lea esi, [ebp + 0xa4]
// 00a02b83  83c40c               add esp, 0xc
// 00a02b86  837e0800             cmp dword ptr [esi + 8], 0
// 00a02b8a  7506                 jne 0xa02b92
// 00a02b8c  837e0400             cmp dword ptr [esi + 4], 0
// 00a02b90  7516                 jne 0xa02ba8
// 00a02b92  8bce                 mov ecx, esi
// 00a02b94  e833fbf7ff           call 0x9826cc
// 00a02b99  8d54244c             lea edx, [esp + 0x4c]
// 00a02b9d  52                   push edx
// 00a02b9e  ffd3                 call ebx
// 00a02ba0  50                   push eax
// 00a02ba1  8bce                 mov ecx, esi
// 00a02ba3  e830fbf7ff           call 0x9826d8
// 00a02ba8  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 00a02baf  8db5b0000000         lea esi, [ebp + 0xb0]
// 00a02bb5  c744245cbc020000     mov dword ptr [esp + 0x5c], 0x2bc
// 00a02bbd  7506                 jne 0xa02bc5
// 00a02bbf  837e0400             cmp dword ptr [esi + 4], 0
// 00a02bc3  7516                 jne 0xa02bdb
// 00a02bc5  8bce                 mov ecx, esi
// 00a02bc7  e800fbf7ff           call 0x9826cc
// 00a02bcc  8d44244c             lea eax, [esp + 0x4c]
// 00a02bd0  50                   push eax
// 00a02bd1  ffd3                 call ebx
// 00a02bd3  50                   push eax
// 00a02bd4  8bce                 mov ecx, esi
// 00a02bd6  e8fdfaf7ff           call 0x9826d8
// 00a02bdb  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00a02be1  8b11                 mov edx, dword ptr [ecx]
// 00a02be3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00a02be6  ffd0                 call eax
// 00a02be8  6a01                 push 1
// 00a02bea  8d4c2414             lea ecx, [esp + 0x14]
// 00a02bee  51                   push ecx
// 00a02bef  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00a02bf5  e8f6b40400           call 0xa4e0f0
// 00a02bfa  83bda000000000       cmp dword ptr [ebp + 0xa0], 0
// 00a02c01  8db598000000         lea esi, [ebp + 0x98]
// 00a02c07  7506                 jne 0xa02c0f
// 00a02c09  837e0400             cmp dword ptr [esi + 4], 0
// 00a02c0d  7519                 jne 0xa02c28
// 00a02c0f  8bce                 mov ecx, esi
// 00a02c11  e8b6faf7ff           call 0x9826cc
// 00a02c16  8d942420010000       lea edx, [esp + 0x120]
// 00a02c1d  52                   push edx
// 00a02c1e  ffd3                 call ebx
// 00a02c20  50                   push eax
// 00a02c21  8bce                 mov ecx, esi
// 00a02c23  e8b0faf7ff           call 0x9826d8
// 00a02c28  81c5bc000000         add ebp, 0xbc
// 00a02c2e  837d0800             cmp dword ptr [ebp + 8], 0
// 00a02c32  5f                   pop edi
// 00a02c33  5e                   pop esi
// 00a02c34  7506                 jne 0xa02c3c
// 00a02c36  837d0400             cmp dword ptr [ebp + 4], 0
// 00a02c3a  7519                 jne 0xa02c55
// 00a02c3c  8bcd                 mov ecx, ebp
// 00a02c3e  e889faf7ff           call 0x9826cc
// 00a02c43  8d842498010000       lea eax, [esp + 0x198]
// 00a02c4a  50                   push eax
// 00a02c4b  ffd3                 call ebx
// 00a02c4d  50                   push eax
// 00a02c4e  8bcd                 mov ecx, ebp
// 00a02c50  e883faf7ff           call 0x9826d8
// 00a02c55  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 00a02c5c  5d                   pop ebp
// 00a02c5d  5b                   pop ebx
// 00a02c5e  33cc                 xor ecx, esp
// 00a02c60  e8d20df8ff           call 0x983a37
// 00a02c65  81c40c020000         add esp, 0x20c
// 00a02c6b  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPRibbonTheme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp