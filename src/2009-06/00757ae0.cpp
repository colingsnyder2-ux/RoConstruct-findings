// roc 2009-06 00757ae0  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00757ae0
//
// 00757ae0  81ec88000000         sub esp, 0x88
// 00757ae6  53                   push ebx
// 00757ae7  55                   push ebp
// 00757ae8  56                   push esi
// 00757ae9  8bf1                 mov esi, ecx
// 00757aeb  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757aee  c6463800             mov byte ptr [esi + 0x38], 0
// 00757af2  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00757af5  57                   push edi
// 00757af6  51                   push ecx
// 00757af7  ff1538ee8900         call dword ptr [0x89ee38]
// 00757afd  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 00757b03  6a45                 push 0x45
// 00757b05  33ed                 xor ebp, ebp
// 00757b07  ffd7                 call edi
// 00757b09  6a44                 push 0x44
// 00757b0b  89442414             mov dword ptr [esp + 0x14], eax
// 00757b0f  ffd7                 call edi
// 00757b11  8b1dd8ee8900         mov ebx, dword ptr [0x89eed8]
// 00757b17  8bf8                 mov edi, eax
// 00757b19  8da42400000000       lea esp, [esp]
// 00757b20  6a00                 push 0
// 00757b22  6a00                 push 0
// 00757b24  6a00                 push 0
// 00757b26  8d542420             lea edx, [esp + 0x20]
// 00757b2a  52                   push edx
// 00757b2b  ffd3                 call ebx
// 00757b2d  85c0                 test eax, eax
// 00757b2f  746e                 je 0x757b9f
// 00757b31  ff153cee8900         call dword ptr [0x89ee3c]
// 00757b37  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757b3a  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00757b3d  7560                 jne 0x757b9f
// 00757b3f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00757b43  2d00020000           sub eax, 0x200
// 00757b48  741f                 je 0x757b69
// 00757b4a  83e802               sub eax, 2
// 00757b4d  0f84d0000000         je 0x757c23
// 00757b53  83e803               sub eax, 3
// 00757b56  0f84c7000000         je 0x757c23
// 00757b5c  8d542414             lea edx, [esp + 0x14]
// 00757b60  52                   push edx
// 00757b61  ff154ced8900         call dword ptr [0x89ed4c]
// 00757b67  ebb7                 jmp 0x757b20
// 00757b69  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00757b6d  0fbfc1               movsx eax, cx
// 00757b70  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 00757b77  c1e910               shr ecx, 0x10
// 00757b7a  99                   cdq 
// 00757b7b  33c2                 xor eax, edx
// 00757b7d  2bc2                 sub eax, edx
// 00757b7f  3bc7                 cmp eax, edi
// 00757b81  0fbfc9               movsx ecx, cx
// 00757b84  7f14                 jg 0x757b9a
// 00757b86  8bc1                 mov eax, ecx
// 00757b88  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 00757b8f  99                   cdq 
// 00757b90  33c2                 xor eax, edx
// 00757b92  2bc2                 sub eax, edx
// 00757b94  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00757b98  7e86                 jle 0x757b20
// 00757b9a  bd02000000           mov ebp, 2
// 00757b9f  ff1544ee8900         call dword ptr [0x89ee44]
// 00757ba5  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757ba8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00757bab  894c2430             mov dword ptr [esp + 0x30], ecx
// 00757baf  8b5020               mov edx, dword ptr [eax + 0x20]
// 00757bb2  52                   push edx
// 00757bb3  ff15fcee8900         call dword ptr [0x89eefc]
// 00757bb9  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00757bc0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757bc3  57                   push edi
// 00757bc4  89442438             mov dword ptr [esp + 0x38], eax
// 00757bc8  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 00757bd0  897c2470             mov dword ptr [esp + 0x70], edi
// 00757bd4  e80d18fcff           call 0x7193e6
// 00757bd9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00757bdc  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00757be3  e8f4420f00           call 0x84bedc
// 00757be8  8bd8                 mov ebx, eax
// 00757bea  83fd01               cmp ebp, 1
// 00757bed  0f8581000000         jne 0x757c74
// 00757bf3  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 00757bfa  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00757c01  a804                 test al, 4
// 00757c03  753e                 jne 0x757c43
// 00757c05  85db                 test ebx, ebx
// 00757c07  743a                 je 0x757c43
// 00757c09  8bce                 mov ecx, esi
// 00757c0b  a808                 test al, 8
// 00757c0d  741e                 je 0x757c2d
// 00757c0f  6a02                 push 2
// 00757c11  57                   push edi
// 00757c12  e8e9f9ffff           call 0x757600
// 00757c17  f7d0                 not eax
// 00757c19  83e002               and eax, 2
// 00757c1c  6a03                 push 3
// 00757c1e  0bc5                 or eax, ebp
// 00757c20  50                   push eax
// 00757c21  eb18                 jmp 0x757c3b
// 00757c23  bd01000000           mov ebp, 1
// 00757c28  e972ffffff           jmp 0x757b9f
// 00757c2d  8b06                 mov eax, dword ptr [esi]
// 00757c2f  8b5050               mov edx, dword ptr [eax + 0x50]
// 00757c32  57                   push edi
// 00757c33  6a00                 push 0
// 00757c35  ffd2                 call edx
// 00757c37  6a03                 push 3
// 00757c39  6a03                 push 3
// 00757c3b  57                   push edi
// 00757c3c  8bce                 mov ecx, esi
// 00757c3e  e88df6ffff           call 0x7572d0
// 00757c43  8b4634               mov eax, dword ptr [esi + 0x34]
// 00757c46  8b7820               mov edi, dword ptr [eax + 0x20]
// 00757c49  ff1578ee8900         call dword ptr [0x89ee78]
// 00757c4f  3bc7                 cmp eax, edi
// 00757c51  7407                 je 0x757c5a
// 00757c53  57                   push edi
// 00757c54  ff158cee8900         call dword ptr [0x89ee8c]
// 00757c5a  8b16                 mov edx, dword ptr [esi]
// 00757c5c  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00757c5f  f7db                 neg ebx
// 00757c61  1bdb                 sbb ebx, ebx
// 00757c63  83e303               and ebx, 3
// 00757c66  83c3fb               add ebx, -5
// 00757c69  8d442430             lea eax, [esp + 0x30]
// 00757c6d  895c2438             mov dword ptr [esp + 0x38], ebx
// 00757c71  50                   push eax
// 00757c72  eb51                 jmp 0x757cc5
// 00757c74  83fd02               cmp ebp, 2
// 00757c77  7554                 jne 0x757ccd
// 00757c79  6a03                 push 3
// 00757c7b  6a03                 push 3
// 00757c7d  57                   push edi
// 00757c7e  8bce                 mov ecx, esi
// 00757c80  e84bf6ffff           call 0x7572d0
// 00757c85  f6c310               test bl, 0x10
// 00757c88  753f                 jne 0x757cc9
// 00757c8a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00757c91  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00757c98  33c0                 xor eax, eax
// 00757c9a  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 00757ca1  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00757ca8  0f95c0               setne al
// 00757cab  8d4c2430             lea ecx, [esp + 0x30]
// 00757caf  89942494000000       mov dword ptr [esp + 0x94], edx
// 00757cb6  51                   push ecx
// 00757cb7  0568feffff           add eax, 0xfffffe68
// 00757cbc  8944243c             mov dword ptr [esp + 0x3c], eax
// 00757cc0  8b06                 mov eax, dword ptr [esi]
// 00757cc2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00757cc5  8bce                 mov ecx, esi
// 00757cc7  ffd2                 call edx
// 00757cc9  c6463801             mov byte ptr [esi + 0x38], 1
// 00757ccd  5f                   pop edi
// 00757cce  5e                   pop esi
// 00757ccf  5d                   pop ebp
// 00757cd0  5b                   pop ebx
// 00757cd1  81c488000000         add esp, 0x88
// 00757cd7  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
