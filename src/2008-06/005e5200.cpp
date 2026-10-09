// roc 2008-06 005e5200  unit: RBX::SimJob  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5200
//
// 005e5200  83ec10               sub esp, 0x10
// 005e5203  53                   push ebx
// 005e5204  55                   push ebp
// 005e5205  56                   push esi
// 005e5206  57                   push edi
// 005e5207  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005e520b  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 005e520e  395f0c               cmp dword ptr [edi + 0xc], ebx
// 005e5211  7606                 jbe 0x5e5219
// 005e5213  ff1590288000         call dword ptr [0x802890]
// 005e5219  8b770c               mov esi, dword ptr [edi + 0xc]
// 005e521c  3b7710               cmp esi, dword ptr [edi + 0x10]
// 005e521f  7606                 jbe 0x5e5227
// 005e5221  ff1590288000         call dword ptr [0x802890]
// 005e5227  8b07                 mov eax, dword ptr [edi]
// 005e5229  89442410             mov dword ptr [esp + 0x10], eax
// 005e522d  89742414             mov dword ptr [esp + 0x14], esi
// 005e5231  8bee                 mov ebp, esi
// 005e5233  3bf3                 cmp esi, ebx
// 005e5235  7415                 je 0x5e524c
// 005e5237  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e523b  8b01                 mov eax, dword ptr [ecx]
// 005e523d  8d4900               lea ecx, [ecx]
// 005e5240  394500               cmp dword ptr [ebp], eax
// 005e5243  7407                 je 0x5e524c
// 005e5245  83c504               add ebp, 4
// 005e5248  3beb                 cmp ebp, ebx
// 005e524a  75f4                 jne 0x5e5240
// 005e524c  8b770c               mov esi, dword ptr [edi + 0xc]
// 005e524f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e5255  3b7710               cmp esi, dword ptr [edi + 0x10]
// 005e5258  7602                 jbe 0x5e525c
// 005e525a  ffd3                 call ebx
// 005e525c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e5260  8b07                 mov eax, dword ptr [edi]
// 005e5262  85c9                 test ecx, ecx
// 005e5264  7404                 je 0x5e526a
// 005e5266  3bc8                 cmp ecx, eax
// 005e5268  7402                 je 0x5e526c
// 005e526a  ffd3                 call ebx
// 005e526c  8bc5                 mov eax, ebp
// 005e526e  2bc6                 sub eax, esi
// 005e5270  8b7710               mov esi, dword ptr [edi + 0x10]
// 005e5273  c1f802               sar eax, 2
// 005e5276  89442424             mov dword ptr [esp + 0x24], eax
// 005e527a  39770c               cmp dword ptr [edi + 0xc], esi
// 005e527d  7602                 jbe 0x5e5281
// 005e527f  ffd3                 call ebx
// 005e5281  8b1f                 mov ebx, dword ptr [edi]
// 005e5283  85db                 test ebx, ebx
// 005e5285  7530                 jne 0x5e52b7
// 005e5287  ff1590288000         call dword ptr [0x802890]
// 005e528d  33c0                 xor eax, eax
// 005e528f  3b700c               cmp esi, dword ptr [eax + 0xc]
// 005e5292  7706                 ja 0x5e529a
// 005e5294  ff1590288000         call dword ptr [0x802890]
// 005e529a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e529e  83c6fc               add esi, -4
// 005e52a1  8974241c             mov dword ptr [esp + 0x1c], esi
// 005e52a5  85c0                 test eax, eax
// 005e52a7  7404                 je 0x5e52ad
// 005e52a9  3bc3                 cmp eax, ebx
// 005e52ab  740e                 je 0x5e52bb
// 005e52ad  8b3590288000         mov esi, dword ptr [0x802890]
// 005e52b3  ffd6                 call esi
// 005e52b5  eb0a                 jmp 0x5e52c1
// 005e52b7  8b03                 mov eax, dword ptr [ebx]
// 005e52b9  ebd4                 jmp 0x5e528f
// 005e52bb  8b3590288000         mov esi, dword ptr [0x802890]
// 005e52c1  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 005e52c5  742d                 je 0x5e52f4
// 005e52c7  85db                 test ebx, ebx
// 005e52c9  7549                 jne 0x5e5314
// 005e52cb  ffd6                 call esi
// 005e52cd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005e52d1  3b5310               cmp edx, dword ptr [ebx + 0x10]
// 005e52d4  7202                 jb 0x5e52d8
// 005e52d6  ffd6                 call esi
// 005e52d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e52dc  85c0                 test eax, eax
// 005e52de  7538                 jne 0x5e5318
// 005e52e0  ffd6                 call esi
// 005e52e2  33c0                 xor eax, eax
// 005e52e4  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 005e52e7  7202                 jb 0x5e52eb
// 005e52e9  ffd6                 call esi
// 005e52eb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e52ef  8b08                 mov ecx, dword ptr [eax]
// 005e52f1  894d00               mov dword ptr [ebp], ecx
// 005e52f4  8b5710               mov edx, dword ptr [edi + 0x10]
// 005e52f7  2b570c               sub edx, dword ptr [edi + 0xc]
// 005e52fa  6a00                 push 0
// 005e52fc  c1fa02               sar edx, 2
// 005e52ff  4a                   dec edx
// 005e5300  52                   push edx
// 005e5301  8bcf                 mov ecx, edi
// 005e5303  e8d81a0000           call 0x5e6de0
// 005e5308  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e530c  5f                   pop edi
// 005e530d  5e                   pop esi
// 005e530e  5d                   pop ebp
// 005e530f  5b                   pop ebx
// 005e5310  83c410               add esp, 0x10
// 005e5313  c3                   ret 
// 005e5314  8b1b                 mov ebx, dword ptr [ebx]
// 005e5316  ebb5                 jmp 0x5e52cd
// 005e5318  8b00                 mov eax, dword ptr [eax]
// 005e531a  ebc8                 jmp 0x5e52e4
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$fastRemoveShort@PAVAssembly@RBX@@@RBX@@YAIAAV?$vector@PAVAssembly@RBX@@V?$allocator@PAVAssembly@RBX@@@std@@@std@@ABQAVAssembly@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
