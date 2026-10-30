// roc 2012-06 00a4c6e0  unit: CXTPTabManagerItem  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c6e0
//
// 00a4c6e0  6aff                 push -1
// 00a4c6e2  68396eae00           push 0xae6e39
// 00a4c6e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a4c6ed  50                   push eax
// 00a4c6ee  51                   push ecx
// 00a4c6ef  53                   push ebx
// 00a4c6f0  56                   push esi
// 00a4c6f1  57                   push edi
// 00a4c6f2  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4c6f7  33c4                 xor eax, esp
// 00a4c6f9  50                   push eax
// 00a4c6fa  8d442414             lea eax, [esp + 0x14]
// 00a4c6fe  64a300000000         mov dword ptr fs:[0], eax
// 00a4c704  8bf1                 mov esi, ecx
// 00a4c706  89742410             mov dword ptr [esp + 0x10], esi
// 00a4c70a  c706ac30c200         mov dword ptr [esi], 0xc230ac
// 00a4c710  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a4c713  33ff                 xor edi, edi
// 00a4c715  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 00a4c71d  85c0                 test eax, eax
// 00a4c71f  7e30                 jle 0xa4c751
// 00a4c721  85ff                 test edi, edi
// 00a4c723  0f8cac000000         jl 0xa4c7d5
// 00a4c729  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00a4c72c  0f8da3000000         jge 0xa4c7d5
// 00a4c732  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a4c735  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00a4c738  8b13                 mov edx, dword ptr [ebx]
// 00a4c73a  8d04b8               lea eax, [eax + edi*4]
// 00a4c73d  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00a4c740  8bcb                 mov ecx, ebx
// 00a4c742  ffd0                 call eax
// 00a4c744  8bcb                 mov ecx, ebx
// 00a4c746  e83f5ff3ff           call 0x98268a
// 00a4c74b  47                   inc edi
// 00a4c74c  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00a4c74f  7cd0                 jl 0xa4c721
// 00a4c751  33ff                 xor edi, edi
// 00a4c753  397e70               cmp dword ptr [esi + 0x70], edi
// 00a4c756  7e23                 jle 0xa4c77b
// 00a4c758  85ff                 test edi, edi
// 00a4c75a  7c79                 jl 0xa4c7d5
// 00a4c75c  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00a4c75f  7d74                 jge 0xa4c7d5
// 00a4c761  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a4c764  8d04b9               lea eax, [ecx + edi*4]
// 00a4c767  8b08                 mov ecx, dword ptr [eax]
// 00a4c769  85c9                 test ecx, ecx
// 00a4c76b  7408                 je 0xa4c775
// 00a4c76d  8b11                 mov edx, dword ptr [ecx]
// 00a4c76f  8b02                 mov eax, dword ptr [edx]
// 00a4c771  6a01                 push 1
// 00a4c773  ffd0                 call eax
// 00a4c775  47                   inc edi
// 00a4c776  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00a4c779  7cdd                 jl 0xa4c758
// 00a4c77b  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 00a4c781  85ff                 test edi, edi
// 00a4c783  7410                 je 0xa4c795
// 00a4c785  8bcf                 mov ecx, edi
// 00a4c787  e804eeffff           call 0xa4b590
// 00a4c78c  57                   push edi
// 00a4c78d  e88259f3ff           call 0x982114
// 00a4c792  83c404               add esp, 4
// 00a4c795  8d4e7c               lea ecx, [esi + 0x7c]
// 00a4c798  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00a4c79d  e82e96faff           call 0x9f5dd0
// 00a4c7a2  8d4e68               lea ecx, [esi + 0x68]
// 00a4c7a5  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00a4c7aa  e871fbffff           call 0xa4c320
// 00a4c7af  8d4e54               lea ecx, [esi + 0x54]
// 00a4c7b2  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00a4c7b7  e8041df9ff           call 0x9de4c0
// 00a4c7bc  c7061063c100         mov dword ptr [esi], 0xc16310
// 00a4c7c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4c7c6  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4c7cd  59                   pop ecx
// 00a4c7ce  5f                   pop edi
// 00a4c7cf  5e                   pop esi
// 00a4c7d0  5b                   pop ebx
// 00a4c7d1  83c410               add esp, 0x10
// 00a4c7d4  c3                   ret 
// 00a4c7d5  e8e65bf3ff           call 0x9823c0
// copied from an identical function in another client (function ??1CXTPTabManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp