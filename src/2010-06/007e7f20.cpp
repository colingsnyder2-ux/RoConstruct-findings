// roc 2010-06 007e7f20  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e7f20
//
// 007e7f20  83ec08               sub esp, 8
// 007e7f23  56                   push esi
// 007e7f24  8bf1                 mov esi, ecx
// 007e7f26  837e0400             cmp dword ptr [esi + 4], 0
// 007e7f2a  750f                 jne 0x7e7f3b
// 007e7f2c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7f2f  e83c00fcff           call 0x7a7f70
// 007e7f34  5e                   pop esi
// 007e7f35  83c408               add esp, 8
// 007e7f38  c20c00               ret 0xc
// 007e7f3b  53                   push ebx
// 007e7f3c  57                   push edi
// 007e7f3d  8b3d7cbc9e00         mov edi, dword ptr [0x9ebc7c]
// 007e7f43  6a11                 push 0x11
// 007e7f45  ffd7                 call edi
// 007e7f47  33db                 xor ebx, ebx
// 007e7f49  6685c0               test ax, ax
// 007e7f4c  0f9cc3               setl bl
// 007e7f4f  6a10                 push 0x10
// 007e7f51  895c2414             mov dword ptr [esp + 0x14], ebx
// 007e7f55  ffd7                 call edi
// 007e7f57  33c9                 xor ecx, ecx
// 007e7f59  6685c0               test ax, ax
// 007e7f5c  0f9cc1               setl cl
// 007e7f5f  8bc1                 mov eax, ecx
// 007e7f61  8944240c             mov dword ptr [esp + 0xc], eax
// 007e7f65  85db                 test ebx, ebx
// 007e7f67  7530                 jne 0x7e7f99
// 007e7f69  85c0                 test eax, eax
// 007e7f6b  752c                 jne 0x7e7f99
// 007e7f6d  8bce                 mov ecx, esi
// 007e7f6f  e8ccf8ffff           call 0x7e7840
// 007e7f74  83f801               cmp eax, 1
// 007e7f77  7715                 ja 0x7e7f8e
// 007e7f79  751e                 jne 0x7e7f99
// 007e7f7b  8bce                 mov ecx, esi
// 007e7f7d  e87edbffff           call 0x7e5b00
// 007e7f82  50                   push eax
// 007e7f83  8bce                 mov ecx, esi
// 007e7f85  e876d7ffff           call 0x7e5700
// 007e7f8a  85c0                 test eax, eax
// 007e7f8c  750b                 jne 0x7e7f99
// 007e7f8e  6a00                 push 0
// 007e7f90  6a00                 push 0
// 007e7f92  8bce                 mov ecx, esi
// 007e7f94  e837e8ffff           call 0x7e67d0
// 007e7f99  55                   push ebp
// 007e7f9a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007e7f9e  8d45df               lea eax, [ebp - 0x21]
// 007e7fa1  33ff                 xor edi, edi
// 007e7fa3  83f807               cmp eax, 7
// 007e7fa6  773c                 ja 0x7e7fe4
// 007e7fa8  0fb69094807e00       movzx edx, byte ptr [eax + 0x7e8094]
// 007e7faf  ff24958c807e00       jmp dword ptr [edx*4 + 0x7e808c]
// 007e7fb6  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e7fb9  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e7fbc  6a00                 push 0
// 007e7fbe  6a09                 push 9
// 007e7fc0  680a110000           push 0x110a
// 007e7fc5  50                   push eax
// 007e7fc6  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e7fcc  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007e7fd0  8bf8                 mov edi, eax
// 007e7fd2  7503                 jne 0x7e7fd7
// 007e7fd4  897e0c               mov dword ptr [esi + 0xc], edi
// 007e7fd7  85db                 test ebx, ebx
// 007e7fd9  7509                 jne 0x7e7fe4
// 007e7fdb  395c2410             cmp dword ptr [esp + 0x10], ebx
// 007e7fdf  7503                 jne 0x7e7fe4
// 007e7fe1  895e0c               mov dword ptr [esi + 0xc], ebx
// 007e7fe4  83fd26               cmp ebp, 0x26
// 007e7fe7  7409                 je 0x7e7ff2
// 007e7fe9  83fd21               cmp ebp, 0x21
// 007e7fec  7404                 je 0x7e7ff2
// 007e7fee  33db                 xor ebx, ebx
// 007e7ff0  eb05                 jmp 0x7e7ff7
// 007e7ff2  bb01000000           mov ebx, 1
// 007e7ff7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e7ffa  e871fffbff           call 0x7a7f70
// 007e7fff  85ff                 test edi, edi
// 007e8001  747c                 je 0x7e807f
// 007e8003  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e8008  7507                 jne 0x7e8011
// 007e800a  837c241000           cmp dword ptr [esp + 0x10], 0
// 007e800f  746e                 je 0x7e807f
// 007e8011  83fd22               cmp ebp, 0x22
// 007e8014  741b                 je 0x7e8031
// 007e8016  83fd21               cmp ebp, 0x21
// 007e8019  7416                 je 0x7e8031
// 007e801b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007e801e  57                   push edi
// 007e801f  85db                 test ebx, ebx
// 007e8021  7407                 je 0x7e802a
// 007e8023  e868daffff           call 0x7e5a90
// 007e8028  eb1d                 jmp 0x7e8047
// 007e802a  e841daffff           call 0x7e5a70
// 007e802f  eb16                 jmp 0x7e8047
// 007e8031  8b4634               mov eax, dword ptr [esi + 0x34]
// 007e8034  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e8037  6a00                 push 0
// 007e8039  6a09                 push 9
// 007e803b  680a110000           push 0x110a
// 007e8040  51                   push ecx
// 007e8041  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e8047  85c0                 test eax, eax
// 007e8049  7502                 jne 0x7e804d
// 007e804b  8bc7                 mov eax, edi
// 007e804d  837c241000           cmp dword ptr [esp + 0x10], 0
// 007e8052  7418                 je 0x7e806c
// 007e8054  8b560c               mov edx, dword ptr [esi + 0xc]
// 007e8057  6a01                 push 1
// 007e8059  50                   push eax
// 007e805a  52                   push edx
// 007e805b  8bce                 mov ecx, esi
// 007e805d  e87ee8ffff           call 0x7e68e0
// 007e8062  5d                   pop ebp
// 007e8063  5f                   pop edi
// 007e8064  5b                   pop ebx
// 007e8065  5e                   pop esi
// 007e8066  83c408               add esp, 8
// 007e8069  c20c00               ret 0xc
// 007e806c  837c241400           cmp dword ptr [esp + 0x14], 0
// 007e8071  740c                 je 0x7e807f
// 007e8073  6a01                 push 1
// 007e8075  6a01                 push 1
// 007e8077  50                   push eax
// 007e8078  8bce                 mov ecx, esi
// 007e807a  e891e2ffff           call 0x7e6310
// 007e807f  5d                   pop ebp
// 007e8080  5f                   pop edi
// 007e8081  5b                   pop ebx
// 007e8082  5e                   pop esi
// 007e8083  83c408               add esp, 8
// 007e8086  c20c00               ret 0xc
// 007e8089  8d4900               lea ecx, [ecx]
// 007e808c  b67f                 mov dh, 0x7f
// 007e808e  7e00                 jle 0x7e8090
// 007e8090  e47f                 in al, 0x7f
// 007e8092  7e00                 jle 0x7e8094
// 007e8094  0000                 add byte ptr [eax], al
// 007e8096  0101                 add dword ptr [ecx], eax
// 007e8098  0100                 add dword ptr [eax], eax
// 007e809a  0100                 add dword ptr [eax], eax
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
