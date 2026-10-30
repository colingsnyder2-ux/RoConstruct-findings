// roc 2009-06 00765fb0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765fb0
//
// 00765fb0  6aff                 push -1
// 00765fb2  68528b8700           push 0x878b52
// 00765fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00765fbd  50                   push eax
// 00765fbe  51                   push ecx
// 00765fbf  53                   push ebx
// 00765fc0  56                   push esi
// 00765fc1  57                   push edi
// 00765fc2  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00765fc7  33c4                 xor eax, esp
// 00765fc9  50                   push eax
// 00765fca  8d442414             lea eax, [esp + 0x14]
// 00765fce  64a300000000         mov dword ptr fs:[0], eax
// 00765fd4  8bf1                 mov esi, ecx
// 00765fd6  89742410             mov dword ptr [esp + 0x10], esi
// 00765fda  c70604978f00         mov dword ptr [esi], 0x8f9704
// 00765fe0  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00765fe6  33ff                 xor edi, edi
// 00765fe8  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 00765ff0  85c0                 test eax, eax
// 00765ff2  7e39                 jle 0x76602d
// 00765ff4  85ff                 test edi, edi
// 00765ff6  0f8c83000000         jl 0x76607f
// 00765ffc  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 00766002  7d7b                 jge 0x76607f
// 00766004  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0076600a  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0076600d  8d04b8               lea eax, [eax + edi*4]
// 00766010  85db                 test ebx, ebx
// 00766012  7410                 je 0x766024
// 00766014  8bcb                 mov ecx, ebx
// 00766016  e835f9ffff           call 0x765950
// 0076601b  53                   push ebx
// 0076601c  e8112afbff           call 0x718a32
// 00766021  83c404               add esp, 4
// 00766024  47                   inc edi
// 00766025  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 0076602b  7cc7                 jl 0x765ff4
// 0076602d  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00766033  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00766038  e843fdffff           call 0x765d80
// 0076603d  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00766043  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00766048  e84b630e00           call 0x84c398
// 0076604d  8d8e88000000         lea ecx, [esi + 0x88]
// 00766053  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00766058  e83b630e00           call 0x84c398
// 0076605d  8bce                 mov ecx, esi
// 0076605f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00766067  e884620e00           call 0x84c2f0
// 0076606c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00766070  64890d00000000       mov dword ptr fs:[0], ecx
// 00766077  59                   pop ecx
// 00766078  5f                   pop edi
// 00766079  5e                   pop esi
// 0076607a  5b                   pop ebx
// 0076607b  83c410               add esp, 0x10
// 0076607e  c3                   ret 
// 0076607f  e8602cfbff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTPCustomizeCommandsPage@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp