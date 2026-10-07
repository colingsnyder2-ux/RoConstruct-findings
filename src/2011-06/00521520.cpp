// roc 2011-06 00521520  unit: RBX::Network::ProfiledRakPeer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521520
//
// 00521520  8b4104               mov eax, dword ptr [ecx + 4]
// 00521523  53                   push ebx
// 00521524  8b5908               mov ebx, dword ptr [ecx + 8]
// 00521527  3bc3                 cmp eax, ebx
// 00521529  745d                 je 0x521588
// 0052152b  7706                 ja 0x521533
// 0052152d  8bd3                 mov edx, ebx
// 0052152f  2bd0                 sub edx, eax
// 00521531  eb07                 jmp 0x52153a
// 00521533  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00521536  2bd0                 sub edx, eax
// 00521538  03d3                 add edx, ebx
// 0052153a  57                   push edi
// 0052153b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052153f  3bfa                 cmp edi, edx
// 00521541  7344                 jae 0x521587
// 00521543  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00521546  56                   push esi
// 00521547  8d3438               lea esi, [eax + edi]
// 0052154a  3bf2                 cmp esi, edx
// 0052154c  7206                 jb 0x521554
// 0052154e  2bc2                 sub eax, edx
// 00521550  03c7                 add eax, edi
// 00521552  8bf0                 mov esi, eax
// 00521554  8d4601               lea eax, [esi + 1]
// 00521557  3bc2                 cmp eax, edx
// 00521559  7502                 jne 0x52155d
// 0052155b  33c0                 xor eax, eax
// 0052155d  3bc3                 cmp eax, ebx
// 0052155f  7417                 je 0x521578
// 00521561  8b11                 mov edx, dword ptr [ecx]
// 00521563  8b3c82               mov edi, dword ptr [edx + eax*4]
// 00521566  893cb2               mov dword ptr [edx + esi*4], edi
// 00521569  8bf0                 mov esi, eax
// 0052156b  40                   inc eax
// 0052156c  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0052156f  7502                 jne 0x521573
// 00521571  33c0                 xor eax, eax
// 00521573  3b4108               cmp eax, dword ptr [ecx + 8]
// 00521576  75e9                 jne 0x521561
// 00521578  8b4108               mov eax, dword ptr [ecx + 8]
// 0052157b  5e                   pop esi
// 0052157c  85c0                 test eax, eax
// 0052157e  7503                 jne 0x521583
// 00521580  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00521583  48                   dec eax
// 00521584  894108               mov dword ptr [ecx + 8], eax
// 00521587  5f                   pop edi
// 00521588  5b                   pop ebx
// 00521589  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$Queue@P6AHUThreadData@FileListTransfer@RakNet@@PA_NPAX@Z@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
