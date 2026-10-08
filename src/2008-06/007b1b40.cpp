// roc 2008-06 007b1b40  unit: RBX::RenderNew::TextureProxy  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b1b40
//
// 007b1b40  6aff                 push -1
// 007b1b42  6851de7e00           push 0x7ede51
// 007b1b47  64a100000000         mov eax, dword ptr fs:[0]
// 007b1b4d  50                   push eax
// 007b1b4e  64892500000000       mov dword ptr fs:[0], esp
// 007b1b55  83ec28               sub esp, 0x28
// 007b1b58  53                   push ebx
// 007b1b59  55                   push ebp
// 007b1b5a  8be9                 mov ebp, ecx
// 007b1b5c  68330c0000           push 0xc33
// 007b1b61  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b1b65  e8961ccdff           call 0x483800
// 007b1b6a  83c404               add esp, 4
// 007b1b6d  84c0                 test al, al
// 007b1b6f  0f95c0               setne al
// 007b1b72  33db                 xor ebx, ebx
// 007b1b74  33c9                 xor ecx, ecx
// 007b1b76  3ac3                 cmp al, bl
// 007b1b78  0f95c1               setne cl
// 007b1b7b  884504               mov byte ptr [ebp + 4], al
// 007b1b7e  895c240c             mov dword ptr [esp + 0xc], ebx
// 007b1b82  41                   inc ecx
// 007b1b83  85c9                 test ecx, ecx
// 007b1b85  0f8e3c010000         jle 0x7b1cc7
// 007b1b8b  56                   push esi
// 007b1b8c  83c508               add ebp, 8
// 007b1b8f  57                   push edi
// 007b1b90  68f84d8700           push 0x874df8
// 007b1b95  8d4c2420             lea ecx, [esp + 0x20]
// 007b1b99  ff1558248000         call dword ptr [0x802458]
// 007b1b9f  d9e8                 fld1 
// 007b1ba1  8b15b0fa9600         mov edx, dword ptr [0x96fab0]
// 007b1ba7  51                   push ecx
// 007b1ba8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007b1bac  d91c24               fstp dword ptr [esp]
// 007b1baf  53                   push ebx
// 007b1bb0  6a06                 push 6
// 007b1bb2  6a02                 push 2
// 007b1bb4  53                   push ebx
// 007b1bb5  52                   push edx
// 007b1bb6  8b542460             mov edx, dword ptr [esp + 0x60]
// 007b1bba  8d442434             lea eax, [esp + 0x34]
// 007b1bbe  50                   push eax
// 007b1bbf  51                   push ecx
// 007b1bc0  52                   push edx
// 007b1bc1  8d442434             lea eax, [esp + 0x34]
// 007b1bc5  50                   push eax
// 007b1bc6  895c2468             mov dword ptr [esp + 0x68], ebx
// 007b1bca  e8812dccff           call 0x474950
// 007b1bcf  83c428               add esp, 0x28
// 007b1bd2  8b38                 mov edi, dword ptr [eax]
// 007b1bd4  8b4500               mov eax, dword ptr [ebp]
// 007b1bd7  c644244001           mov byte ptr [esp + 0x40], 1
// 007b1bdc  3bf8                 cmp edi, eax
// 007b1bde  745e                 je 0x7b1c3e
// 007b1be0  3bc3                 cmp eax, ebx
// 007b1be2  7449                 je 0x7b1c2d
// 007b1be4  83c004               add eax, 4
// 007b1be7  50                   push eax
// 007b1be8  ff15ac218000         call dword ptr [0x8021ac]
// 007b1bee  85c0                 test eax, eax
// 007b1bf0  7538                 jne 0x7b1c2a
// 007b1bf2  8b4500               mov eax, dword ptr [ebp]
// 007b1bf5  8b7008               mov esi, dword ptr [eax + 8]
// 007b1bf8  3bf3                 cmp esi, ebx
// 007b1bfa  741f                 je 0x7b1c1b
// 007b1bfc  8d642400             lea esp, [esp]
// 007b1c00  8b0e                 mov ecx, dword ptr [esi]
// 007b1c02  8b11                 mov edx, dword ptr [ecx]
// 007b1c04  8b4204               mov eax, dword ptr [edx + 4]
// 007b1c07  ffd0                 call eax
// 007b1c09  8bc6                 mov eax, esi
// 007b1c0b  8b7604               mov esi, dword ptr [esi + 4]
// 007b1c0e  50                   push eax
// 007b1c0f  e866eaeeff           call 0x6a067a
// 007b1c14  83c404               add esp, 4
// 007b1c17  3bf3                 cmp esi, ebx
// 007b1c19  75e5                 jne 0x7b1c00
// 007b1c1b  8b4d00               mov ecx, dword ptr [ebp]
// 007b1c1e  3bcb                 cmp ecx, ebx
// 007b1c20  7408                 je 0x7b1c2a
// 007b1c22  8b11                 mov edx, dword ptr [ecx]
// 007b1c24  8b02                 mov eax, dword ptr [edx]
// 007b1c26  6a01                 push 1
// 007b1c28  ffd0                 call eax
// 007b1c2a  895d00               mov dword ptr [ebp], ebx
// 007b1c2d  3bfb                 cmp edi, ebx
// 007b1c2f  740d                 je 0x7b1c3e
// 007b1c31  8d4704               lea eax, [edi + 4]
// 007b1c34  50                   push eax
// 007b1c35  897d00               mov dword ptr [ebp], edi
// 007b1c38  ff15b0218000         call dword ptr [0x8021b0]
// 007b1c3e  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b1c42  885c2440             mov byte ptr [esp + 0x40], bl
// 007b1c46  3bc3                 cmp eax, ebx
// 007b1c48  7448                 je 0x7b1c92
// 007b1c4a  83c004               add eax, 4
// 007b1c4d  50                   push eax
// 007b1c4e  ff15ac218000         call dword ptr [0x8021ac]
// 007b1c54  85c0                 test eax, eax
// 007b1c56  7536                 jne 0x7b1c8e
// 007b1c58  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b1c5c  8b7108               mov esi, dword ptr [ecx + 8]
// 007b1c5f  3bf3                 cmp esi, ebx
// 007b1c61  741f                 je 0x7b1c82
// 007b1c63  8b0e                 mov ecx, dword ptr [esi]
// 007b1c65  8b11                 mov edx, dword ptr [ecx]
// 007b1c67  8b4204               mov eax, dword ptr [edx + 4]
// 007b1c6a  ffd0                 call eax
// 007b1c6c  8bc6                 mov eax, esi
// 007b1c6e  8b7604               mov esi, dword ptr [esi + 4]
// 007b1c71  50                   push eax
// 007b1c72  e803eaeeff           call 0x6a067a
// 007b1c77  83c404               add esp, 4
// 007b1c7a  3bf3                 cmp esi, ebx
// 007b1c7c  75e5                 jne 0x7b1c63
// 007b1c7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b1c82  3bcb                 cmp ecx, ebx
// 007b1c84  7408                 je 0x7b1c8e
// 007b1c86  8b11                 mov edx, dword ptr [ecx]
// 007b1c88  8b02                 mov eax, dword ptr [edx]
// 007b1c8a  6a01                 push 1
// 007b1c8c  ffd0                 call eax
// 007b1c8e  895c2410             mov dword ptr [esp + 0x10], ebx
// 007b1c92  8d4c241c             lea ecx, [esp + 0x1c]
// 007b1c96  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 007b1c9e  ff1568248000         call dword ptr [0x802468]
// 007b1ca4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b1ca8  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b1cac  40                   inc eax
// 007b1cad  33c9                 xor ecx, ecx
// 007b1caf  83c504               add ebp, 4
// 007b1cb2  385a04               cmp byte ptr [edx + 4], bl
// 007b1cb5  89442414             mov dword ptr [esp + 0x14], eax
// 007b1cb9  0f95c1               setne cl
// 007b1cbc  41                   inc ecx
// 007b1cbd  3bc1                 cmp eax, ecx
// 007b1cbf  0f8ccbfeffff         jl 0x7b1b90
// 007b1cc5  5f                   pop edi
// 007b1cc6  5e                   pop esi
// 007b1cc7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b1ccb  5d                   pop ebp
// 007b1ccc  5b                   pop ebx
// 007b1ccd  64890d00000000       mov dword ptr fs:[0], ecx
// 007b1cd4  83c434               add esp, 0x34
// 007b1cd7  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeBloomMap@ToneMap@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
