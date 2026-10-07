// roc 2011-06 0052c4d0  unit: RakPeer  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052c4d0
//
// 0052c4d0  55                   push ebp
// 0052c4d1  56                   push esi
// 0052c4d2  8bf1                 mov esi, ecx
// 0052c4d4  57                   push edi
// 0052c4d5  8d4e14               lea ecx, [esi + 0x14]
// 0052c4d8  e8f3130000           call 0x52d8d0
// 0052c4dd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052c4e1  33ff                 xor edi, edi
// 0052c4e3  53                   push ebx
// 0052c4e4  8b5630               mov edx, dword ptr [esi + 0x30]
// 0052c4e7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0052c4ea  3bd1                 cmp edx, ecx
// 0052c4ec  7706                 ja 0x52c4f4
// 0052c4ee  2bca                 sub ecx, edx
// 0052c4f0  8bc1                 mov eax, ecx
// 0052c4f2  eb07                 jmp 0x52c4fb
// 0052c4f4  8b4638               mov eax, dword ptr [esi + 0x38]
// 0052c4f7  2bc2                 sub eax, edx
// 0052c4f9  03c1                 add eax, ecx
// 0052c4fb  3bf8                 cmp edi, eax
// 0052c4fd  737e                 jae 0x52c57d
// 0052c4ff  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0052c502  8bc2                 mov eax, edx
// 0052c504  8d1438               lea edx, [eax + edi]
// 0052c507  3bd1                 cmp edx, ecx
// 0052c509  720c                 jb 0x52c517
// 0052c50b  2bc1                 sub eax, ecx
// 0052c50d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0052c510  03c7                 add eax, edi
// 0052c512  8d0481               lea eax, [ecx + eax*4]
// 0052c515  eb06                 jmp 0x52c51d
// 0052c517  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052c51a  8d0490               lea eax, [eax + edx*4]
// 0052c51d  8b00                 mov eax, dword ptr [eax]
// 0052c51f  83780800             cmp dword ptr [eax + 8], 0
// 0052c523  7623                 jbe 0x52c548
// 0052c525  8b00                 mov eax, dword ptr [eax]
// 0052c527  85c0                 test eax, eax
// 0052c529  741d                 je 0x52c548
// 0052c52b  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052c52e  8d58fc               lea ebx, [eax - 4]
// 0052c531  6800f45000           push 0x50f400
// 0052c536  51                   push ecx
// 0052c537  6a08                 push 8
// 0052c539  50                   push eax
// 0052c53a  e899ec2d00           call 0x80b1d8
// 0052c53f  53                   push ebx
// 0052c540  e8bfdd2d00           call 0x80a304
// 0052c545  83c404               add esp, 4
// 0052c548  8b4630               mov eax, dword ptr [esi + 0x30]
// 0052c54b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0052c54e  8d1438               lea edx, [eax + edi]
// 0052c551  3bd1                 cmp edx, ecx
// 0052c553  720c                 jb 0x52c561
// 0052c555  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0052c558  2bc1                 sub eax, ecx
// 0052c55a  03c7                 add eax, edi
// 0052c55c  8d0482               lea eax, [edx + eax*4]
// 0052c55f  eb06                 jmp 0x52c567
// 0052c561  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052c564  8d0490               lea eax, [eax + edx*4]
// 0052c567  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c56b  8b10                 mov edx, dword ptr [eax]
// 0052c56d  55                   push ebp
// 0052c56e  51                   push ecx
// 0052c56f  52                   push edx
// 0052c570  8bce                 mov ecx, esi
// 0052c572  e84955ffff           call 0x521ac0
// 0052c577  47                   inc edi
// 0052c578  e967ffffff           jmp 0x52c4e4
// 0052c57d  8b4638               mov eax, dword ptr [esi + 0x38]
// 0052c580  33ff                 xor edi, edi
// 0052c582  5b                   pop ebx
// 0052c583  3bc7                 cmp eax, edi
// 0052c585  741a                 je 0x52c5a1
// 0052c587  83f820               cmp eax, 0x20
// 0052c58a  760f                 jbe 0x52c59b
// 0052c58c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052c58f  50                   push eax
// 0052c590  e86fdd2d00           call 0x80a304
// 0052c595  83c404               add esp, 4
// 0052c598  897e38               mov dword ptr [esi + 0x38], edi
// 0052c59b  897e30               mov dword ptr [esi + 0x30], edi
// 0052c59e  897e34               mov dword ptr [esi + 0x34], edi
// 0052c5a1  8d7e14               lea edi, [esi + 0x14]
// 0052c5a4  8bcf                 mov ecx, edi
// 0052c5a6  e8f593eeff           call 0x4159a0
// 0052c5ab  8bcf                 mov ecx, edi
// 0052c5ad  e81e130000           call 0x52d8d0
// 0052c5b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c5b6  55                   push ebp
// 0052c5b7  51                   push ecx
// 0052c5b8  8bce                 mov ecx, esi
// 0052c5ba  e8611f0000           call 0x52e520
// 0052c5bf  8bcf                 mov ecx, edi
// 0052c5c1  e8da93eeff           call 0x4159a0
// 0052c5c6  5f                   pop edi
// 0052c5c7  5e                   pop esi
// 0052c5c8  5d                   pop ebp
// 0052c5c9  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Clear@?$ThreadsafeAllocatingQueue@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
