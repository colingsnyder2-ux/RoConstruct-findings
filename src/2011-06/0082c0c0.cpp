// roc 2011-06 0082c0c0  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082c0c0
//
// 0082c0c0  56                   push esi
// 0082c0c1  8b742408             mov esi, dword ptr [esp + 8]
// 0082c0c5  57                   push edi
// 0082c0c6  33ff                 xor edi, edi
// 0082c0c8  3bf7                 cmp esi, edi
// 0082c0ca  7505                 jne 0x82c0d1
// 0082c0cc  5f                   pop edi
// 0082c0cd  33c0                 xor eax, eax
// 0082c0cf  5e                   pop esi
// 0082c0d0  c3                   ret 
// 0082c0d1  e832061a00           call 0x9cc708
// 0082c0d6  83c058               add eax, 0x58
// 0082c0d9  8378047b             cmp dword ptr [eax + 4], 0x7b
// 0082c0dd  7521                 jne 0x82c100
// 0082c0df  83780cff             cmp dword ptr [eax + 0xc], -1
// 0082c0e3  751b                 jne 0x82c100
// 0082c0e5  8bce                 mov ecx, esi
// 0082c0e7  e8a4e9feff           call 0x81aa90
// 0082c0ec  85c0                 test eax, eax
// 0082c0ee  7410                 je 0x82c100
// 0082c0f0  6a01                 push 1
// 0082c0f2  8bce                 mov ecx, esi
// 0082c0f4  e897e9feff           call 0x81aa90
// 0082c0f9  8bc8                 mov ecx, eax
// 0082c0fb  e8c0f5ffff           call 0x82b6c0
// 0082c100  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082c104  3bc7                 cmp eax, edi
// 0082c106  7507                 jne 0x82c10f
// 0082c108  8bce                 mov ecx, esi
// 0082c10a  e86115ffff           call 0x81d670
// 0082c10f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082c113  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0082c119  898e08010000         mov dword ptr [esi + 0x108], ecx
// 0082c11f  3bc7                 cmp eax, edi
// 0082c121  7417                 je 0x82c13a
// 0082c123  8bc8                 mov ecx, eax
// 0082c125  e8f4041a00           call 0x9cc61e
// 0082c12a  a900104000           test eax, 0x401000
// 0082c12f  7409                 je 0x82c13a
// 0082c131  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082c135  83c808               or eax, 8
// 0082c138  eb04                 jmp 0x82c13e
// 0082c13a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082c13e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0082c146  89be54010000         mov dword ptr [esi + 0x154], edi
// 0082c14c  a900010000           test eax, 0x100
// 0082c151  740e                 je 0x82c161
// 0082c153  8d54240c             lea edx, [esp + 0xc]
// 0082c157  899654010000         mov dword ptr [esi + 0x154], edx
// 0082c15d  897c240c             mov dword ptr [esp + 0xc], edi
// 0082c161  8bc8                 mov ecx, eax
// 0082c163  83e102               and ecx, 2
// 0082c166  898e20010000         mov dword ptr [esi + 0x120], ecx
// 0082c16c  8bc8                 mov ecx, eax
// 0082c16e  83e108               and ecx, 8
// 0082c171  83c910               or ecx, 0x10
// 0082c174  8bd0                 mov edx, eax
// 0082c176  c1e903               shr ecx, 3
// 0082c179  53                   push ebx
// 0082c17a  83e001               and eax, 1
// 0082c17d  81e280000000         and edx, 0x80
// 0082c183  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 0082c189  8bd8                 mov ebx, eax
// 0082c18b  68b0cb8000           push 0x80cbb0
// 0082c190  b9e88ed100           mov ecx, 0xd18ee8
// 0082c195  899624010000         mov dword ptr [esi + 0x124], edx
// 0082c19b  899e28010000         mov dword ptr [esi + 0x128], ebx
// 0082c1a1  e81e041a00           call 0x9cc5c4
// 0082c1a6  8bf8                 mov edi, eax
// 0082c1a8  85ff                 test edi, edi
// 0082c1aa  7505                 jne 0x82c1b1
// 0082c1ac  e859e1fdff           call 0x80a30a
// 0082c1b1  8bcf                 mov ecx, edi
// 0082c1b3  85db                 test ebx, ebx
// 0082c1b5  750d                 jne 0x82c1c4
// 0082c1b7  e8a4450500           call 0x880760
// 0082c1bc  ff15401ba400         call dword ptr [0xa41b40]
// 0082c1c2  eb0e                 jmp 0x82c1d2
// 0082c1c4  e817460500           call 0x8807e0
// 0082c1c9  6a01                 push 1
// 0082c1cb  8bcf                 mov ecx, edi
// 0082c1cd  e8be450500           call 0x880790
// 0082c1d2  8b542424             mov edx, dword ptr [esp + 0x24]
// 0082c1d6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082c1da  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082c1de  52                   push edx
// 0082c1df  50                   push eax
// 0082c1e0  51                   push ecx
// 0082c1e1  8bce                 mov ecx, esi
// 0082c1e3  c7474001000000       mov dword ptr [edi + 0x40], 1
// 0082c1ea  e8218d0200           call 0x854f10
// 0082c1ef  85c0                 test eax, eax
// 0082c1f1  7504                 jne 0x82c1f7
// 0082c1f3  5b                   pop ebx
// 0082c1f4  5f                   pop edi
// 0082c1f5  5e                   pop esi
// 0082c1f6  c3                   ret 
// 0082c1f7  8bce                 mov ecx, esi
// 0082c1f9  e822ddffff           call 0x829f20
// 0082c1fe  85db                 test ebx, ebx
// 0082c200  7409                 je 0x82c20b
// 0082c202  6a00                 push 0
// 0082c204  8bcf                 mov ecx, edi
// 0082c206  e885450500           call 0x880790
// 0082c20b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082c20f  5b                   pop ebx
// 0082c210  5f                   pop edi
// 0082c211  5e                   pop esi
// 0082c212  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
