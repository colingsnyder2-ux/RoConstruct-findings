// roc 2009-06 0041ec10  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::?$signal::slot  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041ec10
//
// 0041ec10  56                   push esi
// 0041ec11  57                   push edi
// 0041ec12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041ec16  8bf1                 mov esi, ecx
// 0041ec18  3bf7                 cmp esi, edi
// 0041ec1a  0f84f4000000         je 0x41ed14
// 0041ec20  53                   push ebx
// 0041ec21  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0041ec24  55                   push ebp
// 0041ec25  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0041ec28  8bcb                 mov ecx, ebx
// 0041ec2a  2bcd                 sub ecx, ebp
// 0041ec2c  c1f903               sar ecx, 3
// 0041ec2f  85c9                 test ecx, ecx
// 0041ec31  7510                 jne 0x41ec43
// 0041ec33  8bce                 mov ecx, esi
// 0041ec35  e826feffff           call 0x41ea60
// 0041ec3a  5d                   pop ebp
// 0041ec3b  5b                   pop ebx
// 0041ec3c  5f                   pop edi
// 0041ec3d  8bc6                 mov eax, esi
// 0041ec3f  5e                   pop esi
// 0041ec40  c20400               ret 4
// 0041ec43  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041ec46  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041ec49  2bd0                 sub edx, eax
// 0041ec4b  c1fa03               sar edx, 3
// 0041ec4e  3bca                 cmp ecx, edx
// 0041ec50  7739                 ja 0x41ec8b
// 0041ec52  50                   push eax
// 0041ec53  53                   push ebx
// 0041ec54  55                   push ebp
// 0041ec55  e8f616ffff           call 0x410350
// 0041ec5a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041ec5e  51                   push ecx
// 0041ec5f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041ec62  8d5608               lea edx, [esi + 8]
// 0041ec65  52                   push edx
// 0041ec66  51                   push ecx
// 0041ec67  50                   push eax
// 0041ec68  e833802100           call 0x636ca0
// 0041ec6d  8b5710               mov edx, dword ptr [edi + 0x10]
// 0041ec70  2b570c               sub edx, dword ptr [edi + 0xc]
// 0041ec73  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041ec76  83c41c               add esp, 0x1c
// 0041ec79  5d                   pop ebp
// 0041ec7a  c1fa03               sar edx, 3
// 0041ec7d  5b                   pop ebx
// 0041ec7e  8d0cd0               lea ecx, [eax + edx*8]
// 0041ec81  5f                   pop edi
// 0041ec82  894e10               mov dword ptr [esi + 0x10], ecx
// 0041ec85  8bc6                 mov eax, esi
// 0041ec87  5e                   pop esi
// 0041ec88  c20400               ret 4
// 0041ec8b  85c0                 test eax, eax
// 0041ec8d  7504                 jne 0x41ec93
// 0041ec8f  33db                 xor ebx, ebx
// 0041ec91  eb08                 jmp 0x41ec9b
// 0041ec93  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0041ec96  2bd8                 sub ebx, eax
// 0041ec98  c1fb03               sar ebx, 3
// 0041ec9b  3bcb                 cmp ecx, ebx
// 0041ec9d  772c                 ja 0x41eccb
// 0041ec9f  8bcd                 mov ecx, ebp
// 0041eca1  50                   push eax
// 0041eca2  8d1cd1               lea ebx, [ecx + edx*8]
// 0041eca5  53                   push ebx
// 0041eca6  51                   push ecx
// 0041eca7  e8a416ffff           call 0x410350
// 0041ecac  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041ecaf  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041ecb2  83c40c               add esp, 0xc
// 0041ecb5  52                   push edx
// 0041ecb6  50                   push eax
// 0041ecb7  53                   push ebx
// 0041ecb8  8bce                 mov ecx, esi
// 0041ecba  e831fb2e00           call 0x70e7f0
// 0041ecbf  5d                   pop ebp
// 0041ecc0  5b                   pop ebx
// 0041ecc1  894610               mov dword ptr [esi + 0x10], eax
// 0041ecc4  5f                   pop edi
// 0041ecc5  8bc6                 mov eax, esi
// 0041ecc7  5e                   pop esi
// 0041ecc8  c20400               ret 4
// 0041eccb  85c0                 test eax, eax
// 0041eccd  7418                 je 0x41ece7
// 0041eccf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041ecd2  51                   push ecx
// 0041ecd3  50                   push eax
// 0041ecd4  8bce                 mov ecx, esi
// 0041ecd6  e8e5a40400           call 0x4691c0
// 0041ecdb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0041ecde  51                   push ecx
// 0041ecdf  e84e9d2f00           call 0x718a32
// 0041ece4  83c404               add esp, 4
// 0041ece7  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041ecea  2b470c               sub eax, dword ptr [edi + 0xc]
// 0041eced  8bce                 mov ecx, esi
// 0041ecef  c1f803               sar eax, 3
// 0041ecf2  50                   push eax
// 0041ecf3  e80854ffff           call 0x414100
// 0041ecf8  84c0                 test al, al
// 0041ecfa  7416                 je 0x41ed12
// 0041ecfc  8b560c               mov edx, dword ptr [esi + 0xc]
// 0041ecff  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041ed02  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0041ed05  52                   push edx
// 0041ed06  50                   push eax
// 0041ed07  51                   push ecx
// 0041ed08  8bce                 mov ecx, esi
// 0041ed0a  e8e1fa2e00           call 0x70e7f0
// 0041ed0f  894610               mov dword ptr [esi + 0x10], eax
// 0041ed12  5d                   pop ebp
// 0041ed13  5b                   pop ebx
// 0041ed14  5f                   pop edi
// 0041ed15  8bc6                 mov eax, esi
// 0041ed17  5e                   pop esi
// 0041ed18  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
