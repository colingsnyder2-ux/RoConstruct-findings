// roc 2012-06 00404eb0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404eb0
//
// 00404eb0  51                   push ecx
// 00404eb1  53                   push ebx
// 00404eb2  55                   push ebp
// 00404eb3  56                   push esi
// 00404eb4  8bf1                 mov esi, ecx
// 00404eb6  8b06                 mov eax, dword ptr [esi]
// 00404eb8  57                   push edi
// 00404eb9  50                   push eax
// 00404eba  89742414             mov dword ptr [esp + 0x14], esi
// 00404ebe  ff15042bb200         call dword ptr [0xb22b04]
// 00404ec4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00404ec8  33ff                 xor edi, edi
// 00404eca  3bdf                 cmp ebx, edi
// 00404ecc  7457                 je 0x404f25
// 00404ece  8b2dcc21b200         mov ebp, dword ptr [0xb221cc]
// 00404ed4  57                   push edi
// 00404ed5  57                   push edi
// 00404ed6  6aff                 push -1
// 00404ed8  53                   push ebx
// 00404ed9  57                   push edi
// 00404eda  6a03                 push 3
// 00404edc  897c2430             mov dword ptr [esp + 0x30], edi
// 00404ee0  ffd5                 call ebp
// 00404ee2  8bf0                 mov esi, eax
// 00404ee4  8d4eff               lea ecx, [esi - 1]
// 00404ee7  51                   push ecx
// 00404ee8  57                   push edi
// 00404ee9  ff15082bb200         call dword ptr [0xb22b08]
// 00404eef  8bf8                 mov edi, eax
// 00404ef1  85ff                 test edi, edi
// 00404ef3  7423                 je 0x404f18
// 00404ef5  56                   push esi
// 00404ef6  57                   push edi
// 00404ef7  6aff                 push -1
// 00404ef9  53                   push ebx
// 00404efa  6a00                 push 0
// 00404efc  6a03                 push 3
// 00404efe  ffd5                 call ebp
// 00404f00  3bc6                 cmp eax, esi
// 00404f02  7414                 je 0x404f18
// 00404f04  57                   push edi
// 00404f05  ff15042bb200         call dword ptr [0xb22b04]
// 00404f0b  8d4c2418             lea ecx, [esp + 0x18]
// 00404f0f  e84cfbffff           call 0x404a60
// 00404f14  33ff                 xor edi, edi
// 00404f16  eb09                 jmp 0x404f21
// 00404f18  8d4c2418             lea ecx, [esp + 0x18]
// 00404f1c  e83ffbffff           call 0x404a60
// 00404f21  8b742410             mov esi, dword ptr [esp + 0x10]
// 00404f25  893e                 mov dword ptr [esi], edi
// 00404f27  85ff                 test edi, edi
// 00404f29  750e                 jne 0x404f39
// 00404f2b  85db                 test ebx, ebx
// 00404f2d  740a                 je 0x404f39
// 00404f2f  680e000780           push 0x8007000e
// 00404f34  e877f2ffff           call 0x4041b0
// 00404f39  5f                   pop edi
// 00404f3a  8bc6                 mov eax, esi
// 00404f3c  5e                   pop esi
// 00404f3d  5d                   pop ebp
// 00404f3e  5b                   pop ebx
// 00404f3f  59                   pop ecx
// 00404f40  c20400               ret 4
// copied from an identical function in another client (function ??4CComBSTR@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espeon_bstransiasign6671a088facdff20.cpp