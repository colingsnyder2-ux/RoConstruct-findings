// roc 2008-06 005ec800  unit: RBX::Sky  size: 452 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec800
//
// 005ec800  64a100000000         mov eax, dword ptr fs:[0]
// 005ec806  6aff                 push -1
// 005ec808  6814707d00           push 0x7d7014
// 005ec80d  50                   push eax
// 005ec80e  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ec812  64892500000000       mov dword ptr fs:[0], esp
// 005ec819  83f805               cmp eax, 5
// 005ec81c  0f8775010000         ja 0x5ec997
// 005ec822  ff2485acc95e00       jmp dword ptr [eax*4 + 0x5ec9ac]
// 005ec829  b801000000           mov eax, 1
// 005ec82e  840524af9700         test byte ptr [0x97af24], al
// 005ec834  751d                 jne 0x5ec853
// 005ec836  090524af9700         or dword ptr [0x97af24], eax
// 005ec83c  6a00                 push 0
// 005ec83e  6800af9700           push 0x97af00
// 005ec843  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ec84b  e890feffff           call 0x5ec6e0
// 005ec850  83c408               add esp, 8
// 005ec853  b800af9700           mov eax, 0x97af00
// 005ec858  8b0c24               mov ecx, dword ptr [esp]
// 005ec85b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec862  83c40c               add esp, 0xc
// 005ec865  c3                   ret 
// 005ec866  b802000000           mov eax, 2
// 005ec86b  840524af9700         test byte ptr [0x97af24], al
// 005ec871  751d                 jne 0x5ec890
// 005ec873  090524af9700         or dword ptr [0x97af24], eax
// 005ec879  b801000000           mov eax, 1
// 005ec87e  50                   push eax
// 005ec87f  68dcae9700           push 0x97aedc
// 005ec884  89442410             mov dword ptr [esp + 0x10], eax
// 005ec888  e853feffff           call 0x5ec6e0
// 005ec88d  83c408               add esp, 8
// 005ec890  b8dcae9700           mov eax, 0x97aedc
// 005ec895  8b0c24               mov ecx, dword ptr [esp]
// 005ec898  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec89f  83c40c               add esp, 0xc
// 005ec8a2  c3                   ret 
// 005ec8a3  b804000000           mov eax, 4
// 005ec8a8  840524af9700         test byte ptr [0x97af24], al
// 005ec8ae  751d                 jne 0x5ec8cd
// 005ec8b0  090524af9700         or dword ptr [0x97af24], eax
// 005ec8b6  b802000000           mov eax, 2
// 005ec8bb  50                   push eax
// 005ec8bc  68b8ae9700           push 0x97aeb8
// 005ec8c1  89442410             mov dword ptr [esp + 0x10], eax
// 005ec8c5  e816feffff           call 0x5ec6e0
// 005ec8ca  83c408               add esp, 8
// 005ec8cd  b8b8ae9700           mov eax, 0x97aeb8
// 005ec8d2  8b0c24               mov ecx, dword ptr [esp]
// 005ec8d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec8dc  83c40c               add esp, 0xc
// 005ec8df  c3                   ret 
// 005ec8e0  b808000000           mov eax, 8
// 005ec8e5  840524af9700         test byte ptr [0x97af24], al
// 005ec8eb  751d                 jne 0x5ec90a
// 005ec8ed  090524af9700         or dword ptr [0x97af24], eax
// 005ec8f3  6a03                 push 3
// 005ec8f5  6894ae9700           push 0x97ae94
// 005ec8fa  c744241003000000     mov dword ptr [esp + 0x10], 3
// 005ec902  e8d9fdffff           call 0x5ec6e0
// 005ec907  83c408               add esp, 8
// 005ec90a  b894ae9700           mov eax, 0x97ae94
// 005ec90f  8b0c24               mov ecx, dword ptr [esp]
// 005ec912  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec919  83c40c               add esp, 0xc
// 005ec91c  c3                   ret 
// 005ec91d  b810000000           mov eax, 0x10
// 005ec922  840524af9700         test byte ptr [0x97af24], al
// 005ec928  751d                 jne 0x5ec947
// 005ec92a  090524af9700         or dword ptr [0x97af24], eax
// 005ec930  b804000000           mov eax, 4
// 005ec935  50                   push eax
// 005ec936  6870ae9700           push 0x97ae70
// 005ec93b  89442410             mov dword ptr [esp + 0x10], eax
// 005ec93f  e89cfdffff           call 0x5ec6e0
// 005ec944  83c408               add esp, 8
// 005ec947  b870ae9700           mov eax, 0x97ae70
// 005ec94c  8b0c24               mov ecx, dword ptr [esp]
// 005ec94f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec956  83c40c               add esp, 0xc
// 005ec959  c3                   ret 
// 005ec95a  b820000000           mov eax, 0x20
// 005ec95f  840524af9700         test byte ptr [0x97af24], al
// 005ec965  751d                 jne 0x5ec984
// 005ec967  090524af9700         or dword ptr [0x97af24], eax
// 005ec96d  6a05                 push 5
// 005ec96f  684cae9700           push 0x97ae4c
// 005ec974  c744241005000000     mov dword ptr [esp + 0x10], 5
// 005ec97c  e85ffdffff           call 0x5ec6e0
// 005ec981  83c408               add esp, 8
// 005ec984  b84cae9700           mov eax, 0x97ae4c
// 005ec989  8b0c24               mov ecx, dword ptr [esp]
// 005ec98c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec993  83c40c               add esp, 0xc
// 005ec996  c3                   ret 
// 005ec997  e88474f2ff           call 0x513e20
// 005ec99c  8b0c24               mov ecx, dword ptr [esp]
// 005ec99f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec9a6  83c40c               add esp, 0xc
// 005ec9a9  c3                   ret 
// 005ec9aa  8bff                 mov edi, edi
// 005ec9ac  29c8                 sub eax, ecx
// 005ec9ae  5e                   pop esi
// 005ec9af  0066c8               add byte ptr [esi - 0x38], ah
// 005ec9b2  5e                   pop esi
// 005ec9b3  00a3c85e00e0         add byte ptr [ebx - 0x1fffa138], ah
// 005ec9b9  c85e001d             enter 0x5e, 0x1d
// 005ec9bd  c9                   leave 
// 005ec9be  5e                   pop esi
// 005ec9bf  005ac9               add byte ptr [edx - 0x37], bl
// 005ec9c2  5e                   pop esi
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3@RBX@@YAABVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
