// roc 2008-06 00444a70  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444a70
//
// 00444a70  6aff                 push -1
// 00444a72  68d00d7c00           push 0x7c0dd0
// 00444a77  64a100000000         mov eax, dword ptr fs:[0]
// 00444a7d  50                   push eax
// 00444a7e  64892500000000       mov dword ptr fs:[0], esp
// 00444a85  83ec18               sub esp, 0x18
// 00444a88  53                   push ebx
// 00444a89  56                   push esi
// 00444a8a  33db                 xor ebx, ebx
// 00444a8c  57                   push edi
// 00444a8d  8bf1                 mov esi, ecx
// 00444a8f  895c240c             mov dword ptr [esp + 0xc], ebx
// 00444a93  895c2410             mov dword ptr [esp + 0x10], ebx
// 00444a97  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00444a9b  8d44240c             lea eax, [esp + 0xc]
// 00444a9f  50                   push eax
// 00444aa0  8bcf                 mov ecx, edi
// 00444aa2  895c2430             mov dword ptr [esp + 0x30], ebx
// 00444aa6  e8357c1300           call 0x57c6e0
// 00444aab  84c0                 test al, al
// 00444aad  0f84eb000000         je 0x444b9e
// 00444ab3  8d4c240c             lea ecx, [esp + 0xc]
// 00444ab7  e814790900           call 0x4dc3d0
// 00444abc  84c0                 test al, al
// 00444abe  7516                 jne 0x444ad6
// 00444ac0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00444ac4  8b11                 mov edx, dword ptr [ecx]
// 00444ac6  8b12                 mov edx, dword ptr [edx]
// 00444ac8  8d44240c             lea eax, [esp + 0xc]
// 00444acc  50                   push eax
// 00444acd  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00444ad1  50                   push eax
// 00444ad2  ffd2                 call edx
// 00444ad4  eb78                 jmp 0x444b4e
// 00444ad6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00444ada  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00444ade  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00444ae2  89442414             mov dword ptr [esp + 0x14], eax
// 00444ae6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00444aea  894c2418             mov dword ptr [esp + 0x18], ecx
// 00444aee  8954241c             mov dword ptr [esp + 0x1c], edx
// 00444af2  89442420             mov dword ptr [esp + 0x20], eax
// 00444af6  3bc3                 cmp eax, ebx
// 00444af8  740c                 je 0x444b06
// 00444afa  83c004               add eax, 4
// 00444afd  b901000000           mov ecx, 1
// 00444b02  f00fc108             lock xadd dword ptr [eax], ecx
// 00444b06  8d542414             lea edx, [esp + 0x14]
// 00444b0a  52                   push edx
// 00444b0b  8d4e04               lea ecx, [esi + 4]
// 00444b0e  c644243001           mov byte ptr [esp + 0x30], 1
// 00444b13  e8d8feffff           call 0x4449f0
// 00444b18  8b742420             mov esi, dword ptr [esp + 0x20]
// 00444b1c  885c242c             mov byte ptr [esp + 0x2c], bl
// 00444b20  3bf3                 cmp esi, ebx
// 00444b22  742a                 je 0x444b4e
// 00444b24  8d4604               lea eax, [esi + 4]
// 00444b27  83c9ff               or ecx, 0xffffffff
// 00444b2a  f00fc108             lock xadd dword ptr [eax], ecx
// 00444b2e  751e                 jne 0x444b4e
// 00444b30  8b16                 mov edx, dword ptr [esi]
// 00444b32  8b4204               mov eax, dword ptr [edx + 4]
// 00444b35  8bce                 mov ecx, esi
// 00444b37  ffd0                 call eax
// 00444b39  8d4e08               lea ecx, [esi + 8]
// 00444b3c  83caff               or edx, 0xffffffff
// 00444b3f  f00fc111             lock xadd dword ptr [ecx], edx
// 00444b43  7509                 jne 0x444b4e
// 00444b45  8b06                 mov eax, dword ptr [esi]
// 00444b47  8b5008               mov edx, dword ptr [eax + 8]
// 00444b4a  8bce                 mov ecx, esi
// 00444b4c  ffd2                 call edx
// 00444b4e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00444b52  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00444b5a  3bf3                 cmp esi, ebx
// 00444b5c  742a                 je 0x444b88
// 00444b5e  8d4604               lea eax, [esi + 4]
// 00444b61  83c9ff               or ecx, 0xffffffff
// 00444b64  f00fc108             lock xadd dword ptr [eax], ecx
// 00444b68  751e                 jne 0x444b88
// 00444b6a  8b16                 mov edx, dword ptr [esi]
// 00444b6c  8b4204               mov eax, dword ptr [edx + 4]
// 00444b6f  8bce                 mov ecx, esi
// 00444b71  ffd0                 call eax
// 00444b73  8d4e08               lea ecx, [esi + 8]
// 00444b76  83caff               or edx, 0xffffffff
// 00444b79  f00fc111             lock xadd dword ptr [ecx], edx
// 00444b7d  7509                 jne 0x444b88
// 00444b7f  8b06                 mov eax, dword ptr [esi]
// 00444b81  8b5008               mov edx, dword ptr [eax + 8]
// 00444b84  8bce                 mov ecx, esi
// 00444b86  ffd2                 call edx
// 00444b88  5f                   pop edi
// 00444b89  5e                   pop esi
// 00444b8a  b001                 mov al, 1
// 00444b8c  5b                   pop ebx
// 00444b8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00444b91  64890d00000000       mov dword ptr fs:[0], ecx
// 00444b98  83c424               add esp, 0x24
// 00444b9b  c20c00               ret 0xc
// 00444b9e  a184539700           mov eax, dword ptr [0x975384]
// 00444ba3  50                   push eax
// 00444ba4  8bcf                 mov ecx, edi
// 00444ba6  e805761300           call 0x57c1b0
// 00444bab  8b742410             mov esi, dword ptr [esp + 0x10]
// 00444baf  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00444bb7  84c0                 test al, al
// 00444bb9  7444                 je 0x444bff
// 00444bbb  3bf3                 cmp esi, ebx
// 00444bbd  742a                 je 0x444be9
// 00444bbf  8d4e04               lea ecx, [esi + 4]
// 00444bc2  83caff               or edx, 0xffffffff
// 00444bc5  f00fc111             lock xadd dword ptr [ecx], edx
// 00444bc9  751e                 jne 0x444be9
// 00444bcb  8b06                 mov eax, dword ptr [esi]
// 00444bcd  8b5004               mov edx, dword ptr [eax + 4]
// 00444bd0  8bce                 mov ecx, esi
// 00444bd2  ffd2                 call edx
// 00444bd4  8d4608               lea eax, [esi + 8]
// 00444bd7  83c9ff               or ecx, 0xffffffff
// 00444bda  f00fc108             lock xadd dword ptr [eax], ecx
// 00444bde  7509                 jne 0x444be9
// 00444be0  8b16                 mov edx, dword ptr [esi]
// 00444be2  8b4208               mov eax, dword ptr [edx + 8]
// 00444be5  8bce                 mov ecx, esi
// 00444be7  ffd0                 call eax
// 00444be9  5f                   pop edi
// 00444bea  5e                   pop esi
// 00444beb  b001                 mov al, 1
// 00444bed  5b                   pop ebx
// 00444bee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00444bf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00444bf9  83c424               add esp, 0x24
// 00444bfc  c20c00               ret 0xc
// 00444bff  3bf3                 cmp esi, ebx
// 00444c01  742a                 je 0x444c2d
// 00444c03  8d4e04               lea ecx, [esi + 4]
// 00444c06  83caff               or edx, 0xffffffff
// 00444c09  f00fc111             lock xadd dword ptr [ecx], edx
// 00444c0d  751e                 jne 0x444c2d
// 00444c0f  8b06                 mov eax, dword ptr [esi]
// 00444c11  8b5004               mov edx, dword ptr [eax + 4]
// 00444c14  8bce                 mov ecx, esi
// 00444c16  ffd2                 call edx
// 00444c18  8d4608               lea eax, [esi + 8]
// 00444c1b  83c9ff               or ecx, 0xffffffff
// 00444c1e  f00fc108             lock xadd dword ptr [eax], ecx
// 00444c22  7509                 jne 0x444c2d
// 00444c24  8b16                 mov edx, dword ptr [esi]
// 00444c26  8b4208               mov eax, dword ptr [edx + 8]
// 00444c29  8bce                 mov ecx, esi
// 00444c2b  ffd0                 call eax
// 00444c2d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00444c31  5f                   pop edi
// 00444c32  5e                   pop esi
// 00444c33  32c0                 xor al, al
// 00444c35  5b                   pop ebx
// 00444c36  64890d00000000       mov dword ptr fs:[0], ecx
// 00444c3d  83c424               add esp, 0x24
// 00444c40  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
