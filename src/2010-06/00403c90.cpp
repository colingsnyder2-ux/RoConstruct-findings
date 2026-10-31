// roc 2010-06 00403c90  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403c90
//
// 00403c90  51                   push ecx
// 00403c91  53                   push ebx
// 00403c92  55                   push ebp
// 00403c93  56                   push esi
// 00403c94  8bf1                 mov esi, ecx
// 00403c96  8b06                 mov eax, dword ptr [esi]
// 00403c98  57                   push edi
// 00403c99  50                   push eax
// 00403c9a  89742414             mov dword ptr [esp + 0x14], esi
// 00403c9e  ff1540aa9e00         call dword ptr [0x9eaa40]
// 00403ca4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403ca8  33ff                 xor edi, edi
// 00403caa  3bdf                 cmp ebx, edi
// 00403cac  7457                 je 0x403d05
// 00403cae  8b2db0a39e00         mov ebp, dword ptr [0x9ea3b0]
// 00403cb4  57                   push edi
// 00403cb5  57                   push edi
// 00403cb6  6aff                 push -1
// 00403cb8  53                   push ebx
// 00403cb9  57                   push edi
// 00403cba  6a03                 push 3
// 00403cbc  897c2430             mov dword ptr [esp + 0x30], edi
// 00403cc0  ffd5                 call ebp
// 00403cc2  8bf0                 mov esi, eax
// 00403cc4  8d4eff               lea ecx, [esi - 1]
// 00403cc7  51                   push ecx
// 00403cc8  57                   push edi
// 00403cc9  ff1544aa9e00         call dword ptr [0x9eaa44]
// 00403ccf  8bf8                 mov edi, eax
// 00403cd1  85ff                 test edi, edi
// 00403cd3  7423                 je 0x403cf8
// 00403cd5  56                   push esi
// 00403cd6  57                   push edi
// 00403cd7  6aff                 push -1
// 00403cd9  53                   push ebx
// 00403cda  6a00                 push 0
// 00403cdc  6a03                 push 3
// 00403cde  ffd5                 call ebp
// 00403ce0  3bc6                 cmp eax, esi
// 00403ce2  7414                 je 0x403cf8
// 00403ce4  57                   push edi
// 00403ce5  ff1540aa9e00         call dword ptr [0x9eaa40]
// 00403ceb  8d4c2418             lea ecx, [esp + 0x18]
// 00403cef  e8dcfbffff           call 0x4038d0
// 00403cf4  33ff                 xor edi, edi
// 00403cf6  eb09                 jmp 0x403d01
// 00403cf8  8d4c2418             lea ecx, [esp + 0x18]
// 00403cfc  e8cffbffff           call 0x4038d0
// 00403d01  8b742410             mov esi, dword ptr [esp + 0x10]
// 00403d05  893e                 mov dword ptr [esi], edi
// 00403d07  85ff                 test edi, edi
// 00403d09  750e                 jne 0x403d19
// 00403d0b  85db                 test ebx, ebx
// 00403d0d  740a                 je 0x403d19
// 00403d0f  680e000780           push 0x8007000e
// 00403d14  e8b7eeffff           call 0x402bd0
// 00403d19  5f                   pop edi
// 00403d1a  8bc6                 mov eax, esi
// 00403d1c  5e                   pop esi
// 00403d1d  5d                   pop ebp
// 00403d1e  5b                   pop ebx
// 00403d1f  59                   pop ecx
// 00403d20  c20400               ret 4
// copied from an identical function in another client (function ??4CComBSTR@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espeon_bstransiasign6671a088facdff20.cpp