// roc 2009-12 00808bc0  unit: CXTPCommandBar  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808bc0
//
// 00808bc0  83ec20               sub esp, 0x20
// 00808bc3  53                   push ebx
// 00808bc4  55                   push ebp
// 00808bc5  56                   push esi
// 00808bc6  33db                 xor ebx, ebx
// 00808bc8  57                   push edi
// 00808bc9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00808bcd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00808bd1  895c2418             mov dword ptr [esp + 0x18], ebx
// 00808bd5  e8c6460400           call 0x84d2a0
// 00808bda  8b442448             mov eax, dword ptr [esp + 0x48]
// 00808bde  50                   push eax
// 00808bdf  e80c1e0400           call 0x84a9f0
// 00808be4  8944242c             mov dword ptr [esp + 0x2c], eax
// 00808be8  e8b3460400           call 0x84d2a0
// 00808bed  8b742438             mov esi, dword ptr [esp + 0x38]
// 00808bf1  56                   push esi
// 00808bf2  e8f91d0400           call 0x84a9f0
// 00808bf7  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00808bfb  53                   push ebx
// 00808bfc  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00808c00  53                   push ebx
// 00808c01  55                   push ebp
// 00808c02  56                   push esi
// 00808c03  8bf8                 mov edi, eax
// 00808c05  e836ffffff           call 0x808b40
// 00808c0a  83c418               add esp, 0x18
// 00808c0d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00808c11  85c0                 test eax, eax
// 00808c13  0f84d5010000         je 0x808dee
// 00808c19  6a00                 push 0
// 00808c1b  53                   push ebx
// 00808c1c  55                   push ebp
// 00808c1d  56                   push esi
// 00808c1e  e81dffffff           call 0x808b40
// 00808c23  83c410               add esp, 0x10
// 00808c26  89442420             mov dword ptr [esp + 0x20], eax
// 00808c2a  85c0                 test eax, eax
// 00808c2c  0f8499010000         je 0x808dcb
// 00808c32  6a00                 push 0
// 00808c34  53                   push ebx
// 00808c35  55                   push ebp
// 00808c36  56                   push esi
// 00808c37  e804ffffff           call 0x808b40
// 00808c3c  83c410               add esp, 0x10
// 00808c3f  89442414             mov dword ptr [esp + 0x14], eax
// 00808c43  85c0                 test eax, eax
// 00808c45  0f8480010000         je 0x808dcb
// 00808c4b  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00808c4f  8b1d54b19800         mov ebx, dword ptr [0x98b154]
// 00808c55  55                   push ebp
// 00808c56  ffd3                 call ebx
// 00808c58  8bf0                 mov esi, eax
// 00808c5a  85f6                 test esi, esi
// 00808c5c  0f8469010000         je 0x808dcb
// 00808c62  55                   push ebp
// 00808c63  ffd3                 call ebx
// 00808c65  8be8                 mov ebp, eax
// 00808c67  85ed                 test ebp, ebp
// 00808c69  0f844c010000         je 0x808dbb
// 00808c6f  e82c460400           call 0x84d2a0
// 00808c74  6a00                 push 0
// 00808c76  55                   push ebp
// 00808c77  e8c41d0400           call 0x84aa40
// 00808c7c  e81f460400           call 0x84d2a0
// 00808c81  6a00                 push 0
// 00808c83  56                   push esi
// 00808c84  e8b71d0400           call 0x84aa40
// 00808c89  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00808c8d  8b1d4cb19800         mov ebx, dword ptr [0x98b14c]
// 00808c93  83c410               add esp, 0x10
// 00808c96  51                   push ecx
// 00808c97  56                   push esi
// 00808c98  ffd3                 call ebx
// 00808c9a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00808c9e  52                   push edx
// 00808c9f  55                   push ebp
// 00808ca0  89442418             mov dword ptr [esp + 0x18], eax
// 00808ca4  ffd3                 call ebx
// 00808ca6  6a03                 push 3
// 00808ca8  56                   push esi
// 00808ca9  8944242c             mov dword ptr [esp + 0x2c], eax
// 00808cad  ff15f8b09800         call dword ptr [0x98b0f8]
// 00808cb3  6a03                 push 3
// 00808cb5  55                   push ebp
// 00808cb6  ff15f8b09800         call dword ptr [0x98b0f8]
// 00808cbc  8b442458             mov eax, dword ptr [esp + 0x58]
// 00808cc0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00808cc4  8b542450             mov edx, dword ptr [esp + 0x50]
// 00808cc8  682000cc00           push 0xcc0020
// 00808ccd  50                   push eax
// 00808cce  8b442454             mov eax, dword ptr [esp + 0x54]
// 00808cd2  51                   push ecx
// 00808cd3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00808cd7  52                   push edx
// 00808cd8  8b542454             mov edx, dword ptr [esp + 0x54]
// 00808cdc  50                   push eax
// 00808cdd  8b442454             mov eax, dword ptr [esp + 0x54]
// 00808ce1  51                   push ecx
// 00808ce2  52                   push edx
// 00808ce3  50                   push eax
// 00808ce4  6a00                 push 0
// 00808ce6  6a00                 push 0
// 00808ce8  56                   push esi
// 00808ce9  ff151cb19800         call dword ptr [0x98b11c]
// 00808cef  85c0                 test eax, eax
// 00808cf1  0f84ac000000         je 0x808da3
// 00808cf7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00808cfb  8b542438             mov edx, dword ptr [esp + 0x38]
// 00808cff  8b442434             mov eax, dword ptr [esp + 0x34]
// 00808d03  682000cc00           push 0xcc0020
// 00808d08  51                   push ecx
// 00808d09  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00808d0d  52                   push edx
// 00808d0e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00808d12  50                   push eax
// 00808d13  51                   push ecx
// 00808d14  52                   push edx
// 00808d15  6a00                 push 0
// 00808d17  6a00                 push 0
// 00808d19  55                   push ebp
// 00808d1a  ff1548b19800         call dword ptr [0x98b148]
// 00808d20  85c0                 test eax, eax
// 00808d22  747f                 je 0x808da3
// 00808d24  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808d28  50                   push eax
// 00808d29  56                   push esi
// 00808d2a  ffd3                 call ebx
// 00808d2c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00808d30  51                   push ecx
// 00808d31  55                   push ebp
// 00808d32  ffd3                 call ebx
// 00808d34  8b542414             mov edx, dword ptr [esp + 0x14]
// 00808d38  8b442420             mov eax, dword ptr [esp + 0x20]
// 00808d3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00808d40  52                   push edx
// 00808d41  8b542420             mov edx, dword ptr [esp + 0x20]
// 00808d45  57                   push edi
// 00808d46  50                   push eax
// 00808d47  51                   push ecx
// 00808d48  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00808d4c  52                   push edx
// 00808d4d  e8cefbffff           call 0x808920
// 00808d52  89442418             mov dword ptr [esp + 0x18], eax
// 00808d56  85c0                 test eax, eax
// 00808d58  7461                 je 0x808dbb
// 00808d5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00808d5e  50                   push eax
// 00808d5f  56                   push esi
// 00808d60  ffd3                 call ebx
// 00808d62  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00808d66  8b542440             mov edx, dword ptr [esp + 0x40]
// 00808d6a  f7df                 neg edi
// 00808d6c  1bff                 sbb edi, edi
// 00808d6e  81e700000080         and edi, 0x80000000
// 00808d74  81cf2000cc00         or edi, 0xcc0020
// 00808d7a  57                   push edi
// 00808d7b  6a00                 push 0
// 00808d7d  6a00                 push 0
// 00808d7f  56                   push esi
// 00808d80  51                   push ecx
// 00808d81  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00808d85  52                   push edx
// 00808d86  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00808d8a  89442428             mov dword ptr [esp + 0x28], eax
// 00808d8e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00808d92  50                   push eax
// 00808d93  51                   push ecx
// 00808d94  52                   push edx
// 00808d95  ff1548b19800         call dword ptr [0x98b148]
// 00808d9b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808d9f  50                   push eax
// 00808da0  56                   push esi
// 00808da1  eb16                 jmp 0x808db9
// 00808da3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00808da7  85c0                 test eax, eax
// 00808da9  7404                 je 0x808daf
// 00808dab  50                   push eax
// 00808dac  56                   push esi
// 00808dad  ffd3                 call ebx
// 00808daf  8b442424             mov eax, dword ptr [esp + 0x24]
// 00808db3  85c0                 test eax, eax
// 00808db5  7404                 je 0x808dbb
// 00808db7  50                   push eax
// 00808db8  55                   push ebp
// 00808db9  ffd3                 call ebx
// 00808dbb  56                   push esi
// 00808dbc  8b3540b19800         mov esi, dword ptr [0x98b140]
// 00808dc2  ffd6                 call esi
// 00808dc4  85ed                 test ebp, ebp
// 00808dc6  7403                 je 0x808dcb
// 00808dc8  55                   push ebp
// 00808dc9  ffd6                 call esi
// 00808dcb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00808dcf  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 00808dd5  51                   push ecx
// 00808dd6  ffd6                 call esi
// 00808dd8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00808ddc  85c0                 test eax, eax
// 00808dde  7403                 je 0x808de3
// 00808de0  50                   push eax
// 00808de1  ffd6                 call esi
// 00808de3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00808de7  85c0                 test eax, eax
// 00808de9  7403                 je 0x808dee
// 00808deb  50                   push eax
// 00808dec  ffd6                 call esi
// 00808dee  8b442418             mov eax, dword ptr [esp + 0x18]
// 00808df2  5f                   pop edi
// 00808df3  5e                   pop esi
// 00808df4  5d                   pop ebp
// 00808df5  5b                   pop ebx
// 00808df6  83c420               add esp, 0x20
// 00808df9  c22800               ret 0x28
// copied from an identical function in another client (function ?DoAlphaBlend@CXTPImageManager@@ABEHPAUHDC__@@HHHH0HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp