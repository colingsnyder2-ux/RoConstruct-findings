// roc 2009-12 008c8a40  unit: CXTPPropertyGridInplaceEdit  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8a40
//
// 008c8a40  83ec0c               sub esp, 0xc
// 008c8a43  55                   push ebp
// 008c8a44  56                   push esi
// 008c8a45  57                   push edi
// 008c8a46  8bf9                 mov edi, ecx
// 008c8a48  8b4754               mov eax, dword ptr [edi + 0x54]
// 008c8a4b  3b4758               cmp eax, dword ptr [edi + 0x58]
// 008c8a4e  7405                 je 0x8c8a55
// 008c8a50  e8cbf9ffff           call 0x8c8420
// 008c8a55  8b7754               mov esi, dword ptr [edi + 0x54]
// 008c8a58  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c8a5c  8974240c             mov dword ptr [esp + 0xc], esi
// 008c8a60  8d5001               lea edx, [eax + 1]
// 008c8a63  8a08                 mov cl, byte ptr [eax]
// 008c8a65  40                   inc eax
// 008c8a66  84c9                 test cl, cl
// 008c8a68  75f9                 jne 0x8c8a63
// 008c8a6a  2bc2                 sub eax, edx
// 008c8a6c  8d8f80000000         lea ecx, [edi + 0x80]
// 008c8a72  89442414             mov dword ptr [esp + 0x14], eax
// 008c8a76  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8a7c  8be8                 mov ebp, eax
// 008c8a7e  3bf5                 cmp esi, ebp
// 008c8a80  0f8dbd000000         jge 0x8c8b43
// 008c8a86  53                   push ebx
// 008c8a87  33db                 xor ebx, ebx
// 008c8a89  395c2418             cmp dword ptr [esp + 0x18], ebx
// 008c8a8d  895c2414             mov dword ptr [esp + 0x14], ebx
// 008c8a91  0f8e93000000         jle 0x8c8b2a
// 008c8a97  eb07                 jmp 0x8c8aa0
// 008c8a99  8da42400000000       lea esp, [esp]
// 008c8aa0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c8aa4  8a040b               mov al, byte ptr [ebx + ecx]
// 008c8aa7  88442410             mov byte ptr [esp + 0x10], al
// 008c8aab  3a476c               cmp al, byte ptr [edi + 0x6c]
// 008c8aae  7416                 je 0x8c8ac6
// 008c8ab0  8b17                 mov edx, dword ptr [edi]
// 008c8ab2  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008c8ab8  56                   push esi
// 008c8ab9  8d442414             lea eax, [esp + 0x14]
// 008c8abd  50                   push eax
// 008c8abe  8bcf                 mov ecx, edi
// 008c8ac0  ffd2                 call edx
// 008c8ac2  85c0                 test eax, eax
// 008c8ac4  7451                 je 0x8c8b17
// 008c8ac6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c8aca  50                   push eax
// 008c8acb  56                   push esi
// 008c8acc  8bcf                 mov ecx, edi
// 008c8ace  e8cdf4ffff           call 0x8c7fa0
// 008c8ad3  46                   inc esi
// 008c8ad4  3bf5                 cmp esi, ebp
// 008c8ad6  7d2f                 jge 0x8c8b07
// 008c8ad8  8d9f84000000         lea ebx, [edi + 0x84]
// 008c8ade  8bff                 mov edi, edi
// 008c8ae0  85f6                 test esi, esi
// 008c8ae2  7c1a                 jl 0x8c8afe
// 008c8ae4  8bcb                 mov ecx, ebx
// 008c8ae6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8aec  3bf0                 cmp esi, eax
// 008c8aee  7d0e                 jge 0x8c8afe
// 008c8af0  56                   push esi
// 008c8af1  8bcb                 mov ecx, ebx
// 008c8af3  ff1510d59800         call dword ptr [0x98d510]
// 008c8af9  3a476c               cmp al, byte ptr [edi + 0x6c]
// 008c8afc  7405                 je 0x8c8b03
// 008c8afe  46                   inc esi
// 008c8aff  3bf5                 cmp esi, ebp
// 008c8b01  7cdd                 jl 0x8c8ae0
// 008c8b03  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008c8b07  8d8f80000000         lea ecx, [edi + 0x80]
// 008c8b0d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8b13  3bf0                 cmp esi, eax
// 008c8b15  7d0f                 jge 0x8c8b26
// 008c8b17  43                   inc ebx
// 008c8b18  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 008c8b1c  895c2414             mov dword ptr [esp + 0x14], ebx
// 008c8b20  0f8c7affffff         jl 0x8c8aa0
// 008c8b26  89742410             mov dword ptr [esp + 0x10], esi
// 008c8b2a  6a01                 push 1
// 008c8b2c  8d4c2414             lea ecx, [esp + 0x14]
// 008c8b30  51                   push ecx
// 008c8b31  8bcf                 mov ecx, edi
// 008c8b33  e8c8f2ffff           call 0x8c7e00
// 008c8b38  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c8b3c  894758               mov dword ptr [edi + 0x58], eax
// 008c8b3f  894754               mov dword ptr [edi + 0x54], eax
// 008c8b42  5b                   pop ebx
// 008c8b43  5f                   pop edi
// 008c8b44  5e                   pop esi
// 008c8b45  5d                   pop ebp
// 008c8b46  83c40c               add esp, 0xc
// 008c8b49  c20400               ret 4
// copied from an identical function in another client (function ?MaskReplaceSel@?$CXTMaskEditT@VCEdit@@@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp