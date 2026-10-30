// roc 2012-06 00a57d40  unit: VCEdit::?$CXTMaskEditT  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57d40
//
// 00a57d40  6aff                 push -1
// 00a57d42  6849e7ad00           push 0xade749
// 00a57d47  64a100000000         mov eax, dword ptr fs:[0]
// 00a57d4d  50                   push eax
// 00a57d4e  83ec0c               sub esp, 0xc
// 00a57d51  53                   push ebx
// 00a57d52  55                   push ebp
// 00a57d53  56                   push esi
// 00a57d54  57                   push edi
// 00a57d55  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a57d5a  33c4                 xor eax, esp
// 00a57d5c  50                   push eax
// 00a57d5d  8d442420             lea eax, [esp + 0x20]
// 00a57d61  64a300000000         mov dword ptr fs:[0], eax
// 00a57d67  8bd9                 mov ebx, ecx
// 00a57d69  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a57d6d  8d5001               lea edx, [eax + 1]
// 00a57d70  8a08                 mov cl, byte ptr [eax]
// 00a57d72  40                   inc eax
// 00a57d73  84c9                 test cl, cl
// 00a57d75  75f9                 jne 0xa57d70
// 00a57d77  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a57d7b  2bc2                 sub eax, edx
// 00a57d7d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a57d81  56                   push esi
// 00a57d82  8d442438             lea eax, [esp + 0x38]
// 00a57d86  8dab80000000         lea ebp, [ebx + 0x80]
// 00a57d8c  50                   push eax
// 00a57d8d  8bcd                 mov ecx, ebp
// 00a57d8f  ff152850b200         call dword ptr [0xb25028]
// 00a57d95  33ff                 xor edi, edi
// 00a57d97  50                   push eax
// 00a57d98  8bcd                 mov ecx, ebp
// 00a57d9a  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a57d9e  ff152045b200         call dword ptr [0xb24520]
// 00a57da4  8d4c2434             lea ecx, [esp + 0x34]
// 00a57da8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00a57db0  ff15d047b200         call dword ptr [0xb247d0]
// 00a57db6  897c2418             mov dword ptr [esp + 0x18], edi
// 00a57dba  8dbb84000000         lea edi, [ebx + 0x84]
// 00a57dc0  8bcf                 mov ecx, edi
// 00a57dc2  ff155846b200         call dword ptr [0xb24658]
// 00a57dc8  3bf0                 cmp esi, eax
// 00a57dca  0f8d96000000         jge 0xa57e66
// 00a57dd0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a57dd4  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00a57dd8  0f8d88000000         jge 0xa57e66
// 00a57dde  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a57de2  8a1408               mov dl, byte ptr [eax + ecx]
// 00a57de5  88542414             mov byte ptr [esp + 0x14], dl
// 00a57de9  85f6                 test esi, esi
// 00a57deb  7c53                 jl 0xa57e40
// 00a57ded  8bcf                 mov ecx, edi
// 00a57def  ff155846b200         call dword ptr [0xb24658]
// 00a57df5  3bf0                 cmp esi, eax
// 00a57df7  7d47                 jge 0xa57e40
// 00a57df9  8a436c               mov al, byte ptr [ebx + 0x6c]
// 00a57dfc  56                   push esi
// 00a57dfd  8bcf                 mov ecx, edi
// 00a57dff  88442438             mov byte ptr [esp + 0x38], al
// 00a57e03  ff15e844b200         call dword ptr [0xb244e8]
// 00a57e09  8a4c2434             mov cl, byte ptr [esp + 0x34]
// 00a57e0d  3ac1                 cmp al, cl
// 00a57e0f  752f                 jne 0xa57e40
// 00a57e11  384c2414             cmp byte ptr [esp + 0x14], cl
// 00a57e15  7416                 je 0xa57e2d
// 00a57e17  8b13                 mov edx, dword ptr [ebx]
// 00a57e19  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00a57e1f  56                   push esi
// 00a57e20  8d442418             lea eax, [esp + 0x18]
// 00a57e24  50                   push eax
// 00a57e25  8bcb                 mov ecx, ebx
// 00a57e27  ffd2                 call edx
// 00a57e29  85c0                 test eax, eax
// 00a57e2b  7413                 je 0xa57e40
// 00a57e2d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a57e31  50                   push eax
// 00a57e32  8bcd                 mov ecx, ebp
// 00a57e34  ff151049b200         call dword ptr [0xb24910]
// 00a57e3a  ff442418             inc dword ptr [esp + 0x18]
// 00a57e3e  eb15                 jmp 0xa57e55
// 00a57e40  56                   push esi
// 00a57e41  8bcf                 mov ecx, edi
// 00a57e43  ff15e844b200         call dword ptr [0xb244e8]
// 00a57e49  0fb6c8               movzx ecx, al
// 00a57e4c  51                   push ecx
// 00a57e4d  8bcd                 mov ecx, ebp
// 00a57e4f  ff151049b200         call dword ptr [0xb24910]
// 00a57e55  8bcf                 mov ecx, edi
// 00a57e57  46                   inc esi
// 00a57e58  ff155846b200         call dword ptr [0xb24658]
// 00a57e5e  3bf0                 cmp esi, eax
// 00a57e60  0f8c6affffff         jl 0xa57dd0
// 00a57e66  837c243800           cmp dword ptr [esp + 0x38], 0
// 00a57e6b  8bcb                 mov ecx, ebx
// 00a57e6d  7409                 je 0xa57e78
// 00a57e6f  6a00                 push 0
// 00a57e71  e80afbffff           call 0xa57980
// 00a57e76  eb05                 jmp 0xa57e7d
// 00a57e78  e873edffff           call 0xa56bf0
// 00a57e7d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a57e81  64890d00000000       mov dword ptr fs:[0], ecx
// 00a57e88  59                   pop ecx
// 00a57e89  5f                   pop edi
// 00a57e8a  5e                   pop esi
// 00a57e8b  5d                   pop ebp
// 00a57e8c  5b                   pop ebx
// 00a57e8d  83c418               add esp, 0x18
// 00a57e90  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetMaskedText@?$CXTMaskEditT@VCEdit@@@@QAEXPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp