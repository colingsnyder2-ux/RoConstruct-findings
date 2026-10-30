// roc 2010-06 0087bd60  unit: VCEdit::?$CXTMaskEditT  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bd60
//
// 0087bd60  6aff                 push -1
// 0087bd62  6809a79b00           push 0x9ba709
// 0087bd67  64a100000000         mov eax, dword ptr fs:[0]
// 0087bd6d  50                   push eax
// 0087bd6e  83ec0c               sub esp, 0xc
// 0087bd71  53                   push ebx
// 0087bd72  55                   push ebp
// 0087bd73  56                   push esi
// 0087bd74  57                   push edi
// 0087bd75  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087bd7a  33c4                 xor eax, esp
// 0087bd7c  50                   push eax
// 0087bd7d  8d442420             lea eax, [esp + 0x20]
// 0087bd81  64a300000000         mov dword ptr fs:[0], eax
// 0087bd87  8bd9                 mov ebx, ecx
// 0087bd89  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087bd8d  8d5001               lea edx, [eax + 1]
// 0087bd90  8a08                 mov cl, byte ptr [eax]
// 0087bd92  40                   inc eax
// 0087bd93  84c9                 test cl, cl
// 0087bd95  75f9                 jne 0x87bd90
// 0087bd97  8b742434             mov esi, dword ptr [esp + 0x34]
// 0087bd9b  2bc2                 sub eax, edx
// 0087bd9d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087bda1  56                   push esi
// 0087bda2  8d442438             lea eax, [esp + 0x38]
// 0087bda6  8dab80000000         lea ebp, [ebx + 0x80]
// 0087bdac  50                   push eax
// 0087bdad  8bcd                 mov ecx, ebp
// 0087bdaf  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0087bdb5  33ff                 xor edi, edi
// 0087bdb7  50                   push eax
// 0087bdb8  8bcd                 mov ecx, ebp
// 0087bdba  897c242c             mov dword ptr [esp + 0x2c], edi
// 0087bdbe  ff1580c59e00         call dword ptr [0x9ec580]
// 0087bdc4  8d4c2434             lea ecx, [esp + 0x34]
// 0087bdc8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0087bdd0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087bdd6  897c2418             mov dword ptr [esp + 0x18], edi
// 0087bdda  8dbb84000000         lea edi, [ebx + 0x84]
// 0087bde0  8bcf                 mov ecx, edi
// 0087bde2  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bde8  3bf0                 cmp esi, eax
// 0087bdea  0f8d96000000         jge 0x87be86
// 0087bdf0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087bdf4  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0087bdf8  0f8d88000000         jge 0x87be86
// 0087bdfe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087be02  8a1408               mov dl, byte ptr [eax + ecx]
// 0087be05  88542414             mov byte ptr [esp + 0x14], dl
// 0087be09  85f6                 test esi, esi
// 0087be0b  7c53                 jl 0x87be60
// 0087be0d  8bcf                 mov ecx, edi
// 0087be0f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087be15  3bf0                 cmp esi, eax
// 0087be17  7d47                 jge 0x87be60
// 0087be19  8a436c               mov al, byte ptr [ebx + 0x6c]
// 0087be1c  56                   push esi
// 0087be1d  8bcf                 mov ecx, edi
// 0087be1f  88442438             mov byte ptr [esp + 0x38], al
// 0087be23  ff1558c59e00         call dword ptr [0x9ec558]
// 0087be29  8a4c2434             mov cl, byte ptr [esp + 0x34]
// 0087be2d  3ac1                 cmp al, cl
// 0087be2f  752f                 jne 0x87be60
// 0087be31  384c2414             cmp byte ptr [esp + 0x14], cl
// 0087be35  7416                 je 0x87be4d
// 0087be37  8b13                 mov edx, dword ptr [ebx]
// 0087be39  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0087be3f  56                   push esi
// 0087be40  8d442418             lea eax, [esp + 0x18]
// 0087be44  50                   push eax
// 0087be45  8bcb                 mov ecx, ebx
// 0087be47  ffd2                 call edx
// 0087be49  85c0                 test eax, eax
// 0087be4b  7413                 je 0x87be60
// 0087be4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087be51  50                   push eax
// 0087be52  8bcd                 mov ecx, ebp
// 0087be54  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 0087be5a  ff442418             inc dword ptr [esp + 0x18]
// 0087be5e  eb15                 jmp 0x87be75
// 0087be60  56                   push esi
// 0087be61  8bcf                 mov ecx, edi
// 0087be63  ff1558c59e00         call dword ptr [0x9ec558]
// 0087be69  0fb6c8               movzx ecx, al
// 0087be6c  51                   push ecx
// 0087be6d  8bcd                 mov ecx, ebp
// 0087be6f  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 0087be75  8bcf                 mov ecx, edi
// 0087be77  46                   inc esi
// 0087be78  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087be7e  3bf0                 cmp esi, eax
// 0087be80  0f8c6affffff         jl 0x87bdf0
// 0087be86  837c243800           cmp dword ptr [esp + 0x38], 0
// 0087be8b  8bcb                 mov ecx, ebx
// 0087be8d  7409                 je 0x87be98
// 0087be8f  6a00                 push 0
// 0087be91  e80afbffff           call 0x87b9a0
// 0087be96  eb05                 jmp 0x87be9d
// 0087be98  e883edffff           call 0x87ac20
// 0087be9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087bea1  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bea8  59                   pop ecx
// 0087bea9  5f                   pop edi
// 0087beaa  5e                   pop esi
// 0087beab  5d                   pop ebp
// 0087beac  5b                   pop ebx
// 0087bead  83c418               add esp, 0x18
// 0087beb0  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetMaskedText@?$CXTMaskEditT@VCEdit@@@@QAEXPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp