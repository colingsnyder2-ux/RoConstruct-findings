// roc 2009-12 008ce4a0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce4a0
//
// 008ce4a0  6aff                 push -1
// 008ce4a2  68e84d9600           push 0x964de8
// 008ce4a7  64a100000000         mov eax, dword ptr fs:[0]
// 008ce4ad  50                   push eax
// 008ce4ae  83ec30               sub esp, 0x30
// 008ce4b1  53                   push ebx
// 008ce4b2  55                   push ebp
// 008ce4b3  56                   push esi
// 008ce4b4  57                   push edi
// 008ce4b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ce4ba  33c4                 xor eax, esp
// 008ce4bc  50                   push eax
// 008ce4bd  8d442444             lea eax, [esp + 0x44]
// 008ce4c1  64a300000000         mov dword ptr fs:[0], eax
// 008ce4c7  e8d4bef4ff           call 0x81a3a0
// 008ce4cc  85c0                 test eax, eax
// 008ce4ce  750d                 jne 0x8ce4dd
// 008ce4d0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ce4d4  6a01                 push 1
// 008ce4d6  e8c51cf4ff           call 0x8101a0
// 008ce4db  eb28                 jmp 0x8ce505
// 008ce4dd  8b4160               mov eax, dword ptr [ecx + 0x60]
// 008ce4e0  394808               cmp dword ptr [eax + 8], ecx
// 008ce4e3  750b                 jne 0x8ce4f0
// 008ce4e5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ce4e9  e862c6f3ff           call 0x80ab50
// 008ce4ee  eb15                 jmp 0x8ce505
// 008ce4f0  394804               cmp dword ptr [eax + 4], ecx
// 008ce4f3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ce4f7  7507                 jne 0x8ce500
// 008ce4f9  e872c6f3ff           call 0x80ab70
// 008ce4fe  eb05                 jmp 0x8ce505
// 008ce500  e83bacf3ff           call 0x809140
// 008ce505  8b742460             mov esi, dword ptr [esp + 0x60]
// 008ce509  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008ce50d  2b742458             sub esi, dword ptr [esp + 0x58]
// 008ce511  2b7c245c             sub edi, dword ptr [esp + 0x5c]
// 008ce515  89442424             mov dword ptr [esp + 0x24], eax
// 008ce519  3bf7                 cmp esi, edi
// 008ce51b  7407                 je 0x8ce524
// 008ce51d  33c0                 xor eax, eax
// 008ce51f  e9d8010000           jmp 0x8ce6fc
// 008ce524  8d442418             lea eax, [esp + 0x18]
// 008ce528  50                   push eax
// 008ce529  57                   push edi
// 008ce52a  33ed                 xor ebp, ebp
// 008ce52c  56                   push esi
// 008ce52d  55                   push ebp
// 008ce52e  896c2428             mov dword ptr [esp + 0x28], ebp
// 008ce532  896c2424             mov dword ptr [esp + 0x24], ebp
// 008ce536  e805a6f3ff           call 0x808b40
// 008ce53b  83c410               add esp, 0x10
// 008ce53e  8bd8                 mov ebx, eax
// 008ce540  895c2430             mov dword ptr [esp + 0x30], ebx
// 008ce544  396c2418             cmp dword ptr [esp + 0x18], ebp
// 008ce548  74d3                 je 0x8ce51d
// 008ce54a  8d4c2414             lea ecx, [esp + 0x14]
// 008ce54e  51                   push ecx
// 008ce54f  57                   push edi
// 008ce550  56                   push esi
// 008ce551  55                   push ebp
// 008ce552  e8e9a5f3ff           call 0x808b40
// 008ce557  83c410               add esp, 0x10
// 008ce55a  89442428             mov dword ptr [esp + 0x28], eax
// 008ce55e  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008ce562  74b9                 je 0x8ce51d
// 008ce564  8d4c2434             lea ecx, [esp + 0x34]
// 008ce568  e8417f0500           call 0x9264ae
// 008ce56d  55                   push ebp
// 008ce56e  896c2450             mov dword ptr [esp + 0x50], ebp
// 008ce572  ff1554b19800         call dword ptr [0x98b154]
// 008ce578  50                   push eax
// 008ce579  8d4c2438             lea ecx, [esp + 0x38]
// 008ce57d  e81a7f0500           call 0x92649c
// 008ce582  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ce586  8b2d4cb19800         mov ebp, dword ptr [0x98b14c]
// 008ce58c  53                   push ebx
// 008ce58d  52                   push edx
// 008ce58e  ffd5                 call ebp
// 008ce590  8bd8                 mov ebx, eax
// 008ce592  8b442454             mov eax, dword ptr [esp + 0x54]
// 008ce596  85c0                 test eax, eax
// 008ce598  7403                 je 0x8ce59d
// 008ce59a  8b4004               mov eax, dword ptr [eax + 4]
// 008ce59d  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008ce5a1  8b542458             mov edx, dword ptr [esp + 0x58]
// 008ce5a5  682000cc00           push 0xcc0020
// 008ce5aa  51                   push ecx
// 008ce5ab  52                   push edx
// 008ce5ac  50                   push eax
// 008ce5ad  8b442448             mov eax, dword ptr [esp + 0x48]
// 008ce5b1  57                   push edi
// 008ce5b2  56                   push esi
// 008ce5b3  6a00                 push 0
// 008ce5b5  6a00                 push 0
// 008ce5b7  50                   push eax
// 008ce5b8  ff1548b19800         call dword ptr [0x98b148]
// 008ce5be  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ce5c2  53                   push ebx
// 008ce5c3  51                   push ecx
// 008ce5c4  ffd5                 call ebp
// 008ce5c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ce5ca  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ce5ce  8be8                 mov ebp, eax
// 008ce5d0  8954242c             mov dword ptr [esp + 0x2c], edx
// 008ce5d4  8d04b0               lea eax, [eax + esi*4]
// 008ce5d7  85ff                 test edi, edi
// 008ce5d9  7e4a                 jle 0x8ce625
// 008ce5db  897c2420             mov dword ptr [esp + 0x20], edi
// 008ce5df  83e804               sub eax, 4
// 008ce5e2  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ce5e6  89442414             mov dword ptr [esp + 0x14], eax
// 008ce5ea  85f6                 test esi, esi
// 008ce5ec  7e30                 jle 0x8ce61e
// 008ce5ee  8d0cbd00000000       lea ecx, [edi*4]
// 008ce5f5  8bc6                 mov eax, esi
// 008ce5f7  eb07                 jmp 0x8ce600
// 008ce5f9  8da42400000000       lea esp, [esp]
// 008ce600  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ce604  8b12                 mov edx, dword ptr [edx]
// 008ce606  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce60a  8913                 mov dword ptr [ebx], edx
// 008ce60c  8344241804           add dword ptr [esp + 0x18], 4
// 008ce611  014c2414             add dword ptr [esp + 0x14], ecx
// 008ce615  83e801               sub eax, 1
// 008ce618  75e6                 jne 0x8ce600
// 008ce61a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ce61e  836c242001           sub dword ptr [esp + 0x20], 1
// 008ce623  75ba                 jne 0x8ce5df
// 008ce625  8b442428             mov eax, dword ptr [esp + 0x28]
// 008ce629  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ce62d  50                   push eax
// 008ce62e  51                   push ecx
// 008ce62f  ff154cb19800         call dword ptr [0x98b14c]
// 008ce635  8b542424             mov edx, dword ptr [esp + 0x24]
// 008ce639  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ce63d  57                   push edi
// 008ce63e  56                   push esi
// 008ce63f  8bd8                 mov ebx, eax
// 008ce641  52                   push edx
// 008ce642  33c0                 xor eax, eax
// 008ce644  50                   push eax
// 008ce645  50                   push eax
// 008ce646  8d442448             lea eax, [esp + 0x48]
// 008ce64a  50                   push eax
// 008ce64b  e86028f4ff           call 0x810eb0
// 008ce650  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ce654  53                   push ebx
// 008ce655  51                   push ecx
// 008ce656  ff154cb19800         call dword ptr [0x98b14c]
// 008ce65c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ce660  8d57ff               lea edx, [edi - 1]
// 008ce663  0fafd6               imul edx, esi
// 008ce666  8d0490               lea eax, [eax + edx*4]
// 008ce669  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ce66d  85ff                 test edi, edi
// 008ce66f  7e32                 jle 0x8ce6a3
// 008ce671  897c2468             mov dword ptr [esp + 0x68], edi
// 008ce675  85f6                 test esi, esi
// 008ce677  7e18                 jle 0x8ce691
// 008ce679  8d14bd00000000       lea edx, [edi*4]
// 008ce680  8bce                 mov ecx, esi
// 008ce682  8b5d00               mov ebx, dword ptr [ebp]
// 008ce685  8918                 mov dword ptr [eax], ebx
// 008ce687  83c504               add ebp, 4
// 008ce68a  2bc2                 sub eax, edx
// 008ce68c  83e901               sub ecx, 1
// 008ce68f  75f1                 jne 0x8ce682
// 008ce691  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ce695  83c004               add eax, 4
// 008ce698  836c246801           sub dword ptr [esp + 0x68], 1
// 008ce69d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ce6a1  75d2                 jne 0x8ce675
// 008ce6a3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008ce6a7  8b442464             mov eax, dword ptr [esp + 0x64]
// 008ce6ab  8b742458             mov esi, dword ptr [esp + 0x58]
// 008ce6af  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008ce6b3  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008ce6b7  8b7f04               mov edi, dword ptr [edi + 4]
// 008ce6ba  6a04                 push 4
// 008ce6bc  2bc2                 sub eax, edx
// 008ce6be  50                   push eax
// 008ce6bf  2bce                 sub ecx, esi
// 008ce6c1  51                   push ecx
// 008ce6c2  52                   push edx
// 008ce6c3  56                   push esi
// 008ce6c4  8b742444             mov esi, dword ptr [esp + 0x44]
// 008ce6c8  6a00                 push 0
// 008ce6ca  56                   push esi
// 008ce6cb  6a00                 push 0
// 008ce6cd  6a00                 push 0
// 008ce6cf  57                   push edi
// 008ce6d0  ff15f8ca9800         call dword ptr [0x98caf8]
// 008ce6d6  56                   push esi
// 008ce6d7  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 008ce6dd  ffd6                 call esi
// 008ce6df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008ce6e3  51                   push ecx
// 008ce6e4  ffd6                 call esi
// 008ce6e6  8d4c2434             lea ecx, [esp + 0x34]
// 008ce6ea  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008ce6f2  e8b17d0500           call 0x9264a8
// 008ce6f7  b801000000           mov eax, 1
// 008ce6fc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ce700  64890d00000000       mov dword ptr fs:[0], ecx
// 008ce707  59                   pop ecx
// 008ce708  5f                   pop edi
// 008ce709  5e                   pop esi
// 008ce70a  5d                   pop ebp
// 008ce70b  5b                   pop ebx
// 008ce70c  83c43c               add esp, 0x3c
// 008ce70f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawRotatedImage@CXTPTabManagerItem@@AAEHPAVCDC@@VCRect@@PAVCXTPImageManagerIcon@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp