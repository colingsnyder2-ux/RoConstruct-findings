// roc 2009-12 0086ed10  unit: CXTPResourceManager  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ed10
//
// 0086ed10  6aff                 push -1
// 0086ed12  68b8fa9500           push 0x95fab8
// 0086ed17  64a100000000         mov eax, dword ptr fs:[0]
// 0086ed1d  50                   push eax
// 0086ed1e  83ec08               sub esp, 8
// 0086ed21  53                   push ebx
// 0086ed22  56                   push esi
// 0086ed23  57                   push edi
// 0086ed24  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ed29  33c4                 xor eax, esp
// 0086ed2b  50                   push eax
// 0086ed2c  8d442418             lea eax, [esp + 0x18]
// 0086ed30  64a300000000         mov dword ptr fs:[0], eax
// 0086ed36  e885f3ffff           call 0x86e0c0
// 0086ed3b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0086ed3f  8b1d0ccb9800         mov ebx, dword ptr [0x98cb0c]
// 0086ed45  8bf0                 mov esi, eax
// 0086ed47  85f6                 test esi, esi
// 0086ed49  7457                 je 0x86eda2
// 0086ed4b  6a03                 push 3
// 0086ed4d  57                   push edi
// 0086ed4e  56                   push esi
// 0086ed4f  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086ed55  85c0                 test eax, eax
// 0086ed57  7449                 je 0x86eda2
// 0086ed59  8d4c2410             lea ecx, [esp + 0x10]
// 0086ed5d  e89efcffff           call 0x86ea00
// 0086ed62  8b442430             mov eax, dword ptr [esp + 0x30]
// 0086ed66  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086ed6a  6a00                 push 0
// 0086ed6c  50                   push eax
// 0086ed6d  51                   push ecx
// 0086ed6e  6a01                 push 1
// 0086ed70  57                   push edi
// 0086ed71  56                   push esi
// 0086ed72  ffd3                 call ebx
// 0086ed74  8d4c2410             lea ecx, [esp + 0x10]
// 0086ed78  8bf0                 mov esi, eax
// 0086ed7a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0086ed82  e8b9f8ffff           call 0x86e640
// 0086ed87  85f6                 test esi, esi
// 0086ed89  7417                 je 0x86eda2
// 0086ed8b  8bc6                 mov eax, esi
// 0086ed8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086ed91  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ed98  59                   pop ecx
// 0086ed99  5f                   pop edi
// 0086ed9a  5e                   pop esi
// 0086ed9b  5b                   pop ebx
// 0086ed9c  83c414               add esp, 0x14
// 0086ed9f  c20c00               ret 0xc
// 0086eda2  6a0e                 push 0xe
// 0086eda4  57                   push edi
// 0086eda5  e83454f8ff           call 0x7f41de
// 0086edaa  85c0                 test eax, eax
// 0086edac  7416                 je 0x86edc4
// 0086edae  8b542430             mov edx, dword ptr [esp + 0x30]
// 0086edb2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086edb6  6a00                 push 0
// 0086edb8  52                   push edx
// 0086edb9  51                   push ecx
// 0086edba  6a01                 push 1
// 0086edbc  57                   push edi
// 0086edbd  50                   push eax
// 0086edbe  ffd3                 call ebx
// 0086edc0  85c0                 test eax, eax
// 0086edc2  7502                 jne 0x86edc6
// 0086edc4  33c0                 xor eax, eax
// 0086edc6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086edca  64890d00000000       mov dword ptr fs:[0], ecx
// 0086edd1  59                   pop ecx
// 0086edd2  5f                   pop edi
// 0086edd3  5e                   pop esi
// 0086edd4  5b                   pop ebx
// 0086edd5  83c414               add esp, 0x14
// 0086edd8  c20c00               ret 0xc
// copied from an identical function in another client (function ?LoadIconA@CXTPResourceManager@@UAEPAUHICON__@@PBDVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp