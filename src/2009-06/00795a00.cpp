// roc 2009-06 00795a00  unit: CXTPRibbonTheme  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00795a00
//
// 00795a00  81ec0c020000         sub esp, 0x20c
// 00795a06  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00795a0b  33c4                 xor eax, esp
// 00795a0d  89842408020000       mov dword ptr [esp + 0x208], eax
// 00795a14  53                   push ebx
// 00795a15  55                   push ebp
// 00795a16  8be9                 mov ebp, ecx
// 00795a18  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00795a1f  e8ec2cffff           call 0x788710
// 00795a24  8d4c2408             lea ecx, [esp + 8]
// 00795a28  e8f3ccf8ff           call 0x722720
// 00795a2d  8b9c245c010000       mov ebx, dword ptr [esp + 0x15c]
// 00795a34  85db                 test ebx, ebx
// 00795a36  7d02                 jge 0x795a3a
// 00795a38  f7db                 neg ebx
// 00795a3a  8b8564060000         mov eax, dword ptr [ebp + 0x664]
// 00795a40  83f80b               cmp eax, 0xb
// 00795a43  7e02                 jle 0x795a47
// 00795a45  8bd8                 mov ebx, eax
// 00795a47  83fb0c               cmp ebx, 0xc
// 00795a4a  7f05                 jg 0x795a51
// 00795a4c  bb0b000000           mov ebx, 0xb
// 00795a51  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00795a55  8a842473010000       mov al, byte ptr [esp + 0x173]
// 00795a5c  8a8c2476010000       mov cl, byte ptr [esp + 0x176]
// 00795a63  c744241890010000     mov dword ptr [esp + 0x18], 0x190
// 00795a6b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00795a70  8844241f             mov byte ptr [esp + 0x1f], al
// 00795a74  884c2422             mov byte ptr [esp + 0x22], cl
// 00795a78  7424                 je 0x795a9e
// 00795a7a  e8d1aefcff           call 0x760950
// 00795a7f  8bc8                 mov ecx, eax
// 00795a81  e80ab8fcff           call 0x761290
// 00795a86  85c0                 test eax, eax
// 00795a88  7414                 je 0x795a9e
// 00795a8a  b005                 mov al, 5
// 00795a8c  88442422             mov byte ptr [esp + 0x22], al
// 00795a90  88842432010000       mov byte ptr [esp + 0x132], al
// 00795a97  888424b2010000       mov byte ptr [esp + 0x1b2], al
// 00795a9e  83bd1801000000       cmp dword ptr [ebp + 0x118], 0
// 00795aa5  56                   push esi
// 00795aa6  57                   push edi
// 00795aa7  744d                 je 0x795af6
// 00795aa9  8db51c010000         lea esi, [ebp + 0x11c]
// 00795aaf  8bce                 mov ecx, esi
// 00795ab1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00795ab7  50                   push eax
// 00795ab8  e8e3d0f8ff           call 0x722ba0
// 00795abd  83c404               add esp, 4
// 00795ac0  85c0                 test eax, eax
// 00795ac2  7432                 je 0x795af6
// 00795ac4  8bce                 mov ecx, esi
// 00795ac6  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00795acc  8b3d50e98900         mov edi, dword ptr [0x89e950]
// 00795ad2  50                   push eax
// 00795ad3  8d542430             lea edx, [esp + 0x30]
// 00795ad7  6a20                 push 0x20
// 00795ad9  52                   push edx
// 00795ada  ffd7                 call edi
// 00795adc  83c40c               add esp, 0xc
// 00795adf  8bce                 mov ecx, esi
// 00795ae1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00795ae7  50                   push eax
// 00795ae8  8d8424c0010000       lea eax, [esp + 0x1c0]
// 00795aef  6a20                 push 0x20
// 00795af1  50                   push eax
// 00795af2  ffd7                 call edi
// 00795af4  eb15                 jmp 0x795b0b
// 00795af6  8d8c2480010000       lea ecx, [esp + 0x180]
// 00795afd  51                   push ecx
// 00795afe  8d542430             lea edx, [esp + 0x30]
// 00795b02  6a20                 push 0x20
// 00795b04  52                   push edx
// 00795b05  ff1550e98900         call dword ptr [0x89e950]
// 00795b0b  8bcb                 mov ecx, ebx
// 00795b0d  c1e104               shl ecx, 4
// 00795b10  2bcb                 sub ecx, ebx
// 00795b12  03c9                 add ecx, ecx
// 00795b14  03c9                 add ecx, ecx
// 00795b16  03c9                 add ecx, ecx
// 00795b18  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00795b1d  f7e9                 imul ecx
// 00795b1f  c1fa04               sar edx, 4
// 00795b22  8bc2                 mov eax, edx
// 00795b24  c1e81f               shr eax, 0x1f
// 00795b27  03c2                 add eax, edx
// 00795b29  83c40c               add esp, 0xc
// 00795b2c  83bd2001000000       cmp dword ptr [ebp + 0x120], 0
// 00795b33  89442410             mov dword ptr [esp + 0x10], eax
// 00795b37  7423                 je 0x795b5c
// 00795b39  b90f000000           mov ecx, 0xf
// 00795b3e  8d742410             lea esi, [esp + 0x10]
// 00795b42  8dbc2488000000       lea edi, [esp + 0x88]
// 00795b49  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00795b4b  6a01                 push 1
// 00795b4d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00795b54  51                   push ecx
// 00795b55  8bcd                 mov ecx, ebp
// 00795b57  e824f0f8ff           call 0x724b80
// 00795b5c  8d0cdb               lea ecx, [ebx + ebx*8]
// 00795b5f  c1e104               shl ecx, 4
// 00795b62  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00795b67  f7e9                 imul ecx
// 00795b69  c1fa04               sar edx, 4
// 00795b6c  8bca                 mov ecx, edx
// 00795b6e  c1e91f               shr ecx, 0x1f
// 00795b71  03ca                 add ecx, edx
// 00795b73  8d4106               lea eax, [ecx + 6]
// 00795b76  83f816               cmp eax, 0x16
// 00795b79  be16000000           mov esi, 0x16
// 00795b7e  7c02                 jl 0x795b82
// 00795b80  8bf0                 mov esi, eax
// 00795b82  69dbc3000000         imul ebx, ebx, 0xc3
// 00795b88  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00795b8d  f7eb                 imul ebx
// 00795b8f  c1fa04               sar edx, 4
// 00795b92  8bc2                 mov eax, edx
// 00795b94  c1e81f               shr eax, 0x1f
// 00795b97  03c2                 add eax, edx
// 00795b99  83f816               cmp eax, 0x16
// 00795b9c  89b510010000         mov dword ptr [ebp + 0x110], esi
// 00795ba2  7d05                 jge 0x795ba9
// 00795ba4  b816000000           mov eax, 0x16
// 00795ba9  83f816               cmp eax, 0x16
// 00795bac  898514010000         mov dword ptr [ebp + 0x114], eax
// 00795bb2  7e05                 jle 0x795bb9
// 00795bb4  83c002               add eax, 2
// 00795bb7  eb05                 jmp 0x795bbe
// 00795bb9  b817000000           mov eax, 0x17
// 00795bbe  83f911               cmp ecx, 0x11
// 00795bc1  898550060000         mov dword ptr [ebp + 0x650], eax
// 00795bc7  7d05                 jge 0x795bce
// 00795bc9  b911000000           mov ecx, 0x11
// 00795bce  8bc6                 mov eax, esi
// 00795bd0  99                   cdq 
// 00795bd1  2bc2                 sub eax, edx
// 00795bd3  d1f8                 sar eax, 1
// 00795bd5  83f80c               cmp eax, 0xc
// 00795bd8  898d60060000         mov dword ptr [ebp + 0x660], ecx
// 00795bde  7d05                 jge 0x795be5
// 00795be0  b80c000000           mov eax, 0xc
// 00795be5  8b1dece08900         mov ebx, dword ptr [0x89e0ec]
// 00795beb  8db554060000         lea esi, [ebp + 0x654]
// 00795bf1  8985c8000000         mov dword ptr [ebp + 0xc8], eax
// 00795bf7  837e0800             cmp dword ptr [esi + 8], 0
// 00795bfb  7506                 jne 0x795c03
// 00795bfd  837e0400             cmp dword ptr [esi + 4], 0
// 00795c01  7516                 jne 0x795c19
// 00795c03  8bce                 mov ecx, esi
// 00795c05  e8ec33f8ff           call 0x718ff6
// 00795c0a  8d542410             lea edx, [esp + 0x10]
// 00795c0e  52                   push edx
// 00795c0f  ffd3                 call ebx
// 00795c11  50                   push eax
// 00795c12  8bce                 mov ecx, esi
// 00795c14  e8e933f8ff           call 0x719002
// 00795c19  8d842480010000       lea eax, [esp + 0x180]
// 00795c20  50                   push eax
// 00795c21  b90f000000           mov ecx, 0xf
// 00795c26  8d742414             lea esi, [esp + 0x14]
// 00795c2a  8d7c2450             lea edi, [esp + 0x50]
// 00795c2e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00795c30  8d4c246c             lea ecx, [esp + 0x6c]
// 00795c34  6a20                 push 0x20
// 00795c36  51                   push ecx
// 00795c37  ff1550e98900         call dword ptr [0x89e950]
// 00795c3d  8db5a4000000         lea esi, [ebp + 0xa4]
// 00795c43  83c40c               add esp, 0xc
// 00795c46  837e0800             cmp dword ptr [esi + 8], 0
// 00795c4a  7506                 jne 0x795c52
// 00795c4c  837e0400             cmp dword ptr [esi + 4], 0
// 00795c50  7516                 jne 0x795c68
// 00795c52  8bce                 mov ecx, esi
// 00795c54  e89d33f8ff           call 0x718ff6
// 00795c59  8d54244c             lea edx, [esp + 0x4c]
// 00795c5d  52                   push edx
// 00795c5e  ffd3                 call ebx
// 00795c60  50                   push eax
// 00795c61  8bce                 mov ecx, esi
// 00795c63  e89a33f8ff           call 0x719002
// 00795c68  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 00795c6f  8db5b0000000         lea esi, [ebp + 0xb0]
// 00795c75  c744245cbc020000     mov dword ptr [esp + 0x5c], 0x2bc
// 00795c7d  7506                 jne 0x795c85
// 00795c7f  837e0400             cmp dword ptr [esi + 4], 0
// 00795c83  7516                 jne 0x795c9b
// 00795c85  8bce                 mov ecx, esi
// 00795c87  e86a33f8ff           call 0x718ff6
// 00795c8c  8d44244c             lea eax, [esp + 0x4c]
// 00795c90  50                   push eax
// 00795c91  ffd3                 call ebx
// 00795c93  50                   push eax
// 00795c94  8bce                 mov ecx, esi
// 00795c96  e86733f8ff           call 0x719002
// 00795c9b  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00795ca1  8b11                 mov edx, dword ptr [ecx]
// 00795ca3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00795ca6  ffd0                 call eax
// 00795ca8  6a01                 push 1
// 00795caa  8d4c2414             lea ecx, [esp + 0x14]
// 00795cae  51                   push ecx
// 00795caf  8b8d68060000         mov ecx, dword ptr [ebp + 0x668]
// 00795cb5  e896040600           call 0x7f6150
// 00795cba  83bda000000000       cmp dword ptr [ebp + 0xa0], 0
// 00795cc1  8db598000000         lea esi, [ebp + 0x98]
// 00795cc7  7506                 jne 0x795ccf
// 00795cc9  837e0400             cmp dword ptr [esi + 4], 0
// 00795ccd  7519                 jne 0x795ce8
// 00795ccf  8bce                 mov ecx, esi
// 00795cd1  e82033f8ff           call 0x718ff6
// 00795cd6  8d942420010000       lea edx, [esp + 0x120]
// 00795cdd  52                   push edx
// 00795cde  ffd3                 call ebx
// 00795ce0  50                   push eax
// 00795ce1  8bce                 mov ecx, esi
// 00795ce3  e81a33f8ff           call 0x719002
// 00795ce8  81c5bc000000         add ebp, 0xbc
// 00795cee  837d0800             cmp dword ptr [ebp + 8], 0
// 00795cf2  5f                   pop edi
// 00795cf3  5e                   pop esi
// 00795cf4  7506                 jne 0x795cfc
// 00795cf6  837d0400             cmp dword ptr [ebp + 4], 0
// 00795cfa  7519                 jne 0x795d15
// 00795cfc  8bcd                 mov ecx, ebp
// 00795cfe  e8f332f8ff           call 0x718ff6
// 00795d03  8d842498010000       lea eax, [esp + 0x198]
// 00795d0a  50                   push eax
// 00795d0b  ffd3                 call ebx
// 00795d0d  50                   push eax
// 00795d0e  8bcd                 mov ecx, ebp
// 00795d10  e8ed32f8ff           call 0x719002
// 00795d15  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 00795d1c  5d                   pop ebp
// 00795d1d  5b                   pop ebx
// 00795d1e  33cc                 xor ecx, esp
// 00795d20  e85548f8ff           call 0x71a57a
// 00795d25  81c40c020000         add esp, 0x20c
// 00795d2b  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPRibbonTheme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp