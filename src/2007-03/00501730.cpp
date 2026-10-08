// roc 2007-03 00501730  unit: seg_00500000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501730
//
// 00501730  51                   push ecx
// 00501731  56                   push esi
// 00501732  8bf1                 mov esi, ecx
// 00501734  8b4644               mov eax, dword ptr [esi + 0x44]
// 00501737  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050173a  8b5638               mov edx, dword ptr [esi + 0x38]
// 0050173d  57                   push edi
// 0050173e  03c8                 add ecx, eax
// 00501740  83ea01               sub edx, 1
// 00501743  33ff                 xor edi, edi
// 00501745  3bca                 cmp ecx, edx
// 00501747  c744240800000000     mov dword ptr [esp + 8], 0
// 0050174f  7d12                 jge 0x501763
// 00501751  83c001               add eax, 1
// 00501754  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00501757  7e0a                 jle 0x501763
// 00501759  6a01                 push 1
// 0050175b  51                   push ecx
// 0050175c  8bce                 mov ecx, esi
// 0050175e  e80dfcffff           call 0x501370
// 00501763  8b4644               mov eax, dword ptr [esi + 0x44]
// 00501766  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00501769  8b5638               mov edx, dword ptr [esi + 0x38]
// 0050176c  03c8                 add ecx, eax
// 0050176e  83c2ff               add edx, -1
// 00501771  3bca                 cmp ecx, edx
// 00501773  7d51                 jge 0x5017c6
// 00501775  53                   push ebx
// 00501776  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 00501779  803c1800             cmp byte ptr [eax + ebx], 0
// 0050177d  7446                 je 0x5017c5
// 0050177f  8d5901               lea ebx, [ecx + 1]
// 00501782  3bda                 cmp ebx, edx
// 00501784  bf01000000           mov edi, 1
// 00501789  7d3a                 jge 0x5017c5
// 0050178b  eb03                 jmp 0x501790
// 0050178d  8d4900               lea ecx, [ecx]
// 00501790  8b5640               mov edx, dword ptr [esi + 0x40]
// 00501793  03d0                 add edx, eax
// 00501795  803c3a00             cmp byte ptr [edx + edi], 0
// 00501799  742a                 je 0x5017c5
// 0050179b  83c001               add eax, 1
// 0050179e  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005017a1  7e0a                 jle 0x5017ad
// 005017a3  6a01                 push 1
// 005017a5  51                   push ecx
// 005017a6  8bce                 mov ecx, esi
// 005017a8  e8c3fbffff           call 0x501370
// 005017ad  8b4644               mov eax, dword ptr [esi + 0x44]
// 005017b0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005017b3  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 005017b6  83c701               add edi, 1
// 005017b9  03c8                 add ecx, eax
// 005017bb  8d1439               lea edx, [ecx + edi]
// 005017be  83eb01               sub ebx, 1
// 005017c1  3bd3                 cmp edx, ebx
// 005017c3  7ccb                 jl 0x501790
// 005017c5  5b                   pop ebx
// 005017c6  83c701               add edi, 1
// 005017c9  57                   push edi
// 005017ca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005017ce  57                   push edi
// 005017cf  8bce                 mov ecx, esi
// 005017d1  e89afeffff           call 0x501670
// 005017d6  8bc7                 mov eax, edi
// 005017d8  5f                   pop edi
// 005017d9  5e                   pop esi
// 005017da  59                   pop ecx
// 005017db  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
