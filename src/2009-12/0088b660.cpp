// roc 2009-12 0088b660  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b660
//
// 0088b660  6aff                 push -1
// 0088b662  68fb0d9600           push 0x960dfb
// 0088b667  64a100000000         mov eax, dword ptr fs:[0]
// 0088b66d  50                   push eax
// 0088b66e  56                   push esi
// 0088b66f  57                   push edi
// 0088b670  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b675  33c4                 xor eax, esp
// 0088b677  50                   push eax
// 0088b678  8d44240c             lea eax, [esp + 0xc]
// 0088b67c  64a300000000         mov dword ptr fs:[0], eax
// 0088b682  8bf1                 mov esi, ecx
// 0088b684  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0088b68a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088b68e  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0088b694  85c9                 test ecx, ecx
// 0088b696  7412                 je 0x88b6aa
// 0088b698  8b01                 mov eax, dword ptr [ecx]
// 0088b69a  8b10                 mov edx, dword ptr [eax]
// 0088b69c  6a01                 push 1
// 0088b69e  ffd2                 call edx
// 0088b6a0  c786a001000000000000 mov dword ptr [esi + 0x1a0], 0
// 0088b6aa  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088b6b0  85c0                 test eax, eax
// 0088b6b2  7479                 je 0x88b72d
// 0088b6b4  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b6b8  7473                 je 0x88b72d
// 0088b6ba  85ff                 test edi, edi
// 0088b6bc  746f                 je 0x88b72d
// 0088b6be  6a10                 push 0x10
// 0088b6c0  e89b81f6ff           call 0x7f3860
// 0088b6c5  83c404               add esp, 4
// 0088b6c8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088b6cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088b6d4  85c0                 test eax, eax
// 0088b6d6  7409                 je 0x88b6e1
// 0088b6d8  8bc8                 mov ecx, eax
// 0088b6da  e8e1d9f6ff           call 0x7f90c0
// 0088b6df  eb02                 jmp 0x88b6e3
// 0088b6e1  33c0                 xor eax, eax
// 0088b6e3  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 0088b6e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088b6f1  8986a0010000         mov dword ptr [esi + 0x1a0], eax
// 0088b6f7  85d2                 test edx, edx
// 0088b6f9  7403                 je 0x88b6fe
// 0088b6fb  8b5220               mov edx, dword ptr [edx + 0x20]
// 0088b6fe  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 0088b704  51                   push ecx
// 0088b705  52                   push edx
// 0088b706  8bc8                 mov ecx, eax
// 0088b708  e863daf6ff           call 0x7f9170
// 0088b70d  85c0                 test eax, eax
// 0088b70f  7d1c                 jge 0x88b72d
// 0088b711  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0088b717  85c9                 test ecx, ecx
// 0088b719  7412                 je 0x88b72d
// 0088b71b  8b11                 mov edx, dword ptr [ecx]
// 0088b71d  8b02                 mov eax, dword ptr [edx]
// 0088b71f  6a01                 push 1
// 0088b721  ffd0                 call eax
// 0088b723  c786a001000000000000 mov dword ptr [esi + 0x1a0], 0
// 0088b72d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088b731  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b738  59                   pop ecx
// 0088b739  5f                   pop edi
// 0088b73a  5e                   pop esi
// 0088b73b  83c40c               add esp, 0xc
// 0088b73e  c20400               ret 4
// copied from an identical function in another client (function ?EnableShellAutoComplete@CXTPControlEdit@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp