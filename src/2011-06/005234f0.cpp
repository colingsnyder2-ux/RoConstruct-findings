// roc 2011-06 005234f0  unit: RBX::Network::ProfiledRakPeer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005234f0
//
// 005234f0  53                   push ebx
// 005234f1  55                   push ebp
// 005234f2  56                   push esi
// 005234f3  8bf1                 mov esi, ecx
// 005234f5  57                   push edi
// 005234f6  8d4e14               lea ecx, [esi + 0x14]
// 005234f9  e8d2a30000           call 0x52d8d0
// 005234fe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00523502  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00523506  33ff                 xor edi, edi
// 00523508  8b5630               mov edx, dword ptr [esi + 0x30]
// 0052350b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0052350e  3bd1                 cmp edx, ecx
// 00523510  7706                 ja 0x523518
// 00523512  2bca                 sub ecx, edx
// 00523514  8bc1                 mov eax, ecx
// 00523516  eb07                 jmp 0x52351f
// 00523518  8b4638               mov eax, dword ptr [esi + 0x38]
// 0052351b  2bc2                 sub eax, edx
// 0052351d  03c1                 add eax, ecx
// 0052351f  3bf8                 cmp edi, eax
// 00523521  733b                 jae 0x52355e
// 00523523  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00523526  8bc2                 mov eax, edx
// 00523528  8d1438               lea edx, [eax + edi]
// 0052352b  3bd1                 cmp edx, ecx
// 0052352d  7219                 jb 0x523548
// 0052352f  2bc1                 sub eax, ecx
// 00523531  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00523534  03c7                 add eax, edi
// 00523536  8d0481               lea eax, [ecx + eax*4]
// 00523539  8b08                 mov ecx, dword ptr [eax]
// 0052353b  53                   push ebx
// 0052353c  55                   push ebp
// 0052353d  51                   push ecx
// 0052353e  8bce                 mov ecx, esi
// 00523540  e81be1ffff           call 0x521660
// 00523545  47                   inc edi
// 00523546  ebc0                 jmp 0x523508
// 00523548  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052354b  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0052354e  53                   push ebx
// 0052354f  8d0490               lea eax, [eax + edx*4]
// 00523552  55                   push ebp
// 00523553  51                   push ecx
// 00523554  8bce                 mov ecx, esi
// 00523556  e805e1ffff           call 0x521660
// 0052355b  47                   inc edi
// 0052355c  ebaa                 jmp 0x523508
// 0052355e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00523561  33ff                 xor edi, edi
// 00523563  3bc7                 cmp eax, edi
// 00523565  741a                 je 0x523581
// 00523567  83f820               cmp eax, 0x20
// 0052356a  760f                 jbe 0x52357b
// 0052356c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0052356f  52                   push edx
// 00523570  e88f6d2e00           call 0x80a304
// 00523575  83c404               add esp, 4
// 00523578  897e38               mov dword ptr [esi + 0x38], edi
// 0052357b  897e30               mov dword ptr [esi + 0x30], edi
// 0052357e  897e34               mov dword ptr [esi + 0x34], edi
// 00523581  8d7e14               lea edi, [esi + 0x14]
// 00523584  8bcf                 mov ecx, edi
// 00523586  e81524efff           call 0x4159a0
// 0052358b  8bcf                 mov ecx, edi
// 0052358d  e83ea30000           call 0x52d8d0
// 00523592  53                   push ebx
// 00523593  55                   push ebp
// 00523594  8bce                 mov ecx, esi
// 00523596  e885af0000           call 0x52e520
// 0052359b  8bcf                 mov ecx, edi
// 0052359d  e8fe23efff           call 0x4159a0
// 005235a2  5f                   pop edi
// 005235a3  5e                   pop esi
// 005235a4  5d                   pop ebp
// 005235a5  5b                   pop ebx
// 005235a6  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Clear@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
