// from server: 100% by auto
// roc 2008-06 006ff880  unit: CXTPPropExchangeXMLNode  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ff880
//
// 006ff880  55                   push ebp
// 006ff881  8bec                 mov ebp, esp
// 006ff883  6aff                 push -1
// 006ff885  686a407e00           push 0x7e406a
// 006ff88a  64a100000000         mov eax, dword ptr fs:[0]
// 006ff890  50                   push eax
// 006ff891  83ec10               sub esp, 0x10
// 006ff894  53                   push ebx
// 006ff895  56                   push esi
// 006ff896  57                   push edi
// 006ff897  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006ff89c  33c5                 xor eax, ebp
// 006ff89e  50                   push eax
// 006ff89f  8d45f4               lea eax, [ebp - 0xc]
// 006ff8a2  64a300000000         mov dword ptr fs:[0], eax
// 006ff8a8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006ff8ab  a1447c9600           mov eax, dword ptr [0x967c44]
// 006ff8b0  83f8ff               cmp eax, -1
// 006ff8b3  755c                 jne 0x6ff911
// 006ff8b5  83792800             cmp dword ptr [ecx + 0x28], 0
// 006ff8b9  742a                 je 0x6ff8e5
// 006ff8bb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006ff8be  ff15e03e8000         call dword ptr [0x803ee0]
// 006ff8c4  50                   push eax
// 006ff8c5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006ff8c8  50                   push eax
// 006ff8c9  e882feffff           call 0x6ff750
// 006ff8ce  83c408               add esp, 8
// 006ff8d1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006ff8d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006ff8db  59                   pop ecx
// 006ff8dc  5f                   pop edi
// 006ff8dd  5e                   pop esi
// 006ff8de  5b                   pop ebx
// 006ff8df  8be5                 mov esp, ebp
// 006ff8e1  5d                   pop ebp
// 006ff8e2  c20800               ret 8
// 006ff8e5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006ff8e8  51                   push ecx
// 006ff8e9  8d550c               lea edx, [ebp + 0xc]
// 006ff8ec  52                   push edx
// 006ff8ed  e84ee0ffff           call 0x6fd940
// 006ff8f2  83c408               add esp, 8
// 006ff8f5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006ff8f8  50                   push eax
// 006ff8f9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006ff900  ff1544318000         call dword ptr [0x803144]
// 006ff906  8d4d0c               lea ecx, [ebp + 0xc]
// 006ff909  ff15143f8000         call dword ptr [0x803f14]
// 006ff90f  eb7f                 jmp 0x6ff990
// 006ff911  83792800             cmp dword ptr [ecx + 0x28], 0
// 006ff915  742f                 je 0x6ff946
// 006ff917  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006ff91a  50                   push eax
// 006ff91b  6a00                 push 0
// 006ff91d  ff15e03e8000         call dword ptr [0x803ee0]
// 006ff923  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006ff926  50                   push eax
// 006ff927  e8049ffdff           call 0x6d9830
// 006ff92c  84c0                 test al, al
// 006ff92e  7560                 jne 0x6ff990
// 006ff930  33c0                 xor eax, eax
// 006ff932  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006ff935  64890d00000000       mov dword ptr fs:[0], ecx
// 006ff93c  59                   pop ecx
// 006ff93d  5f                   pop edi
// 006ff93e  5e                   pop esi
// 006ff93f  5b                   pop ebx
// 006ff940  8be5                 mov esp, ebp
// 006ff942  5d                   pop ebp
// 006ff943  c20800               ret 8
// 006ff946  8d4de4               lea ecx, [ebp - 0x1c]
// 006ff949  e8c4c70b00           call 0x7bc112
// 006ff94e  a1447c9600           mov eax, dword ptr [0x967c44]
// 006ff953  50                   push eax
// 006ff954  6a00                 push 0
// 006ff956  8d4d0c               lea ecx, [ebp + 0xc]
// 006ff959  51                   push ecx
// 006ff95a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006ff95d  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006ff964  c645fc02             mov byte ptr [ebp - 4], 2
// 006ff968  e80323d6ff           call 0x461c70
// 006ff96d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006ff970  50                   push eax
// 006ff971  c645fc03             mov byte ptr [ebp - 4], 3
// 006ff975  ff1544318000         call dword ptr [0x803144]
// 006ff97b  8d4d0c               lea ecx, [ebp + 0xc]
// 006ff97e  ff15143f8000         call dword ptr [0x803f14]
// 006ff984  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006ff98b  e870c70b00           call 0x7bc100
// 006ff990  b801000000           mov eax, 1
// 006ff995  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006ff998  64890d00000000       mov dword ptr fs:[0], ecx
// 006ff99f  59                   pop ecx
// 006ff9a0  5f                   pop edi
// 006ff9a1  5e                   pop esi
// 006ff9a2  5b                   pop ebx
// 006ff9a3  8be5                 mov esp, ebp
// 006ff9a5  5d                   pop ebp
// 006ff9a6  c20800               ret 8
// 006ff9a9  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006ff9ac  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006ff9af  6899f00000           push 0xf099
// 006ff9b4  8955e8               mov dword ptr [ebp - 0x18], edx
// 006ff9b7  ff15c0328000         call dword ptr [0x8032c0]
// 006ff9bd  b884f96f00           mov eax, 0x6ff984
// 006ff9c2  c3                   ret 

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp
