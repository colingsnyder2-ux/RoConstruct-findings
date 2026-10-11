// roc 2007-08 00569b20  unit: RBX::ModelInstance  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569b20
//
// 00569b20  6aff                 push -1
// 00569b22  68b1827500           push 0x7582b1
// 00569b27  64a100000000         mov eax, dword ptr fs:[0]
// 00569b2d  50                   push eax
// 00569b2e  64892500000000       mov dword ptr fs:[0], esp
// 00569b35  83ec24               sub esp, 0x24
// 00569b38  55                   push ebp
// 00569b39  56                   push esi
// 00569b3a  8bf1                 mov esi, ecx
// 00569b3c  57                   push edi
// 00569b3d  8d4c2414             lea ecx, [esp + 0x14]
// 00569b41  ff15a4e67700         call dword ptr [0x77e6a4]
// 00569b47  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00569b4b  8d442414             lea eax, [esp + 0x14]
// 00569b4f  50                   push eax
// 00569b50  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00569b58  e8b337ffff           call 0x55d310
// 00569b5d  8d4c2414             lea ecx, [esp + 0x14]
// 00569b61  51                   push ecx
// 00569b62  8d542410             lea edx, [esp + 0x10]
// 00569b66  83c614               add esi, 0x14
// 00569b69  52                   push edx
// 00569b6a  8bce                 mov ecx, esi
// 00569b6c  e83fffffff           call 0x569ab0
// 00569b71  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00569b75  85ff                 test edi, edi
// 00569b77  8b6e04               mov ebp, dword ptr [esi + 4]
// 00569b7a  7404                 je 0x569b80
// 00569b7c  3bfe                 cmp edi, esi
// 00569b7e  7406                 je 0x569b86
// 00569b80  ff15d8e67700         call dword ptr [0x77e6d8]
// 00569b86  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569b8a  3bf5                 cmp esi, ebp
// 00569b8c  7450                 je 0x569bde
// 00569b8e  85ff                 test edi, edi
// 00569b90  7506                 jne 0x569b98
// 00569b92  ff15d8e67700         call dword ptr [0x77e6d8]
// 00569b98  3b7704               cmp esi, dword ptr [edi + 4]
// 00569b9b  7506                 jne 0x569ba3
// 00569b9d  ff15d8e67700         call dword ptr [0x77e6d8]
// 00569ba3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00569ba7  8b11                 mov edx, dword ptr [ecx]
// 00569ba9  8b12                 mov edx, dword ptr [edx]
// 00569bab  8d4628               lea eax, [esi + 0x28]
// 00569bae  50                   push eax
// 00569baf  8b442448             mov eax, dword ptr [esp + 0x48]
// 00569bb3  50                   push eax
// 00569bb4  ffd2                 call edx
// 00569bb6  8d4c2414             lea ecx, [esp + 0x14]
// 00569bba  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00569bc2  ff15ace67700         call dword ptr [0x77e6ac]
// 00569bc8  5f                   pop edi
// 00569bc9  5e                   pop esi
// 00569bca  b001                 mov al, 1
// 00569bcc  5d                   pop ebp
// 00569bcd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00569bd1  64890d00000000       mov dword ptr fs:[0], ecx
// 00569bd8  83c430               add esp, 0x30
// 00569bdb  c20c00               ret 0xc
// 00569bde  6a00                 push 0
// 00569be0  8d4c2410             lea ecx, [esp + 0x10]
// 00569be4  e8473b0200           call 0x58d730
// 00569be9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00569bed  8b11                 mov edx, dword ptr [ecx]
// 00569bef  8b12                 mov edx, dword ptr [edx]
// 00569bf1  50                   push eax
// 00569bf2  8b442448             mov eax, dword ptr [esp + 0x48]
// 00569bf6  50                   push eax
// 00569bf7  c644244001           mov byte ptr [esp + 0x40], 1
// 00569bfc  ffd2                 call edx
// 00569bfe  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569c02  85f6                 test esi, esi
// 00569c04  c644243800           mov byte ptr [esp + 0x38], 0
// 00569c09  742a                 je 0x569c35
// 00569c0b  8d4604               lea eax, [esi + 4]
// 00569c0e  83c9ff               or ecx, 0xffffffff
// 00569c11  f00fc108             lock xadd dword ptr [eax], ecx
// 00569c15  751e                 jne 0x569c35
// 00569c17  8b16                 mov edx, dword ptr [esi]
// 00569c19  8b4204               mov eax, dword ptr [edx + 4]
// 00569c1c  8bce                 mov ecx, esi
// 00569c1e  ffd0                 call eax
// 00569c20  8d4e08               lea ecx, [esi + 8]
// 00569c23  83caff               or edx, 0xffffffff
// 00569c26  f00fc111             lock xadd dword ptr [ecx], edx
// 00569c2a  7509                 jne 0x569c35
// 00569c2c  8b06                 mov eax, dword ptr [esi]
// 00569c2e  8b5008               mov edx, dword ptr [eax + 8]
// 00569c31  8bce                 mov ecx, esi
// 00569c33  ffd2                 call edx
// 00569c35  8d4c2414             lea ecx, [esp + 0x14]
// 00569c39  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00569c41  ff15ace67700         call dword ptr [0x77e6ac]
// 00569c47  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00569c4b  5f                   pop edi
// 00569c4c  5e                   pop esi
// 00569c4d  32c0                 xor al, al
// 00569c4f  5d                   pop ebp
// 00569c50  64890d00000000       mov dword ptr fs:[0], ecx
// 00569c57  83c430               add esp, 0x30
// 00569c5a  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveIDREF@ArchiveBinder@@QAE_NUIDREFBinding@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
