// roc 2007-08 004ef500  unit: RBX::Render::SceneManager  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef500
//
// 004ef500  6aff                 push -1
// 004ef502  6821d37400           push 0x74d321
// 004ef507  64a100000000         mov eax, dword ptr fs:[0]
// 004ef50d  50                   push eax
// 004ef50e  83ec0c               sub esp, 0xc
// 004ef511  53                   push ebx
// 004ef512  55                   push ebp
// 004ef513  56                   push esi
// 004ef514  57                   push edi
// 004ef515  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ef51a  33c4                 xor eax, esp
// 004ef51c  50                   push eax
// 004ef51d  8d442420             lea eax, [esp + 0x20]
// 004ef521  64a300000000         mov dword ptr fs:[0], eax
// 004ef527  8bf9                 mov edi, ecx
// 004ef529  8b4708               mov eax, dword ptr [edi + 8]
// 004ef52c  8b2f                 mov ebp, dword ptr [edi]
// 004ef52e  03c0                 add eax, eax
// 004ef530  03c0                 add eax, eax
// 004ef532  6a10                 push 0x10
// 004ef534  50                   push eax
// 004ef535  896c2424             mov dword ptr [esp + 0x24], ebp
// 004ef539  e8220b0100           call 0x500060
// 004ef53e  8b4f08               mov ecx, dword ptr [edi + 8]
// 004ef541  8b542438             mov edx, dword ptr [esp + 0x38]
// 004ef545  83c408               add esp, 8
// 004ef548  3bd1                 cmp edx, ecx
// 004ef54a  8907                 mov dword ptr [edi], eax
// 004ef54c  7d02                 jge 0x4ef550
// 004ef54e  8bca                 mov ecx, edx
// 004ef550  8d1c88               lea ebx, [eax + ecx*4]
// 004ef553  8bf0                 mov esi, eax
// 004ef555  3bf3                 cmp esi, ebx
// 004ef557  8bfd                 mov edi, ebp
// 004ef559  7338                 jae 0x4ef593
// 004ef55b  8b2decd27700         mov ebp, dword ptr [0x77d2ec]
// 004ef561  85f6                 test esi, esi
// 004ef563  7414                 je 0x4ef579
// 004ef565  c70600000000         mov dword ptr [esi], 0
// 004ef56b  8b07                 mov eax, dword ptr [edi]
// 004ef56d  85c0                 test eax, eax
// 004ef56f  7408                 je 0x4ef579
// 004ef571  8906                 mov dword ptr [esi], eax
// 004ef573  83c004               add eax, 4
// 004ef576  50                   push eax
// 004ef577  ffd5                 call ebp
// 004ef579  83c604               add esi, 4
// 004ef57c  83c704               add edi, 4
// 004ef57f  3bf3                 cmp esi, ebx
// 004ef581  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004ef589  72d6                 jb 0x4ef561
// 004ef58b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004ef58f  8b542430             mov edx, dword ptr [esp + 0x30]
// 004ef593  8d5c9500             lea ebx, [ebp + edx*4]
// 004ef597  3beb                 cmp ebp, ebx
// 004ef599  8bfd                 mov edi, ebp
// 004ef59b  7359                 jae 0x4ef5f6
// 004ef59d  8d4900               lea ecx, [ecx]
// 004ef5a0  8b07                 mov eax, dword ptr [edi]
// 004ef5a2  85c0                 test eax, eax
// 004ef5a4  7449                 je 0x4ef5ef
// 004ef5a6  83c004               add eax, 4
// 004ef5a9  50                   push eax
// 004ef5aa  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ef5b0  85c0                 test eax, eax
// 004ef5b2  7535                 jne 0x4ef5e9
// 004ef5b4  8b0f                 mov ecx, dword ptr [edi]
// 004ef5b6  8b7108               mov esi, dword ptr [ecx + 8]
// 004ef5b9  85f6                 test esi, esi
// 004ef5bb  741e                 je 0x4ef5db
// 004ef5bd  8d4900               lea ecx, [ecx]
// 004ef5c0  8b0e                 mov ecx, dword ptr [esi]
// 004ef5c2  8b11                 mov edx, dword ptr [ecx]
// 004ef5c4  8b4204               mov eax, dword ptr [edx + 4]
// 004ef5c7  ffd0                 call eax
// 004ef5c9  8bc6                 mov eax, esi
// 004ef5cb  8b7604               mov esi, dword ptr [esi + 4]
// 004ef5ce  50                   push eax
// 004ef5cf  e88e061400           call 0x62fc62
// 004ef5d4  83c404               add esp, 4
// 004ef5d7  85f6                 test esi, esi
// 004ef5d9  75e5                 jne 0x4ef5c0
// 004ef5db  8b0f                 mov ecx, dword ptr [edi]
// 004ef5dd  85c9                 test ecx, ecx
// 004ef5df  7408                 je 0x4ef5e9
// 004ef5e1  8b11                 mov edx, dword ptr [ecx]
// 004ef5e3  8b02                 mov eax, dword ptr [edx]
// 004ef5e5  6a01                 push 1
// 004ef5e7  ffd0                 call eax
// 004ef5e9  c70700000000         mov dword ptr [edi], 0
// 004ef5ef  83c704               add edi, 4
// 004ef5f2  3bfb                 cmp edi, ebx
// 004ef5f4  72aa                 jb 0x4ef5a0
// 004ef5f6  55                   push ebp
// 004ef5f7  e814020100           call 0x4ff810
// 004ef5fc  83c404               add esp, 4
// 004ef5ff  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ef603  64890d00000000       mov dword ptr fs:[0], ecx
// 004ef60a  59                   pop ecx
// 004ef60b  5f                   pop edi
// 004ef60c  5e                   pop esi
// 004ef60d  5d                   pop ebp
// 004ef60e  5b                   pop ebx
// 004ef60f  83c418               add esp, 0x18
// 004ef612  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
