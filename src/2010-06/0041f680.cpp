// roc 2010-06 0041f680  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::?$signal::slot  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041f680
//
// 0041f680  56                   push esi
// 0041f681  57                   push edi
// 0041f682  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041f686  8bf1                 mov esi, ecx
// 0041f688  3bf7                 cmp esi, edi
// 0041f68a  0f84f4000000         je 0x41f784
// 0041f690  53                   push ebx
// 0041f691  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0041f694  55                   push ebp
// 0041f695  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0041f698  8bcb                 mov ecx, ebx
// 0041f69a  2bcd                 sub ecx, ebp
// 0041f69c  c1f903               sar ecx, 3
// 0041f69f  85c9                 test ecx, ecx
// 0041f6a1  7510                 jne 0x41f6b3
// 0041f6a3  8bce                 mov ecx, esi
// 0041f6a5  e816feffff           call 0x41f4c0
// 0041f6aa  5d                   pop ebp
// 0041f6ab  5b                   pop ebx
// 0041f6ac  5f                   pop edi
// 0041f6ad  8bc6                 mov eax, esi
// 0041f6af  5e                   pop esi
// 0041f6b0  c20400               ret 4
// 0041f6b3  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041f6b6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041f6b9  2bd0                 sub edx, eax
// 0041f6bb  c1fa03               sar edx, 3
// 0041f6be  3bca                 cmp ecx, edx
// 0041f6c0  7739                 ja 0x41f6fb
// 0041f6c2  50                   push eax
// 0041f6c3  53                   push ebx
// 0041f6c4  55                   push ebp
// 0041f6c5  e8760dffff           call 0x410440
// 0041f6ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041f6ce  51                   push ecx
// 0041f6cf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041f6d2  8d5608               lea edx, [esi + 8]
// 0041f6d5  52                   push edx
// 0041f6d6  51                   push ecx
// 0041f6d7  50                   push eax
// 0041f6d8  e8d33e1e00           call 0x6035b0
// 0041f6dd  8b5710               mov edx, dword ptr [edi + 0x10]
// 0041f6e0  2b570c               sub edx, dword ptr [edi + 0xc]
// 0041f6e3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041f6e6  83c41c               add esp, 0x1c
// 0041f6e9  5d                   pop ebp
// 0041f6ea  c1fa03               sar edx, 3
// 0041f6ed  5b                   pop ebx
// 0041f6ee  8d0cd0               lea ecx, [eax + edx*8]
// 0041f6f1  5f                   pop edi
// 0041f6f2  894e10               mov dword ptr [esi + 0x10], ecx
// 0041f6f5  8bc6                 mov eax, esi
// 0041f6f7  5e                   pop esi
// 0041f6f8  c20400               ret 4
// 0041f6fb  85c0                 test eax, eax
// 0041f6fd  7504                 jne 0x41f703
// 0041f6ff  33db                 xor ebx, ebx
// 0041f701  eb08                 jmp 0x41f70b
// 0041f703  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0041f706  2bd8                 sub ebx, eax
// 0041f708  c1fb03               sar ebx, 3
// 0041f70b  3bcb                 cmp ecx, ebx
// 0041f70d  772c                 ja 0x41f73b
// 0041f70f  8bcd                 mov ecx, ebp
// 0041f711  50                   push eax
// 0041f712  8d1cd1               lea ebx, [ecx + edx*8]
// 0041f715  53                   push ebx
// 0041f716  51                   push ecx
// 0041f717  e8240dffff           call 0x410440
// 0041f71c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041f71f  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041f722  83c40c               add esp, 0xc
// 0041f725  52                   push edx
// 0041f726  50                   push eax
// 0041f727  53                   push ebx
// 0041f728  8bce                 mov ecx, esi
// 0041f72a  e881eb3700           call 0x79e2b0
// 0041f72f  5d                   pop ebp
// 0041f730  5b                   pop ebx
// 0041f731  894610               mov dword ptr [esi + 0x10], eax
// 0041f734  5f                   pop edi
// 0041f735  8bc6                 mov eax, esi
// 0041f737  5e                   pop esi
// 0041f738  c20400               ret 4
// 0041f73b  85c0                 test eax, eax
// 0041f73d  7418                 je 0x41f757
// 0041f73f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041f742  51                   push ecx
// 0041f743  50                   push eax
// 0041f744  8bce                 mov ecx, esi
// 0041f746  e8b5bb2800           call 0x6ab300
// 0041f74b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0041f74e  51                   push ecx
// 0041f74f  e846823800           call 0x7a799a
// 0041f754  83c404               add esp, 4
// 0041f757  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041f75a  2b470c               sub eax, dword ptr [edi + 0xc]
// 0041f75d  8bce                 mov ecx, esi
// 0041f75f  c1f803               sar eax, 3
// 0041f762  50                   push eax
// 0041f763  e80846ffff           call 0x413d70
// 0041f768  84c0                 test al, al
// 0041f76a  7416                 je 0x41f782
// 0041f76c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0041f76f  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041f772  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0041f775  52                   push edx
// 0041f776  50                   push eax
// 0041f777  51                   push ecx
// 0041f778  8bce                 mov ecx, esi
// 0041f77a  e831eb3700           call 0x79e2b0
// 0041f77f  894610               mov dword ptr [esi + 0x10], eax
// 0041f782  5d                   pop ebp
// 0041f783  5b                   pop ebx
// 0041f784  5f                   pop edi
// 0041f785  8bc6                 mov eax, esi
// 0041f787  5e                   pop esi
// 0041f788  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
