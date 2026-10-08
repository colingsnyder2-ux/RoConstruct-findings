// from server: 100% by auto
// roc 2008-06 004259f0  unit: CSelectionTreeCtrl  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004259f0
//
// 004259f0  56                   push esi
// 004259f1  57                   push edi
// 004259f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004259f6  8bf1                 mov esi, ecx
// 004259f8  3bf7                 cmp esi, edi
// 004259fa  0f84f4000000         je 0x425af4
// 00425a00  53                   push ebx
// 00425a01  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 00425a04  55                   push ebp
// 00425a05  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00425a08  8bcb                 mov ecx, ebx
// 00425a0a  2bcd                 sub ecx, ebp
// 00425a0c  c1f903               sar ecx, 3
// 00425a0f  85c9                 test ecx, ecx
// 00425a11  7510                 jne 0x425a23
// 00425a13  8bce                 mov ecx, esi
// 00425a15  e886eeffff           call 0x4248a0
// 00425a1a  5d                   pop ebp
// 00425a1b  5b                   pop ebx
// 00425a1c  5f                   pop edi
// 00425a1d  8bc6                 mov eax, esi
// 00425a1f  5e                   pop esi
// 00425a20  c20400               ret 4
// 00425a23  8b5610               mov edx, dword ptr [esi + 0x10]
// 00425a26  8b460c               mov eax, dword ptr [esi + 0xc]
// 00425a29  2bd0                 sub edx, eax
// 00425a2b  c1fa03               sar edx, 3
// 00425a2e  3bca                 cmp ecx, edx
// 00425a30  7739                 ja 0x425a6b
// 00425a32  50                   push eax
// 00425a33  53                   push ebx
// 00425a34  55                   push ebp
// 00425a35  e816c6feff           call 0x412050
// 00425a3a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00425a3e  51                   push ecx
// 00425a3f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00425a42  8d5608               lea edx, [esi + 8]
// 00425a45  52                   push edx
// 00425a46  51                   push ecx
// 00425a47  50                   push eax
// 00425a48  e843bf1700           call 0x5a1990
// 00425a4d  8b5710               mov edx, dword ptr [edi + 0x10]
// 00425a50  2b570c               sub edx, dword ptr [edi + 0xc]
// 00425a53  8b460c               mov eax, dword ptr [esi + 0xc]
// 00425a56  83c41c               add esp, 0x1c
// 00425a59  5d                   pop ebp
// 00425a5a  c1fa03               sar edx, 3
// 00425a5d  5b                   pop ebx
// 00425a5e  8d0cd0               lea ecx, [eax + edx*8]
// 00425a61  5f                   pop edi
// 00425a62  894e10               mov dword ptr [esi + 0x10], ecx
// 00425a65  8bc6                 mov eax, esi
// 00425a67  5e                   pop esi
// 00425a68  c20400               ret 4
// 00425a6b  85c0                 test eax, eax
// 00425a6d  7504                 jne 0x425a73
// 00425a6f  33db                 xor ebx, ebx
// 00425a71  eb08                 jmp 0x425a7b
// 00425a73  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00425a76  2bd8                 sub ebx, eax
// 00425a78  c1fb03               sar ebx, 3
// 00425a7b  3bcb                 cmp ecx, ebx
// 00425a7d  772c                 ja 0x425aab
// 00425a7f  8bcd                 mov ecx, ebp
// 00425a81  50                   push eax
// 00425a82  8d1cd1               lea ebx, [ecx + edx*8]
// 00425a85  53                   push ebx
// 00425a86  51                   push ecx
// 00425a87  e8c4c5feff           call 0x412050
// 00425a8c  8b5610               mov edx, dword ptr [esi + 0x10]
// 00425a8f  8b4710               mov eax, dword ptr [edi + 0x10]
// 00425a92  83c40c               add esp, 0xc
// 00425a95  52                   push edx
// 00425a96  50                   push eax
// 00425a97  53                   push ebx
// 00425a98  8bce                 mov ecx, esi
// 00425a9a  e811d51700           call 0x5a2fb0
// 00425a9f  5d                   pop ebp
// 00425aa0  5b                   pop ebx
// 00425aa1  894610               mov dword ptr [esi + 0x10], eax
// 00425aa4  5f                   pop edi
// 00425aa5  8bc6                 mov eax, esi
// 00425aa7  5e                   pop esi
// 00425aa8  c20400               ret 4
// 00425aab  85c0                 test eax, eax
// 00425aad  7418                 je 0x425ac7
// 00425aaf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00425ab2  51                   push ecx
// 00425ab3  50                   push eax
// 00425ab4  8bce                 mov ecx, esi
// 00425ab6  e825cd1700           call 0x5a27e0
// 00425abb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00425abe  51                   push ecx
// 00425abf  e8b6ab2700           call 0x6a067a
// 00425ac4  83c404               add esp, 4
// 00425ac7  8b4710               mov eax, dword ptr [edi + 0x10]
// 00425aca  2b470c               sub eax, dword ptr [edi + 0xc]
// 00425acd  8bce                 mov ecx, esi
// 00425acf  c1f803               sar eax, 3
// 00425ad2  50                   push eax
// 00425ad3  e8b8e0feff           call 0x413b90
// 00425ad8  84c0                 test al, al
// 00425ada  7416                 je 0x425af2
// 00425adc  8b560c               mov edx, dword ptr [esi + 0xc]
// 00425adf  8b4710               mov eax, dword ptr [edi + 0x10]
// 00425ae2  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00425ae5  52                   push edx
// 00425ae6  50                   push eax
// 00425ae7  51                   push ecx
// 00425ae8  8bce                 mov ecx, esi
// 00425aea  e8c1d41700           call 0x5a2fb0
// 00425aef  894610               mov dword ptr [esi + 0x10], eax
// 00425af2  5d                   pop ebp
// 00425af3  5b                   pop ebx
// 00425af4  5f                   pop edi
// 00425af5  8bc6                 mov eax, esi
// 00425af7  5e                   pop esi
// 00425af8  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
