// roc 2011-06 00873b30  unit: CXTPPropertyGridToolTip  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873b30
//
// 00873b30  56                   push esi
// 00873b31  8bf1                 mov esi, ecx
// 00873b33  837e6800             cmp dword ptr [esi + 0x68], 0
// 00873b37  0f840a010000         je 0x873c47
// 00873b3d  53                   push ebx
// 00873b3e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00873b42  8b4304               mov eax, dword ptr [ebx + 4]
// 00873b45  3d00020000           cmp eax, 0x200
// 00873b4a  7207                 jb 0x873b53
// 00873b4c  3d0a020000           cmp eax, 0x20a
// 00873b51  7616                 jbe 0x873b69
// 00873b53  3da0000000           cmp eax, 0xa0
// 00873b58  0f82e8000000         jb 0x873c46
// 00873b5e  3da9000000           cmp eax, 0xa9
// 00873b63  0f87dd000000         ja 0x873c46
// 00873b69  57                   push edi
// 00873b6a  e8a1feffff           call 0x873a10
// 00873b6f  817b0401020000       cmp dword ptr [ebx + 4], 0x201
// 00873b76  8bf8                 mov edi, eax
// 00873b78  7512                 jne 0x873b8c
// 00873b7a  85ff                 test edi, edi
// 00873b7c  7424                 je 0x873ba2
// 00873b7e  57                   push edi
// 00873b7f  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00873b85  e8d6d8ffff           call 0x871460
// 00873b8a  eb14                 jmp 0x873ba0
// 00873b8c  85ff                 test edi, edi
// 00873b8e  7412                 je 0x873ba2
// 00873b90  57                   push edi
// 00873b91  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00873b97  e894d8ffff           call 0x871430
// 00873b9c  85c0                 test eax, eax
// 00873b9e  7402                 je 0x873ba2
// 00873ba0  33ff                 xor edi, edi
// 00873ba2  55                   push ebp
// 00873ba3  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00873ba9  85ed                 test ebp, ebp
// 00873bab  742e                 je 0x873bdb
// 00873bad  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00873bb3  57                   push edi
// 00873bb4  8bcb                 mov ecx, ebx
// 00873bb6  e875d8ffff           call 0x871430
// 00873bbb  85c0                 test eax, eax
// 00873bbd  751c                 jne 0x873bdb
// 00873bbf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00873bc2  55                   push ebp
// 00873bc3  50                   push eax
// 00873bc4  ff15d019a400         call dword ptr [0xa419d0]
// 00873bca  8bcb                 mov ecx, ebx
// 00873bcc  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 00873bd6  e8f5deffff           call 0x871ad0
// 00873bdb  5d                   pop ebp
// 00873bdc  85ff                 test edi, edi
// 00873bde  745c                 je 0x873c3c
// 00873be0  57                   push edi
// 00873be1  8d4e70               lea ecx, [esi + 0x70]
// 00873be4  e847d8ffff           call 0x871430
// 00873be9  85c0                 test eax, eax
// 00873beb  7558                 jne 0x873c45
// 00873bed  ff15f802a400         call dword ptr [0xa402f8]
// 00873bf3  2b861c010000         sub eax, dword ptr [esi + 0x11c]
// 00873bf9  57                   push edi
// 00873bfa  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00873c00  723c                 jb 0x873c3e
// 00873c02  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00873c08  8bcb                 mov ecx, ebx
// 00873c0a  e821d8ffff           call 0x871430
// 00873c0f  85c0                 test eax, eax
// 00873c11  7532                 jne 0x873c45
// 00873c13  57                   push edi
// 00873c14  8bcb                 mov ecx, ebx
// 00873c16  e845d8ffff           call 0x871460
// 00873c1b  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00873c21  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00873c24  6a00                 push 0
// 00873c26  50                   push eax
// 00873c27  6a01                 push 1
// 00873c29  51                   push ecx
// 00873c2a  ff15741ca400         call dword ptr [0xa41c74]
// 00873c30  5f                   pop edi
// 00873c31  5b                   pop ebx
// 00873c32  898618010000         mov dword ptr [esi + 0x118], eax
// 00873c38  5e                   pop esi
// 00873c39  c20400               ret 4
// 00873c3c  6a00                 push 0
// 00873c3e  8bce                 mov ecx, esi
// 00873c40  e86be3ffff           call 0x871fb0
// 00873c45  5f                   pop edi
// 00873c46  5b                   pop ebx
// 00873c47  5e                   pop esi
// 00873c48  c20400               ret 4
// copied from an identical function in another client (function ?RelayEvent@CXTPToolTipContextToolTip@@QAEXPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp