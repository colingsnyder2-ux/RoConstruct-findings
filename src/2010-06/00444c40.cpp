// roc 2010-06 00444c40  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444c40
//
// 00444c40  6aff                 push -1
// 00444c42  6898929800           push 0x989298
// 00444c47  64a100000000         mov eax, dword ptr fs:[0]
// 00444c4d  50                   push eax
// 00444c4e  64892500000000       mov dword ptr fs:[0], esp
// 00444c55  83ec08               sub esp, 8
// 00444c58  56                   push esi
// 00444c59  c744240400000000     mov dword ptr [esp + 4], 0
// 00444c61  c744240800000000     mov dword ptr [esp + 8], 0
// 00444c69  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00444c6d  8d442404             lea eax, [esp + 4]
// 00444c71  50                   push eax
// 00444c72  8bce                 mov ecx, esi
// 00444c74  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00444c7c  e8afb41900           call 0x5e0130
// 00444c81  84c0                 test al, al
// 00444c83  746e                 je 0x444cf3
// 00444c85  8b542420             mov edx, dword ptr [esp + 0x20]
// 00444c89  83ec08               sub esp, 8
// 00444c8c  8bcc                 mov ecx, esp
// 00444c8e  89642424             mov dword ptr [esp + 0x24], esp
// 00444c92  52                   push edx
// 00444c93  51                   push ecx
// 00444c94  e8274b0900           call 0x4d97c0
// 00444c99  83c408               add esp, 8
// 00444c9c  8d4c240c             lea ecx, [esp + 0xc]
// 00444ca0  e87bcc1e00           call 0x631920
// 00444ca5  8b742408             mov esi, dword ptr [esp + 8]
// 00444ca9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00444cb1  85f6                 test esi, esi
// 00444cb3  742a                 je 0x444cdf
// 00444cb5  8d4604               lea eax, [esi + 4]
// 00444cb8  83c9ff               or ecx, 0xffffffff
// 00444cbb  f00fc108             lock xadd dword ptr [eax], ecx
// 00444cbf  751e                 jne 0x444cdf
// 00444cc1  8b16                 mov edx, dword ptr [esi]
// 00444cc3  8b4204               mov eax, dword ptr [edx + 4]
// 00444cc6  8bce                 mov ecx, esi
// 00444cc8  ffd0                 call eax
// 00444cca  8d4e08               lea ecx, [esi + 8]
// 00444ccd  83caff               or edx, 0xffffffff
// 00444cd0  f00fc111             lock xadd dword ptr [ecx], edx
// 00444cd4  7509                 jne 0x444cdf
// 00444cd6  8b06                 mov eax, dword ptr [esi]
// 00444cd8  8b5008               mov edx, dword ptr [eax + 8]
// 00444cdb  8bce                 mov ecx, esi
// 00444cdd  ffd2                 call edx
// 00444cdf  b001                 mov al, 1
// 00444ce1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444ce5  64890d00000000       mov dword ptr fs:[0], ecx
// 00444cec  5e                   pop esi
// 00444ced  83c414               add esp, 0x14
// 00444cf0  c20800               ret 8
// 00444cf3  a19493c100           mov eax, dword ptr [0xc19394]
// 00444cf8  50                   push eax
// 00444cf9  8bce                 mov ecx, esi
// 00444cfb  e810af1900           call 0x5dfc10
// 00444d00  8b742408             mov esi, dword ptr [esp + 8]
// 00444d04  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00444d0c  84c0                 test al, al
// 00444d0e  7442                 je 0x444d52
// 00444d10  85f6                 test esi, esi
// 00444d12  742a                 je 0x444d3e
// 00444d14  8d4e04               lea ecx, [esi + 4]
// 00444d17  83caff               or edx, 0xffffffff
// 00444d1a  f00fc111             lock xadd dword ptr [ecx], edx
// 00444d1e  751e                 jne 0x444d3e
// 00444d20  8b06                 mov eax, dword ptr [esi]
// 00444d22  8b5004               mov edx, dword ptr [eax + 4]
// 00444d25  8bce                 mov ecx, esi
// 00444d27  ffd2                 call edx
// 00444d29  8d4608               lea eax, [esi + 8]
// 00444d2c  83c9ff               or ecx, 0xffffffff
// 00444d2f  f00fc108             lock xadd dword ptr [eax], ecx
// 00444d33  7509                 jne 0x444d3e
// 00444d35  8b16                 mov edx, dword ptr [esi]
// 00444d37  8b4208               mov eax, dword ptr [edx + 8]
// 00444d3a  8bce                 mov ecx, esi
// 00444d3c  ffd0                 call eax
// 00444d3e  b001                 mov al, 1
// 00444d40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444d44  64890d00000000       mov dword ptr fs:[0], ecx
// 00444d4b  5e                   pop esi
// 00444d4c  83c414               add esp, 0x14
// 00444d4f  c20800               ret 8
// 00444d52  85f6                 test esi, esi
// 00444d54  742a                 je 0x444d80
// 00444d56  8d4e04               lea ecx, [esi + 4]
// 00444d59  83caff               or edx, 0xffffffff
// 00444d5c  f00fc111             lock xadd dword ptr [ecx], edx
// 00444d60  751e                 jne 0x444d80
// 00444d62  8b06                 mov eax, dword ptr [esi]
// 00444d64  8b5004               mov edx, dword ptr [eax + 4]
// 00444d67  8bce                 mov ecx, esi
// 00444d69  ffd2                 call edx
// 00444d6b  8d4608               lea eax, [esi + 8]
// 00444d6e  83c9ff               or ecx, 0xffffffff
// 00444d71  f00fc108             lock xadd dword ptr [eax], ecx
// 00444d75  7509                 jne 0x444d80
// 00444d77  8b16                 mov edx, dword ptr [esi]
// 00444d79  8b4208               mov eax, dword ptr [edx + 8]
// 00444d7c  8bce                 mov ecx, esi
// 00444d7e  ffd0                 call eax
// 00444d80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444d84  32c0                 xor al, al
// 00444d86  64890d00000000       mov dword ptr fs:[0], ecx
// 00444d8d  5e                   pop esi
// 00444d8e  83c414               add esp, 0x14
// 00444d91  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
