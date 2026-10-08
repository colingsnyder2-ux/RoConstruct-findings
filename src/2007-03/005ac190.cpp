// roc 2007-03 005ac190  unit: seg_005a0000  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac190
//
// 005ac190  51                   push ecx
// 005ac191  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ac195  53                   push ebx
// 005ac196  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ac19a  55                   push ebp
// 005ac19b  56                   push esi
// 005ac19c  57                   push edi
// 005ac19d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ac1a1  8bc1                 mov eax, ecx
// 005ac1a3  2bc7                 sub eax, edi
// 005ac1a5  c1f802               sar eax, 2
// 005ac1a8  99                   cdq 
// 005ac1a9  2bc2                 sub eax, edx
// 005ac1ab  53                   push ebx
// 005ac1ac  d1f8                 sar eax, 1
// 005ac1ae  83c1fc               add ecx, -4
// 005ac1b1  51                   push ecx
// 005ac1b2  8d3487               lea esi, [edi + eax*4]
// 005ac1b5  56                   push esi
// 005ac1b6  57                   push edi
// 005ac1b7  e884feffff           call 0x5ac040
// 005ac1bc  83c410               add esp, 0x10
// 005ac1bf  3bfe                 cmp edi, esi
// 005ac1c1  8d6e04               lea ebp, [esi + 4]
// 005ac1c4  7327                 jae 0x5ac1ed
// 005ac1c6  8b06                 mov eax, dword ptr [esi]
// 005ac1c8  8b4efc               mov ecx, dword ptr [esi - 4]
// 005ac1cb  50                   push eax
// 005ac1cc  51                   push ecx
// 005ac1cd  ffd3                 call ebx
// 005ac1cf  83c408               add esp, 8
// 005ac1d2  84c0                 test al, al
// 005ac1d4  7517                 jne 0x5ac1ed
// 005ac1d6  8b56fc               mov edx, dword ptr [esi - 4]
// 005ac1d9  8b06                 mov eax, dword ptr [esi]
// 005ac1db  52                   push edx
// 005ac1dc  50                   push eax
// 005ac1dd  ffd3                 call ebx
// 005ac1df  83c408               add esp, 8
// 005ac1e2  84c0                 test al, al
// 005ac1e4  7507                 jne 0x5ac1ed
// 005ac1e6  83c6fc               add esi, -4
// 005ac1e9  3bfe                 cmp edi, esi
// 005ac1eb  72d9                 jb 0x5ac1c6
// 005ac1ed  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ac1f1  3bef                 cmp ebp, edi
// 005ac1f3  7327                 jae 0x5ac21c
// 005ac1f5  8b0e                 mov ecx, dword ptr [esi]
// 005ac1f7  8b5500               mov edx, dword ptr [ebp]
// 005ac1fa  51                   push ecx
// 005ac1fb  52                   push edx
// 005ac1fc  ffd3                 call ebx
// 005ac1fe  83c408               add esp, 8
// 005ac201  84c0                 test al, al
// 005ac203  7517                 jne 0x5ac21c
// 005ac205  8b4500               mov eax, dword ptr [ebp]
// 005ac208  8b0e                 mov ecx, dword ptr [esi]
// 005ac20a  50                   push eax
// 005ac20b  51                   push ecx
// 005ac20c  ffd3                 call ebx
// 005ac20e  83c408               add esp, 8
// 005ac211  84c0                 test al, al
// 005ac213  7507                 jne 0x5ac21c
// 005ac215  83c504               add ebp, 4
// 005ac218  3bef                 cmp ebp, edi
// 005ac21a  72d9                 jb 0x5ac1f5
// 005ac21c  8bfd                 mov edi, ebp
// 005ac21e  8bde                 mov ebx, esi
// 005ac220  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005ac224  7338                 jae 0x5ac25e
// 005ac226  8b17                 mov edx, dword ptr [edi]
// 005ac228  8b06                 mov eax, dword ptr [esi]
// 005ac22a  52                   push edx
// 005ac22b  50                   push eax
// 005ac22c  ff54242c             call dword ptr [esp + 0x2c]
// 005ac230  83c408               add esp, 8
// 005ac233  84c0                 test al, al
// 005ac235  751e                 jne 0x5ac255
// 005ac237  8b0e                 mov ecx, dword ptr [esi]
// 005ac239  8b17                 mov edx, dword ptr [edi]
// 005ac23b  51                   push ecx
// 005ac23c  52                   push edx
// 005ac23d  ff54242c             call dword ptr [esp + 0x2c]
// 005ac241  83c408               add esp, 8
// 005ac244  84c0                 test al, al
// 005ac246  7516                 jne 0x5ac25e
// 005ac248  8b17                 mov edx, dword ptr [edi]
// 005ac24a  8bc5                 mov eax, ebp
// 005ac24c  8b08                 mov ecx, dword ptr [eax]
// 005ac24e  8910                 mov dword ptr [eax], edx
// 005ac250  83c504               add ebp, 4
// 005ac253  890f                 mov dword ptr [edi], ecx
// 005ac255  83c704               add edi, 4
// 005ac258  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005ac25c  72c8                 jb 0x5ac226
// 005ac25e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005ac262  763f                 jbe 0x5ac2a3
// 005ac264  8b06                 mov eax, dword ptr [esi]
// 005ac266  8b4bfc               mov ecx, dword ptr [ebx - 4]
// 005ac269  50                   push eax
// 005ac26a  51                   push ecx
// 005ac26b  ff54242c             call dword ptr [esp + 0x2c]
// 005ac26f  83c408               add esp, 8
// 005ac272  84c0                 test al, al
// 005ac274  7520                 jne 0x5ac296
// 005ac276  8b53fc               mov edx, dword ptr [ebx - 4]
// 005ac279  8b06                 mov eax, dword ptr [esi]
// 005ac27b  52                   push edx
// 005ac27c  50                   push eax
// 005ac27d  ff54242c             call dword ptr [esp + 0x2c]
// 005ac281  83c408               add esp, 8
// 005ac284  84c0                 test al, al
// 005ac286  7517                 jne 0x5ac29f
// 005ac288  8b4bfc               mov ecx, dword ptr [ebx - 4]
// 005ac28b  8b46fc               mov eax, dword ptr [esi - 4]
// 005ac28e  83ee04               sub esi, 4
// 005ac291  890e                 mov dword ptr [esi], ecx
// 005ac293  8943fc               mov dword ptr [ebx - 4], eax
// 005ac296  83c3fc               add ebx, -4
// 005ac299  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 005ac29d  72c5                 jb 0x5ac264
// 005ac29f  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005ac2a3  7536                 jne 0x5ac2db
// 005ac2a5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005ac2a9  746a                 je 0x5ac315
// 005ac2ab  3bef                 cmp ebp, edi
// 005ac2ad  740a                 je 0x5ac2b9
// 005ac2af  8b5500               mov edx, dword ptr [ebp]
// 005ac2b2  8b06                 mov eax, dword ptr [esi]
// 005ac2b4  8916                 mov dword ptr [esi], edx
// 005ac2b6  894500               mov dword ptr [ebp], eax
// 005ac2b9  8bce                 mov ecx, esi
// 005ac2bb  8b11                 mov edx, dword ptr [ecx]
// 005ac2bd  8bc7                 mov eax, edi
// 005ac2bf  89542410             mov dword ptr [esp + 0x10], edx
// 005ac2c3  8b10                 mov edx, dword ptr [eax]
// 005ac2c5  8911                 mov dword ptr [ecx], edx
// 005ac2c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ac2cb  83c504               add ebp, 4
// 005ac2ce  83c604               add esi, 4
// 005ac2d1  83c704               add edi, 4
// 005ac2d4  8908                 mov dword ptr [eax], ecx
// 005ac2d6  e945ffffff           jmp 0x5ac220
// 005ac2db  83eb04               sub ebx, 4
// 005ac2de  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005ac2e2  7521                 jne 0x5ac305
// 005ac2e4  83ee04               sub esi, 4
// 005ac2e7  3bde                 cmp ebx, esi
// 005ac2e9  7408                 je 0x5ac2f3
// 005ac2eb  8b16                 mov edx, dword ptr [esi]
// 005ac2ed  8b03                 mov eax, dword ptr [ebx]
// 005ac2ef  8913                 mov dword ptr [ebx], edx
// 005ac2f1  8906                 mov dword ptr [esi], eax
// 005ac2f3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ac2f6  8b06                 mov eax, dword ptr [esi]
// 005ac2f8  83ed04               sub ebp, 4
// 005ac2fb  890e                 mov dword ptr [esi], ecx
// 005ac2fd  894500               mov dword ptr [ebp], eax
// 005ac300  e91bffffff           jmp 0x5ac220
// 005ac305  8b07                 mov eax, dword ptr [edi]
// 005ac307  8b13                 mov edx, dword ptr [ebx]
// 005ac309  8917                 mov dword ptr [edi], edx
// 005ac30b  8903                 mov dword ptr [ebx], eax
// 005ac30d  83c704               add edi, 4
// 005ac310  e90bffffff           jmp 0x5ac220
// 005ac315  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ac319  5f                   pop edi
// 005ac31a  8930                 mov dword ptr [eax], esi
// 005ac31c  5e                   pop esi
// 005ac31d  896804               mov dword ptr [eax + 4], ebp
// 005ac320  5d                   pop ebp
// 005ac321  5b                   pop ebx
// 005ac322  59                   pop ecx
// 005ac323  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
