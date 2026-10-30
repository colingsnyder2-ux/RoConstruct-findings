// roc 2007-03 006c5270  unit: seg_006c0000  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c5270
//
// 006c5270  55                   push ebp
// 006c5271  56                   push esi
// 006c5272  57                   push edi
// 006c5273  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c5277  33ed                 xor ebp, ebp
// 006c5279  3bfd                 cmp edi, ebp
// 006c527b  8bf1                 mov esi, ecx
// 006c527d  7d05                 jge 0x6c5284
// 006c527f  e82a91f5ff           call 0x61e3ae
// 006c5284  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c5288  3bc5                 cmp eax, ebp
// 006c528a  7c03                 jl 0x6c528f
// 006c528c  894610               mov dword ptr [esi + 0x10], eax
// 006c528f  3bfd                 cmp edi, ebp
// 006c5291  751f                 jne 0x6c52b2
// 006c5293  8b4604               mov eax, dword ptr [esi + 4]
// 006c5296  3bc5                 cmp eax, ebp
// 006c5298  740c                 je 0x6c52a6
// 006c529a  50                   push eax
// 006c529b  e81491f5ff           call 0x61e3b4
// 006c52a0  83c404               add esp, 4
// 006c52a3  896e04               mov dword ptr [esi + 4], ebp
// 006c52a6  5f                   pop edi
// 006c52a7  896e0c               mov dword ptr [esi + 0xc], ebp
// 006c52aa  896e08               mov dword ptr [esi + 8], ebp
// 006c52ad  5e                   pop esi
// 006c52ae  5d                   pop ebp
// 006c52af  c20800               ret 8
// 006c52b2  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c52b5  3bcd                 cmp ecx, ebp
// 006c52b7  53                   push ebx
// 006c52b8  7532                 jne 0x6c52ec
// 006c52ba  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006c52bd  3bfd                 cmp edi, ebp
// 006c52bf  7e02                 jle 0x6c52c3
// 006c52c1  8bef                 mov ebp, edi
// 006c52c3  8d1ced00000000       lea ebx, [ebp*8]
// 006c52ca  53                   push ebx
// 006c52cb  e8f090f5ff           call 0x61e3c0
// 006c52d0  53                   push ebx
// 006c52d1  6a00                 push 0
// 006c52d3  50                   push eax
// 006c52d4  894604               mov dword ptr [esi + 4], eax
// 006c52d7  e8409df5ff           call 0x61f01c
// 006c52dc  83c410               add esp, 0x10
// 006c52df  5b                   pop ebx
// 006c52e0  897e08               mov dword ptr [esi + 8], edi
// 006c52e3  5f                   pop edi
// 006c52e4  896e0c               mov dword ptr [esi + 0xc], ebp
// 006c52e7  5e                   pop esi
// 006c52e8  5d                   pop ebp
// 006c52e9  c20800               ret 8
// 006c52ec  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006c52ef  3bfb                 cmp edi, ebx
// 006c52f1  7f2d                 jg 0x6c5320
// 006c52f3  8b4608               mov eax, dword ptr [esi + 8]
// 006c52f6  3bf8                 cmp edi, eax
// 006c52f8  0f8ebb000000         jle 0x6c53b9
// 006c52fe  8bd7                 mov edx, edi
// 006c5300  2bd0                 sub edx, eax
// 006c5302  03d2                 add edx, edx
// 006c5304  03d2                 add edx, edx
// 006c5306  03d2                 add edx, edx
// 006c5308  52                   push edx
// 006c5309  8d04c1               lea eax, [ecx + eax*8]
// 006c530c  55                   push ebp
// 006c530d  50                   push eax
// 006c530e  e8099df5ff           call 0x61f01c
// 006c5313  83c40c               add esp, 0xc
// 006c5316  5b                   pop ebx
// 006c5317  897e08               mov dword ptr [esi + 8], edi
// 006c531a  5f                   pop edi
// 006c531b  5e                   pop esi
// 006c531c  5d                   pop ebp
// 006c531d  c20800               ret 8
// 006c5320  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c5323  3bc5                 cmp eax, ebp
// 006c5325  7524                 jne 0x6c534b
// 006c5327  8b4608               mov eax, dword ptr [esi + 8]
// 006c532a  99                   cdq 
// 006c532b  83e207               and edx, 7
// 006c532e  03c2                 add eax, edx
// 006c5330  c1f803               sar eax, 3
// 006c5333  83f804               cmp eax, 4
// 006c5336  7d07                 jge 0x6c533f
// 006c5338  b804000000           mov eax, 4
// 006c533d  eb0c                 jmp 0x6c534b
// 006c533f  3d00040000           cmp eax, 0x400
// 006c5344  7e05                 jle 0x6c534b
// 006c5346  b800040000           mov eax, 0x400
// 006c534b  03c3                 add eax, ebx
// 006c534d  3bf8                 cmp edi, eax
// 006c534f  7d06                 jge 0x6c5357
// 006c5351  89442414             mov dword ptr [esp + 0x14], eax
// 006c5355  eb06                 jmp 0x6c535d
// 006c5357  897c2414             mov dword ptr [esp + 0x14], edi
// 006c535b  8bc7                 mov eax, edi
// 006c535d  3bc3                 cmp eax, ebx
// 006c535f  7d05                 jge 0x6c5366
// 006c5361  e84890f5ff           call 0x61e3ae
// 006c5366  8d2cc500000000       lea ebp, [eax*8]
// 006c536d  55                   push ebp
// 006c536e  e84d90f5ff           call 0x61e3c0
// 006c5373  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c5376  8b5604               mov edx, dword ptr [esi + 4]
// 006c5379  03c9                 add ecx, ecx
// 006c537b  03c9                 add ecx, ecx
// 006c537d  03c9                 add ecx, ecx
// 006c537f  51                   push ecx
// 006c5380  52                   push edx
// 006c5381  8bd8                 mov ebx, eax
// 006c5383  55                   push ebp
// 006c5384  53                   push ebx
// 006c5385  e806c5d3ff           call 0x401890
// 006c538a  8b4608               mov eax, dword ptr [esi + 8]
// 006c538d  8bcf                 mov ecx, edi
// 006c538f  2bc8                 sub ecx, eax
// 006c5391  03c9                 add ecx, ecx
// 006c5393  03c9                 add ecx, ecx
// 006c5395  03c9                 add ecx, ecx
// 006c5397  51                   push ecx
// 006c5398  8d14c3               lea edx, [ebx + eax*8]
// 006c539b  6a00                 push 0
// 006c539d  52                   push edx
// 006c539e  e8799cf5ff           call 0x61f01c
// 006c53a3  8b4604               mov eax, dword ptr [esi + 4]
// 006c53a6  50                   push eax
// 006c53a7  e80890f5ff           call 0x61e3b4
// 006c53ac  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006c53b0  83c424               add esp, 0x24
// 006c53b3  895e04               mov dword ptr [esi + 4], ebx
// 006c53b6  894e0c               mov dword ptr [esi + 0xc], ecx
// 006c53b9  5b                   pop ebx
// 006c53ba  897e08               mov dword ptr [esi + 8], edi
// 006c53bd  5f                   pop edi
// 006c53be  5e                   pop esi
// 006c53bf  5d                   pop ebp
// 006c53c0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?SetSize@?$CArray@USELECTED_BLOCK@CXTPDatePickerDaysCollection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPDatePickerDaysCollection.cpp
