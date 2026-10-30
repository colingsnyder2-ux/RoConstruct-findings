// roc 2009-12 00842b30  unit: CXTPPopupBar  size: 1552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00842b30
//
// 00842b30  6aff                 push -1
// 00842b32  685ad09500           push 0x95d05a
// 00842b37  64a100000000         mov eax, dword ptr fs:[0]
// 00842b3d  50                   push eax
// 00842b3e  83ec50               sub esp, 0x50
// 00842b41  53                   push ebx
// 00842b42  55                   push ebp
// 00842b43  56                   push esi
// 00842b44  57                   push edi
// 00842b45  a10052b600           mov eax, dword ptr [0xb65200]
// 00842b4a  33c4                 xor eax, esp
// 00842b4c  50                   push eax
// 00842b4d  8d442464             lea eax, [esp + 0x64]
// 00842b51  64a300000000         mov dword ptr fs:[0], eax
// 00842b57  8bf9                 mov edi, ecx
// 00842b59  8b442474             mov eax, dword ptr [esp + 0x74]
// 00842b5d  85c0                 test eax, eax
// 00842b5f  740b                 je 0x842b6c
// 00842b61  8b28                 mov ebp, dword ptr [eax]
// 00842b63  8b4004               mov eax, dword ptr [eax + 4]
// 00842b66  89442428             mov dword ptr [esp + 0x28], eax
// 00842b6a  eb1b                 jmp 0x842b87
// 00842b6c  57                   push edi
// 00842b6d  8d4c2458             lea ecx, [esp + 0x58]
// 00842b71  e8fa860000           call 0x84b270
// 00842b76  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00842b79  2b4804               sub ecx, dword ptr [eax + 4]
// 00842b7c  8b5008               mov edx, dword ptr [eax + 8]
// 00842b7f  2b10                 sub edx, dword ptr [eax]
// 00842b81  894c2428             mov dword ptr [esp + 0x28], ecx
// 00842b85  8bea                 mov ebp, edx
// 00842b87  8b359cca9800         mov esi, dword ptr [0x98ca9c]
// 00842b8d  8d8740020000         lea eax, [edi + 0x240]
// 00842b93  50                   push eax
// 00842b94  896c2428             mov dword ptr [esp + 0x28], ebp
// 00842b98  ffd6                 call esi
// 00842b9a  8d8724020000         lea eax, [edi + 0x224]
// 00842ba0  50                   push eax
// 00842ba1  ffd6                 call esi
// 00842ba3  8bcf                 mov ecx, edi
// 00842ba5  e8a626fcff           call 0x805250
// 00842baa  8b17                 mov edx, dword ptr [edi]
// 00842bac  8b92b8010000         mov edx, dword ptr [edx + 0x1b8]
// 00842bb2  8bd8                 mov ebx, eax
// 00842bb4  8d442444             lea eax, [esp + 0x44]
// 00842bb8  50                   push eax
// 00842bb9  8bcf                 mov ecx, edi
// 00842bbb  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00842bbf  ffd2                 call edx
// 00842bc1  8bcf                 mov ecx, edi
// 00842bc3  e8c819fcff           call 0x804590
// 00842bc8  8b10                 mov edx, dword ptr [eax]
// 00842bca  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 00842bd0  6a00                 push 0
// 00842bd2  6a00                 push 0
// 00842bd4  57                   push edi
// 00842bd5  6a00                 push 0
// 00842bd7  8d4c2444             lea ecx, [esp + 0x44]
// 00842bdb  51                   push ecx
// 00842bdc  8bc8                 mov ecx, eax
// 00842bde  ffd2                 call edx
// 00842be0  83bfb001000000       cmp dword ptr [edi + 0x1b0], 0
// 00842be7  8b4004               mov eax, dword ptr [eax + 4]
// 00842bea  8944241c             mov dword ptr [esp + 0x1c], eax
// 00842bee  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00842bf6  7446                 je 0x842c3e
// 00842bf8  8bcf                 mov ecx, edi
// 00842bfa  e89119fcff           call 0x804590
// 00842bff  6a00                 push 0
// 00842c01  6a00                 push 0
// 00842c03  83ec10               sub esp, 0x10
// 00842c06  8bf0                 mov esi, eax
// 00842c08  89a4248c000000       mov dword ptr [esp + 0x8c], esp
// 00842c0f  8bc4                 mov eax, esp
// 00842c11  6a00                 push 0
// 00842c13  50                   push eax
// 00842c14  ff1564cc9800         call dword ptr [0x98cc64]
// 00842c1a  8b16                 mov edx, dword ptr [esi]
// 00842c1c  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 00842c22  6a00                 push 0
// 00842c24  8d442448             lea eax, [esp + 0x48]
// 00842c28  50                   push eax
// 00842c29  8bce                 mov ecx, esi
// 00842c2b  ffd2                 call edx
// 00842c2d  8b08                 mov ecx, dword ptr [eax]
// 00842c2f  8b4004               mov eax, dword ptr [eax + 4]
// 00842c32  01442448             add dword ptr [esp + 0x48], eax
// 00842c36  894c2434             mov dword ptr [esp + 0x34], ecx
// 00842c3a  89442438             mov dword ptr [esp + 0x38], eax
// 00842c3e  83bfd401000000       cmp dword ptr [edi + 0x1d4], 0
// 00842c45  7410                 je 0x842c57
// 00842c47  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00842c4d  2b97c8010000         sub edx, dword ptr [edi + 0x1c8]
// 00842c53  01542450             add dword ptr [esp + 0x50], edx
// 00842c57  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00842c5d  68be230000           push 0x23be
// 00842c62  e899460000           call 0x847300
// 00842c67  83bfa401000000       cmp dword ptr [edi + 0x1a4], 0
// 00842c6e  8bf0                 mov esi, eax
// 00842c70  89742414             mov dword ptr [esp + 0x14], esi
// 00842c74  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00842c7c  0f8489000000         je 0x842d0b
// 00842c82  8bcf                 mov ecx, edi
// 00842c84  e80719fcff           call 0x804590
// 00842c89  8b10                 mov edx, dword ptr [eax]
// 00842c8b  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 00842c91  6a00                 push 0
// 00842c93  6a00                 push 0
// 00842c95  57                   push edi
// 00842c96  6a00                 push 0
// 00842c98  6a01                 push 1
// 00842c9a  6a00                 push 0
// 00842c9c  8d4c2454             lea ecx, [esp + 0x54]
// 00842ca0  51                   push ecx
// 00842ca1  8bc8                 mov ecx, eax
// 00842ca3  ffd2                 call edx
// 00842ca5  8b08                 mov ecx, dword ptr [eax]
// 00842ca7  8b4004               mov eax, dword ptr [eax + 4]
// 00842caa  01442450             add dword ptr [esp + 0x50], eax
// 00842cae  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00842cb2  89442430             mov dword ptr [esp + 0x30], eax
// 00842cb6  85f6                 test esi, esi
// 00842cb8  7555                 jne 0x842d0f
// 00842cba  6874010000           push 0x174
// 00842cbf  e89c0bfbff           call 0x7f3860
// 00842cc4  83c404               add esp, 4
// 00842cc7  89442474             mov dword ptr [esp + 0x74], eax
// 00842ccb  8974246c             mov dword ptr [esp + 0x6c], esi
// 00842ccf  85c0                 test eax, eax
// 00842cd1  7409                 je 0x842cdc
// 00842cd3  8bc8                 mov ecx, eax
// 00842cd5  e836ecffff           call 0x841910
// 00842cda  eb02                 jmp 0x842cde
// 00842cdc  33c0                 xor eax, eax
// 00842cde  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00842ce4  6a01                 push 1
// 00842ce6  6aff                 push -1
// 00842ce8  6856fd9900           push 0x99fd56
// 00842ced  68be230000           push 0x23be
// 00842cf2  50                   push eax
// 00842cf3  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00842cfe  e8ed520000           call 0x847ff0
// 00842d03  89442414             mov dword ptr [esp + 0x14], eax
// 00842d07  8bf0                 mov esi, eax
// 00842d09  eb04                 jmp 0x842d0f
// 00842d0b  85f6                 test esi, esi
// 00842d0d  740e                 je 0x842d1d
// 00842d0f  8b16                 mov edx, dword ptr [esi]
// 00842d11  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00842d17  6a01                 push 1
// 00842d19  8bce                 mov ecx, esi
// 00842d1b  ffd0                 call eax
// 00842d1d  837c247800           cmp dword ptr [esp + 0x78], 0
// 00842d22  0f8585020000         jne 0x842fad
// 00842d28  83bf1c02000001       cmp dword ptr [edi + 0x21c], 1
// 00842d2f  750a                 jne 0x842d3b
// 00842d31  c7871c02000000000000 mov dword ptr [edi + 0x21c], 0
// 00842d3b  83bf1c02000000       cmp dword ptr [edi + 0x21c], 0
// 00842d42  8b442448             mov eax, dword ptr [esp + 0x48]
// 00842d46  8bd8                 mov ebx, eax
// 00842d48  741e                 je 0x842d68
// 00842d4a  8b542444             mov edx, dword ptr [esp + 0x44]
// 00842d4e  8d5810               lea ebx, [eax + 0x10]
// 00842d51  53                   push ebx
// 00842d52  8bcd                 mov ecx, ebp
// 00842d54  2b4c2450             sub ecx, dword ptr [esp + 0x50]
// 00842d58  51                   push ecx
// 00842d59  50                   push eax
// 00842d5a  52                   push edx
// 00842d5b  8d8740020000         lea eax, [edi + 0x240]
// 00842d61  50                   push eax
// 00842d62  ff1538ca9800         call dword ptr [0x98ca38]
// 00842d68  8bb71c020000         mov esi, dword ptr [edi + 0x21c]
// 00842d6e  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00842d72  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00842d7a  89742474             mov dword ptr [esp + 0x74], esi
// 00842d7e  0f8de4000000         jge 0x842e68
// 00842d84  eb04                 jmp 0x842d8a
// 00842d86  8b742474             mov esi, dword ptr [esp + 0x74]
// 00842d8a  56                   push esi
// 00842d8b  8bcf                 mov ecx, edi
// 00842d8d  e8ce24fcff           call 0x805260
// 00842d92  8bf0                 mov esi, eax
// 00842d94  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00842d9a  8b06                 mov eax, dword ptr [esi]
// 00842d9c  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00842da2  83e1f7               and ecx, 0xfffffff7
// 00842da5  51                   push ecx
// 00842da6  8bce                 mov ecx, esi
// 00842da8  ffd2                 call edx
// 00842daa  8b06                 mov eax, dword ptr [esi]
// 00842dac  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00842db2  6a00                 push 0
// 00842db4  8bce                 mov ecx, esi
// 00842db6  ffd2                 call edx
// 00842db8  85c0                 test eax, eax
// 00842dba  0f8491000000         je 0x842e51
// 00842dc0  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00842dc6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00842dcc  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00842dd2  89442454             mov dword ptr [esp + 0x54], eax
// 00842dd6  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00842ddc  2bc1                 sub eax, ecx
// 00842dde  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00842de5  8954245c             mov dword ptr [esp + 0x5c], edx
// 00842de9  7404                 je 0x842def
// 00842deb  035c241c             add ebx, dword ptr [esp + 0x1c]
// 00842def  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00842df3  8b542450             mov edx, dword ptr [esp + 0x50]
// 00842df7  2bc8                 sub ecx, eax
// 00842df9  2bcb                 sub ecx, ebx
// 00842dfb  83c210               add edx, 0x10
// 00842dfe  3bca                 cmp ecx, edx
// 00842e00  7d13                 jge 0x842e15
// 00842e02  837c247800           cmp dword ptr [esp + 0x78], 0
// 00842e07  745b                 je 0x842e64
// 00842e09  8b442428             mov eax, dword ptr [esp + 0x28]
// 00842e0d  2b442450             sub eax, dword ptr [esp + 0x50]
// 00842e11  2b442448             sub eax, dword ptr [esp + 0x48]
// 00842e15  8b542444             mov edx, dword ptr [esp + 0x44]
// 00842e19  03c3                 add eax, ebx
// 00842e1b  89442420             mov dword ptr [esp + 0x20], eax
// 00842e1f  83ec10               sub esp, 0x10
// 00842e22  8bc4                 mov eax, esp
// 00842e24  8910                 mov dword ptr [eax], edx
// 00842e26  8bcd                 mov ecx, ebp
// 00842e28  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00842e2c  8b2e                 mov ebp, dword ptr [esi]
// 00842e2e  895804               mov dword ptr [eax + 4], ebx
// 00842e31  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00842e35  894808               mov dword ptr [eax + 8], ecx
// 00842e38  89580c               mov dword ptr [eax + 0xc], ebx
// 00842e3b  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 00842e3e  8bce                 mov ecx, esi
// 00842e40  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00842e4b  ffd0                 call eax
// 00842e4d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00842e51  8b442474             mov eax, dword ptr [esp + 0x74]
// 00842e55  40                   inc eax
// 00842e56  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00842e5a  89442474             mov dword ptr [esp + 0x74], eax
// 00842e5e  0f8c22ffffff         jl 0x842d86
// 00842e64  8b742474             mov esi, dword ptr [esp + 0x74]
// 00842e68  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00842e6c  3bf3                 cmp esi, ebx
// 00842e6e  7d27                 jge 0x842e97
// 00842e70  56                   push esi
// 00842e71  8bcf                 mov ecx, edi
// 00842e73  e8e823fcff           call 0x805260
// 00842e78  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 00842e7e  8b10                 mov edx, dword ptr [eax]
// 00842e80  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00842e86  83c908               or ecx, 8
// 00842e89  51                   push ecx
// 00842e8a  8bc8                 mov ecx, eax
// 00842e8c  ffd2                 call edx
// 00842e8e  46                   inc esi
// 00842e8f  3bf3                 cmp esi, ebx
// 00842e91  7cdd                 jl 0x842e70
// 00842e93  8b742474             mov esi, dword ptr [esp + 0x74]
// 00842e97  89b720020000         mov dword ptr [edi + 0x220], esi
// 00842e9d  3bf3                 cmp esi, ebx
// 00842e9f  742c                 je 0x842ecd
// 00842ea1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00842ea5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00842ea9  8bd0                 mov edx, eax
// 00842eab  2bd1                 sub edx, ecx
// 00842ead  52                   push edx
// 00842eae  8bd5                 mov edx, ebp
// 00842eb0  2b542450             sub edx, dword ptr [esp + 0x50]
// 00842eb4  2bc1                 sub eax, ecx
// 00842eb6  52                   push edx
// 00842eb7  83e810               sub eax, 0x10
// 00842eba  50                   push eax
// 00842ebb  8b442450             mov eax, dword ptr [esp + 0x50]
// 00842ebf  50                   push eax
// 00842ec0  8d8724020000         lea eax, [edi + 0x224]
// 00842ec6  50                   push eax
// 00842ec7  ff1538ca9800         call dword ptr [0x98ca38]
// 00842ecd  8b742414             mov esi, dword ptr [esp + 0x14]
// 00842ed1  83bfa401000000       cmp dword ptr [edi + 0x1a4], 0
// 00842ed8  7449                 je 0x842f23
// 00842eda  8b06                 mov eax, dword ptr [esi]
// 00842edc  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00842ee2  6a00                 push 0
// 00842ee4  8bce                 mov ecx, esi
// 00842ee6  ffd2                 call edx
// 00842ee8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00842eec  2b442450             sub eax, dword ptr [esp + 0x50]
// 00842ef0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00842ef4  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00842ef8  8b36                 mov esi, dword ptr [esi]
// 00842efa  03c8                 add ecx, eax
// 00842efc  894c2460             mov dword ptr [esp + 0x60], ecx
// 00842f00  83ec10               sub esp, 0x10
// 00842f03  8bcc                 mov ecx, esp
// 00842f05  8919                 mov dword ptr [ecx], ebx
// 00842f07  8bd5                 mov edx, ebp
// 00842f09  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 00842f0d  894104               mov dword ptr [ecx + 4], eax
// 00842f10  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00842f13  895108               mov dword ptr [ecx + 8], edx
// 00842f16  8b542470             mov edx, dword ptr [esp + 0x70]
// 00842f1a  89510c               mov dword ptr [ecx + 0xc], edx
// 00842f1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00842f21  ffd0                 call eax
// 00842f23  8b442448             mov eax, dword ptr [esp + 0x48]
// 00842f27  8b542444             mov edx, dword ptr [esp + 0x44]
// 00842f2b  8b1d38ca9800         mov ebx, dword ptr [0x98ca38]
// 00842f31  8b742428             mov esi, dword ptr [esp + 0x28]
// 00842f35  50                   push eax
// 00842f36  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00842f3a  8bcd                 mov ecx, ebp
// 00842f3c  2b4c2450             sub ecx, dword ptr [esp + 0x50]
// 00842f40  51                   push ecx
// 00842f41  50                   push eax
// 00842f42  52                   push edx
// 00842f43  8d87b4010000         lea eax, [edi + 0x1b4]
// 00842f49  50                   push eax
// 00842f4a  ffd3                 call ebx
// 00842f4c  83bfd401000000       cmp dword ptr [edi + 0x1d4], 0
// 00842f53  742b                 je 0x842f80
// 00842f55  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00842f5b  2b97c8010000         sub edx, dword ptr [edi + 0x1c8]
// 00842f61  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00842f65  2b6c244c             sub ebp, dword ptr [esp + 0x4c]
// 00842f69  8d87c4010000         lea eax, [edi + 0x1c4]
// 00842f6f  2bd1                 sub edx, ecx
// 00842f71  03d6                 add edx, esi
// 00842f73  52                   push edx
// 00842f74  55                   push ebp
// 00842f75  2bf1                 sub esi, ecx
// 00842f77  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00842f7b  56                   push esi
// 00842f7c  51                   push ecx
// 00842f7d  50                   push eax
// 00842f7e  ffd3                 call ebx
// 00842f80  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00842f85  7410                 je 0x842f97
// 00842f87  8b17                 mov edx, dword ptr [edi]
// 00842f89  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00842f8f  6a01                 push 1
// 00842f91  6a00                 push 0
// 00842f93  8bcf                 mov ecx, edi
// 00842f95  ffd0                 call eax
// 00842f97  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00842f9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00842fa2  59                   pop ecx
// 00842fa3  5f                   pop edi
// 00842fa4  5e                   pop esi
// 00842fa5  5d                   pop ebp
// 00842fa6  5b                   pop ebx
// 00842fa7  83c45c               add esp, 0x5c
// 00842faa  c20c00               ret 0xc
// 00842fad  8d4bff               lea ecx, [ebx - 1]
// 00842fb0  398f20020000         cmp dword ptr [edi + 0x220], ecx
// 00842fb6  7506                 jne 0x842fbe
// 00842fb8  899f20020000         mov dword ptr [edi + 0x220], ebx
// 00842fbe  8b442428             mov eax, dword ptr [esp + 0x28]
// 00842fc2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00842fc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00842fca  2bc1                 sub eax, ecx
// 00842fcc  8bd8                 mov ebx, eax
// 00842fce  895c2478             mov dword ptr [esp + 0x78], ebx
// 00842fd2  399720020000         cmp dword ptr [edi + 0x220], edx
// 00842fd8  742e                 je 0x843008
// 00842fda  8b542428             mov edx, dword ptr [esp + 0x28]
// 00842fde  50                   push eax
// 00842fdf  8bc5                 mov eax, ebp
// 00842fe1  2b442450             sub eax, dword ptr [esp + 0x50]
// 00842fe5  2bd1                 sub edx, ecx
// 00842fe7  50                   push eax
// 00842fe8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00842fec  83ea10               sub edx, 0x10
// 00842fef  52                   push edx
// 00842ff0  50                   push eax
// 00842ff1  8d8724020000         lea eax, [edi + 0x224]
// 00842ff7  83eb10               sub ebx, 0x10
// 00842ffa  50                   push eax
// 00842ffb  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 00843002  ff1538ca9800         call dword ptr [0x98ca38]
// 00843008  8b8720020000         mov eax, dword ptr [edi + 0x220]
// 0084300e  83e801               sub eax, 1
// 00843011  89442474             mov dword ptr [esp + 0x74], eax
// 00843015  0f88ba000000         js 0x8430d5
// 0084301b  eb07                 jmp 0x843024
// 0084301d  8d4900               lea ecx, [ecx]
// 00843020  8b442474             mov eax, dword ptr [esp + 0x74]
// 00843024  50                   push eax
// 00843025  8bcf                 mov ecx, edi
// 00843027  e83422fcff           call 0x805260
// 0084302c  8bf0                 mov esi, eax
// 0084302e  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00843034  8b16                 mov edx, dword ptr [esi]
// 00843036  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0084303c  83e0f7               and eax, 0xfffffff7
// 0084303f  50                   push eax
// 00843040  8bce                 mov ecx, esi
// 00843042  ffd2                 call edx
// 00843044  8b06                 mov eax, dword ptr [esi]
// 00843046  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0084304c  6a00                 push 0
// 0084304e  8bce                 mov ecx, esi
// 00843050  ffd2                 call edx
// 00843052  85c0                 test eax, eax
// 00843054  746c                 je 0x8430c2
// 00843056  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0084305c  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00843062  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00843068  89442454             mov dword ptr [esp + 0x54], eax
// 0084306c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00843072  2bc1                 sub eax, ecx
// 00843074  2bd8                 sub ebx, eax
// 00843076  83fb10               cmp ebx, 0x10
// 00843079  8954245c             mov dword ptr [esp + 0x5c], edx
// 0084307d  7c4e                 jl 0x8430cd
// 0084307f  8b542444             mov edx, dword ptr [esp + 0x44]
// 00843083  83ec10               sub esp, 0x10
// 00843086  8bc4                 mov eax, esp
// 00843088  8bcd                 mov ecx, ebp
// 0084308a  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 0084308e  8b2e                 mov ebp, dword ptr [esi]
// 00843090  8910                 mov dword ptr [eax], edx
// 00843092  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00843095  895804               mov dword ptr [eax + 4], ebx
// 00843098  894808               mov dword ptr [eax + 8], ecx
// 0084309b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008430a2  89480c               mov dword ptr [eax + 0xc], ecx
// 008430a5  8bce                 mov ecx, esi
// 008430a7  ffd2                 call edx
// 008430a9  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008430b0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008430b4  895c2478             mov dword ptr [esp + 0x78], ebx
// 008430b8  7408                 je 0x8430c2
// 008430ba  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 008430be  895c2478             mov dword ptr [esp + 0x78], ebx
// 008430c2  836c247401           sub dword ptr [esp + 0x74], 1
// 008430c7  0f8953ffffff         jns 0x843020
// 008430cd  8b742414             mov esi, dword ptr [esp + 0x14]
// 008430d1  8b442474             mov eax, dword ptr [esp + 0x74]
// 008430d5  8bd8                 mov ebx, eax
// 008430d7  85c0                 test eax, eax
// 008430d9  7c2c                 jl 0x843107
// 008430db  eb03                 jmp 0x8430e0
// 008430dd  8d4900               lea ecx, [ecx]
// 008430e0  53                   push ebx
// 008430e1  8bcf                 mov ecx, edi
// 008430e3  e87821fcff           call 0x805260
// 008430e8  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 008430ee  8b10                 mov edx, dword ptr [eax]
// 008430f0  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008430f6  83c908               or ecx, 8
// 008430f9  51                   push ecx
// 008430fa  8bc8                 mov ecx, eax
// 008430fc  ffd2                 call edx
// 008430fe  83eb01               sub ebx, 1
// 00843101  79dd                 jns 0x8430e0
// 00843103  8b442474             mov eax, dword ptr [esp + 0x74]
// 00843107  8d4801               lea ecx, [eax + 1]
// 0084310a  898f1c020000         mov dword ptr [edi + 0x21c], ecx
// 00843110  83f8ff               cmp eax, -1
// 00843113  0f84b8fdffff         je 0x842ed1
// 00843119  8b442448             mov eax, dword ptr [esp + 0x48]
// 0084311d  8d5010               lea edx, [eax + 0x10]
// 00843120  52                   push edx
// 00843121  8b542448             mov edx, dword ptr [esp + 0x48]
// 00843125  8bcd                 mov ecx, ebp
// 00843127  2b4c2450             sub ecx, dword ptr [esp + 0x50]
// 0084312b  51                   push ecx
// 0084312c  50                   push eax
// 0084312d  52                   push edx
// 0084312e  8d8740020000         lea eax, [edi + 0x240]
// 00843134  50                   push eax
// 00843135  ff1538ca9800         call dword ptr [0x98ca38]
// 0084313b  e991fdffff           jmp 0x842ed1
// copied from an identical function in another client (function ?AdjustScrolling@CXTPPopupBar@@AAEXPAUtagSIZE@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp