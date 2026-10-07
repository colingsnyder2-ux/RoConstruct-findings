// roc 2011-06 00521450  unit: RBX::Network::ProfiledRakPeer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521450
//
// 00521450  8b442410             mov eax, dword ptr [esp + 0x10]
// 00521454  8b542404             mov edx, dword ptr [esp + 4]
// 00521458  56                   push esi
// 00521459  8bf1                 mov esi, ecx
// 0052145b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052145f  50                   push eax
// 00521460  51                   push ecx
// 00521461  52                   push edx
// 00521462  8bce                 mov ecx, esi
// 00521464  e8a7040000           call 0x521910
// 00521469  8b5604               mov edx, dword ptr [esi + 4]
// 0052146c  8b4608               mov eax, dword ptr [esi + 8]
// 0052146f  3bd0                 cmp edx, eax
// 00521471  7706                 ja 0x521479
// 00521473  8bc8                 mov ecx, eax
// 00521475  2bca                 sub ecx, edx
// 00521477  eb07                 jmp 0x521480
// 00521479  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052147c  2bca                 sub ecx, edx
// 0052147e  03c8                 add ecx, eax
// 00521480  83f901               cmp ecx, 1
// 00521483  0f8493000000         je 0x52151c
// 00521489  3bd0                 cmp edx, eax
// 0052148b  7706                 ja 0x521493
// 0052148d  2bc2                 sub eax, edx
// 0052148f  8bc8                 mov ecx, eax
// 00521491  eb07                 jmp 0x52149a
// 00521493  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00521496  2bca                 sub ecx, edx
// 00521498  03c8                 add ecx, eax
// 0052149a  55                   push ebp
// 0052149b  8d69ff               lea ebp, [ecx - 1]
// 0052149e  57                   push edi
// 0052149f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005214a3  8d55ff               lea edx, [ebp - 1]
// 005214a6  3bd7                 cmp edx, edi
// 005214a8  7241                 jb 0x5214eb
// 005214aa  53                   push ebx
// 005214ab  eb03                 jmp 0x5214b0
// 005214ad  8d4900               lea ecx, [ecx]
// 005214b0  8b4604               mov eax, dword ptr [esi + 4]
// 005214b3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005214b6  8d3c28               lea edi, [eax + ebp]
// 005214b9  3bf9                 cmp edi, ecx
// 005214bb  7206                 jb 0x5214c3
// 005214bd  8bf8                 mov edi, eax
// 005214bf  2bf9                 sub edi, ecx
// 005214c1  03fd                 add edi, ebp
// 005214c3  8d1c10               lea ebx, [eax + edx]
// 005214c6  3bd9                 cmp ebx, ecx
// 005214c8  7206                 jb 0x5214d0
// 005214ca  2bc1                 sub eax, ecx
// 005214cc  03c2                 add eax, edx
// 005214ce  eb02                 jmp 0x5214d2
// 005214d0  8bc3                 mov eax, ebx
// 005214d2  8b0e                 mov ecx, dword ptr [esi]
// 005214d4  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005214d7  8904b9               mov dword ptr [ecx + edi*4], eax
// 005214da  85d2                 test edx, edx
// 005214dc  7408                 je 0x5214e6
// 005214de  4a                   dec edx
// 005214df  4d                   dec ebp
// 005214e0  3b542418             cmp edx, dword ptr [esp + 0x18]
// 005214e4  73ca                 jae 0x5214b0
// 005214e6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005214ea  5b                   pop ebx
// 005214eb  8b4604               mov eax, dword ptr [esi + 4]
// 005214ee  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005214f1  8d1438               lea edx, [eax + edi]
// 005214f4  3bd1                 cmp edx, ecx
// 005214f6  7215                 jb 0x52150d
// 005214f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005214fc  8b12                 mov edx, dword ptr [edx]
// 005214fe  2bc1                 sub eax, ecx
// 00521500  8b0e                 mov ecx, dword ptr [esi]
// 00521502  03c7                 add eax, edi
// 00521504  5f                   pop edi
// 00521505  5d                   pop ebp
// 00521506  891481               mov dword ptr [ecx + eax*4], edx
// 00521509  5e                   pop esi
// 0052150a  c21000               ret 0x10
// 0052150d  8b0e                 mov ecx, dword ptr [esi]
// 0052150f  8bc2                 mov eax, edx
// 00521511  8b542410             mov edx, dword ptr [esp + 0x10]
// 00521515  8b12                 mov edx, dword ptr [edx]
// 00521517  5f                   pop edi
// 00521518  891481               mov dword ptr [ecx + eax*4], edx
// 0052151b  5d                   pop ebp
// 0052151c  5e                   pop esi
// 0052151d  c21000               ret 0x10
// library rbx2016-raknet/RPC4Plugin.cpp (function ?PushAtHead@?$Queue@PAUPacket@RakNet@@@DataStructures@@QAEXABQAUPacket@RakNet@@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
