// roc 2008-06 00567c10  unit: RBX::Selection  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567c10
//
// 00567c10  6aff                 push -1
// 00567c12  6870f57c00           push 0x7cf570
// 00567c17  64a100000000         mov eax, dword ptr fs:[0]
// 00567c1d  50                   push eax
// 00567c1e  64892500000000       mov dword ptr fs:[0], esp
// 00567c25  83ec24               sub esp, 0x24
// 00567c28  53                   push ebx
// 00567c29  55                   push ebp
// 00567c2a  56                   push esi
// 00567c2b  894c240c             mov dword ptr [esp + 0xc], ecx
// 00567c2f  57                   push edi
// 00567c30  81c154010000         add ecx, 0x154
// 00567c36  e89531f3ff           call 0x49add0
// 00567c3b  8b28                 mov ebp, dword ptr [eax]
// 00567c3d  8b4004               mov eax, dword ptr [eax + 4]
// 00567c40  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00567c44  89442420             mov dword ptr [esp + 0x20], eax
// 00567c48  85c0                 test eax, eax
// 00567c4a  740c                 je 0x567c58
// 00567c4c  83c004               add eax, 4
// 00567c4f  b901000000           mov ecx, 1
// 00567c54  f00fc108             lock xadd dword ptr [eax], ecx
// 00567c58  8b542444             mov edx, dword ptr [esp + 0x44]
// 00567c5c  52                   push edx
// 00567c5d  8d442428             lea eax, [esp + 0x28]
// 00567c61  50                   push eax
// 00567c62  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00567c6a  e8d10d0b00           call 0x618a40
// 00567c6f  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00567c72  83c408               add esp, 8
// 00567c75  8bd8                 mov ebx, eax
// 00567c77  39750c               cmp dword ptr [ebp + 0xc], esi
// 00567c7a  7606                 jbe 0x567c82
// 00567c7c  ff1590288000         call dword ptr [0x802890]
// 00567c82  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00567c85  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00567c88  7606                 jbe 0x567c90
// 00567c8a  ff1590288000         call dword ptr [0x802890]
// 00567c90  8b4d00               mov ecx, dword ptr [ebp]
// 00567c93  894c2414             mov dword ptr [esp + 0x14], ecx
// 00567c97  897c2418             mov dword ptr [esp + 0x18], edi
// 00567c9b  3bfe                 cmp edi, esi
// 00567c9d  740d                 je 0x567cac
// 00567c9f  8b03                 mov eax, dword ptr [ebx]
// 00567ca1  3907                 cmp dword ptr [edi], eax
// 00567ca3  7407                 je 0x567cac
// 00567ca5  83c708               add edi, 8
// 00567ca8  3bfe                 cmp edi, esi
// 00567caa  75f5                 jne 0x567ca1
// 00567cac  8b742428             mov esi, dword ptr [esp + 0x28]
// 00567cb0  85f6                 test esi, esi
// 00567cb2  742a                 je 0x567cde
// 00567cb4  8d5604               lea edx, [esi + 4]
// 00567cb7  83c8ff               or eax, 0xffffffff
// 00567cba  f00fc102             lock xadd dword ptr [edx], eax
// 00567cbe  751e                 jne 0x567cde
// 00567cc0  8b16                 mov edx, dword ptr [esi]
// 00567cc2  8b4204               mov eax, dword ptr [edx + 4]
// 00567cc5  8bce                 mov ecx, esi
// 00567cc7  ffd0                 call eax
// 00567cc9  8d4e08               lea ecx, [esi + 8]
// 00567ccc  83caff               or edx, 0xffffffff
// 00567ccf  f00fc111             lock xadd dword ptr [ecx], edx
// 00567cd3  7509                 jne 0x567cde
// 00567cd5  8b06                 mov eax, dword ptr [esi]
// 00567cd7  8b5008               mov edx, dword ptr [eax + 8]
// 00567cda  8bce                 mov ecx, esi
// 00567cdc  ffd2                 call edx
// 00567cde  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00567ce1  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00567ce7  39750c               cmp dword ptr [ebp + 0xc], esi
// 00567cea  7602                 jbe 0x567cee
// 00567cec  ffd3                 call ebx
// 00567cee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00567cf2  8b4500               mov eax, dword ptr [ebp]
// 00567cf5  85c9                 test ecx, ecx
// 00567cf7  7404                 je 0x567cfd
// 00567cf9  3bc8                 cmp ecx, eax
// 00567cfb  7402                 je 0x567cff
// 00567cfd  ffd3                 call ebx
// 00567cff  3bfe                 cmp edi, esi
// 00567d01  0f84c5000000         je 0x567dcc
// 00567d07  8b442414             mov eax, dword ptr [esp + 0x14]
// 00567d0b  85c0                 test eax, eax
// 00567d0d  754f                 jne 0x567d5e
// 00567d0f  ffd3                 call ebx
// 00567d11  33c0                 xor eax, eax
// 00567d13  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00567d16  7202                 jb 0x567d1a
// 00567d18  ffd3                 call ebx
// 00567d1a  8b7704               mov esi, dword ptr [edi + 4]
// 00567d1d  8b1f                 mov ebx, dword ptr [edi]
// 00567d1f  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00567d23  89742430             mov dword ptr [esp + 0x30], esi
// 00567d27  85f6                 test esi, esi
// 00567d29  740c                 je 0x567d37
// 00567d2b  8d4604               lea eax, [esi + 4]
// 00567d2e  b901000000           mov ecx, 1
// 00567d33  f00fc108             lock xadd dword ptr [eax], ecx
// 00567d37  8b542414             mov edx, dword ptr [esp + 0x14]
// 00567d3b  57                   push edi
// 00567d3c  52                   push edx
// 00567d3d  8d44242c             lea eax, [esp + 0x2c]
// 00567d41  50                   push eax
// 00567d42  8bcd                 mov ecx, ebp
// 00567d44  c644244801           mov byte ptr [esp + 0x48], 1
// 00567d49  e83217edff           call 0x439480
// 00567d4e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00567d52  85ff                 test edi, edi
// 00567d54  740c                 je 0x567d62
// 00567d56  8d8750010000         lea eax, [edi + 0x150]
// 00567d5c  eb06                 jmp 0x567d64
// 00567d5e  8b00                 mov eax, dword ptr [eax]
// 00567d60  ebb1                 jmp 0x567d13
// 00567d62  33c0                 xor eax, eax
// 00567d64  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00567d68  50                   push eax
// 00567d69  81c1a4000000         add ecx, 0xa4
// 00567d6f  e80cdd0700           call 0x5e5a80
// 00567d74  83ec08               sub esp, 8
// 00567d77  8bc4                 mov eax, esp
// 00567d79  8918                 mov dword ptr [eax], ebx
// 00567d7b  8964244c             mov dword ptr [esp + 0x4c], esp
// 00567d7f  897004               mov dword ptr [eax + 4], esi
// 00567d82  85f6                 test esi, esi
// 00567d84  740c                 je 0x567d92
// 00567d86  8d4e04               lea ecx, [esi + 4]
// 00567d89  ba01000000           mov edx, 1
// 00567d8e  f00fc111             lock xadd dword ptr [ecx], edx
// 00567d92  8bcf                 mov ecx, edi
// 00567d94  e8b7efffff           call 0x566d50
// 00567d99  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00567d9e  85f6                 test esi, esi
// 00567da0  742a                 je 0x567dcc
// 00567da2  8d4604               lea eax, [esi + 4]
// 00567da5  83c9ff               or ecx, 0xffffffff
// 00567da8  f00fc108             lock xadd dword ptr [eax], ecx
// 00567dac  751e                 jne 0x567dcc
// 00567dae  8b16                 mov edx, dword ptr [esi]
// 00567db0  8b4204               mov eax, dword ptr [edx + 4]
// 00567db3  8bce                 mov ecx, esi
// 00567db5  ffd0                 call eax
// 00567db7  8d4e08               lea ecx, [esi + 8]
// 00567dba  83caff               or edx, 0xffffffff
// 00567dbd  f00fc111             lock xadd dword ptr [ecx], edx
// 00567dc1  7509                 jne 0x567dcc
// 00567dc3  8b06                 mov eax, dword ptr [esi]
// 00567dc5  8b5008               mov edx, dword ptr [eax + 8]
// 00567dc8  8bce                 mov ecx, esi
// 00567dca  ffd2                 call edx
// 00567dcc  8b742420             mov esi, dword ptr [esp + 0x20]
// 00567dd0  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00567dd8  85f6                 test esi, esi
// 00567dda  742a                 je 0x567e06
// 00567ddc  8d4604               lea eax, [esi + 4]
// 00567ddf  83c9ff               or ecx, 0xffffffff
// 00567de2  f00fc108             lock xadd dword ptr [eax], ecx
// 00567de6  751e                 jne 0x567e06
// 00567de8  8b16                 mov edx, dword ptr [esi]
// 00567dea  8b4204               mov eax, dword ptr [edx + 4]
// 00567ded  8bce                 mov ecx, esi
// 00567def  ffd0                 call eax
// 00567df1  8d4e08               lea ecx, [esi + 8]
// 00567df4  83caff               or edx, 0xffffffff
// 00567df7  f00fc111             lock xadd dword ptr [ecx], edx
// 00567dfb  7509                 jne 0x567e06
// 00567dfd  8b06                 mov eax, dword ptr [esi]
// 00567dff  8b5008               mov edx, dword ptr [eax + 8]
// 00567e02  8bce                 mov ecx, esi
// 00567e04  ffd2                 call edx
// 00567e06  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00567e0a  5f                   pop edi
// 00567e0b  5e                   pop esi
// 00567e0c  5d                   pop ebp
// 00567e0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00567e14  5b                   pop ebx
// 00567e15  83c430               add esp, 0x30
// 00567e18  c20400               ret 4
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?removeFromSelection@Selection@RBX@@QAEXPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
