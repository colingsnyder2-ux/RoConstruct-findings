// roc 2009-06 005c4710  unit: seg_005c0000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4710
//
// 005c4710  55                   push ebp
// 005c4711  8bec                 mov ebp, esp
// 005c4713  83ec0c               sub esp, 0xc
// 005c4716  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c4719  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c471c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005c471f  51                   push ecx
// 005c4720  e82bd3ffff           call 0x5c1a50
// 005c4725  83c404               add esp, 4
// 005c4728  8b10                 mov edx, dword ptr [eax]
// 005c472a  8955fc               mov dword ptr [ebp - 4], edx
// 005c472d  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c4730  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005c4733  51                   push ecx
// 005c4734  e817d3ffff           call 0x5c1a50
// 005c4739  83c404               add esp, 4
// 005c473c  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c473f  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005c4742  8908                 mov dword ptr [eax], ecx
// 005c4744  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c4747  8b4214               mov eax, dword ptr [edx + 0x14]
// 005c474a  50                   push eax
// 005c474b  e810d3ffff           call 0x5c1a60
// 005c4750  83c404               add esp, 4
// 005c4753  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c4756  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005c4759  8910                 mov dword ptr [eax], edx
// 005c475b  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c475e  c7401800000000       mov dword ptr [eax + 0x18], 0
// 005c4765  eb06                 jmp 0x5c476d
// 005c4767  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c476a  894dfc               mov dword ptr [ebp - 4], ecx
// 005c476d  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c4770  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4773  3b4214               cmp eax, dword ptr [edx + 0x14]
// 005c4776  7433                 je 0x5c47ab
// 005c4778  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c477b  51                   push ecx
// 005c477c  e8cfd2ffff           call 0x5c1a50
// 005c4781  83c404               add esp, 4
// 005c4784  8b10                 mov edx, dword ptr [eax]
// 005c4786  8955f8               mov dword ptr [ebp - 8], edx
// 005c4789  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c478c  50                   push eax
// 005c478d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c4790  83c108               add ecx, 8
// 005c4793  e8e8fdfeff           call 0x5b4580
// 005c4798  6a01                 push 1
// 005c479a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c479d  51                   push ecx
// 005c479e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c47a1  83c108               add ecx, 8
// 005c47a4  e8f796ffff           call 0x5bdea0
// 005c47a9  ebbc                 jmp 0x5c4767
// 005c47ab  8be5                 mov esp, ebp
// 005c47ad  5d                   pop ebp
// 005c47ae  c3                   ret 
// copied from an identical function in another client (function ?clear@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp