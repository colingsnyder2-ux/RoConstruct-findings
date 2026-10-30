// roc 2009-06 007c88c0  unit: CXTPReportHyperlinks  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c88c0
//
// 007c88c0  6aff                 push -1
// 007c88c2  68c2e28700           push 0x87e2c2
// 007c88c7  64a100000000         mov eax, dword ptr fs:[0]
// 007c88cd  50                   push eax
// 007c88ce  83ec4c               sub esp, 0x4c
// 007c88d1  53                   push ebx
// 007c88d2  55                   push ebp
// 007c88d3  56                   push esi
// 007c88d4  57                   push edi
// 007c88d5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c88da  33c4                 xor eax, esp
// 007c88dc  50                   push eax
// 007c88dd  8d442460             lea eax, [esp + 0x60]
// 007c88e1  64a300000000         mov dword ptr fs:[0], eax
// 007c88e7  8bf1                 mov esi, ecx
// 007c88e9  33ed                 xor ebp, ebp
// 007c88eb  396e54               cmp dword ptr [esi + 0x54], ebp
// 007c88ee  7516                 jne 0x7c8906
// 007c88f0  33c0                 xor eax, eax
// 007c88f2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007c88f6  64890d00000000       mov dword ptr fs:[0], ecx
// 007c88fd  59                   pop ecx
// 007c88fe  5f                   pop edi
// 007c88ff  5e                   pop esi
// 007c8900  5d                   pop ebp
// 007c8901  5b                   pop ebx
// 007c8902  83c458               add esp, 0x58
// 007c8905  c3                   ret 
// 007c8906  396e20               cmp dword ptr [esi + 0x20], ebp
// 007c8909  74e5                 je 0x7c88f0
// 007c890b  56                   push esi
// 007c890c  8d4c2450             lea ecx, [esp + 0x50]
// 007c8910  e88d0ff5ff           call 0x7198a2
// 007c8915  8b4654               mov eax, dword ptr [esi + 0x54]
// 007c8918  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007c891e  83c030               add eax, 0x30
// 007c8921  50                   push eax
// 007c8922  8d4c2450             lea ecx, [esp + 0x50]
// 007c8926  51                   push ecx
// 007c8927  8d4c2444             lea ecx, [esp + 0x44]
// 007c892b  896c2470             mov dword ptr [esp + 0x70], ebp
// 007c892f  e82c7ffaff           call 0x770860
// 007c8934  8b442454             mov eax, dword ptr [esp + 0x54]
// 007c8938  8d542434             lea edx, [esp + 0x34]
// 007c893c  52                   push edx
// 007c893d  6a01                 push 1
// 007c893f  68f8338b00           push 0x8b33f8
// 007c8944  50                   push eax
// 007c8945  c644247801           mov byte ptr [esp + 0x78], 1
// 007c894a  ff1550e18900         call dword ptr [0x89e150]
// 007c8950  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c8953  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007c8957  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 007c895d  55                   push ebp
// 007c895e  55                   push ebp
// 007c895f  68a1010000           push 0x1a1
// 007c8964  51                   push ecx
// 007c8965  83c705               add edi, 5
// 007c8968  ffd3                 call ebx
// 007c896a  3bc7                 cmp eax, edi
// 007c896c  7410                 je 0x7c897e
// 007c896e  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c8971  0fb7d7               movzx edx, di
// 007c8974  52                   push edx
// 007c8975  55                   push ebp
// 007c8976  68a0010000           push 0x1a0
// 007c897b  50                   push eax
// 007c897c  ffd3                 call ebx
// 007c897e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007c8981  8bb9ec000000         mov edi, dword ptr [ecx + 0xec]
// 007c8987  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c898a  8b5730               mov edx, dword ptr [edi + 0x30]
// 007c898d  55                   push ebp
// 007c898e  55                   push ebp
// 007c898f  688b010000           push 0x18b
// 007c8994  50                   push eax
// 007c8995  897c242c             mov dword ptr [esp + 0x2c], edi
// 007c8999  89542438             mov dword ptr [esp + 0x38], edx
// 007c899d  896c2434             mov dword ptr [esp + 0x34], ebp
// 007c89a1  ffd3                 call ebx
// 007c89a3  8be8                 mov ebp, eax
// 007c89a5  83ed01               sub ebp, 1
// 007c89a8  7857                 js 0x7c8a01
// 007c89aa  8d9b00000000         lea ebx, [ebx]
// 007c89b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c89b3  6a00                 push 0
// 007c89b5  55                   push ebp
// 007c89b6  6899010000           push 0x199
// 007c89bb  51                   push ecx
// 007c89bc  ffd3                 call ebx
// 007c89be  50                   push eax
// 007c89bf  8bcf                 mov ecx, edi
// 007c89c1  e85a9afcff           call 0x792420
// 007c89c6  8bf8                 mov edi, eax
// 007c89c8  85ff                 test edi, edi
// 007c89ca  7416                 je 0x7c89e2
// 007c89cc  8bcf                 mov ecx, edi
// 007c89ce  e87d43f8ff           call 0x74cd50
// 007c89d3  85c0                 test eax, eax
// 007c89d5  750b                 jne 0x7c89e2
// 007c89d7  8bcf                 mov ecx, edi
// 007c89d9  e812e7ecff           call 0x6970f0
// 007c89de  85c0                 test eax, eax
// 007c89e0  7516                 jne 0x7c89f8
// 007c89e2  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c89e5  6a00                 push 0
// 007c89e7  55                   push ebp
// 007c89e8  6882010000           push 0x182
// 007c89ed  52                   push edx
// 007c89ee  ffd3                 call ebx
// 007c89f0  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007c89f8  83ed01               sub ebp, 1
// 007c89fb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007c89ff  79af                 jns 0x7c89b0
// 007c8a01  33c0                 xor eax, eax
// 007c8a03  39442428             cmp dword ptr [esp + 0x28], eax
// 007c8a07  89442418             mov dword ptr [esp + 0x18], eax
// 007c8a0b  0f8e74010000         jle 0x7c8b85
// 007c8a11  85c0                 test eax, eax
// 007c8a13  0f8c5d010000         jl 0x7c8b76
// 007c8a19  3b4730               cmp eax, dword ptr [edi + 0x30]
// 007c8a1c  0f8d54010000         jge 0x7c8b76
// 007c8a22  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007c8a25  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 007c8a28  8d0c81               lea ecx, [ecx + eax*4]
// 007c8a2b  85ed                 test ebp, ebp
// 007c8a2d  0f8443010000         je 0x7c8b76
// 007c8a33  8bcd                 mov ecx, ebp
// 007c8a35  e81643f8ff           call 0x74cd50
// 007c8a3a  85c0                 test eax, eax
// 007c8a3c  0f8530010000         jne 0x7c8b72
// 007c8a42  8bcd                 mov ecx, ebp
// 007c8a44  e8a7e6ecff           call 0x6970f0
// 007c8a49  85c0                 test eax, eax
// 007c8a4b  0f8421010000         je 0x7c8b72
// 007c8a51  8bcd                 mov ecx, ebp
// 007c8a53  e85844f8ff           call 0x74ceb0
// 007c8a58  50                   push eax
// 007c8a59  8bce                 mov ecx, esi
// 007c8a5b  e810feffff           call 0x7c8870
// 007c8a60  85c0                 test eax, eax
// 007c8a62  0f8d0a010000         jge 0x7c8b72
// 007c8a68  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 007c8a6f  0f84ab000000         je 0x7c8b20
// 007c8a75  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c8a78  33ff                 xor edi, edi
// 007c8a7a  57                   push edi
// 007c8a7b  57                   push edi
// 007c8a7c  688b010000           push 0x18b
// 007c8a81  52                   push edx
// 007c8a82  ffd3                 call ebx
// 007c8a84  85c0                 test eax, eax
// 007c8a86  7e71                 jle 0x7c8af9
// 007c8a88  57                   push edi
// 007c8a89  8d442424             lea eax, [esp + 0x24]
// 007c8a8d  50                   push eax
// 007c8a8e  8bce                 mov ecx, esi
// 007c8a90  e8bbfcffff           call 0x7c8750
// 007c8a95  8d4c242c             lea ecx, [esp + 0x2c]
// 007c8a99  51                   push ecx
// 007c8a9a  8bcd                 mov ecx, ebp
// 007c8a9c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 007c8aa1  e8aa66f7ff           call 0x73f150
// 007c8aa6  8bc8                 mov ecx, eax
// 007c8aa8  c644246803           mov byte ptr [esp + 0x68], 3
// 007c8aad  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c8ab3  50                   push eax
// 007c8ab4  8d4c2424             lea ecx, [esp + 0x24]
// 007c8ab8  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007c8abe  85c0                 test eax, eax
// 007c8ac0  8d4c242c             lea ecx, [esp + 0x2c]
// 007c8ac4  0f9f442417           setg byte ptr [esp + 0x17]
// 007c8ac9  ff1510fd8900         call dword ptr [0x89fd10]
// 007c8acf  8d4c2420             lea ecx, [esp + 0x20]
// 007c8ad3  c644246801           mov byte ptr [esp + 0x68], 1
// 007c8ad8  ff1510fd8900         call dword ptr [0x89fd10]
// 007c8ade  807c241700           cmp byte ptr [esp + 0x17], 0
// 007c8ae3  7514                 jne 0x7c8af9
// 007c8ae5  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c8ae8  6a00                 push 0
// 007c8aea  6a00                 push 0
// 007c8aec  688b010000           push 0x18b
// 007c8af1  52                   push edx
// 007c8af2  47                   inc edi
// 007c8af3  ffd3                 call ebx
// 007c8af5  3bf8                 cmp edi, eax
// 007c8af7  7c8f                 jl 0x7c8a88
// 007c8af9  8d442430             lea eax, [esp + 0x30]
// 007c8afd  50                   push eax
// 007c8afe  8bcd                 mov ecx, ebp
// 007c8b00  e84b66f7ff           call 0x73f150
// 007c8b05  8bc8                 mov ecx, eax
// 007c8b07  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c8b0d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c8b10  50                   push eax
// 007c8b11  57                   push edi
// 007c8b12  6881010000           push 0x181
// 007c8b17  51                   push ecx
// 007c8b18  ffd3                 call ebx
// 007c8b1a  8d4c2430             lea ecx, [esp + 0x30]
// 007c8b1e  eb26                 jmp 0x7c8b46
// 007c8b20  8d542434             lea edx, [esp + 0x34]
// 007c8b24  52                   push edx
// 007c8b25  8bcd                 mov ecx, ebp
// 007c8b27  e82466f7ff           call 0x73f150
// 007c8b2c  8bc8                 mov ecx, eax
// 007c8b2e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c8b34  50                   push eax
// 007c8b35  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c8b38  6a00                 push 0
// 007c8b3a  6880010000           push 0x180
// 007c8b3f  50                   push eax
// 007c8b40  ffd3                 call ebx
// 007c8b42  8d4c2434             lea ecx, [esp + 0x34]
// 007c8b46  8bf8                 mov edi, eax
// 007c8b48  ff1510fd8900         call dword ptr [0x89fd10]
// 007c8b4e  85ff                 test edi, edi
// 007c8b50  7c1c                 jl 0x7c8b6e
// 007c8b52  8bcd                 mov ecx, ebp
// 007c8b54  e85743f8ff           call 0x74ceb0
// 007c8b59  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c8b5c  50                   push eax
// 007c8b5d  57                   push edi
// 007c8b5e  689a010000           push 0x19a
// 007c8b63  51                   push ecx
// 007c8b64  ffd3                 call ebx
// 007c8b66  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007c8b6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007c8b72  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c8b76  40                   inc eax
// 007c8b77  3b442428             cmp eax, dword ptr [esp + 0x28]
// 007c8b7b  89442418             mov dword ptr [esp + 0x18], eax
// 007c8b7f  0f8c8cfeffff         jl 0x7c8a11
// 007c8b85  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c8b88  6a00                 push 0
// 007c8b8a  6a00                 push 0
// 007c8b8c  688b010000           push 0x18b
// 007c8b91  52                   push edx
// 007c8b92  ffd3                 call ebx
// 007c8b94  33c9                 xor ecx, ecx
// 007c8b96  85c0                 test eax, eax
// 007c8b98  0f9fc1               setg cl
// 007c8b9b  51                   push ecx
// 007c8b9c  8bce                 mov ecx, esi
// 007c8b9e  e81305f5ff           call 0x7190b6
// 007c8ba3  837c242400           cmp dword ptr [esp + 0x24], 0
// 007c8ba8  740e                 je 0x7c8bb8
// 007c8baa  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c8bad  6a01                 push 1
// 007c8baf  6a00                 push 0
// 007c8bb1  52                   push edx
// 007c8bb2  ff157cee8900         call dword ptr [0x89ee7c]
// 007c8bb8  8d4c243c             lea ecx, [esp + 0x3c]
// 007c8bbc  c644246800           mov byte ptr [esp + 0x68], 0
// 007c8bc1  e81a7dfaff           call 0x7708e0
// 007c8bc6  8d4c244c             lea ecx, [esp + 0x4c]
// 007c8bca  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007c8bd2  e8c50cf5ff           call 0x71989c
// 007c8bd7  b801000000           mov eax, 1
// 007c8bdc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007c8be0  64890d00000000       mov dword ptr fs:[0], ecx
// 007c8be7  59                   pop ecx
// 007c8be8  5f                   pop edi
// 007c8be9  5e                   pop esi
// 007c8bea  5d                   pop ebp
// 007c8beb  5b                   pop ebx
// 007c8bec  83c458               add esp, 0x58
// 007c8bef  c3                   ret 
// copied from an identical function in another client (function ?UpdateList@CXTPReportSubListControl@@QAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp