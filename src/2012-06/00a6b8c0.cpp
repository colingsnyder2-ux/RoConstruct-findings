// roc 2012-06 00a6b8c0  unit: CXTCaptionPopupWnd  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b8c0
//
// 00a6b8c0  6aff                 push -1
// 00a6b8c2  686988ae00           push 0xae8869
// 00a6b8c7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b8cd  50                   push eax
// 00a6b8ce  83ec20               sub esp, 0x20
// 00a6b8d1  53                   push ebx
// 00a6b8d2  55                   push ebp
// 00a6b8d3  56                   push esi
// 00a6b8d4  57                   push edi
// 00a6b8d5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b8da  33c4                 xor eax, esp
// 00a6b8dc  50                   push eax
// 00a6b8dd  8d442434             lea eax, [esp + 0x34]
// 00a6b8e1  64a300000000         mov dword ptr fs:[0], eax
// 00a6b8e7  8bf1                 mov esi, ecx
// 00a6b8e9  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00a6b8ed  33db                 xor ebx, ebx
// 00a6b8ef  3bfb                 cmp edi, ebx
// 00a6b8f1  0f84e4000000         je 0xa6b9db
// 00a6b8f7  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a6b8fa  50                   push eax
// 00a6b8fb  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b901  85c0                 test eax, eax
// 00a6b903  0f84d2000000         je 0xa6b9db
// 00a6b909  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00a6b90d  897e54               mov dword ptr [esi + 0x54], edi
// 00a6b910  3beb                 cmp ebp, ebx
// 00a6b912  0f84c3000000         je 0xa6b9db
// 00a6b918  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00a6b91b  51                   push ecx
// 00a6b91c  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b922  85c0                 test eax, eax
// 00a6b924  0f84b1000000         je 0xa6b9db
// 00a6b92a  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a6b92e  53                   push ebx
// 00a6b92f  53                   push ebx
// 00a6b930  896e58               mov dword ptr [esi + 0x58], ebp
// 00a6b933  8b5004               mov edx, dword ptr [eax + 4]
// 00a6b936  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00a6b939  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 00a6b93c  8b38                 mov edi, dword ptr [eax]
// 00a6b93e  8b4008               mov eax, dword ptr [eax + 8]
// 00a6b941  55                   push ebp
// 00a6b942  2bca                 sub ecx, edx
// 00a6b944  51                   push ecx
// 00a6b945  2bc7                 sub eax, edi
// 00a6b947  50                   push eax
// 00a6b948  52                   push edx
// 00a6b949  57                   push edi
// 00a6b94a  6800004090           push 0x90400000
// 00a6b94f  68e83bb400           push 0xb43be8
// 00a6b954  68d05fc200           push 0xc25fd0
// 00a6b959  6880000000           push 0x80
// 00a6b95e  8bce                 mov ecx, esi
// 00a6b960  e82d68f1ff           call 0x982192
// 00a6b965  85c0                 test eax, eax
// 00a6b967  7472                 je 0xa6b9db
// 00a6b969  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a6b96c  56                   push esi
// 00a6b96d  e89e78f5ff           call 0x9c3210
// 00a6b972  8d4c2448             lea ecx, [esp + 0x48]
// 00a6b976  89465c               mov dword ptr [esi + 0x5c], eax
// 00a6b979  ff158447b200         call dword ptr [0xb24784]
// 00a6b97f  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a6b983  e868cbf8ff           call 0x9f84f0
// 00a6b988  8b10                 mov edx, dword ptr [eax]
// 00a6b98a  8b5208               mov edx, dword ptr [edx + 8]
// 00a6b98d  6883240000           push 0x2483
// 00a6b992  8d4c244c             lea ecx, [esp + 0x4c]
// 00a6b996  51                   push ecx
// 00a6b997  8bc8                 mov ecx, eax
// 00a6b999  ffd2                 call edx
// 00a6b99b  8b7e60               mov edi, dword ptr [esi + 0x60]
// 00a6b99e  8d6e60               lea ebp, [esi + 0x60]
// 00a6b9a1  68ffff0000           push 0xffff
// 00a6b9a6  8d4c2428             lea ecx, [esp + 0x28]
// 00a6b9aa  e85197f6ff           call 0x9d5100
// 00a6b9af  50                   push eax
// 00a6b9b0  6801020010           push 0x10000201
// 00a6b9b5  6a02                 push 2
// 00a6b9b7  8d4c2458             lea ecx, [esp + 0x58]
// 00a6b9bb  ff159847b200         call dword ptr [0xb24798]
// 00a6b9c1  50                   push eax
// 00a6b9c2  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 00a6b9c8  56                   push esi
// 00a6b9c9  8bcd                 mov ecx, ebp
// 00a6b9cb  ffd0                 call eax
// 00a6b9cd  85c0                 test eax, eax
// 00a6b9cf  7522                 jne 0xa6b9f3
// 00a6b9d1  8d4c2448             lea ecx, [esp + 0x48]
// 00a6b9d5  ff15d047b200         call dword ptr [0xb247d0]
// 00a6b9db  33c0                 xor eax, eax
// 00a6b9dd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a6b9e1  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b9e8  59                   pop ecx
// 00a6b9e9  5f                   pop edi
// 00a6b9ea  5e                   pop esi
// 00a6b9eb  5d                   pop ebp
// 00a6b9ec  5b                   pop ebx
// 00a6b9ed  83c42c               add esp, 0x2c
// 00a6b9f0  c20c00               ret 0xc
// 00a6b9f3  8b8ef0010000         mov ecx, dword ptr [esi + 0x1f0]
// 00a6b9f9  8dbef0010000         lea edi, [esi + 0x1f0]
// 00a6b9ff  6a64                 push 0x64
// 00a6ba01  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a6ba05  56                   push esi
// 00a6ba06  8d4c242c             lea ecx, [esp + 0x2c]
// 00a6ba0a  889ee1000000         mov byte ptr [esi + 0xe1], bl
// 00a6ba10  e8eb96f6ff           call 0x9d5100
// 00a6ba15  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a6ba19  50                   push eax
// 00a6ba1a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00a6ba20  684b0f0010           push 0x10000f4b
// 00a6ba25  53                   push ebx
// 00a6ba26  8bcf                 mov ecx, edi
// 00a6ba28  ffd0                 call eax
// 00a6ba2a  85c0                 test eax, eax
// 00a6ba2c  74a3                 je 0xa6b9d1
// 00a6ba2e  8d4c2414             lea ecx, [esp + 0x14]
// 00a6ba32  89ae9c020000         mov dword ptr [esi + 0x29c], ebp
// 00a6ba38  e8516ef1ff           call 0x98288e
// 00a6ba3d  6a01                 push 1
// 00a6ba3f  53                   push ebx
// 00a6ba40  6a09                 push 9
// 00a6ba42  6a0f                 push 0xf
// 00a6ba44  6a10                 push 0x10
// 00a6ba46  8d4c2428             lea ecx, [esp + 0x28]
// 00a6ba4a  c644245001           mov byte ptr [esp + 0x50], 1
// 00a6ba4f  e8346ef1ff           call 0x982888
// 00a6ba54  895c2420             mov dword ptr [esp + 0x20], ebx
// 00a6ba58  c744241c506cb400     mov dword ptr [esp + 0x1c], 0xb46c50
// 00a6ba60  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00a6ba65  e886caf8ff           call 0x9f84f0
// 00a6ba6a  8b10                 mov edx, dword ptr [eax]
// 00a6ba6c  8b5214               mov edx, dword ptr [edx + 0x14]
// 00a6ba6f  6856240000           push 0x2456
// 00a6ba74  8d4c2420             lea ecx, [esp + 0x20]
// 00a6ba78  51                   push ecx
// 00a6ba79  8bc8                 mov ecx, eax
// 00a6ba7b  ffd2                 call edx
// 00a6ba7d  68ff00ff00           push 0xff00ff
// 00a6ba82  8d442420             lea eax, [esp + 0x20]
// 00a6ba86  50                   push eax
// 00a6ba87  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6ba8b  e840d29aff           call 0x418cd0
// 00a6ba90  53                   push ebx
// 00a6ba91  8d4c2418             lea ecx, [esp + 0x18]
// 00a6ba95  e8e6cef2ff           call 0x998980
// 00a6ba9a  50                   push eax
// 00a6ba9b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00a6baa1  e8eaf80000           call 0xa7b390
// 00a6baa6  6a01                 push 1
// 00a6baa8  8d4c2418             lea ecx, [esp + 0x18]
// 00a6baac  e8cfcef2ff           call 0x998980
// 00a6bab1  50                   push eax
// 00a6bab2  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00a6bab8  e8d3f80000           call 0xa7b390
// 00a6babd  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 00a6bac3  8b8eac020000         mov ecx, dword ptr [esi + 0x2ac]
// 00a6bac9  8b1f                 mov ebx, dword ptr [edi]
// 00a6bacb  6a01                 push 1
// 00a6bacd  50                   push eax
// 00a6bace  ba10000000           mov edx, 0x10
// 00a6bad3  51                   push ecx
// 00a6bad4  8d6aff               lea ebp, [edx - 1]
// 00a6bad7  55                   push ebp
// 00a6bad8  52                   push edx
// 00a6bad9  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 00a6badf  8bcf                 mov ecx, edi
// 00a6bae1  ffd2                 call edx
// 00a6bae3  8d4c2414             lea ecx, [esp + 0x14]
// 00a6bae7  e8dce10200           call 0xa99cc8
// 00a6baec  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6baef  6a00                 push 0
// 00a6baf1  6a0a                 push 0xa
// 00a6baf3  6a01                 push 1
// 00a6baf5  50                   push eax
// 00a6baf6  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a6bafc  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6bb00  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00a6bb05  c744241c506cb400     mov dword ptr [esp + 0x1c], 0xb46c50
// 00a6bb0d  e8eeb09aff           call 0x416c00
// 00a6bb12  8d4c2414             lea ecx, [esp + 0x14]
// 00a6bb16  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00a6bb1b  e8506df1ff           call 0x982870
// 00a6bb20  8d4c2448             lea ecx, [esp + 0x48]
// 00a6bb24  ff15d047b200         call dword ptr [0xb247d0]
// 00a6bb2a  8d45f2               lea eax, [ebp - 0xe]
// 00a6bb2d  e9abfeffff           jmp 0xa6b9dd
// copied from an identical function in another client (function ?Create@CXTCaptionPopupWnd@@UAEHABVCRect@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp