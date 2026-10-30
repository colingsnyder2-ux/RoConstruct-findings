// roc 2012-06 00a58bc0  unit: CXTPPropertyGridInplaceEdit  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a58bc0
//
// 00a58bc0  83ec0c               sub esp, 0xc
// 00a58bc3  55                   push ebp
// 00a58bc4  56                   push esi
// 00a58bc5  57                   push edi
// 00a58bc6  8bf9                 mov edi, ecx
// 00a58bc8  8b4754               mov eax, dword ptr [edi + 0x54]
// 00a58bcb  3b4758               cmp eax, dword ptr [edi + 0x58]
// 00a58bce  7405                 je 0xa58bd5
// 00a58bd0  e8cbf9ffff           call 0xa585a0
// 00a58bd5  8b7754               mov esi, dword ptr [edi + 0x54]
// 00a58bd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a58bdc  8974240c             mov dword ptr [esp + 0xc], esi
// 00a58be0  8d5001               lea edx, [eax + 1]
// 00a58be3  8a08                 mov cl, byte ptr [eax]
// 00a58be5  40                   inc eax
// 00a58be6  84c9                 test cl, cl
// 00a58be8  75f9                 jne 0xa58be3
// 00a58bea  2bc2                 sub eax, edx
// 00a58bec  8d8f80000000         lea ecx, [edi + 0x80]
// 00a58bf2  89442414             mov dword ptr [esp + 0x14], eax
// 00a58bf6  ff155846b200         call dword ptr [0xb24658]
// 00a58bfc  8be8                 mov ebp, eax
// 00a58bfe  3bf5                 cmp esi, ebp
// 00a58c00  0f8dbd000000         jge 0xa58cc3
// 00a58c06  53                   push ebx
// 00a58c07  33db                 xor ebx, ebx
// 00a58c09  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00a58c0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a58c11  0f8e93000000         jle 0xa58caa
// 00a58c17  eb07                 jmp 0xa58c20
// 00a58c19  8da42400000000       lea esp, [esp]
// 00a58c20  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a58c24  8a040b               mov al, byte ptr [ebx + ecx]
// 00a58c27  88442410             mov byte ptr [esp + 0x10], al
// 00a58c2b  3a476c               cmp al, byte ptr [edi + 0x6c]
// 00a58c2e  7416                 je 0xa58c46
// 00a58c30  8b17                 mov edx, dword ptr [edi]
// 00a58c32  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00a58c38  56                   push esi
// 00a58c39  8d442414             lea eax, [esp + 0x14]
// 00a58c3d  50                   push eax
// 00a58c3e  8bcf                 mov ecx, edi
// 00a58c40  ffd2                 call edx
// 00a58c42  85c0                 test eax, eax
// 00a58c44  7451                 je 0xa58c97
// 00a58c46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a58c4a  50                   push eax
// 00a58c4b  56                   push esi
// 00a58c4c  8bcf                 mov ecx, edi
// 00a58c4e  e8cdf4ffff           call 0xa58120
// 00a58c53  46                   inc esi
// 00a58c54  3bf5                 cmp esi, ebp
// 00a58c56  7d2f                 jge 0xa58c87
// 00a58c58  8d9f84000000         lea ebx, [edi + 0x84]
// 00a58c5e  8bff                 mov edi, edi
// 00a58c60  85f6                 test esi, esi
// 00a58c62  7c1a                 jl 0xa58c7e
// 00a58c64  8bcb                 mov ecx, ebx
// 00a58c66  ff155846b200         call dword ptr [0xb24658]
// 00a58c6c  3bf0                 cmp esi, eax
// 00a58c6e  7d0e                 jge 0xa58c7e
// 00a58c70  56                   push esi
// 00a58c71  8bcb                 mov ecx, ebx
// 00a58c73  ff15e844b200         call dword ptr [0xb244e8]
// 00a58c79  3a476c               cmp al, byte ptr [edi + 0x6c]
// 00a58c7c  7405                 je 0xa58c83
// 00a58c7e  46                   inc esi
// 00a58c7f  3bf5                 cmp esi, ebp
// 00a58c81  7cdd                 jl 0xa58c60
// 00a58c83  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a58c87  8d8f80000000         lea ecx, [edi + 0x80]
// 00a58c8d  ff155846b200         call dword ptr [0xb24658]
// 00a58c93  3bf0                 cmp esi, eax
// 00a58c95  7d0f                 jge 0xa58ca6
// 00a58c97  43                   inc ebx
// 00a58c98  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00a58c9c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a58ca0  0f8c7affffff         jl 0xa58c20
// 00a58ca6  89742410             mov dword ptr [esp + 0x10], esi
// 00a58caa  6a01                 push 1
// 00a58cac  8d4c2414             lea ecx, [esp + 0x14]
// 00a58cb0  51                   push ecx
// 00a58cb1  8bcf                 mov ecx, edi
// 00a58cb3  e8c8f2ffff           call 0xa57f80
// 00a58cb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a58cbc  894758               mov dword ptr [edi + 0x58], eax
// 00a58cbf  894754               mov dword ptr [edi + 0x54], eax
// 00a58cc2  5b                   pop ebx
// 00a58cc3  5f                   pop edi
// 00a58cc4  5e                   pop esi
// 00a58cc5  5d                   pop ebp
// 00a58cc6  83c40c               add esp, 0xc
// 00a58cc9  c20400               ret 4
// copied from an identical function in another client (function ?MaskReplaceSel@?$CXTMaskEditT@VCEdit@@@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp