// roc 2012-06 009ce100  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ce100
//
// 009ce100  8b442404             mov eax, dword ptr [esp + 4]
// 009ce104  56                   push esi
// 009ce105  57                   push edi
// 009ce106  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009ce10a  57                   push edi
// 009ce10b  50                   push eax
// 009ce10c  8bf1                 mov esi, ecx
// 009ce10e  e80d6cfcff           call 0x994d20
// 009ce113  85c0                 test eax, eax
// 009ce115  7505                 jne 0x9ce11c
// 009ce117  5f                   pop edi
// 009ce118  5e                   pop esi
// 009ce119  c20800               ret 8
// 009ce11c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 009ce122  83f8ff               cmp eax, -1
// 009ce125  7440                 je 0x9ce167
// 009ce127  85ff                 test edi, edi
// 009ce129  753c                 jne 0x9ce167
// 009ce12b  50                   push eax
// 009ce12c  8bce                 mov ecx, esi
// 009ce12e  e8dd59fcff           call 0x993b10
// 009ce133  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 009ce13d  7528                 jne 0x9ce167
// 009ce13f  8bce                 mov ecx, esi
// 009ce141  e8aa4bfcff           call 0x992cf0
// 009ce146  8b4874               mov ecx, dword ptr [eax + 0x74]
// 009ce149  397924               cmp dword ptr [ecx + 0x24], edi
// 009ce14c  7428                 je 0x9ce176
// 009ce14e  8b15242be000         mov edx, dword ptr [0xe02b24]
// 009ce154  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ce157  57                   push edi
// 009ce158  52                   push edx
// 009ce159  688c130000           push 0x138c
// 009ce15e  50                   push eax
// 009ce15f  ff15e03ab200         call dword ptr [0xb23ae0]
// 009ce165  eb0f                 jmp 0x9ce176
// 009ce167  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009ce16a  688c130000           push 0x138c
// 009ce16f  51                   push ecx
// 009ce170  ff15083cb200         call dword ptr [0xb23c08]
// 009ce176  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 009ce17d  7457                 je 0x9ce1d6
// 009ce17f  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 009ce185  83f8ff               cmp eax, -1
// 009ce188  744c                 je 0x9ce1d6
// 009ce18a  50                   push eax
// 009ce18b  8bce                 mov ecx, esi
// 009ce18d  e87e59fcff           call 0x993b10
// 009ce192  f680d000000008       test byte ptr [eax + 0xd0], 8
// 009ce199  743b                 je 0x9ce1d6
// 009ce19b  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 009ce1a1  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 009ce1a7  6a01                 push 1
// 009ce1a9  8bce                 mov ecx, esi
// 009ce1ab  7c1a                 jl 0x9ce1c7
// 009ce1ad  6a01                 push 1
// 009ce1af  40                   inc eax
// 009ce1b0  6a00                 push 0
// 009ce1b2  898620020000         mov dword ptr [esi + 0x220], eax
// 009ce1b8  e8d3e7ffff           call 0x9cc990
// 009ce1bd  5f                   pop edi
// 009ce1be  b801000000           mov eax, 1
// 009ce1c3  5e                   pop esi
// 009ce1c4  c20800               ret 8
// 009ce1c7  6a00                 push 0
// 009ce1c9  6a00                 push 0
// 009ce1cb  89861c020000         mov dword ptr [esi + 0x21c], eax
// 009ce1d1  e8bae7ffff           call 0x9cc990
// 009ce1d6  5f                   pop edi
// 009ce1d7  b801000000           mov eax, 1
// 009ce1dc  5e                   pop esi
// 009ce1dd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
