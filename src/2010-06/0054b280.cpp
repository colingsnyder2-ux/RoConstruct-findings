// roc 2010-06 0054b280  unit: RBX::AggregateChunk  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b280
//
// 0054b280  51                   push ecx
// 0054b281  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054b285  53                   push ebx
// 0054b286  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054b28a  8bc1                 mov eax, ecx
// 0054b28c  2bc3                 sub eax, ebx
// 0054b28e  55                   push ebp
// 0054b28f  56                   push esi
// 0054b290  c1f802               sar eax, 2
// 0054b293  57                   push edi
// 0054b294  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0054b298  99                   cdq 
// 0054b299  2bc2                 sub eax, edx
// 0054b29b  57                   push edi
// 0054b29c  d1f8                 sar eax, 1
// 0054b29e  83c1fc               add ecx, -4
// 0054b2a1  51                   push ecx
// 0054b2a2  8d3483               lea esi, [ebx + eax*4]
// 0054b2a5  56                   push esi
// 0054b2a6  53                   push ebx
// 0054b2a7  e814feffff           call 0x54b0c0
// 0054b2ac  83c410               add esp, 0x10
// 0054b2af  8d6e04               lea ebp, [esi + 4]
// 0054b2b2  3bde                 cmp ebx, esi
// 0054b2b4  7327                 jae 0x54b2dd
// 0054b2b6  8d7efc               lea edi, [esi - 4]
// 0054b2b9  56                   push esi
// 0054b2ba  57                   push edi
// 0054b2bb  ff54242c             call dword ptr [esp + 0x2c]
// 0054b2bf  83c408               add esp, 8
// 0054b2c2  84c0                 test al, al
// 0054b2c4  7513                 jne 0x54b2d9
// 0054b2c6  57                   push edi
// 0054b2c7  56                   push esi
// 0054b2c8  ff54242c             call dword ptr [esp + 0x2c]
// 0054b2cc  83c408               add esp, 8
// 0054b2cf  84c0                 test al, al
// 0054b2d1  7506                 jne 0x54b2d9
// 0054b2d3  8bf7                 mov esi, edi
// 0054b2d5  3bde                 cmp ebx, esi
// 0054b2d7  72dd                 jb 0x54b2b6
// 0054b2d9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0054b2dd  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0054b2e1  3beb                 cmp ebp, ebx
// 0054b2e3  731d                 jae 0x54b302
// 0054b2e5  56                   push esi
// 0054b2e6  55                   push ebp
// 0054b2e7  ffd7                 call edi
// 0054b2e9  83c408               add esp, 8
// 0054b2ec  84c0                 test al, al
// 0054b2ee  7512                 jne 0x54b302
// 0054b2f0  55                   push ebp
// 0054b2f1  56                   push esi
// 0054b2f2  ffd7                 call edi
// 0054b2f4  83c408               add esp, 8
// 0054b2f7  84c0                 test al, al
// 0054b2f9  7507                 jne 0x54b302
// 0054b2fb  83c504               add ebp, 4
// 0054b2fe  3beb                 cmp ebp, ebx
// 0054b300  72e3                 jb 0x54b2e5
// 0054b302  8bde                 mov ebx, esi
// 0054b304  8bfd                 mov edi, ebp
// 0054b306  895c2410             mov dword ptr [esp + 0x10], ebx
// 0054b30a  8d9b00000000         lea ebx, [ebx]
// 0054b310  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0054b314  7334                 jae 0x54b34a
// 0054b316  57                   push edi
// 0054b317  56                   push esi
// 0054b318  ff54242c             call dword ptr [esp + 0x2c]
// 0054b31c  83c408               add esp, 8
// 0054b31f  84c0                 test al, al
// 0054b321  751e                 jne 0x54b341
// 0054b323  56                   push esi
// 0054b324  57                   push edi
// 0054b325  ff54242c             call dword ptr [esp + 0x2c]
// 0054b329  83c408               add esp, 8
// 0054b32c  84c0                 test al, al
// 0054b32e  751a                 jne 0x54b34a
// 0054b330  8bc5                 mov eax, ebp
// 0054b332  83c504               add ebp, 4
// 0054b335  3bc7                 cmp eax, edi
// 0054b337  7408                 je 0x54b341
// 0054b339  8b17                 mov edx, dword ptr [edi]
// 0054b33b  8b08                 mov ecx, dword ptr [eax]
// 0054b33d  8910                 mov dword ptr [eax], edx
// 0054b33f  890f                 mov dword ptr [edi], ecx
// 0054b341  83c704               add edi, 4
// 0054b344  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0054b348  72cc                 jb 0x54b316
// 0054b34a  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 0054b34e  7648                 jbe 0x54b398
// 0054b350  83c3fc               add ebx, -4
// 0054b353  56                   push esi
// 0054b354  53                   push ebx
// 0054b355  ff54242c             call dword ptr [esp + 0x2c]
// 0054b359  83c408               add esp, 8
// 0054b35c  84c0                 test al, al
// 0054b35e  751c                 jne 0x54b37c
// 0054b360  53                   push ebx
// 0054b361  56                   push esi
// 0054b362  ff54242c             call dword ptr [esp + 0x2c]
// 0054b366  83c408               add esp, 8
// 0054b369  84c0                 test al, al
// 0054b36b  7523                 jne 0x54b390
// 0054b36d  83ee04               sub esi, 4
// 0054b370  3bf3                 cmp esi, ebx
// 0054b372  7408                 je 0x54b37c
// 0054b374  8b0b                 mov ecx, dword ptr [ebx]
// 0054b376  8b06                 mov eax, dword ptr [esi]
// 0054b378  890e                 mov dword ptr [esi], ecx
// 0054b37a  8903                 mov dword ptr [ebx], eax
// 0054b37c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054b380  83e804               sub eax, 4
// 0054b383  83eb04               sub ebx, 4
// 0054b386  89442410             mov dword ptr [esp + 0x10], eax
// 0054b38a  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0054b38e  72c3                 jb 0x54b353
// 0054b390  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054b394  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 0054b398  7542                 jne 0x54b3dc
// 0054b39a  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0054b39e  0f8482000000         je 0x54b426
// 0054b3a4  3bef                 cmp ebp, edi
// 0054b3a6  740e                 je 0x54b3b6
// 0054b3a8  3bf5                 cmp esi, ebp
// 0054b3aa  740a                 je 0x54b3b6
// 0054b3ac  8b5500               mov edx, dword ptr [ebp]
// 0054b3af  8b06                 mov eax, dword ptr [esi]
// 0054b3b1  8916                 mov dword ptr [esi], edx
// 0054b3b3  894500               mov dword ptr [ebp], eax
// 0054b3b6  8bc7                 mov eax, edi
// 0054b3b8  8bce                 mov ecx, esi
// 0054b3ba  83c504               add ebp, 4
// 0054b3bd  83c604               add esi, 4
// 0054b3c0  83c704               add edi, 4
// 0054b3c3  3bc8                 cmp ecx, eax
// 0054b3c5  0f8445ffffff         je 0x54b310
// 0054b3cb  8b18                 mov ebx, dword ptr [eax]
// 0054b3cd  8b11                 mov edx, dword ptr [ecx]
// 0054b3cf  8919                 mov dword ptr [ecx], ebx
// 0054b3d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054b3d5  8910                 mov dword ptr [eax], edx
// 0054b3d7  e934ffffff           jmp 0x54b310
// 0054b3dc  83eb04               sub ebx, 4
// 0054b3df  895c2410             mov dword ptr [esp + 0x10], ebx
// 0054b3e3  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0054b3e7  7529                 jne 0x54b412
// 0054b3e9  83ee04               sub esi, 4
// 0054b3ec  3bde                 cmp ebx, esi
// 0054b3ee  7408                 je 0x54b3f8
// 0054b3f0  8b0e                 mov ecx, dword ptr [esi]
// 0054b3f2  8b03                 mov eax, dword ptr [ebx]
// 0054b3f4  890b                 mov dword ptr [ebx], ecx
// 0054b3f6  8906                 mov dword ptr [esi], eax
// 0054b3f8  83ed04               sub ebp, 4
// 0054b3fb  3bf5                 cmp esi, ebp
// 0054b3fd  0f840dffffff         je 0x54b310
// 0054b403  8b5500               mov edx, dword ptr [ebp]
// 0054b406  8b06                 mov eax, dword ptr [esi]
// 0054b408  8916                 mov dword ptr [esi], edx
// 0054b40a  894500               mov dword ptr [ebp], eax
// 0054b40d  e9fefeffff           jmp 0x54b310
// 0054b412  3bfb                 cmp edi, ebx
// 0054b414  7408                 je 0x54b41e
// 0054b416  8b0b                 mov ecx, dword ptr [ebx]
// 0054b418  8b07                 mov eax, dword ptr [edi]
// 0054b41a  890f                 mov dword ptr [edi], ecx
// 0054b41c  8903                 mov dword ptr [ebx], eax
// 0054b41e  83c704               add edi, 4
// 0054b421  e9eafeffff           jmp 0x54b310
// 0054b426  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054b42a  5f                   pop edi
// 0054b42b  8930                 mov dword ptr [eax], esi
// 0054b42d  5e                   pop esi
// 0054b42e  896804               mov dword ptr [eax + 4], ebp
// 0054b431  5d                   pop ebp
// 0054b432  5b                   pop ebx
// 0054b433  59                   pop ecx
// 0054b434  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
