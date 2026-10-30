// roc 2009-12 00885be0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885be0
//
// 00885be0  55                   push ebp
// 00885be1  8bec                 mov ebp, esp
// 00885be3  83e4f8               and esp, 0xfffffff8
// 00885be6  6aff                 push -1
// 00885be8  68000b9600           push 0x960b00
// 00885bed  64a100000000         mov eax, dword ptr fs:[0]
// 00885bf3  50                   push eax
// 00885bf4  83ec50               sub esp, 0x50
// 00885bf7  53                   push ebx
// 00885bf8  56                   push esi
// 00885bf9  57                   push edi
// 00885bfa  a10052b600           mov eax, dword ptr [0xb65200]
// 00885bff  33c4                 xor eax, esp
// 00885c01  50                   push eax
// 00885c02  8d442460             lea eax, [esp + 0x60]
// 00885c06  64a300000000         mov dword ptr fs:[0], eax
// 00885c0c  8bd9                 mov ebx, ecx
// 00885c0e  8db32c010000         lea esi, [ebx + 0x12c]
// 00885c14  8bce                 mov ecx, esi
// 00885c16  e8a55ffeff           call 0x86bbc0
// 00885c1b  85c0                 test eax, eax
// 00885c1d  744e                 je 0x885c6d
// 00885c1f  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00885c22  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00885c25  8d48ee               lea ecx, [eax - 0x12]
// 00885c28  89442424             mov dword ptr [esp + 0x24], eax
// 00885c2c  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00885c2f  89442428             mov dword ptr [esp + 0x28], eax
// 00885c33  8b4508               mov eax, dword ptr [ebp + 8]
// 00885c36  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00885c3a  89542420             mov dword ptr [esp + 0x20], edx
// 00885c3e  85c0                 test eax, eax
// 00885c40  7403                 je 0x885c45
// 00885c42  8b4004               mov eax, dword ptr [eax + 4]
// 00885c45  6a00                 push 0
// 00885c47  8d4c2420             lea ecx, [esp + 0x20]
// 00885c4b  51                   push ecx
// 00885c4c  6a00                 push 0
// 00885c4e  6a03                 push 3
// 00885c50  50                   push eax
// 00885c51  8bce                 mov ecx, esi
// 00885c53  e8e85bfeff           call 0x86b840
// 00885c58  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00885c5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00885c63  59                   pop ecx
// 00885c64  5f                   pop edi
// 00885c65  5e                   pop esi
// 00885c66  5b                   pop ebx
// 00885c67  8be5                 mov esp, ebp
// 00885c69  5d                   pop ebp
// 00885c6a  c21400               ret 0x14
// 00885c6d  8b7d08               mov edi, dword ptr [ebp + 8]
// 00885c70  85ff                 test edi, edi
// 00885c72  7504                 jne 0x885c78
// 00885c74  33f6                 xor esi, esi
// 00885c76  eb03                 jmp 0x885c7b
// 00885c78  8b7704               mov esi, dword ptr [edi + 4]
// 00885c7b  6a10                 push 0x10
// 00885c7d  8bcb                 mov ecx, ebx
// 00885c7f  e8bc79f7ff           call 0x7fd640
// 00885c84  50                   push eax
// 00885c85  56                   push esi
// 00885c86  8d4c2450             lea ecx, [esp + 0x50]
// 00885c8a  e8715afcff           call 0x84b700
// 00885c8f  33f6                 xor esi, esi
// 00885c91  89742468             mov dword ptr [esp + 0x68], esi
// 00885c95  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00885c98  2b5510               sub edx, dword ptr [ebp + 0x10]
// 00885c9b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00885c9e  2bc6                 sub eax, esi
// 00885ca0  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00885ca3  4a                   dec edx
// 00885ca4  52                   push edx
// 00885ca5  50                   push eax
// 00885ca6  8d4c241c             lea ecx, [esp + 0x1c]
// 00885caa  51                   push ecx
// 00885cab  8bcf                 mov ecx, edi
// 00885cad  e890eaf6ff           call 0x7f4742
// 00885cb2  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00885cb5  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00885cb8  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00885cbb  2bd6                 sub edx, esi
// 00885cbd  2b5510               sub edx, dword ptr [ebp + 0x10]
// 00885cc0  8bcf                 mov ecx, edi
// 00885cc2  4a                   dec edx
// 00885cc3  52                   push edx
// 00885cc4  50                   push eax
// 00885cc5  e872eaf6ff           call 0x7f473c
// 00885cca  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00885ccd  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00885cd0  2b4d10               sub ecx, dword ptr [ebp + 0x10]
// 00885cd3  2bd6                 sub edx, esi
// 00885cd5  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00885cd8  49                   dec ecx
// 00885cd9  51                   push ecx
// 00885cda  4a                   dec edx
// 00885cdb  52                   push edx
// 00885cdc  8d442424             lea eax, [esp + 0x24]
// 00885ce0  50                   push eax
// 00885ce1  8bcf                 mov ecx, edi
// 00885ce3  e85aeaf6ff           call 0x7f4742
// 00885ce8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00885ceb  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00885cee  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00885cf1  2bce                 sub ecx, esi
// 00885cf3  2b4d10               sub ecx, dword ptr [ebp + 0x10]
// 00885cf6  83e902               sub ecx, 2
// 00885cf9  51                   push ecx
// 00885cfa  52                   push edx
// 00885cfb  8bcf                 mov ecx, edi
// 00885cfd  e83aeaf6ff           call 0x7f473c
// 00885d02  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00885d05  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00885d08  2b4510               sub eax, dword ptr [ebp + 0x10]
// 00885d0b  2bce                 sub ecx, esi
// 00885d0d  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 00885d10  48                   dec eax
// 00885d11  50                   push eax
// 00885d12  83e902               sub ecx, 2
// 00885d15  51                   push ecx
// 00885d16  8d542434             lea edx, [esp + 0x34]
// 00885d1a  52                   push edx
// 00885d1b  8bcf                 mov ecx, edi
// 00885d1d  e820eaf6ff           call 0x7f4742
// 00885d22  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00885d25  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00885d28  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 00885d2b  2bc6                 sub eax, esi
// 00885d2d  2b4510               sub eax, dword ptr [ebp + 0x10]
// 00885d30  83e803               sub eax, 3
// 00885d33  50                   push eax
// 00885d34  51                   push ecx
// 00885d35  8bcf                 mov ecx, edi
// 00885d37  e800eaf6ff           call 0x7f473c
// 00885d3c  83c605               add esi, 5
// 00885d3f  83fe0f               cmp esi, 0xf
// 00885d42  0f8c4dffffff         jl 0x885c95
// 00885d48  85ff                 test edi, edi
// 00885d4a  7504                 jne 0x885d50
// 00885d4c  33f6                 xor esi, esi
// 00885d4e  eb03                 jmp 0x885d53
// 00885d50  8b7704               mov esi, dword ptr [edi + 4]
// 00885d53  6a14                 push 0x14
// 00885d55  8bcb                 mov ecx, ebx
// 00885d57  e8e478f7ff           call 0x7fd640
// 00885d5c  50                   push eax
// 00885d5d  56                   push esi
// 00885d5e  8d4c243c             lea ecx, [esp + 0x3c]
// 00885d62  e89959fcff           call 0x84b700
// 00885d67  c644246801           mov byte ptr [esp + 0x68], 1
// 00885d6c  33f6                 xor esi, esi
// 00885d6e  8bff                 mov edi, edi
// 00885d70  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00885d73  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00885d76  2b5510               sub edx, dword ptr [ebp + 0x10]
// 00885d79  2bc6                 sub eax, esi
// 00885d7b  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00885d7e  4a                   dec edx
// 00885d7f  52                   push edx
// 00885d80  83e803               sub eax, 3
// 00885d83  50                   push eax
// 00885d84  8d4c2434             lea ecx, [esp + 0x34]
// 00885d88  51                   push ecx
// 00885d89  8bcf                 mov ecx, edi
// 00885d8b  e8b2e9f6ff           call 0x7f4742
// 00885d90  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00885d93  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00885d96  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00885d99  2bd6                 sub edx, esi
// 00885d9b  2b5510               sub edx, dword ptr [ebp + 0x10]
// 00885d9e  8bcf                 mov ecx, edi
// 00885da0  83ea04               sub edx, 4
// 00885da3  52                   push edx
// 00885da4  50                   push eax
// 00885da5  e892e9f6ff           call 0x7f473c
// 00885daa  83c605               add esi, 5
// 00885dad  83fe0f               cmp esi, 0xf
// 00885db0  7cbe                 jl 0x885d70
// 00885db2  8d4c2434             lea ecx, [esp + 0x34]
// 00885db6  c644246800           mov byte ptr [esp + 0x68], 0
// 00885dbb  e8d059fcff           call 0x84b790
// 00885dc0  8d4c2448             lea ecx, [esp + 0x48]
// 00885dc4  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00885dcc  e8bf59fcff           call 0x84b790
// 00885dd1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00885dd5  64890d00000000       mov dword ptr fs:[0], ecx
// 00885ddc  59                   pop ecx
// 00885ddd  5f                   pop edi
// 00885dde  5e                   pop esi
// 00885ddf  5b                   pop ebx
// 00885de0  8be5                 mov esp, ebp
// 00885de2  5d                   pop ebp
// 00885de3  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawStatusBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp