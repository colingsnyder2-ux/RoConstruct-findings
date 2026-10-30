// roc 2009-12 008c7bc0  unit: VCEdit::?$CXTMaskEditT  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7bc0
//
// 008c7bc0  6aff                 push -1
// 008c7bc2  6899479600           push 0x964799
// 008c7bc7  64a100000000         mov eax, dword ptr fs:[0]
// 008c7bcd  50                   push eax
// 008c7bce  83ec0c               sub esp, 0xc
// 008c7bd1  53                   push ebx
// 008c7bd2  55                   push ebp
// 008c7bd3  56                   push esi
// 008c7bd4  57                   push edi
// 008c7bd5  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7bda  33c4                 xor eax, esp
// 008c7bdc  50                   push eax
// 008c7bdd  8d442420             lea eax, [esp + 0x20]
// 008c7be1  64a300000000         mov dword ptr fs:[0], eax
// 008c7be7  8bd9                 mov ebx, ecx
// 008c7be9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008c7bed  8d5001               lea edx, [eax + 1]
// 008c7bf0  8a08                 mov cl, byte ptr [eax]
// 008c7bf2  40                   inc eax
// 008c7bf3  84c9                 test cl, cl
// 008c7bf5  75f9                 jne 0x8c7bf0
// 008c7bf7  8b742434             mov esi, dword ptr [esp + 0x34]
// 008c7bfb  2bc2                 sub eax, edx
// 008c7bfd  8944241c             mov dword ptr [esp + 0x1c], eax
// 008c7c01  56                   push esi
// 008c7c02  8d442438             lea eax, [esp + 0x38]
// 008c7c06  8dab80000000         lea ebp, [ebx + 0x80]
// 008c7c0c  50                   push eax
// 008c7c0d  8bcd                 mov ecx, ebp
// 008c7c0f  ff1544cf9800         call dword ptr [0x98cf44]
// 008c7c15  33ff                 xor edi, edi
// 008c7c17  50                   push eax
// 008c7c18  8bcd                 mov ecx, ebp
// 008c7c1a  897c242c             mov dword ptr [esp + 0x2c], edi
// 008c7c1e  ff1538d59800         call dword ptr [0x98d538]
// 008c7c24  8d4c2434             lea ecx, [esp + 0x34]
// 008c7c28  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008c7c30  ff15c0de9800         call dword ptr [0x98dec0]
// 008c7c36  897c2418             mov dword ptr [esp + 0x18], edi
// 008c7c3a  8dbb84000000         lea edi, [ebx + 0x84]
// 008c7c40  8bcf                 mov ecx, edi
// 008c7c42  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7c48  3bf0                 cmp esi, eax
// 008c7c4a  0f8d96000000         jge 0x8c7ce6
// 008c7c50  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c7c54  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 008c7c58  0f8d88000000         jge 0x8c7ce6
// 008c7c5e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c7c62  8a1408               mov dl, byte ptr [eax + ecx]
// 008c7c65  88542414             mov byte ptr [esp + 0x14], dl
// 008c7c69  85f6                 test esi, esi
// 008c7c6b  7c53                 jl 0x8c7cc0
// 008c7c6d  8bcf                 mov ecx, edi
// 008c7c6f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7c75  3bf0                 cmp esi, eax
// 008c7c77  7d47                 jge 0x8c7cc0
// 008c7c79  8a436c               mov al, byte ptr [ebx + 0x6c]
// 008c7c7c  56                   push esi
// 008c7c7d  8bcf                 mov ecx, edi
// 008c7c7f  88442438             mov byte ptr [esp + 0x38], al
// 008c7c83  ff1510d59800         call dword ptr [0x98d510]
// 008c7c89  8a4c2434             mov cl, byte ptr [esp + 0x34]
// 008c7c8d  3ac1                 cmp al, cl
// 008c7c8f  752f                 jne 0x8c7cc0
// 008c7c91  384c2414             cmp byte ptr [esp + 0x14], cl
// 008c7c95  7416                 je 0x8c7cad
// 008c7c97  8b13                 mov edx, dword ptr [ebx]
// 008c7c99  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008c7c9f  56                   push esi
// 008c7ca0  8d442418             lea eax, [esp + 0x18]
// 008c7ca4  50                   push eax
// 008c7ca5  8bcb                 mov ecx, ebx
// 008c7ca7  ffd2                 call edx
// 008c7ca9  85c0                 test eax, eax
// 008c7cab  7413                 je 0x8c7cc0
// 008c7cad  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c7cb1  50                   push eax
// 008c7cb2  8bcd                 mov ecx, ebp
// 008c7cb4  ff15bcd79800         call dword ptr [0x98d7bc]
// 008c7cba  ff442418             inc dword ptr [esp + 0x18]
// 008c7cbe  eb15                 jmp 0x8c7cd5
// 008c7cc0  56                   push esi
// 008c7cc1  8bcf                 mov ecx, edi
// 008c7cc3  ff1510d59800         call dword ptr [0x98d510]
// 008c7cc9  0fb6c8               movzx ecx, al
// 008c7ccc  51                   push ecx
// 008c7ccd  8bcd                 mov ecx, ebp
// 008c7ccf  ff15bcd79800         call dword ptr [0x98d7bc]
// 008c7cd5  8bcf                 mov ecx, edi
// 008c7cd7  46                   inc esi
// 008c7cd8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7cde  3bf0                 cmp esi, eax
// 008c7ce0  0f8c6affffff         jl 0x8c7c50
// 008c7ce6  837c243800           cmp dword ptr [esp + 0x38], 0
// 008c7ceb  8bcb                 mov ecx, ebx
// 008c7ced  7409                 je 0x8c7cf8
// 008c7cef  6a00                 push 0
// 008c7cf1  e80afbffff           call 0x8c7800
// 008c7cf6  eb05                 jmp 0x8c7cfd
// 008c7cf8  e883edffff           call 0x8c6a80
// 008c7cfd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c7d01  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7d08  59                   pop ecx
// 008c7d09  5f                   pop edi
// 008c7d0a  5e                   pop esi
// 008c7d0b  5d                   pop ebp
// 008c7d0c  5b                   pop ebx
// 008c7d0d  83c418               add esp, 0x18
// 008c7d10  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetMaskedText@?$CXTMaskEditT@VCEdit@@@@QAEXPBDHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp