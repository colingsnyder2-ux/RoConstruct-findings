// roc 2012-06 00998f00  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998f00
//
// 00998f00  6aff                 push -1
// 00998f02  68c8cbad00           push 0xadcbc8
// 00998f07  64a100000000         mov eax, dword ptr fs:[0]
// 00998f0d  50                   push eax
// 00998f0e  83ec1c               sub esp, 0x1c
// 00998f11  53                   push ebx
// 00998f12  55                   push ebp
// 00998f13  56                   push esi
// 00998f14  57                   push edi
// 00998f15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00998f1a  33c4                 xor eax, esp
// 00998f1c  50                   push eax
// 00998f1d  8d442430             lea eax, [esp + 0x30]
// 00998f21  64a300000000         mov dword ptr fs:[0], eax
// 00998f27  8b442444             mov eax, dword ptr [esp + 0x44]
// 00998f2b  8b742440             mov esi, dword ptr [esp + 0x40]
// 00998f2f  6a02                 push 2
// 00998f31  50                   push eax
// 00998f32  56                   push esi
// 00998f33  ff154022b200         call dword ptr [0xb22240]
// 00998f39  8be8                 mov ebp, eax
// 00998f3b  85ed                 test ebp, ebp
// 00998f3d  0f849a000000         je 0x998fdd
// 00998f43  55                   push ebp
// 00998f44  56                   push esi
// 00998f45  ff158421b200         call dword ptr [0xb22184]
// 00998f4b  8bd8                 mov ebx, eax
// 00998f4d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00998f51  85db                 test ebx, ebx
// 00998f53  0f8484000000         je 0x998fdd
// 00998f59  53                   push ebx
// 00998f5a  ff15d422b200         call dword ptr [0xb222d4]
// 00998f60  8bf8                 mov edi, eax
// 00998f62  85ff                 test edi, edi
// 00998f64  7477                 je 0x998fdd
// 00998f66  8b7708               mov esi, dword ptr [edi + 8]
// 00998f69  0faf7704             imul esi, dword ptr [edi + 4]
// 00998f6d  03f6                 add esi, esi
// 00998f6f  03f6                 add esi, esi
// 00998f71  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 00998f76  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00998f7e  0f85d5000000         jne 0x999059
// 00998f84  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00998f88  55                   push ebp
// 00998f89  51                   push ecx
// 00998f8a  ff158821b200         call dword ptr [0xb22188]
// 00998f90  8d5628               lea edx, [esi + 0x28]
// 00998f93  3bc2                 cmp eax, edx
// 00998f95  0f82be000000         jb 0x999059
// 00998f9b  8d4c2420             lea ecx, [esp + 0x20]
// 00998f9f  e8ec9ffeff           call 0x982f90
// 00998fa4  33ed                 xor ebp, ebp
// 00998fa6  55                   push ebp
// 00998fa7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00998fab  ff155821b200         call dword ptr [0xb22158]
// 00998fb1  50                   push eax
// 00998fb2  8d4c2424             lea ecx, [esp + 0x24]
// 00998fb6  e8939ffeff           call 0x982f4e
// 00998fbb  6a34                 push 0x34
// 00998fbd  ff15f829b200         call dword ptr [0xb229f8]
// 00998fc3  8bd8                 mov ebx, eax
// 00998fc5  83c404               add esp, 4
// 00998fc8  3bdd                 cmp ebx, ebp
// 00998fca  7527                 jne 0x998ff3
// 00998fcc  8d4c2420             lea ecx, [esp + 0x20]
// 00998fd0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00998fd8  e8a19ffeff           call 0x982f7e
// 00998fdd  33c0                 xor eax, eax
// 00998fdf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00998fe3  64890d00000000       mov dword ptr fs:[0], ecx
// 00998fea  59                   pop ecx
// 00998feb  5f                   pop edi
// 00998fec  5e                   pop esi
// 00998fed  5d                   pop ebp
// 00998fee  5b                   pop ebx
// 00998fef  83c428               add esp, 0x28
// 00998ff2  c3                   ret 
// 00998ff3  6a28                 push 0x28
// 00998ff5  57                   push edi
// 00998ff6  53                   push ebx
// 00998ff7  e8f4deffff           call 0x996ef0
// 00998ffc  83c40c               add esp, 0xc
// 00998fff  55                   push ebp
// 00999000  55                   push ebp
// 00999001  8d44241c             lea eax, [esp + 0x1c]
// 00999005  50                   push eax
// 00999006  55                   push ebp
// 00999007  897314               mov dword ptr [ebx + 0x14], esi
// 0099900a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0099900e  53                   push ebx
// 0099900f  51                   push ecx
// 00999010  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00999014  ff154c21b200         call dword ptr [0xb2214c]
// 0099901a  8be8                 mov ebp, eax
// 0099901c  85ed                 test ebp, ebp
// 0099901e  741a                 je 0x99903a
// 00999020  8b442414             mov eax, dword ptr [esp + 0x14]
// 00999024  85c0                 test eax, eax
// 00999026  7412                 je 0x99903a
// 00999028  56                   push esi
// 00999029  83c728               add edi, 0x28
// 0099902c  57                   push edi
// 0099902d  50                   push eax
// 0099902e  e8bddeffff           call 0x996ef0
// 00999033  83c40c               add esp, 0xc
// 00999036  896c2418             mov dword ptr [esp + 0x18], ebp
// 0099903a  53                   push ebx
// 0099903b  ff15c829b200         call dword ptr [0xb229c8]
// 00999041  83c404               add esp, 4
// 00999044  8d4c2420             lea ecx, [esp + 0x20]
// 00999048  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00999050  e8299ffeff           call 0x982f7e
// 00999055  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00999059  53                   push ebx
// 0099905a  ff15d022b200         call dword ptr [0xb222d0]
// 00999060  8b442418             mov eax, dword ptr [esp + 0x18]
// 00999064  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00999068  64890d00000000       mov dword ptr fs:[0], ecx
// 0099906f  59                   pop ecx
// 00999070  5f                   pop edi
// 00999071  5e                   pop esi
// 00999072  5d                   pop ebp
// 00999073  5b                   pop ebx
// 00999074  83c428               add esp, 0x28
// 00999077  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp