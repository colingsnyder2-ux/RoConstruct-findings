// roc 2012-06 005bf040  unit: RakNet::RakPeer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf040
//
// 005bf040  53                   push ebx
// 005bf041  55                   push ebp
// 005bf042  56                   push esi
// 005bf043  8bf1                 mov esi, ecx
// 005bf045  57                   push edi
// 005bf046  8d4e14               lea ecx, [esi + 0x14]
// 005bf049  e8129fe5ff           call 0x418f60
// 005bf04e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005bf052  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005bf056  33ff                 xor edi, edi
// 005bf058  8b5630               mov edx, dword ptr [esi + 0x30]
// 005bf05b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005bf05e  3bd1                 cmp edx, ecx
// 005bf060  7706                 ja 0x5bf068
// 005bf062  2bca                 sub ecx, edx
// 005bf064  8bc1                 mov eax, ecx
// 005bf066  eb07                 jmp 0x5bf06f
// 005bf068  8b4638               mov eax, dword ptr [esi + 0x38]
// 005bf06b  2bc2                 sub eax, edx
// 005bf06d  03c1                 add eax, ecx
// 005bf06f  3bf8                 cmp edi, eax
// 005bf071  733b                 jae 0x5bf0ae
// 005bf073  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005bf076  8bc2                 mov eax, edx
// 005bf078  8d1438               lea edx, [eax + edi]
// 005bf07b  3bd1                 cmp edx, ecx
// 005bf07d  7219                 jb 0x5bf098
// 005bf07f  2bc1                 sub eax, ecx
// 005bf081  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005bf084  03c7                 add eax, edi
// 005bf086  8d0481               lea eax, [ecx + eax*4]
// 005bf089  8b08                 mov ecx, dword ptr [eax]
// 005bf08b  53                   push ebx
// 005bf08c  55                   push ebp
// 005bf08d  51                   push ecx
// 005bf08e  8bce                 mov ecx, esi
// 005bf090  e89bdbffff           call 0x5bcc30
// 005bf095  47                   inc edi
// 005bf096  ebc0                 jmp 0x5bf058
// 005bf098  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005bf09b  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 005bf09e  53                   push ebx
// 005bf09f  8d0490               lea eax, [eax + edx*4]
// 005bf0a2  55                   push ebp
// 005bf0a3  51                   push ecx
// 005bf0a4  8bce                 mov ecx, esi
// 005bf0a6  e885dbffff           call 0x5bcc30
// 005bf0ab  47                   inc edi
// 005bf0ac  ebaa                 jmp 0x5bf058
// 005bf0ae  8b4638               mov eax, dword ptr [esi + 0x38]
// 005bf0b1  33ff                 xor edi, edi
// 005bf0b3  3bc7                 cmp eax, edi
// 005bf0b5  741a                 je 0x5bf0d1
// 005bf0b7  83f820               cmp eax, 0x20
// 005bf0ba  760f                 jbe 0x5bf0cb
// 005bf0bc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 005bf0bf  52                   push edx
// 005bf0c0  e8f5323c00           call 0x9823ba
// 005bf0c5  83c404               add esp, 4
// 005bf0c8  897e38               mov dword ptr [esi + 0x38], edi
// 005bf0cb  897e30               mov dword ptr [esi + 0x30], edi
// 005bf0ce  897e34               mov dword ptr [esi + 0x34], edi
// 005bf0d1  8d7e14               lea edi, [esi + 0x14]
// 005bf0d4  8bcf                 mov ecx, edi
// 005bf0d6  e8959ee5ff           call 0x418f70
// 005bf0db  8bcf                 mov ecx, edi
// 005bf0dd  e87e9ee5ff           call 0x418f60
// 005bf0e2  53                   push ebx
// 005bf0e3  55                   push ebp
// 005bf0e4  8bce                 mov ecx, esi
// 005bf0e6  e815b5fdff           call 0x59a600
// 005bf0eb  8bcf                 mov ecx, edi
// 005bf0ed  e87e9ee5ff           call 0x418f70
// 005bf0f2  5f                   pop edi
// 005bf0f3  5e                   pop esi
// 005bf0f4  5d                   pop ebp
// 005bf0f5  5b                   pop ebx
// 005bf0f6  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Clear@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
