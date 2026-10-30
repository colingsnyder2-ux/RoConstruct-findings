// roc 2011-06 008dfa20  unit: VCEdit::?$CXTMaskEditT  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dfa20
//
// 008dfa20  6aff                 push -1
// 008dfa22  68a9d8a000           push 0xa0d8a9
// 008dfa27  64a100000000         mov eax, dword ptr fs:[0]
// 008dfa2d  50                   push eax
// 008dfa2e  83ec0c               sub esp, 0xc
// 008dfa31  53                   push ebx
// 008dfa32  55                   push ebp
// 008dfa33  56                   push esi
// 008dfa34  57                   push edi
// 008dfa35  a12058c900           mov eax, dword ptr [0xc95820]
// 008dfa3a  33c4                 xor eax, esp
// 008dfa3c  50                   push eax
// 008dfa3d  8d442420             lea eax, [esp + 0x20]
// 008dfa41  64a300000000         mov dword ptr fs:[0], eax
// 008dfa47  8bd9                 mov ebx, ecx
// 008dfa49  8b442430             mov eax, dword ptr [esp + 0x30]
// 008dfa4d  8d5001               lea edx, [eax + 1]
// 008dfa50  8a08                 mov cl, byte ptr [eax]
// 008dfa52  40                   inc eax
// 008dfa53  84c9                 test cl, cl
// 008dfa55  75f9                 jne 0x8dfa50
// 008dfa57  8b742434             mov esi, dword ptr [esp + 0x34]
// 008dfa5b  2bc2                 sub eax, edx
// 008dfa5d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008dfa61  56                   push esi
// 008dfa62  8d442438             lea eax, [esp + 0x38]
// 008dfa66  8dab80000000         lea ebp, [ebx + 0x80]
// 008dfa6c  50                   push eax
// 008dfa6d  8bcd                 mov ecx, ebp
// 008dfa6f  ff15601fa400         call dword ptr [0xa41f60]
// 008dfa75  33ff                 xor edi, edi
// 008dfa77  50                   push eax
// 008dfa78  8bcd                 mov ecx, ebp
// 008dfa7a  897c242c             mov dword ptr [esp + 0x2c], edi
// 008dfa7e  ff156425a400         call dword ptr [0xa42564]
// 008dfa84  8d4c2434             lea ecx, [esp + 0x34]
// 008dfa88  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008dfa90  ff15082ea400         call dword ptr [0xa42e08]
// 008dfa96  897c2418             mov dword ptr [esp + 0x18], edi
// 008dfa9a  8dbb84000000         lea edi, [ebx + 0x84]
// 008dfaa0  8bcf                 mov ecx, edi
// 008dfaa2  ff15a826a400         call dword ptr [0xa426a8]
// 008dfaa8  3bf0                 cmp esi, eax
// 008dfaaa  0f8d96000000         jge 0x8dfb46
// 008dfab0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dfab4  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 008dfab8  0f8d88000000         jge 0x8dfb46
// 008dfabe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dfac2  8a1408               mov dl, byte ptr [eax + ecx]
// 008dfac5  88542414             mov byte ptr [esp + 0x14], dl
// 008dfac9  85f6                 test esi, esi
// 008dfacb  7c53                 jl 0x8dfb20
// 008dfacd  8bcf                 mov ecx, edi
// 008dfacf  ff15a826a400         call dword ptr [0xa426a8]
// 008dfad5  3bf0                 cmp esi, eax
// 008dfad7  7d47                 jge 0x8dfb20
// 008dfad9  8a436c               mov al, byte ptr [ebx + 0x6c]
// 008dfadc  56                   push esi
// 008dfadd  8bcf                 mov ecx, edi
// 008dfadf  88442438             mov byte ptr [esp + 0x38], al
// 008dfae3  ff153c25a400         call dword ptr [0xa4253c]
// 008dfae9  8a4c2434             mov cl, byte ptr [esp + 0x34]
// 008dfaed  3ac1                 cmp al, cl
// 008dfaef  752f                 jne 0x8dfb20
// 008dfaf1  384c2414             cmp byte ptr [esp + 0x14], cl
// 008dfaf5  7416                 je 0x8dfb0d
// 008dfaf7  8b13                 mov edx, dword ptr [ebx]
// 008dfaf9  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008dfaff  56                   push esi
// 008dfb00  8d442418             lea eax, [esp + 0x18]
// 008dfb04  50                   push eax
// 008dfb05  8bcb                 mov ecx, ebx
// 008dfb07  ffd2                 call edx
// 008dfb09  85c0                 test eax, eax
// 008dfb0b  7413                 je 0x8dfb20
// 008dfb0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dfb11  50                   push eax
// 008dfb12  8bcd                 mov ecx, ebp
// 008dfb14  ff156828a400         call dword ptr [0xa42868]
// 008dfb1a  ff442418             inc dword ptr [esp + 0x18]
// 008dfb1e  eb15                 jmp 0x8dfb35
// 008dfb20  56                   push esi
// 008dfb21  8bcf                 mov ecx, edi
// 008dfb23  ff153c25a400         call dword ptr [0xa4253c]
// 008dfb29  0fb6c8               movzx ecx, al
// 008dfb2c  51                   push ecx
// 008dfb2d  8bcd                 mov ecx, ebp
// 008dfb2f  ff156828a400         call dword ptr [0xa42868]
// 008dfb35  8bcf                 mov ecx, edi
// 008dfb37  46                   inc esi
// 008dfb38  ff15a826a400         call dword ptr [0xa426a8]
// 008dfb3e  3bf0                 cmp esi, eax
// 008dfb40  0f8c6affffff         jl 0x8dfab0
// 008dfb46  837c243800           cmp dword ptr [esp + 0x38], 0
// 008dfb4b  8bcb                 mov ecx, ebx
// 008dfb4d  7409                 je 0x8dfb58
// 008dfb4f  6a00                 push 0
// 008dfb51  e82afbffff           call 0x8df680
// 008dfb56  eb05                 jmp 0x8dfb5d
// 008dfb58  e893edffff           call 0x8de8f0
// 008dfb5d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dfb61  64890d00000000       mov dword ptr fs:[0], ecx
// 008dfb68  59                   pop ecx
// 008dfb69  5f                   pop edi
// 008dfb6a  5e                   pop esi
// 008dfb6b  5d                   pop ebp
// 008dfb6c  5b                   pop ebx
// 008dfb6d  83c418               add esp, 0x18
// 008dfb70  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetMaskedText@?$CXTMaskEditT@VCEdit@@@@QAEXPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp