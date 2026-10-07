// roc 2011-06 005235b0  unit: RBX::Network::ProfiledRakPeer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005235b0
//
// 005235b0  53                   push ebx
// 005235b1  55                   push ebp
// 005235b2  56                   push esi
// 005235b3  8bf1                 mov esi, ecx
// 005235b5  57                   push edi
// 005235b6  8d4e14               lea ecx, [esi + 0x14]
// 005235b9  e812a30000           call 0x52d8d0
// 005235be  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005235c2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005235c6  33ff                 xor edi, edi
// 005235c8  8b5630               mov edx, dword ptr [esi + 0x30]
// 005235cb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005235ce  3bd1                 cmp edx, ecx
// 005235d0  7706                 ja 0x5235d8
// 005235d2  2bca                 sub ecx, edx
// 005235d4  8bc1                 mov eax, ecx
// 005235d6  eb07                 jmp 0x5235df
// 005235d8  8b4638               mov eax, dword ptr [esi + 0x38]
// 005235db  2bc2                 sub eax, edx
// 005235dd  03c1                 add eax, ecx
// 005235df  3bf8                 cmp edi, eax
// 005235e1  733b                 jae 0x52361e
// 005235e3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005235e6  8bc2                 mov eax, edx
// 005235e8  8d1438               lea edx, [eax + edi]
// 005235eb  3bd1                 cmp edx, ecx
// 005235ed  7219                 jb 0x523608
// 005235ef  2bc1                 sub eax, ecx
// 005235f1  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005235f4  03c7                 add eax, edi
// 005235f6  8d0481               lea eax, [ecx + eax*4]
// 005235f9  8b08                 mov ecx, dword ptr [eax]
// 005235fb  53                   push ebx
// 005235fc  55                   push ebp
// 005235fd  51                   push ecx
// 005235fe  8bce                 mov ecx, esi
// 00523600  e81be2ffff           call 0x521820
// 00523605  47                   inc edi
// 00523606  ebc0                 jmp 0x5235c8
// 00523608  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052360b  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0052360e  53                   push ebx
// 0052360f  8d0490               lea eax, [eax + edx*4]
// 00523612  55                   push ebp
// 00523613  51                   push ecx
// 00523614  8bce                 mov ecx, esi
// 00523616  e805e2ffff           call 0x521820
// 0052361b  47                   inc edi
// 0052361c  ebaa                 jmp 0x5235c8
// 0052361e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00523621  33ff                 xor edi, edi
// 00523623  3bc7                 cmp eax, edi
// 00523625  741a                 je 0x523641
// 00523627  83f820               cmp eax, 0x20
// 0052362a  760f                 jbe 0x52363b
// 0052362c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0052362f  52                   push edx
// 00523630  e8cf6c2e00           call 0x80a304
// 00523635  83c404               add esp, 4
// 00523638  897e38               mov dword ptr [esi + 0x38], edi
// 0052363b  897e30               mov dword ptr [esi + 0x30], edi
// 0052363e  897e34               mov dword ptr [esi + 0x34], edi
// 00523641  8d7e14               lea edi, [esi + 0x14]
// 00523644  8bcf                 mov ecx, edi
// 00523646  e85523efff           call 0x4159a0
// 0052364b  8bcf                 mov ecx, edi
// 0052364d  e87ea20000           call 0x52d8d0
// 00523652  53                   push ebx
// 00523653  55                   push ebp
// 00523654  8bce                 mov ecx, esi
// 00523656  e8c5ae0000           call 0x52e520
// 0052365b  8bcf                 mov ecx, edi
// 0052365d  e83e23efff           call 0x4159a0
// 00523662  5f                   pop edi
// 00523663  5e                   pop esi
// 00523664  5d                   pop ebp
// 00523665  5b                   pop ebx
// 00523666  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Clear@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
