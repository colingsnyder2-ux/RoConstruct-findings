// roc 2012-06 005bc8d0  unit: RakNet::RakPeer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc8d0
//
// 005bc8d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bc8d4  8b542404             mov edx, dword ptr [esp + 4]
// 005bc8d8  56                   push esi
// 005bc8d9  8bf1                 mov esi, ecx
// 005bc8db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bc8df  50                   push eax
// 005bc8e0  51                   push ecx
// 005bc8e1  52                   push edx
// 005bc8e2  8bce                 mov ecx, esi
// 005bc8e4  e857fcffff           call 0x5bc540
// 005bc8e9  8b5604               mov edx, dword ptr [esi + 4]
// 005bc8ec  8b4608               mov eax, dword ptr [esi + 8]
// 005bc8ef  3bd0                 cmp edx, eax
// 005bc8f1  7706                 ja 0x5bc8f9
// 005bc8f3  8bc8                 mov ecx, eax
// 005bc8f5  2bca                 sub ecx, edx
// 005bc8f7  eb07                 jmp 0x5bc900
// 005bc8f9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bc8fc  2bca                 sub ecx, edx
// 005bc8fe  03c8                 add ecx, eax
// 005bc900  83f901               cmp ecx, 1
// 005bc903  0f8493000000         je 0x5bc99c
// 005bc909  3bd0                 cmp edx, eax
// 005bc90b  7706                 ja 0x5bc913
// 005bc90d  2bc2                 sub eax, edx
// 005bc90f  8bc8                 mov ecx, eax
// 005bc911  eb07                 jmp 0x5bc91a
// 005bc913  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bc916  2bca                 sub ecx, edx
// 005bc918  03c8                 add ecx, eax
// 005bc91a  55                   push ebp
// 005bc91b  8d69ff               lea ebp, [ecx - 1]
// 005bc91e  57                   push edi
// 005bc91f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bc923  8d55ff               lea edx, [ebp - 1]
// 005bc926  3bd7                 cmp edx, edi
// 005bc928  7241                 jb 0x5bc96b
// 005bc92a  53                   push ebx
// 005bc92b  eb03                 jmp 0x5bc930
// 005bc92d  8d4900               lea ecx, [ecx]
// 005bc930  8b4604               mov eax, dword ptr [esi + 4]
// 005bc933  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bc936  8d3c28               lea edi, [eax + ebp]
// 005bc939  3bf9                 cmp edi, ecx
// 005bc93b  7206                 jb 0x5bc943
// 005bc93d  8bf8                 mov edi, eax
// 005bc93f  2bf9                 sub edi, ecx
// 005bc941  03fd                 add edi, ebp
// 005bc943  8d1c10               lea ebx, [eax + edx]
// 005bc946  3bd9                 cmp ebx, ecx
// 005bc948  7206                 jb 0x5bc950
// 005bc94a  2bc1                 sub eax, ecx
// 005bc94c  03c2                 add eax, edx
// 005bc94e  eb02                 jmp 0x5bc952
// 005bc950  8bc3                 mov eax, ebx
// 005bc952  8b0e                 mov ecx, dword ptr [esi]
// 005bc954  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005bc957  8904b9               mov dword ptr [ecx + edi*4], eax
// 005bc95a  85d2                 test edx, edx
// 005bc95c  7408                 je 0x5bc966
// 005bc95e  4a                   dec edx
// 005bc95f  4d                   dec ebp
// 005bc960  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005bc964  73ca                 jae 0x5bc930
// 005bc966  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bc96a  5b                   pop ebx
// 005bc96b  8b4604               mov eax, dword ptr [esi + 4]
// 005bc96e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005bc971  8d1438               lea edx, [eax + edi]
// 005bc974  3bd1                 cmp edx, ecx
// 005bc976  7215                 jb 0x5bc98d
// 005bc978  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bc97c  8b12                 mov edx, dword ptr [edx]
// 005bc97e  2bc1                 sub eax, ecx
// 005bc980  8b0e                 mov ecx, dword ptr [esi]
// 005bc982  03c7                 add eax, edi
// 005bc984  5f                   pop edi
// 005bc985  5d                   pop ebp
// 005bc986  891481               mov dword ptr [ecx + eax*4], edx
// 005bc989  5e                   pop esi
// 005bc98a  c21000               ret 0x10
// 005bc98d  8b0e                 mov ecx, dword ptr [esi]
// 005bc98f  8bc2                 mov eax, edx
// 005bc991  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bc995  8b12                 mov edx, dword ptr [edx]
// 005bc997  5f                   pop edi
// 005bc998  891481               mov dword ptr [ecx + eax*4], edx
// 005bc99b  5d                   pop ebp
// 005bc99c  5e                   pop esi
// 005bc99d  c21000               ret 0x10
// library rbx2016-raknet/RPC4Plugin.cpp (function ?PushAtHead@?$Queue@PAUPacket@RakNet@@@DataStructures@@QAEXABQAUPacket@RakNet@@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
