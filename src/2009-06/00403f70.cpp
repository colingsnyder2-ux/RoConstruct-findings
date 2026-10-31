// roc 2009-06 00403f70  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00403f70
//
// 00403f70  51                   push ecx
// 00403f71  53                   push ebx
// 00403f72  55                   push ebp
// 00403f73  56                   push esi
// 00403f74  8bf1                 mov esi, ecx
// 00403f76  8b06                 mov eax, dword ptr [esi]
// 00403f78  57                   push edi
// 00403f79  50                   push eax
// 00403f7a  89742414             mov dword ptr [esp + 0x14], esi
// 00403f7e  ff153cea8900         call dword ptr [0x89ea3c]
// 00403f84  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403f88  33ff                 xor edi, edi
// 00403f8a  3bdf                 cmp ebx, edi
// 00403f8c  7457                 je 0x403fe5
// 00403f8e  8b2d38e38900         mov ebp, dword ptr [0x89e338]
// 00403f94  57                   push edi
// 00403f95  57                   push edi
// 00403f96  6aff                 push -1
// 00403f98  53                   push ebx
// 00403f99  57                   push edi
// 00403f9a  6a03                 push 3
// 00403f9c  897c2430             mov dword ptr [esp + 0x30], edi
// 00403fa0  ffd5                 call ebp
// 00403fa2  8bf0                 mov esi, eax
// 00403fa4  8d4eff               lea ecx, [esi - 1]
// 00403fa7  51                   push ecx
// 00403fa8  57                   push edi
// 00403fa9  ff1540ea8900         call dword ptr [0x89ea40]
// 00403faf  8bf8                 mov edi, eax
// 00403fb1  85ff                 test edi, edi
// 00403fb3  7423                 je 0x403fd8
// 00403fb5  56                   push esi
// 00403fb6  57                   push edi
// 00403fb7  6aff                 push -1
// 00403fb9  53                   push ebx
// 00403fba  6a00                 push 0
// 00403fbc  6a03                 push 3
// 00403fbe  ffd5                 call ebp
// 00403fc0  3bc6                 cmp eax, esi
// 00403fc2  7414                 je 0x403fd8
// 00403fc4  57                   push edi
// 00403fc5  ff153cea8900         call dword ptr [0x89ea3c]
// 00403fcb  8d4c2418             lea ecx, [esp + 0x18]
// 00403fcf  e8dcfbffff           call 0x403bb0
// 00403fd4  33ff                 xor edi, edi
// 00403fd6  eb09                 jmp 0x403fe1
// 00403fd8  8d4c2418             lea ecx, [esp + 0x18]
// 00403fdc  e8cffbffff           call 0x403bb0
// 00403fe1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00403fe5  893e                 mov dword ptr [esi], edi
// 00403fe7  85ff                 test edi, edi
// 00403fe9  750e                 jne 0x403ff9
// 00403feb  85db                 test ebx, ebx
// 00403fed  740a                 je 0x403ff9
// 00403fef  680e000780           push 0x8007000e
// 00403ff4  e8b7eeffff           call 0x402eb0
// 00403ff9  5f                   pop edi
// 00403ffa  8bc6                 mov eax, esi
// 00403ffc  5e                   pop esi
// 00403ffd  5d                   pop ebp
// 00403ffe  5b                   pop ebx
// 00403fff  59                   pop ecx
// 00404000  c20400               ret 4
// copied from an identical function in another client (function ??4CComBSTR@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espeon_bstransiasign6671a088facdff20.cpp