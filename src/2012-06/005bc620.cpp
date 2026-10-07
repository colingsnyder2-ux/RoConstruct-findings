// roc 2012-06 005bc620  unit: RakNet::RakPeer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc620
//
// 005bc620  8b4104               mov eax, dword ptr [ecx + 4]
// 005bc623  53                   push ebx
// 005bc624  8b5908               mov ebx, dword ptr [ecx + 8]
// 005bc627  3bc3                 cmp eax, ebx
// 005bc629  745d                 je 0x5bc688
// 005bc62b  7706                 ja 0x5bc633
// 005bc62d  8bd3                 mov edx, ebx
// 005bc62f  2bd0                 sub edx, eax
// 005bc631  eb07                 jmp 0x5bc63a
// 005bc633  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc636  2bd0                 sub edx, eax
// 005bc638  03d3                 add edx, ebx
// 005bc63a  57                   push edi
// 005bc63b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bc63f  3bfa                 cmp edi, edx
// 005bc641  7344                 jae 0x5bc687
// 005bc643  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc646  56                   push esi
// 005bc647  8d3438               lea esi, [eax + edi]
// 005bc64a  3bf2                 cmp esi, edx
// 005bc64c  7206                 jb 0x5bc654
// 005bc64e  2bc2                 sub eax, edx
// 005bc650  03c7                 add eax, edi
// 005bc652  8bf0                 mov esi, eax
// 005bc654  8d4601               lea eax, [esi + 1]
// 005bc657  3bc2                 cmp eax, edx
// 005bc659  7502                 jne 0x5bc65d
// 005bc65b  33c0                 xor eax, eax
// 005bc65d  3bc3                 cmp eax, ebx
// 005bc65f  7417                 je 0x5bc678
// 005bc661  8b11                 mov edx, dword ptr [ecx]
// 005bc663  8b3c82               mov edi, dword ptr [edx + eax*4]
// 005bc666  893cb2               mov dword ptr [edx + esi*4], edi
// 005bc669  8bf0                 mov esi, eax
// 005bc66b  40                   inc eax
// 005bc66c  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005bc66f  7502                 jne 0x5bc673
// 005bc671  33c0                 xor eax, eax
// 005bc673  3b4108               cmp eax, dword ptr [ecx + 8]
// 005bc676  75e9                 jne 0x5bc661
// 005bc678  8b4108               mov eax, dword ptr [ecx + 8]
// 005bc67b  5e                   pop esi
// 005bc67c  85c0                 test eax, eax
// 005bc67e  7503                 jne 0x5bc683
// 005bc680  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005bc683  48                   dec eax
// 005bc684  894108               mov dword ptr [ecx + 8], eax
// 005bc687  5f                   pop edi
// 005bc688  5b                   pop ebx
// 005bc689  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$Queue@P6AHUThreadData@FileListTransfer@RakNet@@PA_NPAX@Z@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
