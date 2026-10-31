// roc 2009-12 00403c30  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403c30
//
// 00403c30  51                   push ecx
// 00403c31  53                   push ebx
// 00403c32  55                   push ebp
// 00403c33  56                   push esi
// 00403c34  8bf1                 mov esi, ecx
// 00403c36  8b06                 mov eax, dword ptr [esi]
// 00403c38  57                   push edi
// 00403c39  50                   push eax
// 00403c3a  89742414             mov dword ptr [esp + 0x14], esi
// 00403c3e  ff1590ba9800         call dword ptr [0x98ba90]
// 00403c44  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403c48  33ff                 xor edi, edi
// 00403c4a  3bdf                 cmp ebx, edi
// 00403c4c  7457                 je 0x403ca5
// 00403c4e  8b2d40b29800         mov ebp, dword ptr [0x98b240]
// 00403c54  57                   push edi
// 00403c55  57                   push edi
// 00403c56  6aff                 push -1
// 00403c58  53                   push ebx
// 00403c59  57                   push edi
// 00403c5a  6a03                 push 3
// 00403c5c  897c2430             mov dword ptr [esp + 0x30], edi
// 00403c60  ffd5                 call ebp
// 00403c62  8bf0                 mov esi, eax
// 00403c64  8d4eff               lea ecx, [esi - 1]
// 00403c67  51                   push ecx
// 00403c68  57                   push edi
// 00403c69  ff1510ba9800         call dword ptr [0x98ba10]
// 00403c6f  8bf8                 mov edi, eax
// 00403c71  85ff                 test edi, edi
// 00403c73  7423                 je 0x403c98
// 00403c75  56                   push esi
// 00403c76  57                   push edi
// 00403c77  6aff                 push -1
// 00403c79  53                   push ebx
// 00403c7a  6a00                 push 0
// 00403c7c  6a03                 push 3
// 00403c7e  ffd5                 call ebp
// 00403c80  3bc6                 cmp eax, esi
// 00403c82  7414                 je 0x403c98
// 00403c84  57                   push edi
// 00403c85  ff1590ba9800         call dword ptr [0x98ba90]
// 00403c8b  8d4c2418             lea ecx, [esp + 0x18]
// 00403c8f  e8ecfbffff           call 0x403880
// 00403c94  33ff                 xor edi, edi
// 00403c96  eb09                 jmp 0x403ca1
// 00403c98  8d4c2418             lea ecx, [esp + 0x18]
// 00403c9c  e8dffbffff           call 0x403880
// 00403ca1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00403ca5  893e                 mov dword ptr [esi], edi
// 00403ca7  85ff                 test edi, edi
// 00403ca9  750e                 jne 0x403cb9
// 00403cab  85db                 test ebx, ebx
// 00403cad  740a                 je 0x403cb9
// 00403caf  680e000780           push 0x8007000e
// 00403cb4  e8c7eeffff           call 0x402b80
// 00403cb9  5f                   pop edi
// 00403cba  8bc6                 mov eax, esi
// 00403cbc  5e                   pop esi
// 00403cbd  5d                   pop ebp
// 00403cbe  5b                   pop ebx
// 00403cbf  59                   pop ecx
// 00403cc0  c20400               ret 4
// copied from an identical function in another client (function ??4CComBSTR@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espeon_bstransiasign6671a088facdff20.cpp