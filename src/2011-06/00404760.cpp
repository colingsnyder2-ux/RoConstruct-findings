// roc 2011-06 00404760  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404760
//
// 00404760  51                   push ecx
// 00404761  53                   push ebx
// 00404762  55                   push ebp
// 00404763  56                   push esi
// 00404764  8bf1                 mov esi, ecx
// 00404766  8b06                 mov eax, dword ptr [esi]
// 00404768  57                   push edi
// 00404769  50                   push eax
// 0040476a  89742414             mov dword ptr [esp + 0x14], esi
// 0040476e  ff15000ba400         call dword ptr [0xa40b00]
// 00404774  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00404778  33ff                 xor edi, edi
// 0040477a  3bdf                 cmp ebx, edi
// 0040477c  7457                 je 0x4047d5
// 0040477e  8b2d9003a400         mov ebp, dword ptr [0xa40390]
// 00404784  57                   push edi
// 00404785  57                   push edi
// 00404786  6aff                 push -1
// 00404788  53                   push ebx
// 00404789  57                   push edi
// 0040478a  6a03                 push 3
// 0040478c  897c2430             mov dword ptr [esp + 0x30], edi
// 00404790  ffd5                 call ebp
// 00404792  8bf0                 mov esi, eax
// 00404794  8d4eff               lea ecx, [esi - 1]
// 00404797  51                   push ecx
// 00404798  57                   push edi
// 00404799  ff15fc0aa400         call dword ptr [0xa40afc]
// 0040479f  8bf8                 mov edi, eax
// 004047a1  85ff                 test edi, edi
// 004047a3  7423                 je 0x4047c8
// 004047a5  56                   push esi
// 004047a6  57                   push edi
// 004047a7  6aff                 push -1
// 004047a9  53                   push ebx
// 004047aa  6a00                 push 0
// 004047ac  6a03                 push 3
// 004047ae  ffd5                 call ebp
// 004047b0  3bc6                 cmp eax, esi
// 004047b2  7414                 je 0x4047c8
// 004047b4  57                   push edi
// 004047b5  ff15000ba400         call dword ptr [0xa40b00]
// 004047bb  8d4c2418             lea ecx, [esp + 0x18]
// 004047bf  e8fcfaffff           call 0x4042c0
// 004047c4  33ff                 xor edi, edi
// 004047c6  eb09                 jmp 0x4047d1
// 004047c8  8d4c2418             lea ecx, [esp + 0x18]
// 004047cc  e8effaffff           call 0x4042c0
// 004047d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004047d5  893e                 mov dword ptr [esi], edi
// 004047d7  85ff                 test edi, edi
// 004047d9  750e                 jne 0x4047e9
// 004047db  85db                 test ebx, ebx
// 004047dd  740a                 je 0x4047e9
// 004047df  680e000780           push 0x8007000e
// 004047e4  e8b7edffff           call 0x4035a0
// 004047e9  5f                   pop edi
// 004047ea  8bc6                 mov eax, esi
// 004047ec  5e                   pop esi
// 004047ed  5d                   pop ebp
// 004047ee  5b                   pop ebx
// 004047ef  59                   pop ecx
// 004047f0  c20400               ret 4
// copied from an identical function in another client (function ??4CComBSTR@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espeon_bstransiasign6671a088facdff20.cpp