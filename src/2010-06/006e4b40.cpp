// from server: 100% by auto
// roc 2010-06 006e4b40  unit: RBX::VLuaDragger::?$FactoryProduct  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e4b40
//
// 006e4b40  56                   push esi
// 006e4b41  57                   push edi
// 006e4b42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4b46  8bf1                 mov esi, ecx
// 006e4b48  3bf7                 cmp esi, edi
// 006e4b4a  0f84f4000000         je 0x6e4c44
// 006e4b50  53                   push ebx
// 006e4b51  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 006e4b54  55                   push ebp
// 006e4b55  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 006e4b58  8bcb                 mov ecx, ebx
// 006e4b5a  2bcd                 sub ecx, ebp
// 006e4b5c  c1f903               sar ecx, 3
// 006e4b5f  85c9                 test ecx, ecx
// 006e4b61  7510                 jne 0x6e4b73
// 006e4b63  8bce                 mov ecx, esi
// 006e4b65  e886ffffff           call 0x6e4af0
// 006e4b6a  5d                   pop ebp
// 006e4b6b  5b                   pop ebx
// 006e4b6c  5f                   pop edi
// 006e4b6d  8bc6                 mov eax, esi
// 006e4b6f  5e                   pop esi
// 006e4b70  c20400               ret 4
// 006e4b73  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e4b76  8b460c               mov eax, dword ptr [esi + 0xc]
// 006e4b79  2bd0                 sub edx, eax
// 006e4b7b  c1fa03               sar edx, 3
// 006e4b7e  3bca                 cmp ecx, edx
// 006e4b80  7739                 ja 0x6e4bbb
// 006e4b82  50                   push eax
// 006e4b83  53                   push ebx
// 006e4b84  55                   push ebp
// 006e4b85  e8f6ed0700           call 0x763980
// 006e4b8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e4b8e  51                   push ecx
// 006e4b8f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e4b92  8d5608               lea edx, [esi + 8]
// 006e4b95  52                   push edx
// 006e4b96  51                   push ecx
// 006e4b97  50                   push eax
// 006e4b98  e86367fdff           call 0x6bb300
// 006e4b9d  8b5710               mov edx, dword ptr [edi + 0x10]
// 006e4ba0  2b570c               sub edx, dword ptr [edi + 0xc]
// 006e4ba3  8b460c               mov eax, dword ptr [esi + 0xc]
// 006e4ba6  83c41c               add esp, 0x1c
// 006e4ba9  5d                   pop ebp
// 006e4baa  c1fa03               sar edx, 3
// 006e4bad  5b                   pop ebx
// 006e4bae  8d0cd0               lea ecx, [eax + edx*8]
// 006e4bb1  5f                   pop edi
// 006e4bb2  894e10               mov dword ptr [esi + 0x10], ecx
// 006e4bb5  8bc6                 mov eax, esi
// 006e4bb7  5e                   pop esi
// 006e4bb8  c20400               ret 4
// 006e4bbb  85c0                 test eax, eax
// 006e4bbd  7504                 jne 0x6e4bc3
// 006e4bbf  33db                 xor ebx, ebx
// 006e4bc1  eb08                 jmp 0x6e4bcb
// 006e4bc3  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 006e4bc6  2bd8                 sub ebx, eax
// 006e4bc8  c1fb03               sar ebx, 3
// 006e4bcb  3bcb                 cmp ecx, ebx
// 006e4bcd  772c                 ja 0x6e4bfb
// 006e4bcf  8bcd                 mov ecx, ebp
// 006e4bd1  50                   push eax
// 006e4bd2  8d1cd1               lea ebx, [ecx + edx*8]
// 006e4bd5  53                   push ebx
// 006e4bd6  51                   push ecx
// 006e4bd7  e8a4ed0700           call 0x763980
// 006e4bdc  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e4bdf  8b4710               mov eax, dword ptr [edi + 0x10]
// 006e4be2  83c40c               add esp, 0xc
// 006e4be5  52                   push edx
// 006e4be6  50                   push eax
// 006e4be7  53                   push ebx
// 006e4be8  8bce                 mov ecx, esi
// 006e4bea  e891faffff           call 0x6e4680
// 006e4bef  5d                   pop ebp
// 006e4bf0  5b                   pop ebx
// 006e4bf1  894610               mov dword ptr [esi + 0x10], eax
// 006e4bf4  5f                   pop edi
// 006e4bf5  8bc6                 mov eax, esi
// 006e4bf7  5e                   pop esi
// 006e4bf8  c20400               ret 4
// 006e4bfb  85c0                 test eax, eax
// 006e4bfd  7418                 je 0x6e4c17
// 006e4bff  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e4c02  51                   push ecx
// 006e4c03  50                   push eax
// 006e4c04  8bce                 mov ecx, esi
// 006e4c06  e83567fdff           call 0x6bb340
// 006e4c0b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006e4c0e  51                   push ecx
// 006e4c0f  e8862d0c00           call 0x7a799a
// 006e4c14  83c404               add esp, 4
// 006e4c17  8b4710               mov eax, dword ptr [edi + 0x10]
// 006e4c1a  2b470c               sub eax, dword ptr [edi + 0xc]
// 006e4c1d  8bce                 mov ecx, esi
// 006e4c1f  c1f803               sar eax, 3
// 006e4c22  50                   push eax
// 006e4c23  e848f1d2ff           call 0x413d70
// 006e4c28  84c0                 test al, al
// 006e4c2a  7416                 je 0x6e4c42
// 006e4c2c  8b560c               mov edx, dword ptr [esi + 0xc]
// 006e4c2f  8b4710               mov eax, dword ptr [edi + 0x10]
// 006e4c32  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006e4c35  52                   push edx
// 006e4c36  50                   push eax
// 006e4c37  51                   push ecx
// 006e4c38  8bce                 mov ecx, esi
// 006e4c3a  e841faffff           call 0x6e4680
// 006e4c3f  894610               mov dword ptr [esi + 0x10], eax
// 006e4c42  5d                   pop ebp
// 006e4c43  5b                   pop ebx
// 006e4c44  5f                   pop edi
// 006e4c45  8bc6                 mov eax, esi
// 006e4c47  5e                   pop esi
// 006e4c48  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
