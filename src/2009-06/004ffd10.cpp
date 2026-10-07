// roc 2009-06 004ffd10  unit: RakPeer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ffd10
//
// 004ffd10  8b4104               mov eax, dword ptr [ecx + 4]
// 004ffd13  53                   push ebx
// 004ffd14  8b5908               mov ebx, dword ptr [ecx + 8]
// 004ffd17  3bc3                 cmp eax, ebx
// 004ffd19  745d                 je 0x4ffd78
// 004ffd1b  7706                 ja 0x4ffd23
// 004ffd1d  8bd3                 mov edx, ebx
// 004ffd1f  2bd0                 sub edx, eax
// 004ffd21  eb07                 jmp 0x4ffd2a
// 004ffd23  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004ffd26  2bd0                 sub edx, eax
// 004ffd28  03d3                 add edx, ebx
// 004ffd2a  57                   push edi
// 004ffd2b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ffd2f  3bfa                 cmp edi, edx
// 004ffd31  7344                 jae 0x4ffd77
// 004ffd33  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004ffd36  56                   push esi
// 004ffd37  8d3438               lea esi, [eax + edi]
// 004ffd3a  3bf2                 cmp esi, edx
// 004ffd3c  7206                 jb 0x4ffd44
// 004ffd3e  2bc2                 sub eax, edx
// 004ffd40  03c7                 add eax, edi
// 004ffd42  8bf0                 mov esi, eax
// 004ffd44  8d4601               lea eax, [esi + 1]
// 004ffd47  3bc2                 cmp eax, edx
// 004ffd49  7502                 jne 0x4ffd4d
// 004ffd4b  33c0                 xor eax, eax
// 004ffd4d  3bc3                 cmp eax, ebx
// 004ffd4f  7417                 je 0x4ffd68
// 004ffd51  8b11                 mov edx, dword ptr [ecx]
// 004ffd53  8b3c82               mov edi, dword ptr [edx + eax*4]
// 004ffd56  893cb2               mov dword ptr [edx + esi*4], edi
// 004ffd59  8bf0                 mov esi, eax
// 004ffd5b  40                   inc eax
// 004ffd5c  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 004ffd5f  7502                 jne 0x4ffd63
// 004ffd61  33c0                 xor eax, eax
// 004ffd63  3b4108               cmp eax, dword ptr [ecx + 8]
// 004ffd66  75e9                 jne 0x4ffd51
// 004ffd68  8b4108               mov eax, dword ptr [ecx + 8]
// 004ffd6b  5e                   pop esi
// 004ffd6c  85c0                 test eax, eax
// 004ffd6e  7503                 jne 0x4ffd73
// 004ffd70  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004ffd73  48                   dec eax
// 004ffd74  894108               mov dword ptr [ecx + 8], eax
// 004ffd77  5f                   pop edi
// 004ffd78  5b                   pop ebx
// 004ffd79  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$Queue@P6AHUThreadData@FileListTransfer@RakNet@@PA_NPAX@Z@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
