// roc 2007-08 005ac7d0  unit: RBX::World  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac7d0
//
// 005ac7d0  83ec08               sub esp, 8
// 005ac7d3  53                   push ebx
// 005ac7d4  55                   push ebp
// 005ac7d5  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005ac7db  56                   push esi
// 005ac7dc  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ac7e0  8b5e08               mov ebx, dword ptr [esi + 8]
// 005ac7e3  395e04               cmp dword ptr [esi + 4], ebx
// 005ac7e6  57                   push edi
// 005ac7e7  7602                 jbe 0x5ac7eb
// 005ac7e9  ffd5                 call ebp
// 005ac7eb  8b7e04               mov edi, dword ptr [esi + 4]
// 005ac7ee  3b7e08               cmp edi, dword ptr [esi + 8]
// 005ac7f1  7602                 jbe 0x5ac7f5
// 005ac7f3  ffd5                 call ebp
// 005ac7f5  3bfb                 cmp edi, ebx
// 005ac7f7  897c2414             mov dword ptr [esp + 0x14], edi
// 005ac7fb  7411                 je 0x5ac80e
// 005ac7fd  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ac801  8b00                 mov eax, dword ptr [eax]
// 005ac803  3907                 cmp dword ptr [edi], eax
// 005ac805  7407                 je 0x5ac80e
// 005ac807  83c704               add edi, 4
// 005ac80a  3bfb                 cmp edi, ebx
// 005ac80c  75f5                 jne 0x5ac803
// 005ac80e  8b5e04               mov ebx, dword ptr [esi + 4]
// 005ac811  3b5e08               cmp ebx, dword ptr [esi + 8]
// 005ac814  7602                 jbe 0x5ac818
// 005ac816  ffd5                 call ebp
// 005ac818  8bc6                 mov eax, esi
// 005ac81a  85c0                 test eax, eax
// 005ac81c  7404                 je 0x5ac822
// 005ac81e  3bc6                 cmp eax, esi
// 005ac820  7402                 je 0x5ac824
// 005ac822  ffd5                 call ebp
// 005ac824  8bef                 mov ebp, edi
// 005ac826  2beb                 sub ebp, ebx
// 005ac828  8b5e08               mov ebx, dword ptr [esi + 8]
// 005ac82b  c1fd02               sar ebp, 2
// 005ac82e  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005ac831  7309                 jae 0x5ac83c
// 005ac833  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac839  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005ac83c  7706                 ja 0x5ac844
// 005ac83e  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac844  83c3fc               add ebx, -4
// 005ac847  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ac84b  8bde                 mov ebx, esi
// 005ac84d  85db                 test ebx, ebx
// 005ac84f  7404                 je 0x5ac855
// 005ac851  3bde                 cmp ebx, esi
// 005ac853  7406                 je 0x5ac85b
// 005ac855  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac85b  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ac85f  3bf8                 cmp edi, eax
// 005ac861  7428                 je 0x5ac88b
// 005ac863  3b4608               cmp eax, dword ptr [esi + 8]
// 005ac866  7206                 jb 0x5ac86e
// 005ac868  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac86e  85db                 test ebx, ebx
// 005ac870  7506                 jne 0x5ac878
// 005ac872  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac878  3b7b08               cmp edi, dword ptr [ebx + 8]
// 005ac87b  7206                 jb 0x5ac883
// 005ac87d  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac883  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ac887  8b11                 mov edx, dword ptr [ecx]
// 005ac889  8917                 mov dword ptr [edi], edx
// 005ac88b  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ac88e  85c9                 test ecx, ecx
// 005ac890  7504                 jne 0x5ac896
// 005ac892  33c0                 xor eax, eax
// 005ac894  eb08                 jmp 0x5ac89e
// 005ac896  8b4608               mov eax, dword ptr [esi + 8]
// 005ac899  2bc1                 sub eax, ecx
// 005ac89b  c1f802               sar eax, 2
// 005ac89e  6a00                 push 0
// 005ac8a0  83c0ff               add eax, -1
// 005ac8a3  50                   push eax
// 005ac8a4  8bce                 mov ecx, esi
// 005ac8a6  e815160200           call 0x5cdec0
// 005ac8ab  5f                   pop edi
// 005ac8ac  5e                   pop esi
// 005ac8ad  8bc5                 mov eax, ebp
// 005ac8af  5d                   pop ebp
// 005ac8b0  5b                   pop ebx
// 005ac8b1  83c408               add esp, 8
// 005ac8b4  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$fastRemoveShort@PAVAssembly@RBX@@@RBX@@YAIAAV?$vector@PAVAssembly@RBX@@V?$allocator@PAVAssembly@RBX@@@std@@@std@@ABQAVAssembly@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
