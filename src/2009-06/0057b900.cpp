// roc 2009-06 0057b900  unit: G3D::TextInput::WrongSymbol  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057b900
//
// 0057b900  8b542404             mov edx, dword ptr [esp + 4]
// 0057b904  83ec08               sub esp, 8
// 0057b907  53                   push ebx
// 0057b908  8bd9                 mov ebx, ecx
// 0057b90a  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057b90d  b95d74d105           mov ecx, 0x5d1745d
// 0057b912  2bc8                 sub ecx, eax
// 0057b914  3bca                 cmp ecx, edx
// 0057b916  7305                 jae 0x57b91d
// 0057b918  e8533febff           call 0x42f870
// 0057b91d  8bc8                 mov ecx, eax
// 0057b91f  d1e9                 shr ecx, 1
// 0057b921  83f908               cmp ecx, 8
// 0057b924  7305                 jae 0x57b92b
// 0057b926  b908000000           mov ecx, 8
// 0057b92b  55                   push ebp
// 0057b92c  56                   push esi
// 0057b92d  57                   push edi
// 0057b92e  3bd1                 cmp edx, ecx
// 0057b930  7311                 jae 0x57b943
// 0057b932  be5d74d105           mov esi, 0x5d1745d
// 0057b937  2bf1                 sub esi, ecx
// 0057b939  3bc6                 cmp eax, esi
// 0057b93b  7706                 ja 0x57b943
// 0057b93d  8bd1                 mov edx, ecx
// 0057b93f  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057b943  8b7318               mov esi, dword ptr [ebx + 0x18]
// 0057b946  03c2                 add eax, edx
// 0057b948  6a00                 push 0
// 0057b94a  50                   push eax
// 0057b94b  89742418             mov dword ptr [esp + 0x18], esi
// 0057b94f  e8acd00700           call 0x5f8a00
// 0057b954  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0057b957  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057b95b  03f6                 add esi, esi
// 0057b95d  03f6                 add esi, esi
// 0057b95f  8d3c06               lea edi, [esi + eax]
// 0057b962  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057b965  03c0                 add eax, eax
// 0057b967  03c0                 add eax, eax
// 0057b969  8d140e               lea edx, [esi + ecx]
// 0057b96c  2bc2                 sub eax, edx
// 0057b96e  03c1                 add eax, ecx
// 0057b970  c1f802               sar eax, 2
// 0057b973  83c408               add esp, 8
// 0057b976  8d0c8500000000       lea ecx, [eax*4]
// 0057b97d  8d2c39               lea ebp, [ecx + edi]
// 0057b980  85c0                 test eax, eax
// 0057b982  760d                 jbe 0x57b991
// 0057b984  51                   push ecx
// 0057b985  52                   push edx
// 0057b986  51                   push ecx
// 0057b987  57                   push edi
// 0057b988  ff155ce98900         call dword ptr [0x89e95c]
// 0057b98e  83c410               add esp, 0x10
// 0057b991  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057b995  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057b999  3bd0                 cmp edx, eax
// 0057b99b  7743                 ja 0x57b9e0
// 0057b99d  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0057b9a0  c1fe02               sar esi, 2
// 0057b9a3  8d0cb500000000       lea ecx, [esi*4]
// 0057b9aa  8d3c29               lea edi, [ecx + ebp]
// 0057b9ad  85f6                 test esi, esi
// 0057b9af  7611                 jbe 0x57b9c2
// 0057b9b1  51                   push ecx
// 0057b9b2  50                   push eax
// 0057b9b3  51                   push ecx
// 0057b9b4  55                   push ebp
// 0057b9b5  ff155ce98900         call dword ptr [0x89e95c]
// 0057b9bb  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057b9bf  83c410               add esp, 0x10
// 0057b9c2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057b9c6  2bca                 sub ecx, edx
// 0057b9c8  7408                 je 0x57b9d2
// 0057b9ca  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057b9ce  33c0                 xor eax, eax
// 0057b9d0  f3ab                 rep stosd dword ptr es:[edi], eax
// 0057b9d2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057b9d6  85d2                 test edx, edx
// 0057b9d8  7662                 jbe 0x57ba3c
// 0057b9da  8bca                 mov ecx, edx
// 0057b9dc  8bfd                 mov edi, ebp
// 0057b9de  eb58                 jmp 0x57ba38
// 0057b9e0  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0057b9e3  8d3c8500000000       lea edi, [eax*4]
// 0057b9ea  8bc7                 mov eax, edi
// 0057b9ec  c1f802               sar eax, 2
// 0057b9ef  85c0                 test eax, eax
// 0057b9f1  7611                 jbe 0x57ba04
// 0057b9f3  03c0                 add eax, eax
// 0057b9f5  03c0                 add eax, eax
// 0057b9f7  50                   push eax
// 0057b9f8  51                   push ecx
// 0057b9f9  50                   push eax
// 0057b9fa  55                   push ebp
// 0057b9fb  ff155ce98900         call dword ptr [0x89e95c]
// 0057ba01  83c410               add esp, 0x10
// 0057ba04  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0057ba07  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057ba0b  8d0c07               lea ecx, [edi + eax]
// 0057ba0e  2bf1                 sub esi, ecx
// 0057ba10  03f0                 add esi, eax
// 0057ba12  c1fe02               sar esi, 2
// 0057ba15  8d04b500000000       lea eax, [esi*4]
// 0057ba1c  8d3c28               lea edi, [eax + ebp]
// 0057ba1f  85f6                 test esi, esi
// 0057ba21  760d                 jbe 0x57ba30
// 0057ba23  50                   push eax
// 0057ba24  51                   push ecx
// 0057ba25  50                   push eax
// 0057ba26  55                   push ebp
// 0057ba27  ff155ce98900         call dword ptr [0x89e95c]
// 0057ba2d  83c410               add esp, 0x10
// 0057ba30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057ba34  85c9                 test ecx, ecx
// 0057ba36  7604                 jbe 0x57ba3c
// 0057ba38  33c0                 xor eax, eax
// 0057ba3a  f3ab                 rep stosd dword ptr es:[edi], eax
// 0057ba3c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0057ba3f  85c0                 test eax, eax
// 0057ba41  7409                 je 0x57ba4c
// 0057ba43  50                   push eax
// 0057ba44  e8e9cf1900           call 0x718a32
// 0057ba49  83c404               add esp, 4
// 0057ba4c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057ba50  015314               add dword ptr [ebx + 0x14], edx
// 0057ba53  5f                   pop edi
// 0057ba54  5e                   pop esi
// 0057ba55  896b10               mov dword ptr [ebx + 0x10], ebp
// 0057ba58  5d                   pop ebp
// 0057ba59  5b                   pop ebx
// 0057ba5a  83c408               add esp, 8
// 0057ba5d  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?_Growmap@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
