// roc 2010-06 00444f70  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444f70
//
// 00444f70  6aff                 push -1
// 00444f72  68a0149800           push 0x9814a0
// 00444f77  64a100000000         mov eax, dword ptr fs:[0]
// 00444f7d  50                   push eax
// 00444f7e  64892500000000       mov dword ptr fs:[0], esp
// 00444f85  83ec18               sub esp, 0x18
// 00444f88  53                   push ebx
// 00444f89  56                   push esi
// 00444f8a  33db                 xor ebx, ebx
// 00444f8c  57                   push edi
// 00444f8d  8bf1                 mov esi, ecx
// 00444f8f  895c240c             mov dword ptr [esp + 0xc], ebx
// 00444f93  895c2410             mov dword ptr [esp + 0x10], ebx
// 00444f97  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00444f9b  8d44240c             lea eax, [esp + 0xc]
// 00444f9f  50                   push eax
// 00444fa0  8bcf                 mov ecx, edi
// 00444fa2  895c2430             mov dword ptr [esp + 0x30], ebx
// 00444fa6  e885b11900           call 0x5e0130
// 00444fab  84c0                 test al, al
// 00444fad  0f84eb000000         je 0x44509e
// 00444fb3  8d4c240c             lea ecx, [esp + 0xc]
// 00444fb7  e854c91e00           call 0x631910
// 00444fbc  84c0                 test al, al
// 00444fbe  7516                 jne 0x444fd6
// 00444fc0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00444fc4  8b11                 mov edx, dword ptr [ecx]
// 00444fc6  8b12                 mov edx, dword ptr [edx]
// 00444fc8  8d44240c             lea eax, [esp + 0xc]
// 00444fcc  50                   push eax
// 00444fcd  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00444fd1  50                   push eax
// 00444fd2  ffd2                 call edx
// 00444fd4  eb78                 jmp 0x44504e
// 00444fd6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00444fda  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00444fde  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00444fe2  89442414             mov dword ptr [esp + 0x14], eax
// 00444fe6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00444fea  894c2418             mov dword ptr [esp + 0x18], ecx
// 00444fee  8954241c             mov dword ptr [esp + 0x1c], edx
// 00444ff2  89442420             mov dword ptr [esp + 0x20], eax
// 00444ff6  3bc3                 cmp eax, ebx
// 00444ff8  740c                 je 0x445006
// 00444ffa  83c004               add eax, 4
// 00444ffd  b901000000           mov ecx, 1
// 00445002  f00fc108             lock xadd dword ptr [eax], ecx
// 00445006  8d542414             lea edx, [esp + 0x14]
// 0044500a  52                   push edx
// 0044500b  8d4e04               lea ecx, [esi + 4]
// 0044500e  c644243001           mov byte ptr [esp + 0x30], 1
// 00445013  e828feffff           call 0x444e40
// 00445018  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044501c  885c242c             mov byte ptr [esp + 0x2c], bl
// 00445020  3bf3                 cmp esi, ebx
// 00445022  742a                 je 0x44504e
// 00445024  8d4604               lea eax, [esi + 4]
// 00445027  83c9ff               or ecx, 0xffffffff
// 0044502a  f00fc108             lock xadd dword ptr [eax], ecx
// 0044502e  751e                 jne 0x44504e
// 00445030  8b16                 mov edx, dword ptr [esi]
// 00445032  8b4204               mov eax, dword ptr [edx + 4]
// 00445035  8bce                 mov ecx, esi
// 00445037  ffd0                 call eax
// 00445039  8d4e08               lea ecx, [esi + 8]
// 0044503c  83caff               or edx, 0xffffffff
// 0044503f  f00fc111             lock xadd dword ptr [ecx], edx
// 00445043  7509                 jne 0x44504e
// 00445045  8b06                 mov eax, dword ptr [esi]
// 00445047  8b5008               mov edx, dword ptr [eax + 8]
// 0044504a  8bce                 mov ecx, esi
// 0044504c  ffd2                 call edx
// 0044504e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00445052  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0044505a  3bf3                 cmp esi, ebx
// 0044505c  742a                 je 0x445088
// 0044505e  8d4604               lea eax, [esi + 4]
// 00445061  83c9ff               or ecx, 0xffffffff
// 00445064  f00fc108             lock xadd dword ptr [eax], ecx
// 00445068  751e                 jne 0x445088
// 0044506a  8b16                 mov edx, dword ptr [esi]
// 0044506c  8b4204               mov eax, dword ptr [edx + 4]
// 0044506f  8bce                 mov ecx, esi
// 00445071  ffd0                 call eax
// 00445073  8d4e08               lea ecx, [esi + 8]
// 00445076  83caff               or edx, 0xffffffff
// 00445079  f00fc111             lock xadd dword ptr [ecx], edx
// 0044507d  7509                 jne 0x445088
// 0044507f  8b06                 mov eax, dword ptr [esi]
// 00445081  8b5008               mov edx, dword ptr [eax + 8]
// 00445084  8bce                 mov ecx, esi
// 00445086  ffd2                 call edx
// 00445088  5f                   pop edi
// 00445089  5e                   pop esi
// 0044508a  b001                 mov al, 1
// 0044508c  5b                   pop ebx
// 0044508d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00445091  64890d00000000       mov dword ptr fs:[0], ecx
// 00445098  83c424               add esp, 0x24
// 0044509b  c20c00               ret 0xc
// 0044509e  a19493c100           mov eax, dword ptr [0xc19394]
// 004450a3  50                   push eax
// 004450a4  8bcf                 mov ecx, edi
// 004450a6  e865ab1900           call 0x5dfc10
// 004450ab  8b742410             mov esi, dword ptr [esp + 0x10]
// 004450af  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004450b7  84c0                 test al, al
// 004450b9  7444                 je 0x4450ff
// 004450bb  3bf3                 cmp esi, ebx
// 004450bd  742a                 je 0x4450e9
// 004450bf  8d4e04               lea ecx, [esi + 4]
// 004450c2  83caff               or edx, 0xffffffff
// 004450c5  f00fc111             lock xadd dword ptr [ecx], edx
// 004450c9  751e                 jne 0x4450e9
// 004450cb  8b06                 mov eax, dword ptr [esi]
// 004450cd  8b5004               mov edx, dword ptr [eax + 4]
// 004450d0  8bce                 mov ecx, esi
// 004450d2  ffd2                 call edx
// 004450d4  8d4608               lea eax, [esi + 8]
// 004450d7  83c9ff               or ecx, 0xffffffff
// 004450da  f00fc108             lock xadd dword ptr [eax], ecx
// 004450de  7509                 jne 0x4450e9
// 004450e0  8b16                 mov edx, dword ptr [esi]
// 004450e2  8b4208               mov eax, dword ptr [edx + 8]
// 004450e5  8bce                 mov ecx, esi
// 004450e7  ffd0                 call eax
// 004450e9  5f                   pop edi
// 004450ea  5e                   pop esi
// 004450eb  b001                 mov al, 1
// 004450ed  5b                   pop ebx
// 004450ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004450f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004450f9  83c424               add esp, 0x24
// 004450fc  c20c00               ret 0xc
// 004450ff  3bf3                 cmp esi, ebx
// 00445101  742a                 je 0x44512d
// 00445103  8d4e04               lea ecx, [esi + 4]
// 00445106  83caff               or edx, 0xffffffff
// 00445109  f00fc111             lock xadd dword ptr [ecx], edx
// 0044510d  751e                 jne 0x44512d
// 0044510f  8b06                 mov eax, dword ptr [esi]
// 00445111  8b5004               mov edx, dword ptr [eax + 4]
// 00445114  8bce                 mov ecx, esi
// 00445116  ffd2                 call edx
// 00445118  8d4608               lea eax, [esi + 8]
// 0044511b  83c9ff               or ecx, 0xffffffff
// 0044511e  f00fc108             lock xadd dword ptr [eax], ecx
// 00445122  7509                 jne 0x44512d
// 00445124  8b16                 mov edx, dword ptr [esi]
// 00445126  8b4208               mov eax, dword ptr [edx + 8]
// 00445129  8bce                 mov ecx, esi
// 0044512b  ffd0                 call eax
// 0044512d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00445131  5f                   pop edi
// 00445132  5e                   pop esi
// 00445133  32c0                 xor al, al
// 00445135  5b                   pop ebx
// 00445136  64890d00000000       mov dword ptr fs:[0], ecx
// 0044513d  83c424               add esp, 0x24
// 00445140  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
