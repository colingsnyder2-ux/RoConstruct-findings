// roc 2010-06 00515d60  unit: RakPeer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515d60
//
// 00515d60  8b4104               mov eax, dword ptr [ecx + 4]
// 00515d63  53                   push ebx
// 00515d64  8b5908               mov ebx, dword ptr [ecx + 8]
// 00515d67  3bc3                 cmp eax, ebx
// 00515d69  745d                 je 0x515dc8
// 00515d6b  7706                 ja 0x515d73
// 00515d6d  8bd3                 mov edx, ebx
// 00515d6f  2bd0                 sub edx, eax
// 00515d71  eb07                 jmp 0x515d7a
// 00515d73  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00515d76  2bd0                 sub edx, eax
// 00515d78  03d3                 add edx, ebx
// 00515d7a  57                   push edi
// 00515d7b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00515d7f  3bfa                 cmp edi, edx
// 00515d81  7344                 jae 0x515dc7
// 00515d83  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00515d86  56                   push esi
// 00515d87  8d3438               lea esi, [eax + edi]
// 00515d8a  3bf2                 cmp esi, edx
// 00515d8c  7206                 jb 0x515d94
// 00515d8e  2bc2                 sub eax, edx
// 00515d90  03c7                 add eax, edi
// 00515d92  8bf0                 mov esi, eax
// 00515d94  8d4601               lea eax, [esi + 1]
// 00515d97  3bc2                 cmp eax, edx
// 00515d99  7502                 jne 0x515d9d
// 00515d9b  33c0                 xor eax, eax
// 00515d9d  3bc3                 cmp eax, ebx
// 00515d9f  7417                 je 0x515db8
// 00515da1  8b11                 mov edx, dword ptr [ecx]
// 00515da3  8b3c82               mov edi, dword ptr [edx + eax*4]
// 00515da6  893cb2               mov dword ptr [edx + esi*4], edi
// 00515da9  8bf0                 mov esi, eax
// 00515dab  40                   inc eax
// 00515dac  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00515daf  7502                 jne 0x515db3
// 00515db1  33c0                 xor eax, eax
// 00515db3  3b4108               cmp eax, dword ptr [ecx + 8]
// 00515db6  75e9                 jne 0x515da1
// 00515db8  8b4108               mov eax, dword ptr [ecx + 8]
// 00515dbb  5e                   pop esi
// 00515dbc  85c0                 test eax, eax
// 00515dbe  7503                 jne 0x515dc3
// 00515dc0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00515dc3  48                   dec eax
// 00515dc4  894108               mov dword ptr [ecx + 8], eax
// 00515dc7  5f                   pop edi
// 00515dc8  5b                   pop ebx
// 00515dc9  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$Queue@P6AHUThreadData@FileListTransfer@RakNet@@PA_NPAX@Z@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
