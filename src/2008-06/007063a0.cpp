// from server: 100% by auto
// roc 2008-06 007063a0  unit: CXTPTabClientWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007063a0
//
// 007063a0  51                   push ecx
// 007063a1  53                   push ebx
// 007063a2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007063a6  56                   push esi
// 007063a7  8d442408             lea eax, [esp + 8]
// 007063ab  50                   push eax
// 007063ac  53                   push ebx
// 007063ad  8bf1                 mov esi, ecx
// 007063af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007063b7  e884f7ffff           call 0x705b40
// 007063bc  85c0                 test eax, eax
// 007063be  7473                 je 0x706433
// 007063c0  57                   push edi
// 007063c1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007063c5  85ff                 test edi, edi
// 007063c7  7469                 je 0x706432
// 007063c9  8d833ddcffff         lea eax, [ebx - 0x23c3]
// 007063cf  83f803               cmp eax, 3
// 007063d2  775e                 ja 0x706432
// 007063d4  ff24853c647000       jmp dword ptr [eax*4 + 0x70643c]
// 007063db  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007063de  6a04                 push 4
// 007063e0  51                   push ecx
// 007063e1  57                   push edi
// 007063e2  8bce                 mov ecx, esi
// 007063e4  e837f8ffff           call 0x705c20
// 007063e9  5f                   pop edi
// 007063ea  5e                   pop esi
// 007063eb  5b                   pop ebx
// 007063ec  59                   pop ecx
// 007063ed  c20400               ret 4
// 007063f0  8b5760               mov edx, dword ptr [edi + 0x60]
// 007063f3  6a03                 push 3
// 007063f5  52                   push edx
// 007063f6  57                   push edi
// 007063f7  8bce                 mov ecx, esi
// 007063f9  e822f8ffff           call 0x705c20
// 007063fe  5f                   pop edi
// 007063ff  5e                   pop esi
// 00706400  5b                   pop ebx
// 00706401  59                   pop ecx
// 00706402  c20400               ret 4
// 00706405  8b4760               mov eax, dword ptr [edi + 0x60]
// 00706408  50                   push eax
// 00706409  8bce                 mov ecx, esi
// 0070640b  e850e8ffff           call 0x704c60
// 00706410  48                   dec eax
// 00706411  eb0c                 jmp 0x70641f
// 00706413  8b4760               mov eax, dword ptr [edi + 0x60]
// 00706416  50                   push eax
// 00706417  8bce                 mov ecx, esi
// 00706419  e842e8ffff           call 0x704c60
// 0070641e  40                   inc eax
// 0070641f  6a02                 push 2
// 00706421  50                   push eax
// 00706422  8bce                 mov ecx, esi
// 00706424  e8e7d6ffff           call 0x703b10
// 00706429  50                   push eax
// 0070642a  57                   push edi
// 0070642b  8bce                 mov ecx, esi
// 0070642d  e8eef7ffff           call 0x705c20
// 00706432  5f                   pop edi
// 00706433  5e                   pop esi
// 00706434  5b                   pop ebx
// 00706435  59                   pop ecx
// 00706436  c20400               ret 4
// 00706439  8d4900               lea ecx, [ecx]
// 0070643c  0564700013           add eax, 0x13007064
// 00706441  647000               jo 0x706444
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWorkspaceCommand@CXTPTabClientWnd@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPTabClientWnd.cpp
