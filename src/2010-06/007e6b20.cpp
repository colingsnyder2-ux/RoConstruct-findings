// roc 2010-06 007e6b20  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e6b20
//
// 007e6b20  81ec88000000         sub esp, 0x88
// 007e6b26  53                   push ebx
// 007e6b27  55                   push ebp
// 007e6b28  56                   push esi
// 007e6b29  8bf1                 mov esi, ecx
// 007e6b2b  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6b2e  c6463800             mov byte ptr [esi + 0x38], 0
// 007e6b32  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e6b35  57                   push edi
// 007e6b36  51                   push ecx
// 007e6b37  ff1580bc9e00         call dword ptr [0x9ebc80]
// 007e6b3d  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 007e6b43  6a45                 push 0x45
// 007e6b45  33ed                 xor ebp, ebp
// 007e6b47  ffd7                 call edi
// 007e6b49  6a44                 push 0x44
// 007e6b4b  89442414             mov dword ptr [esp + 0x14], eax
// 007e6b4f  ffd7                 call edi
// 007e6b51  8b1df0bb9e00         mov ebx, dword ptr [0x9ebbf0]
// 007e6b57  8bf8                 mov edi, eax
// 007e6b59  8da42400000000       lea esp, [esp]
// 007e6b60  6a00                 push 0
// 007e6b62  6a00                 push 0
// 007e6b64  6a00                 push 0
// 007e6b66  8d542420             lea edx, [esp + 0x20]
// 007e6b6a  52                   push edx
// 007e6b6b  ffd3                 call ebx
// 007e6b6d  85c0                 test eax, eax
// 007e6b6f  746e                 je 0x7e6bdf
// 007e6b71  ff1584bc9e00         call dword ptr [0x9ebc84]
// 007e6b77  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6b7a  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 007e6b7d  7560                 jne 0x7e6bdf
// 007e6b7f  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e6b83  2d00020000           sub eax, 0x200
// 007e6b88  741f                 je 0x7e6ba9
// 007e6b8a  83e802               sub eax, 2
// 007e6b8d  0f84d0000000         je 0x7e6c63
// 007e6b93  83e803               sub eax, 3
// 007e6b96  0f84c7000000         je 0x7e6c63
// 007e6b9c  8d542414             lea edx, [esp + 0x14]
// 007e6ba0  52                   push edx
// 007e6ba1  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007e6ba7  ebb7                 jmp 0x7e6b60
// 007e6ba9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007e6bad  0fbfc1               movsx eax, cx
// 007e6bb0  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 007e6bb7  c1e910               shr ecx, 0x10
// 007e6bba  99                   cdq 
// 007e6bbb  33c2                 xor eax, edx
// 007e6bbd  2bc2                 sub eax, edx
// 007e6bbf  3bc7                 cmp eax, edi
// 007e6bc1  0fbfc9               movsx ecx, cx
// 007e6bc4  7f14                 jg 0x7e6bda
// 007e6bc6  8bc1                 mov eax, ecx
// 007e6bc8  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 007e6bcf  99                   cdq 
// 007e6bd0  33c2                 xor eax, edx
// 007e6bd2  2bc2                 sub eax, edx
// 007e6bd4  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007e6bd8  7e86                 jle 0x7e6b60
// 007e6bda  bd02000000           mov ebp, 2
// 007e6bdf  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 007e6be5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6be8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e6beb  894c2430             mov dword ptr [esp + 0x30], ecx
// 007e6bef  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e6bf2  52                   push edx
// 007e6bf3  ff15b8ba9e00         call dword ptr [0x9ebab8]
// 007e6bf9  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 007e6c00  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6c03  57                   push edi
// 007e6c04  89442438             mov dword ptr [esp + 0x38], eax
// 007e6c08  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 007e6c10  897c2470             mov dword ptr [esp + 0x70], edi
// 007e6c14  e83517fcff           call 0x7a834e
// 007e6c19  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e6c1c  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 007e6c23  e8b6611900           call 0x97cdde
// 007e6c28  8bd8                 mov ebx, eax
// 007e6c2a  83fd01               cmp ebp, 1
// 007e6c2d  0f8581000000         jne 0x7e6cb4
// 007e6c33  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 007e6c3a  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 007e6c41  a804                 test al, 4
// 007e6c43  753e                 jne 0x7e6c83
// 007e6c45  85db                 test ebx, ebx
// 007e6c47  743a                 je 0x7e6c83
// 007e6c49  8bce                 mov ecx, esi
// 007e6c4b  a808                 test al, 8
// 007e6c4d  741e                 je 0x7e6c6d
// 007e6c4f  6a02                 push 2
// 007e6c51  57                   push edi
// 007e6c52  e8e9f9ffff           call 0x7e6640
// 007e6c57  f7d0                 not eax
// 007e6c59  83e002               and eax, 2
// 007e6c5c  6a03                 push 3
// 007e6c5e  0bc5                 or eax, ebp
// 007e6c60  50                   push eax
// 007e6c61  eb18                 jmp 0x7e6c7b
// 007e6c63  bd01000000           mov ebp, 1
// 007e6c68  e972ffffff           jmp 0x7e6bdf
// 007e6c6d  8b06                 mov eax, dword ptr [esi]
// 007e6c6f  8b5050               mov edx, dword ptr [eax + 0x50]
// 007e6c72  57                   push edi
// 007e6c73  6a00                 push 0
// 007e6c75  ffd2                 call edx
// 007e6c77  6a03                 push 3
// 007e6c79  6a03                 push 3
// 007e6c7b  57                   push edi
// 007e6c7c  8bce                 mov ecx, esi
// 007e6c7e  e88df6ffff           call 0x7e6310
// 007e6c83  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e6c86  8b7820               mov edi, dword ptr [eax + 0x20]
// 007e6c89  ff1580ba9e00         call dword ptr [0x9eba80]
// 007e6c8f  3bc7                 cmp eax, edi
// 007e6c91  7407                 je 0x7e6c9a
// 007e6c93  57                   push edi
// 007e6c94  ff1558ba9e00         call dword ptr [0x9eba58]
// 007e6c9a  8b16                 mov edx, dword ptr [esi]
// 007e6c9c  8b524c               mov edx, dword ptr [edx + 0x4c]
// 007e6c9f  f7db                 neg ebx
// 007e6ca1  1bdb                 sbb ebx, ebx
// 007e6ca3  83e303               and ebx, 3
// 007e6ca6  83c3fb               add ebx, -5
// 007e6ca9  8d442430             lea eax, [esp + 0x30]
// 007e6cad  895c2438             mov dword ptr [esp + 0x38], ebx
// 007e6cb1  50                   push eax
// 007e6cb2  eb51                 jmp 0x7e6d05
// 007e6cb4  83fd02               cmp ebp, 2
// 007e6cb7  7554                 jne 0x7e6d0d
// 007e6cb9  6a03                 push 3
// 007e6cbb  6a03                 push 3
// 007e6cbd  57                   push edi
// 007e6cbe  8bce                 mov ecx, esi
// 007e6cc0  e84bf6ffff           call 0x7e6310
// 007e6cc5  f6c310               test bl, 0x10
// 007e6cc8  753f                 jne 0x7e6d09
// 007e6cca  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007e6cd1  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 007e6cd8  33c0                 xor eax, eax
// 007e6cda  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 007e6ce1  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 007e6ce8  0f95c0               setne al
// 007e6ceb  8d4c2430             lea ecx, [esp + 0x30]
// 007e6cef  89942494000000       mov dword ptr [esp + 0x94], edx
// 007e6cf6  51                   push ecx
// 007e6cf7  0568feffff           add eax, 0xfffffe68
// 007e6cfc  8944243c             mov dword ptr [esp + 0x3c], eax
// 007e6d00  8b06                 mov eax, dword ptr [esi]
// 007e6d02  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007e6d05  8bce                 mov ecx, esi
// 007e6d07  ffd2                 call edx
// 007e6d09  c6463801             mov byte ptr [esi + 0x38], 1
// 007e6d0d  5f                   pop edi
// 007e6d0e  5e                   pop esi
// 007e6d0f  5d                   pop ebp
// 007e6d10  5b                   pop ebx
// 007e6d11  81c488000000         add esp, 0x88
// 007e6d17  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
