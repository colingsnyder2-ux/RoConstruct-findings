// roc 2009-12 00443a30  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00443a30
//
// 00443a30  6aff                 push -1
// 00443a32  6820aa9200           push 0x92aa20
// 00443a37  64a100000000         mov eax, dword ptr fs:[0]
// 00443a3d  50                   push eax
// 00443a3e  64892500000000       mov dword ptr fs:[0], esp
// 00443a45  83ec18               sub esp, 0x18
// 00443a48  53                   push ebx
// 00443a49  56                   push esi
// 00443a4a  33db                 xor ebx, ebx
// 00443a4c  57                   push edi
// 00443a4d  8bf1                 mov esi, ecx
// 00443a4f  895c240c             mov dword ptr [esp + 0xc], ebx
// 00443a53  895c2410             mov dword ptr [esp + 0x10], ebx
// 00443a57  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00443a5b  8d44240c             lea eax, [esp + 0xc]
// 00443a5f  50                   push eax
// 00443a60  8bcf                 mov ecx, edi
// 00443a62  895c2430             mov dword ptr [esp + 0x30], ebx
// 00443a66  e8d5382300           call 0x677340
// 00443a6b  84c0                 test al, al
// 00443a6d  0f84eb000000         je 0x443b5e
// 00443a73  8d4c240c             lea ecx, [esp + 0xc]
// 00443a77  e8f4202800           call 0x6c5b70
// 00443a7c  84c0                 test al, al
// 00443a7e  7516                 jne 0x443a96
// 00443a80  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00443a84  8b11                 mov edx, dword ptr [ecx]
// 00443a86  8b12                 mov edx, dword ptr [edx]
// 00443a88  8d44240c             lea eax, [esp + 0xc]
// 00443a8c  50                   push eax
// 00443a8d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00443a91  50                   push eax
// 00443a92  ffd2                 call edx
// 00443a94  eb78                 jmp 0x443b0e
// 00443a96  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00443a9a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00443a9e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00443aa2  89442414             mov dword ptr [esp + 0x14], eax
// 00443aa6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00443aaa  894c2418             mov dword ptr [esp + 0x18], ecx
// 00443aae  8954241c             mov dword ptr [esp + 0x1c], edx
// 00443ab2  89442420             mov dword ptr [esp + 0x20], eax
// 00443ab6  3bc3                 cmp eax, ebx
// 00443ab8  740c                 je 0x443ac6
// 00443aba  83c004               add eax, 4
// 00443abd  b901000000           mov ecx, 1
// 00443ac2  f00fc108             lock xadd dword ptr [eax], ecx
// 00443ac6  8d542414             lea edx, [esp + 0x14]
// 00443aca  52                   push edx
// 00443acb  8d4e04               lea ecx, [esi + 4]
// 00443ace  c644243001           mov byte ptr [esp + 0x30], 1
// 00443ad3  e828feffff           call 0x443900
// 00443ad8  8b742420             mov esi, dword ptr [esp + 0x20]
// 00443adc  885c242c             mov byte ptr [esp + 0x2c], bl
// 00443ae0  3bf3                 cmp esi, ebx
// 00443ae2  742a                 je 0x443b0e
// 00443ae4  8d4604               lea eax, [esi + 4]
// 00443ae7  83c9ff               or ecx, 0xffffffff
// 00443aea  f00fc108             lock xadd dword ptr [eax], ecx
// 00443aee  751e                 jne 0x443b0e
// 00443af0  8b16                 mov edx, dword ptr [esi]
// 00443af2  8b4204               mov eax, dword ptr [edx + 4]
// 00443af5  8bce                 mov ecx, esi
// 00443af7  ffd0                 call eax
// 00443af9  8d4e08               lea ecx, [esi + 8]
// 00443afc  83caff               or edx, 0xffffffff
// 00443aff  f00fc111             lock xadd dword ptr [ecx], edx
// 00443b03  7509                 jne 0x443b0e
// 00443b05  8b06                 mov eax, dword ptr [esi]
// 00443b07  8b5008               mov edx, dword ptr [eax + 8]
// 00443b0a  8bce                 mov ecx, esi
// 00443b0c  ffd2                 call edx
// 00443b0e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00443b12  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00443b1a  3bf3                 cmp esi, ebx
// 00443b1c  742a                 je 0x443b48
// 00443b1e  8d4604               lea eax, [esi + 4]
// 00443b21  83c9ff               or ecx, 0xffffffff
// 00443b24  f00fc108             lock xadd dword ptr [eax], ecx
// 00443b28  751e                 jne 0x443b48
// 00443b2a  8b16                 mov edx, dword ptr [esi]
// 00443b2c  8b4204               mov eax, dword ptr [edx + 4]
// 00443b2f  8bce                 mov ecx, esi
// 00443b31  ffd0                 call eax
// 00443b33  8d4e08               lea ecx, [esi + 8]
// 00443b36  83caff               or edx, 0xffffffff
// 00443b39  f00fc111             lock xadd dword ptr [ecx], edx
// 00443b3d  7509                 jne 0x443b48
// 00443b3f  8b06                 mov eax, dword ptr [esi]
// 00443b41  8b5008               mov edx, dword ptr [eax + 8]
// 00443b44  8bce                 mov ecx, esi
// 00443b46  ffd2                 call edx
// 00443b48  5f                   pop edi
// 00443b49  5e                   pop esi
// 00443b4a  b001                 mov al, 1
// 00443b4c  5b                   pop ebx
// 00443b4d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00443b51  64890d00000000       mov dword ptr fs:[0], ecx
// 00443b58  83c424               add esp, 0x24
// 00443b5b  c20c00               ret 0xc
// 00443b5e  a1600cb900           mov eax, dword ptr [0xb90c60]
// 00443b63  50                   push eax
// 00443b64  8bcf                 mov ecx, edi
// 00443b66  e825322300           call 0x676d90
// 00443b6b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00443b6f  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00443b77  84c0                 test al, al
// 00443b79  7444                 je 0x443bbf
// 00443b7b  3bf3                 cmp esi, ebx
// 00443b7d  742a                 je 0x443ba9
// 00443b7f  8d4e04               lea ecx, [esi + 4]
// 00443b82  83caff               or edx, 0xffffffff
// 00443b85  f00fc111             lock xadd dword ptr [ecx], edx
// 00443b89  751e                 jne 0x443ba9
// 00443b8b  8b06                 mov eax, dword ptr [esi]
// 00443b8d  8b5004               mov edx, dword ptr [eax + 4]
// 00443b90  8bce                 mov ecx, esi
// 00443b92  ffd2                 call edx
// 00443b94  8d4608               lea eax, [esi + 8]
// 00443b97  83c9ff               or ecx, 0xffffffff
// 00443b9a  f00fc108             lock xadd dword ptr [eax], ecx
// 00443b9e  7509                 jne 0x443ba9
// 00443ba0  8b16                 mov edx, dword ptr [esi]
// 00443ba2  8b4208               mov eax, dword ptr [edx + 8]
// 00443ba5  8bce                 mov ecx, esi
// 00443ba7  ffd0                 call eax
// 00443ba9  5f                   pop edi
// 00443baa  5e                   pop esi
// 00443bab  b001                 mov al, 1
// 00443bad  5b                   pop ebx
// 00443bae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00443bb2  64890d00000000       mov dword ptr fs:[0], ecx
// 00443bb9  83c424               add esp, 0x24
// 00443bbc  c20c00               ret 0xc
// 00443bbf  3bf3                 cmp esi, ebx
// 00443bc1  742a                 je 0x443bed
// 00443bc3  8d4e04               lea ecx, [esi + 4]
// 00443bc6  83caff               or edx, 0xffffffff
// 00443bc9  f00fc111             lock xadd dword ptr [ecx], edx
// 00443bcd  751e                 jne 0x443bed
// 00443bcf  8b06                 mov eax, dword ptr [esi]
// 00443bd1  8b5004               mov edx, dword ptr [eax + 4]
// 00443bd4  8bce                 mov ecx, esi
// 00443bd6  ffd2                 call edx
// 00443bd8  8d4608               lea eax, [esi + 8]
// 00443bdb  83c9ff               or ecx, 0xffffffff
// 00443bde  f00fc108             lock xadd dword ptr [eax], ecx
// 00443be2  7509                 jne 0x443bed
// 00443be4  8b16                 mov edx, dword ptr [esi]
// 00443be6  8b4208               mov eax, dword ptr [edx + 8]
// 00443be9  8bce                 mov ecx, esi
// 00443beb  ffd0                 call eax
// 00443bed  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00443bf1  5f                   pop edi
// 00443bf2  5e                   pop esi
// 00443bf3  32c0                 xor al, al
// 00443bf5  5b                   pop ebx
// 00443bf6  64890d00000000       mov dword ptr fs:[0], ecx
// 00443bfd  83c424               add esp, 0x24
// 00443c00  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
