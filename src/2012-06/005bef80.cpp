// roc 2012-06 005bef80  unit: RakNet::RakPeer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bef80
//
// 005bef80  53                   push ebx
// 005bef81  55                   push ebp
// 005bef82  56                   push esi
// 005bef83  8bf1                 mov esi, ecx
// 005bef85  57                   push edi
// 005bef86  8d4e14               lea ecx, [esi + 0x14]
// 005bef89  e8d29fe5ff           call 0x418f60
// 005bef8e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005bef92  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005bef96  33ff                 xor edi, edi
// 005bef98  8b5630               mov edx, dword ptr [esi + 0x30]
// 005bef9b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005bef9e  3bd1                 cmp edx, ecx
// 005befa0  7706                 ja 0x5befa8
// 005befa2  2bca                 sub ecx, edx
// 005befa4  8bc1                 mov eax, ecx
// 005befa6  eb07                 jmp 0x5befaf
// 005befa8  8b4638               mov eax, dword ptr [esi + 0x38]
// 005befab  2bc2                 sub eax, edx
// 005befad  03c1                 add eax, ecx
// 005befaf  3bf8                 cmp edi, eax
// 005befb1  733b                 jae 0x5befee
// 005befb3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005befb6  8bc2                 mov eax, edx
// 005befb8  8d1438               lea edx, [eax + edi]
// 005befbb  3bd1                 cmp edx, ecx
// 005befbd  7219                 jb 0x5befd8
// 005befbf  2bc1                 sub eax, ecx
// 005befc1  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005befc4  03c7                 add eax, edi
// 005befc6  8d0481               lea eax, [ecx + eax*4]
// 005befc9  8b08                 mov ecx, dword ptr [eax]
// 005befcb  53                   push ebx
// 005befcc  55                   push ebp
// 005befcd  51                   push ecx
// 005befce  8bce                 mov ecx, esi
// 005befd0  e89bdaffff           call 0x5bca70
// 005befd5  47                   inc edi
// 005befd6  ebc0                 jmp 0x5bef98
// 005befd8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005befdb  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 005befde  53                   push ebx
// 005befdf  8d0490               lea eax, [eax + edx*4]
// 005befe2  55                   push ebp
// 005befe3  51                   push ecx
// 005befe4  8bce                 mov ecx, esi
// 005befe6  e885daffff           call 0x5bca70
// 005befeb  47                   inc edi
// 005befec  ebaa                 jmp 0x5bef98
// 005befee  8b4638               mov eax, dword ptr [esi + 0x38]
// 005beff1  33ff                 xor edi, edi
// 005beff3  3bc7                 cmp eax, edi
// 005beff5  741a                 je 0x5bf011
// 005beff7  83f820               cmp eax, 0x20
// 005beffa  760f                 jbe 0x5bf00b
// 005beffc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 005befff  52                   push edx
// 005bf000  e8b5333c00           call 0x9823ba
// 005bf005  83c404               add esp, 4
// 005bf008  897e38               mov dword ptr [esi + 0x38], edi
// 005bf00b  897e30               mov dword ptr [esi + 0x30], edi
// 005bf00e  897e34               mov dword ptr [esi + 0x34], edi
// 005bf011  8d7e14               lea edi, [esi + 0x14]
// 005bf014  8bcf                 mov ecx, edi
// 005bf016  e8559fe5ff           call 0x418f70
// 005bf01b  8bcf                 mov ecx, edi
// 005bf01d  e83e9fe5ff           call 0x418f60
// 005bf022  53                   push ebx
// 005bf023  55                   push ebp
// 005bf024  8bce                 mov ecx, esi
// 005bf026  e8d5b5fdff           call 0x59a600
// 005bf02b  8bcf                 mov ecx, edi
// 005bf02d  e83e9fe5ff           call 0x418f70
// 005bf032  5f                   pop edi
// 005bf033  5e                   pop esi
// 005bf034  5d                   pop ebp
// 005bf035  5b                   pop ebx
// 005bf036  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Clear@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
