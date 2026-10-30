// roc 2009-12 00840d90  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840d90
//
// 00840d90  6aff                 push -1
// 00840d92  68a2ce9500           push 0x95cea2
// 00840d97  64a100000000         mov eax, dword ptr fs:[0]
// 00840d9d  50                   push eax
// 00840d9e  51                   push ecx
// 00840d9f  53                   push ebx
// 00840da0  56                   push esi
// 00840da1  57                   push edi
// 00840da2  a10052b600           mov eax, dword ptr [0xb65200]
// 00840da7  33c4                 xor eax, esp
// 00840da9  50                   push eax
// 00840daa  8d442414             lea eax, [esp + 0x14]
// 00840dae  64a300000000         mov dword ptr fs:[0], eax
// 00840db4  8bf1                 mov esi, ecx
// 00840db6  89742410             mov dword ptr [esp + 0x10], esi
// 00840dba  c706ac9b9f00         mov dword ptr [esi], 0x9f9bac
// 00840dc0  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00840dc6  33ff                 xor edi, edi
// 00840dc8  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 00840dd0  85c0                 test eax, eax
// 00840dd2  7e39                 jle 0x840e0d
// 00840dd4  85ff                 test edi, edi
// 00840dd6  0f8c83000000         jl 0x840e5f
// 00840ddc  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 00840de2  7d7b                 jge 0x840e5f
// 00840de4  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 00840dea  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00840ded  8d04b8               lea eax, [eax + edi*4]
// 00840df0  85db                 test ebx, ebx
// 00840df2  7410                 je 0x840e04
// 00840df4  8bcb                 mov ecx, ebx
// 00840df6  e835f9ffff           call 0x840730
// 00840dfb  53                   push ebx
// 00840dfc  e8592afbff           call 0x7f385a
// 00840e01  83c404               add esp, 4
// 00840e04  47                   inc edi
// 00840e05  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 00840e0b  7cc7                 jl 0x840dd4
// 00840e0d  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00840e13  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00840e18  e843fdffff           call 0x840b60
// 00840e1d  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00840e23  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00840e28  e8d75a0e00           call 0x926904
// 00840e2d  8d8e88000000         lea ecx, [esi + 0x88]
// 00840e33  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00840e38  e8c75a0e00           call 0x926904
// 00840e3d  8bce                 mov ecx, esi
// 00840e3f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00840e47  e8105a0e00           call 0x92685c
// 00840e4c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00840e50  64890d00000000       mov dword ptr fs:[0], ecx
// 00840e57  59                   pop ecx
// 00840e58  5f                   pop edi
// 00840e59  5e                   pop esi
// 00840e5a  5b                   pop ebx
// 00840e5b  83c410               add esp, 0x10
// 00840e5e  c3                   ret 
// 00840e5f  e8a82cfbff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPCustomizeCommandsPage@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp