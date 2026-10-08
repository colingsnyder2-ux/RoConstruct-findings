// roc 2007-03 004e5180  unit: seg_004e0000  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5180
//
// 004e5180  55                   push ebp
// 004e5181  8bec                 mov ebp, esp
// 004e5183  83e4f8               and esp, 0xfffffff8
// 004e5186  83ec20               sub esp, 0x20
// 004e5189  53                   push ebx
// 004e518a  55                   push ebp
// 004e518b  8bd9                 mov ebx, ecx
// 004e518d  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004e5190  8b4804               mov ecx, dword ptr [eax + 4]
// 004e5193  56                   push esi
// 004e5194  8d7314               lea esi, [ebx + 0x14]
// 004e5197  57                   push edi
// 004e5198  51                   push ecx
// 004e5199  8bce                 mov ecx, esi
// 004e519b  e890efffff           call 0x4e4130
// 004e51a0  8b4604               mov eax, dword ptr [esi + 4]
// 004e51a3  894004               mov dword ptr [eax + 4], eax
// 004e51a6  8b4604               mov eax, dword ptr [esi + 4]
// 004e51a9  33ff                 xor edi, edi
// 004e51ab  897e08               mov dword ptr [esi + 8], edi
// 004e51ae  8900                 mov dword ptr [eax], eax
// 004e51b0  8b7604               mov esi, dword ptr [esi + 4]
// 004e51b3  897608               mov dword ptr [esi + 8], esi
// 004e51b6  8b5324               mov edx, dword ptr [ebx + 0x24]
// 004e51b9  8b4204               mov eax, dword ptr [edx + 4]
// 004e51bc  8d7320               lea esi, [ebx + 0x20]
// 004e51bf  50                   push eax
// 004e51c0  8bce                 mov ecx, esi
// 004e51c2  e869efffff           call 0x4e4130
// 004e51c7  8b4604               mov eax, dword ptr [esi + 4]
// 004e51ca  894004               mov dword ptr [eax + 4], eax
// 004e51cd  8b4604               mov eax, dword ptr [esi + 4]
// 004e51d0  897e08               mov dword ptr [esi + 8], edi
// 004e51d3  8900                 mov dword ptr [eax], eax
// 004e51d5  8b7604               mov esi, dword ptr [esi + 4]
// 004e51d8  897608               mov dword ptr [esi + 8], esi
// 004e51db  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 004e51de  8b29                 mov ebp, dword ptr [ecx]
// 004e51e0  8d7b08               lea edi, [ebx + 8]
// 004e51e3  8bf7                 mov esi, edi
// 004e51e5  8bd1                 mov edx, ecx
// 004e51e7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004e51eb  89742418             mov dword ptr [esp + 0x18], esi
// 004e51ef  89542424             mov dword ptr [esp + 0x24], edx
// 004e51f3  85f6                 test esi, esi
// 004e51f5  7404                 je 0x4e51fb
// 004e51f7  3bf7                 cmp esi, edi
// 004e51f9  7406                 je 0x4e5201
// 004e51fb  ff1544e97700         call dword ptr [0x77e944]
// 004e5201  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 004e5205  7462                 je 0x4e5269
// 004e5207  85f6                 test esi, esi
// 004e5209  7506                 jne 0x4e5211
// 004e520b  ff1544e97700         call dword ptr [0x77e944]
// 004e5211  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004e5214  7506                 jne 0x4e521c
// 004e5216  ff1544e97700         call dword ptr [0x77e944]
// 004e521c  8b7518               mov esi, dword ptr [ebp + 0x18]
// 004e521f  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 004e5222  83c60c               add esi, 0xc
// 004e5225  396e04               cmp dword ptr [esi + 4], ebp
// 004e5228  7606                 jbe 0x4e5230
// 004e522a  ff1544e97700         call dword ptr [0x77e944]
// 004e5230  8b4604               mov eax, dword ptr [esi + 4]
// 004e5233  3b4608               cmp eax, dword ptr [esi + 8]
// 004e5236  89442414             mov dword ptr [esp + 0x14], eax
// 004e523a  760a                 jbe 0x4e5246
// 004e523c  ff1544e97700         call dword ptr [0x77e944]
// 004e5242  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e5246  55                   push ebp
// 004e5247  56                   push esi
// 004e5248  50                   push eax
// 004e5249  56                   push esi
// 004e524a  8d442438             lea eax, [esp + 0x38]
// 004e524e  50                   push eax
// 004e524f  8bce                 mov ecx, esi
// 004e5251  e85aeeffff           call 0x4e40b0
// 004e5256  8d4c2418             lea ecx, [esp + 0x18]
// 004e525a  e801ddffff           call 0x4e2f60
// 004e525f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004e5263  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e5267  eb8a                 jmp 0x4e51f3
// 004e5269  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004e526c  6a01                 push 1
// 004e526e  6a00                 push 0
// 004e5270  81c198000000         add ecx, 0x98
// 004e5276  e815dfffff           call 0x4e3190
// 004e527b  5f                   pop edi
// 004e527c  5e                   pop esi
// 004e527d  5d                   pop ebp
// 004e527e  5b                   pop ebx
// 004e527f  8be5                 mov esp, ebp
// 004e5281  5d                   pop ebp
// 004e5282  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ?clear@AggregatingSceneManager@Render@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
