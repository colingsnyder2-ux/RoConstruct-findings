// roc 2012-06 0059b940  unit: VAuthoringSettings::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b940
//
// 0059b940  56                   push esi
// 0059b941  8bf1                 mov esi, ecx
// 0059b943  8b4608               mov eax, dword ptr [esi + 8]
// 0059b946  57                   push edi
// 0059b947  394604               cmp dword ptr [esi + 4], eax
// 0059b94a  755f                 jne 0x59b9ab
// 0059b94c  85c0                 test eax, eax
// 0059b94e  7509                 jne 0x59b959
// 0059b950  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059b957  eb05                 jmp 0x59b95e
// 0059b959  03c0                 add eax, eax
// 0059b95b  894608               mov dword ptr [esi + 8], eax
// 0059b95e  8b4608               mov eax, dword ptr [esi + 8]
// 0059b961  85c0                 test eax, eax
// 0059b963  7504                 jne 0x59b969
// 0059b965  33ff                 xor edi, edi
// 0059b967  eb1b                 jmp 0x59b984
// 0059b969  33c9                 xor ecx, ecx
// 0059b96b  ba04000000           mov edx, 4
// 0059b970  f7e2                 mul edx
// 0059b972  0f90c1               seto cl
// 0059b975  f7d9                 neg ecx
// 0059b977  0bc8                 or ecx, eax
// 0059b979  51                   push ecx
// 0059b97a  e8716a3e00           call 0x9823f0
// 0059b97f  83c404               add esp, 4
// 0059b982  8bf8                 mov edi, eax
// 0059b984  33c0                 xor eax, eax
// 0059b986  394604               cmp dword ptr [esi + 4], eax
// 0059b989  7613                 jbe 0x59b99e
// 0059b98b  eb03                 jmp 0x59b990
// 0059b98d  8d4900               lea ecx, [ecx]
// 0059b990  8b0e                 mov ecx, dword ptr [esi]
// 0059b992  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0059b995  891487               mov dword ptr [edi + eax*4], edx
// 0059b998  40                   inc eax
// 0059b999  3b4604               cmp eax, dword ptr [esi + 4]
// 0059b99c  72f2                 jb 0x59b990
// 0059b99e  8b06                 mov eax, dword ptr [esi]
// 0059b9a0  50                   push eax
// 0059b9a1  e8146a3e00           call 0x9823ba
// 0059b9a6  83c404               add esp, 4
// 0059b9a9  893e                 mov dword ptr [esi], edi
// 0059b9ab  8b4604               mov eax, dword ptr [esi + 4]
// 0059b9ae  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b9b2  3bc2                 cmp eax, edx
// 0059b9b4  7410                 je 0x59b9c6
// 0059b9b6  8b0e                 mov ecx, dword ptr [esi]
// 0059b9b8  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 0059b9bc  8d0c81               lea ecx, [ecx + eax*4]
// 0059b9bf  48                   dec eax
// 0059b9c0  8939                 mov dword ptr [ecx], edi
// 0059b9c2  3bc2                 cmp eax, edx
// 0059b9c4  75f0                 jne 0x59b9b6
// 0059b9c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b9ca  8b06                 mov eax, dword ptr [esi]
// 0059b9cc  8b09                 mov ecx, dword ptr [ecx]
// 0059b9ce  890c90               mov dword ptr [eax + edx*4], ecx
// 0059b9d1  ff4604               inc dword ptr [esi + 4]
// 0059b9d4  5f                   pop edi
// 0059b9d5  5e                   pop esi
// 0059b9d6  c21000               ret 0x10
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$List@PAUCloudData@CloudServer@RakNet@@@DataStructures@@QAEXABQAUCloudData@CloudServer@RakNet@@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
