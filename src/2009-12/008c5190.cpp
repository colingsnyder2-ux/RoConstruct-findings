// roc 2009-12 008c5190  unit: CXTPCustomizeToolbarsPage  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5190
//
// 008c5190  6aff                 push -1
// 008c5192  686b449600           push 0x96446b
// 008c5197  64a100000000         mov eax, dword ptr fs:[0]
// 008c519d  50                   push eax
// 008c519e  81ec88000000         sub esp, 0x88
// 008c51a4  53                   push ebx
// 008c51a5  55                   push ebp
// 008c51a6  56                   push esi
// 008c51a7  57                   push edi
// 008c51a8  a10052b600           mov eax, dword ptr [0xb65200]
// 008c51ad  33c4                 xor eax, esp
// 008c51af  50                   push eax
// 008c51b0  8d84249c000000       lea eax, [esp + 0x9c]
// 008c51b7  64a300000000         mov dword ptr fs:[0], eax
// 008c51bd  8bf1                 mov esi, ecx
// 008c51bf  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c51c5  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 008c51cb  6a00                 push 0
// 008c51cd  6a00                 push 0
// 008c51cf  6888010000           push 0x188
// 008c51d4  50                   push eax
// 008c51d5  ffd5                 call ebp
// 008c51d7  8bd8                 mov ebx, eax
// 008c51d9  83fbff               cmp ebx, -1
// 008c51dc  0f8410010000         je 0x8c52f2
// 008c51e2  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c51e8  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c51ee  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 008c51f4  6a00                 push 0
// 008c51f6  53                   push ebx
// 008c51f7  6899010000           push 0x199
// 008c51fc  52                   push edx
// 008c51fd  897c2424             mov dword ptr [esp + 0x24], edi
// 008c5201  ffd5                 call ebp
// 008c5203  8be8                 mov ebp, eax
// 008c5205  85ed                 test ebp, ebp
// 008c5207  0f8ce5000000         jl 0x8c52f2
// 008c520d  3baf84000000         cmp ebp, dword ptr [edi + 0x84]
// 008c5213  0f8dd9000000         jge 0x8c52f2
// 008c5219  55                   push ebp
// 008c521a  8bcf                 mov ecx, edi
// 008c521c  e8bffaf4ff           call 0x814ce0
// 008c5221  8bf8                 mov edi, eax
// 008c5223  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008c522a  0f85c2000000         jne 0x8c52f2
// 008c5230  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c5234  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c523a  57                   push edi
// 008c523b  50                   push eax
// 008c523c  51                   push ecx
// 008c523d  8d4c2424             lea ecx, [esp + 0x24]
// 008c5241  e8baa5faff           call 0x86f800
// 008c5246  8d4c2418             lea ecx, [esp + 0x18]
// 008c524a  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 008c5255  e8cee7f2ff           call 0x7f3a28
// 008c525a  83f801               cmp eax, 1
// 008c525d  7572                 jne 0x8c52d1
// 008c525f  8d8c2490000000       lea ecx, [esp + 0x90]
// 008c5266  ff1580de9800         call dword ptr [0x98de80]
// 008c526c  50                   push eax
// 008c526d  8bcf                 mov ecx, edi
// 008c526f  e8fcebf4ff           call 0x813e70
// 008c5274  81c68c000000         add esi, 0x8c
// 008c527a  53                   push ebx
// 008c527b  8bce                 mov ecx, esi
// 008c527d  e80e76b4ff           call 0x40c890
// 008c5282  8d542414             lea edx, [esp + 0x14]
// 008c5286  52                   push edx
// 008c5287  8bcf                 mov ecx, edi
// 008c5289  e8f282f3ff           call 0x7fd580
// 008c528e  8bc8                 mov ecx, eax
// 008c5290  ff1580de9800         call dword ptr [0x98de80]
// 008c5296  50                   push eax
// 008c5297  53                   push ebx
// 008c5298  8bce                 mov ecx, esi
// 008c529a  e81176b4ff           call 0x40c8b0
// 008c529f  8d4c2414             lea ecx, [esp + 0x14]
// 008c52a3  8bd8                 mov ebx, eax
// 008c52a5  ff15c0de9800         call dword ptr [0x98dec0]
// 008c52ab  8b07                 mov eax, dword ptr [edi]
// 008c52ad  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008c52b3  8bcf                 mov ecx, edi
// 008c52b5  ffd2                 call edx
// 008c52b7  50                   push eax
// 008c52b8  53                   push ebx
// 008c52b9  8bce                 mov ecx, esi
// 008c52bb  e8ca1a0600           call 0x926d8a
// 008c52c0  55                   push ebp
// 008c52c1  53                   push ebx
// 008c52c2  8bce                 mov ecx, esi
// 008c52c4  e817b5f7ff           call 0x8407e0
// 008c52c9  53                   push ebx
// 008c52ca  8bce                 mov ecx, esi
// 008c52cc  e88f48f3ff           call 0x7f9b60
// 008c52d1  8d8c2490000000       lea ecx, [esp + 0x90]
// 008c52d8  c78424a4000000ffffffff mov dword ptr [esp + 0xa4], 0xffffffff
// 008c52e3  ff15c0de9800         call dword ptr [0x98dec0]
// 008c52e9  8d4c2418             lea ecx, [esp + 0x18]
// 008c52ed  e89eeef2ff           call 0x7f4190
// 008c52f2  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008c52f9  64890d00000000       mov dword ptr fs:[0], ecx
// 008c5300  59                   pop ecx
// 008c5301  5f                   pop edi
// 008c5302  5e                   pop esi
// 008c5303  5d                   pop ebp
// 008c5304  5b                   pop ebx
// 008c5305  81c494000000         add esp, 0x94
// 008c530b  c3                   ret 
// copied from an identical function in another client (function ?OnRenameToolbar@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeToolbarsPage.cpp