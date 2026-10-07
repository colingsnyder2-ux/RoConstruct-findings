// roc 2010-06 008fedf0  unit: Ogre::RbxSceneUpdater  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008fedf0
//
// 008fedf0  56                   push esi
// 008fedf1  57                   push edi
// 008fedf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008fedf6  8bf1                 mov esi, ecx
// 008fedf8  3bf7                 cmp esi, edi
// 008fedfa  0f84f4000000         je 0x8feef4
// 008fee00  53                   push ebx
// 008fee01  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 008fee04  55                   push ebp
// 008fee05  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008fee08  8bcb                 mov ecx, ebx
// 008fee0a  2bcd                 sub ecx, ebp
// 008fee0c  c1f903               sar ecx, 3
// 008fee0f  85c9                 test ecx, ecx
// 008fee11  7510                 jne 0x8fee23
// 008fee13  8bce                 mov ecx, esi
// 008fee15  e896feffff           call 0x8fecb0
// 008fee1a  5d                   pop ebp
// 008fee1b  5b                   pop ebx
// 008fee1c  5f                   pop edi
// 008fee1d  8bc6                 mov eax, esi
// 008fee1f  5e                   pop esi
// 008fee20  c20400               ret 4
// 008fee23  8b5610               mov edx, dword ptr [esi + 0x10]
// 008fee26  8b460c               mov eax, dword ptr [esi + 0xc]
// 008fee29  2bd0                 sub edx, eax
// 008fee2b  c1fa03               sar edx, 3
// 008fee2e  3bca                 cmp ecx, edx
// 008fee30  7739                 ja 0x8fee6b
// 008fee32  50                   push eax
// 008fee33  53                   push ebx
// 008fee34  55                   push ebp
// 008fee35  e836f8ffff           call 0x8fe670
// 008fee3a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008fee3e  51                   push ecx
// 008fee3f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008fee42  8d5608               lea edx, [esi + 8]
// 008fee45  52                   push edx
// 008fee46  51                   push ecx
// 008fee47  50                   push eax
// 008fee48  e88300c3ff           call 0x52eed0
// 008fee4d  8b5710               mov edx, dword ptr [edi + 0x10]
// 008fee50  2b570c               sub edx, dword ptr [edi + 0xc]
// 008fee53  8b460c               mov eax, dword ptr [esi + 0xc]
// 008fee56  83c41c               add esp, 0x1c
// 008fee59  5d                   pop ebp
// 008fee5a  c1fa03               sar edx, 3
// 008fee5d  5b                   pop ebx
// 008fee5e  8d0cd0               lea ecx, [eax + edx*8]
// 008fee61  5f                   pop edi
// 008fee62  894e10               mov dword ptr [esi + 0x10], ecx
// 008fee65  8bc6                 mov eax, esi
// 008fee67  5e                   pop esi
// 008fee68  c20400               ret 4
// 008fee6b  85c0                 test eax, eax
// 008fee6d  7504                 jne 0x8fee73
// 008fee6f  33db                 xor ebx, ebx
// 008fee71  eb08                 jmp 0x8fee7b
// 008fee73  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008fee76  2bd8                 sub ebx, eax
// 008fee78  c1fb03               sar ebx, 3
// 008fee7b  3bcb                 cmp ecx, ebx
// 008fee7d  772c                 ja 0x8feeab
// 008fee7f  8bcd                 mov ecx, ebp
// 008fee81  50                   push eax
// 008fee82  8d1cd1               lea ebx, [ecx + edx*8]
// 008fee85  53                   push ebx
// 008fee86  51                   push ecx
// 008fee87  e8e4f7ffff           call 0x8fe670
// 008fee8c  8b5610               mov edx, dword ptr [esi + 0x10]
// 008fee8f  8b4710               mov eax, dword ptr [edi + 0x10]
// 008fee92  83c40c               add esp, 0xc
// 008fee95  52                   push edx
// 008fee96  50                   push eax
// 008fee97  53                   push ebx
// 008fee98  8bce                 mov ecx, esi
// 008fee9a  e871fbffff           call 0x8fea10
// 008fee9f  5d                   pop ebp
// 008feea0  5b                   pop ebx
// 008feea1  894610               mov dword ptr [esi + 0x10], eax
// 008feea4  5f                   pop edi
// 008feea5  8bc6                 mov eax, esi
// 008feea7  5e                   pop esi
// 008feea8  c20400               ret 4
// 008feeab  85c0                 test eax, eax
// 008feead  7418                 je 0x8feec7
// 008feeaf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008feeb2  51                   push ecx
// 008feeb3  50                   push eax
// 008feeb4  8bce                 mov ecx, esi
// 008feeb6  e89518c3ff           call 0x530750
// 008feebb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008feebe  51                   push ecx
// 008feebf  e8d68aeaff           call 0x7a799a
// 008feec4  83c404               add esp, 4
// 008feec7  8b4710               mov eax, dword ptr [edi + 0x10]
// 008feeca  2b470c               sub eax, dword ptr [edi + 0xc]
// 008feecd  8bce                 mov ecx, esi
// 008feecf  c1f803               sar eax, 3
// 008feed2  50                   push eax
// 008feed3  e8984eb1ff           call 0x413d70
// 008feed8  84c0                 test al, al
// 008feeda  7416                 je 0x8feef2
// 008feedc  8b560c               mov edx, dword ptr [esi + 0xc]
// 008feedf  8b4710               mov eax, dword ptr [edi + 0x10]
// 008feee2  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008feee5  52                   push edx
// 008feee6  50                   push eax
// 008feee7  51                   push ecx
// 008feee8  8bce                 mov ecx, esi
// 008feeea  e821fbffff           call 0x8fea10
// 008feeef  894610               mov dword ptr [esi + 0x10], eax
// 008feef2  5d                   pop ebp
// 008feef3  5b                   pop ebx
// 008feef4  5f                   pop edi
// 008feef5  8bc6                 mov eax, esi
// 008feef7  5e                   pop esi
// 008feef8  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
