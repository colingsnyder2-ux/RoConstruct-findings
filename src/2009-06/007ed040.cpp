// roc 2009-06 007ed040  unit: VCEdit::?$CXTMaskEditT  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed040
//
// 007ed040  6aff                 push -1
// 007ed042  6899068800           push 0x880699
// 007ed047  64a100000000         mov eax, dword ptr fs:[0]
// 007ed04d  50                   push eax
// 007ed04e  83ec0c               sub esp, 0xc
// 007ed051  53                   push ebx
// 007ed052  55                   push ebp
// 007ed053  56                   push esi
// 007ed054  57                   push edi
// 007ed055  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ed05a  33c4                 xor eax, esp
// 007ed05c  50                   push eax
// 007ed05d  8d442420             lea eax, [esp + 0x20]
// 007ed061  64a300000000         mov dword ptr fs:[0], eax
// 007ed067  8bd9                 mov ebx, ecx
// 007ed069  8b442430             mov eax, dword ptr [esp + 0x30]
// 007ed06d  8d5001               lea edx, [eax + 1]
// 007ed070  8a08                 mov cl, byte ptr [eax]
// 007ed072  40                   inc eax
// 007ed073  84c9                 test cl, cl
// 007ed075  75f9                 jne 0x7ed070
// 007ed077  8b742434             mov esi, dword ptr [esp + 0x34]
// 007ed07b  2bc2                 sub eax, edx
// 007ed07d  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ed081  56                   push esi
// 007ed082  8d442438             lea eax, [esp + 0x38]
// 007ed086  8dab80000000         lea ebp, [ebx + 0x80]
// 007ed08c  50                   push eax
// 007ed08d  8bcd                 mov ecx, ebp
// 007ed08f  ff1510f48900         call dword ptr [0x89f410]
// 007ed095  33ff                 xor edi, edi
// 007ed097  50                   push eax
// 007ed098  8bcd                 mov ecx, ebp
// 007ed09a  897c242c             mov dword ptr [esp + 0x2c], edi
// 007ed09e  ff1508fa8900         call dword ptr [0x89fa08]
// 007ed0a4  8d4c2434             lea ecx, [esp + 0x34]
// 007ed0a8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 007ed0b0  ff1510fd8900         call dword ptr [0x89fd10]
// 007ed0b6  897c2418             mov dword ptr [esp + 0x18], edi
// 007ed0ba  8dbb84000000         lea edi, [ebx + 0x84]
// 007ed0c0  8bcf                 mov ecx, edi
// 007ed0c2  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed0c8  3bf0                 cmp esi, eax
// 007ed0ca  0f8d96000000         jge 0x7ed166
// 007ed0d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ed0d4  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 007ed0d8  0f8d88000000         jge 0x7ed166
// 007ed0de  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ed0e2  8a1408               mov dl, byte ptr [eax + ecx]
// 007ed0e5  88542414             mov byte ptr [esp + 0x14], dl
// 007ed0e9  85f6                 test esi, esi
// 007ed0eb  7c53                 jl 0x7ed140
// 007ed0ed  8bcf                 mov ecx, edi
// 007ed0ef  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed0f5  3bf0                 cmp esi, eax
// 007ed0f7  7d47                 jge 0x7ed140
// 007ed0f9  8a436c               mov al, byte ptr [ebx + 0x6c]
// 007ed0fc  56                   push esi
// 007ed0fd  8bcf                 mov ecx, edi
// 007ed0ff  88442438             mov byte ptr [esp + 0x38], al
// 007ed103  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed109  8a4c2434             mov cl, byte ptr [esp + 0x34]
// 007ed10d  3ac1                 cmp al, cl
// 007ed10f  752f                 jne 0x7ed140
// 007ed111  384c2414             cmp byte ptr [esp + 0x14], cl
// 007ed115  7416                 je 0x7ed12d
// 007ed117  8b13                 mov edx, dword ptr [ebx]
// 007ed119  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 007ed11f  56                   push esi
// 007ed120  8d442418             lea eax, [esp + 0x18]
// 007ed124  50                   push eax
// 007ed125  8bcb                 mov ecx, ebx
// 007ed127  ffd2                 call edx
// 007ed129  85c0                 test eax, eax
// 007ed12b  7413                 je 0x7ed140
// 007ed12d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ed131  50                   push eax
// 007ed132  8bcd                 mov ecx, ebp
// 007ed134  ff15b4ff8900         call dword ptr [0x89ffb4]
// 007ed13a  ff442418             inc dword ptr [esp + 0x18]
// 007ed13e  eb15                 jmp 0x7ed155
// 007ed140  56                   push esi
// 007ed141  8bcf                 mov ecx, edi
// 007ed143  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed149  0fb6c8               movzx ecx, al
// 007ed14c  51                   push ecx
// 007ed14d  8bcd                 mov ecx, ebp
// 007ed14f  ff15b4ff8900         call dword ptr [0x89ffb4]
// 007ed155  8bcf                 mov ecx, edi
// 007ed157  46                   inc esi
// 007ed158  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed15e  3bf0                 cmp esi, eax
// 007ed160  0f8c6affffff         jl 0x7ed0d0
// 007ed166  837c243800           cmp dword ptr [esp + 0x38], 0
// 007ed16b  8bcb                 mov ecx, ebx
// 007ed16d  7409                 je 0x7ed178
// 007ed16f  6a00                 push 0
// 007ed171  e80afbffff           call 0x7ecc80
// 007ed176  eb05                 jmp 0x7ed17d
// 007ed178  e873edffff           call 0x7ebef0
// 007ed17d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ed181  64890d00000000       mov dword ptr fs:[0], ecx
// 007ed188  59                   pop ecx
// 007ed189  5f                   pop edi
// 007ed18a  5e                   pop esi
// 007ed18b  5d                   pop ebp
// 007ed18c  5b                   pop ebx
// 007ed18d  83c418               add esp, 0x18
// 007ed190  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetMaskedText@?$CXTMaskEditT@VCEdit@@@@QAEXPBDHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp