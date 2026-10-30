// roc 2011-06 00871c40  unit: CXTPToolTipContextToolTip  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871c40
//
// 00871c40  6aff                 push -1
// 00871c42  683c78a000           push 0xa0783c
// 00871c47  64a100000000         mov eax, dword ptr fs:[0]
// 00871c4d  50                   push eax
// 00871c4e  83ec78               sub esp, 0x78
// 00871c51  53                   push ebx
// 00871c52  55                   push ebp
// 00871c53  56                   push esi
// 00871c54  57                   push edi
// 00871c55  a12058c900           mov eax, dword ptr [0xc95820]
// 00871c5a  33c4                 xor eax, esp
// 00871c5c  50                   push eax
// 00871c5d  8d84248c000000       lea eax, [esp + 0x8c]
// 00871c64  64a300000000         mov dword ptr fs:[0], eax
// 00871c6a  8bf1                 mov esi, ecx
// 00871c6c  56                   push esi
// 00871c6d  8d4c247c             lea ecx, [esp + 0x7c]
// 00871c71  e8b292f9ff           call 0x80af28
// 00871c76  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00871c79  0598000000           add eax, 0x98
// 00871c7e  33ed                 xor ebp, ebp
// 00871c80  50                   push eax
// 00871c81  8d4c247c             lea ecx, [esp + 0x7c]
// 00871c85  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 00871c8c  e8f9a91500           call 0x9cc68a
// 00871c91  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00871c98  51                   push ecx
// 00871c99  8d542418             lea edx, [esp + 0x18]
// 00871c9d  52                   push edx
// 00871c9e  8bce                 mov ecx, esi
// 00871ca0  89442430             mov dword ptr [esp + 0x30], eax
// 00871ca4  e807f9ffff           call 0x8715b0
// 00871ca9  8d4c2414             lea ecx, [esp + 0x14]
// 00871cad  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00871cb5  ff15b026a400         call dword ptr [0xa426b0]
// 00871cbb  84c0                 test al, al
// 00871cbd  740f                 je 0x871cce
// 00871cbf  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00871cc6  896e04               mov dword ptr [esi + 4], ebp
// 00871cc9  e91a020000           jmp 0x871ee8
// 00871cce  8bce                 mov ecx, esi
// 00871cd0  e84bffffff           call 0x871c20
// 00871cd5  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00871cd8  8b5144               mov edx, dword ptr [ecx + 0x44]
// 00871cdb  8b7948               mov edi, dword ptr [ecx + 0x48]
// 00871cde  8b594c               mov ebx, dword ptr [ecx + 0x4c]
// 00871ce1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 00871ce4  8d4c3906             lea ecx, [ecx + edi + 6]
// 00871ce8  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00871cec  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00871cf0  8d4c1306             lea ecx, [ebx + edx + 6]
// 00871cf4  8bd8                 mov ebx, eax
// 00871cf6  2bd9                 sub ebx, ecx
// 00871cf8  68100c0000           push 0xc10
// 00871cfd  8d54244c             lea edx, [esp + 0x4c]
// 00871d01  894c2444             mov dword ptr [esp + 0x44], ecx
// 00871d05  52                   push edx
// 00871d06  8d4c241c             lea ecx, [esp + 0x1c]
// 00871d0a  896c2450             mov dword ptr [esp + 0x50], ebp
// 00871d0e  896c2454             mov dword ptr [esp + 0x54], ebp
// 00871d12  895c2458             mov dword ptr [esp + 0x58], ebx
// 00871d16  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00871d1a  83c770               add edi, 0x70
// 00871d1d  ff15a826a400         call dword ptr [0xa426a8]
// 00871d23  50                   push eax
// 00871d24  8d4c2420             lea ecx, [esp + 0x20]
// 00871d28  ff15c82da400         call dword ptr [0xa42dc8]
// 00871d2e  50                   push eax
// 00871d2f  8b07                 mov eax, dword ptr [edi]
// 00871d31  8d8c2488000000       lea ecx, [esp + 0x88]
// 00871d38  ffd0                 call eax
// 00871d3a  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00871d3e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00871d42  2b7c244c             sub edi, dword ptr [esp + 0x4c]
// 00871d46  2b6c2448             sub ebp, dword ptr [esp + 0x48]
// 00871d4a  33c9                 xor ecx, ecx
// 00871d4c  398e2c010000         cmp dword ptr [esi + 0x12c], ecx
// 00871d52  897c243c             mov dword ptr [esp + 0x3c], edi
// 00871d56  0f95c1               setne cl
// 00871d59  894c2420             mov dword ptr [esp + 0x20], ecx
// 00871d5d  8d8e28010000         lea ecx, [esi + 0x128]
// 00871d63  894c2424             mov dword ptr [esp + 0x24], ecx
// 00871d67  ff15b026a400         call dword ptr [0xa426b0]
// 00871d6d  33d2                 xor edx, edx
// 00871d6f  84c0                 test al, al
// 00871d71  0f94c2               sete dl
// 00871d74  837c242000           cmp dword ptr [esp + 0x20], 0
// 00871d79  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00871d81  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00871d89  8954241c             mov dword ptr [esp + 0x1c], edx
// 00871d8d  744f                 je 0x871dde
// 00871d8f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00871d95  e836240300           call 0x8a41d0
// 00871d9a  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00871da0  89442418             mov dword ptr [esp + 0x18], eax
// 00871da4  e8e775ffff           call 0x869390
// 00871da9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00871dad  33d2                 xor edx, edx
// 00871daf  83f910               cmp ecx, 0x10
// 00871db2  0f9ec2               setle dl
// 00871db5  89442430             mov dword ptr [esp + 0x30], eax
// 00871db9  894c2434             mov dword ptr [esp + 0x34], ecx
// 00871dbd  89542418             mov dword ptr [esp + 0x18], edx
// 00871dc1  85d2                 test edx, edx
// 00871dc3  740d                 je 0x871dd2
// 00871dc5  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00871dca  750a                 jne 0x871dd6
// 00871dcc  8d6c2803             lea ebp, [eax + ebp + 3]
// 00871dd0  eb04                 jmp 0x871dd6
// 00871dd2  8d6c2805             lea ebp, [eax + ebp + 5]
// 00871dd6  3bf9                 cmp edi, ecx
// 00871dd8  7f04                 jg 0x871dde
// 00871dda  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00871dde  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00871de3  0f84db000000         je 0x871ec4
// 00871de9  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00871dec  05a0000000           add eax, 0xa0
// 00871df1  50                   push eax
// 00871df2  8d4c247c             lea ecx, [esp + 0x7c]
// 00871df6  51                   push ecx
// 00871df7  8d4c2470             lea ecx, [esp + 0x70]
// 00871dfb  e820b3feff           call 0x85d120
// 00871e00  8b742478             mov esi, dword ptr [esp + 0x78]
// 00871e04  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00871e08  33c9                 xor ecx, ecx
// 00871e0a  68200c0000           push 0xc20
// 00871e0f  8d54245c             lea edx, [esp + 0x5c]
// 00871e13  8d43e7               lea eax, [ebx - 0x19]
// 00871e16  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00871e1a  894c2460             mov dword ptr [esp + 0x60], ecx
// 00871e1e  894c2468             mov dword ptr [esp + 0x68], ecx
// 00871e22  52                   push edx
// 00871e23  8bcf                 mov ecx, edi
// 00871e25  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00871e2d  89442468             mov dword ptr [esp + 0x68], eax
// 00871e31  83c670               add esi, 0x70
// 00871e34  ff15a826a400         call dword ptr [0xa426a8]
// 00871e3a  50                   push eax
// 00871e3b  8bcf                 mov ecx, edi
// 00871e3d  ff15c82da400         call dword ptr [0xa42dc8]
// 00871e43  50                   push eax
// 00871e44  8b06                 mov eax, dword ptr [esi]
// 00871e46  8d8c2488000000       lea ecx, [esp + 0x88]
// 00871e4d  ffd0                 call eax
// 00871e4f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00871e53  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00871e57  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00871e5b  8d440a14             lea eax, [edx + ecx + 0x14]
// 00871e5f  8944243c             mov dword ptr [esp + 0x3c], eax
// 00871e63  8b442460             mov eax, dword ptr [esp + 0x60]
// 00871e67  2b442458             sub eax, dword ptr [esp + 0x58]
// 00871e6b  8bd3                 mov edx, ebx
// 00871e6d  83c004               add eax, 4
// 00871e70  3bd8                 cmp ebx, eax
// 00871e72  7c02                 jl 0x871e76
// 00871e74  8bd0                 mov edx, eax
// 00871e76  8b742420             mov esi, dword ptr [esp + 0x20]
// 00871e7a  85f6                 test esi, esi
// 00871e7c  740e                 je 0x871e8c
// 00871e7e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00871e83  7407                 je 0x871e8c
// 00871e85  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00871e89  41                   inc ecx
// 00871e8a  eb02                 jmp 0x871e8e
// 00871e8c  33c9                 xor ecx, ecx
// 00871e8e  83c519               add ebp, 0x19
// 00871e91  03ca                 add ecx, edx
// 00871e93  3be9                 cmp ebp, ecx
// 00871e95  7f1c                 jg 0x871eb3
// 00871e97  3bd8                 cmp ebx, eax
// 00871e99  7c02                 jl 0x871e9d
// 00871e9b  8bd8                 mov ebx, eax
// 00871e9d  85f6                 test esi, esi
// 00871e9f  740e                 je 0x871eaf
// 00871ea1  837c241800           cmp dword ptr [esp + 0x18], 0
// 00871ea6  7407                 je 0x871eaf
// 00871ea8  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00871eac  45                   inc ebp
// 00871ead  eb02                 jmp 0x871eb1
// 00871eaf  33ed                 xor ebp, ebp
// 00871eb1  03eb                 add ebp, ebx
// 00871eb3  8d4c2468             lea ecx, [esp + 0x68]
// 00871eb7  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00871ebf  e8dcb2feff           call 0x85d1a0
// 00871ec4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00871ec8  51                   push ecx
// 00871ec9  8d4c247c             lea ecx, [esp + 0x7c]
// 00871ecd  e8b8a71500           call 0x9cc68a
// 00871ed2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00871ed6  036c2440             add ebp, dword ptr [esp + 0x40]
// 00871eda  0344242c             add eax, dword ptr [esp + 0x2c]
// 00871ede  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00871ee5  894604               mov dword ptr [esi + 4], eax
// 00871ee8  8d4c2414             lea ecx, [esp + 0x14]
// 00871eec  892e                 mov dword ptr [esi], ebp
// 00871eee  ff15082ea400         call dword ptr [0xa42e08]
// 00871ef4  8d4c2478             lea ecx, [esp + 0x78]
// 00871ef8  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 00871f03  e81a90f9ff           call 0x80af22
// 00871f08  8bc6                 mov eax, esi
// 00871f0a  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00871f11  64890d00000000       mov dword ptr fs:[0], ecx
// 00871f18  59                   pop ecx
// 00871f19  5f                   pop edi
// 00871f1a  5e                   pop esi
// 00871f1b  5d                   pop ebp
// 00871f1c  5b                   pop ebx
// 00871f1d  81c484000000         add esp, 0x84
// 00871f23  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CXTPToolTipContextToolTip@@MAE?AVCSize@@PAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp