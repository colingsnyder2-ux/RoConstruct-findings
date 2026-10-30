// roc 2011-06 008e08a0  unit: CXTPPropertyGridInplaceEdit  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e08a0
//
// 008e08a0  83ec0c               sub esp, 0xc
// 008e08a3  55                   push ebp
// 008e08a4  56                   push esi
// 008e08a5  57                   push edi
// 008e08a6  8bf9                 mov edi, ecx
// 008e08a8  8b4754               mov eax, dword ptr [edi + 0x54]
// 008e08ab  3b4758               cmp eax, dword ptr [edi + 0x58]
// 008e08ae  7405                 je 0x8e08b5
// 008e08b0  e8cbf9ffff           call 0x8e0280
// 008e08b5  8b7754               mov esi, dword ptr [edi + 0x54]
// 008e08b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e08bc  8974240c             mov dword ptr [esp + 0xc], esi
// 008e08c0  8d5001               lea edx, [eax + 1]
// 008e08c3  8a08                 mov cl, byte ptr [eax]
// 008e08c5  40                   inc eax
// 008e08c6  84c9                 test cl, cl
// 008e08c8  75f9                 jne 0x8e08c3
// 008e08ca  2bc2                 sub eax, edx
// 008e08cc  8d8f80000000         lea ecx, [edi + 0x80]
// 008e08d2  89442414             mov dword ptr [esp + 0x14], eax
// 008e08d6  ff15a826a400         call dword ptr [0xa426a8]
// 008e08dc  8be8                 mov ebp, eax
// 008e08de  3bf5                 cmp esi, ebp
// 008e08e0  0f8dbd000000         jge 0x8e09a3
// 008e08e6  53                   push ebx
// 008e08e7  33db                 xor ebx, ebx
// 008e08e9  395c2418             cmp dword ptr [esp + 0x18], ebx
// 008e08ed  895c2414             mov dword ptr [esp + 0x14], ebx
// 008e08f1  0f8e93000000         jle 0x8e098a
// 008e08f7  eb07                 jmp 0x8e0900
// 008e08f9  8da42400000000       lea esp, [esp]
// 008e0900  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e0904  8a040b               mov al, byte ptr [ebx + ecx]
// 008e0907  88442410             mov byte ptr [esp + 0x10], al
// 008e090b  3a476c               cmp al, byte ptr [edi + 0x6c]
// 008e090e  7416                 je 0x8e0926
// 008e0910  8b17                 mov edx, dword ptr [edi]
// 008e0912  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008e0918  56                   push esi
// 008e0919  8d442414             lea eax, [esp + 0x14]
// 008e091d  50                   push eax
// 008e091e  8bcf                 mov ecx, edi
// 008e0920  ffd2                 call edx
// 008e0922  85c0                 test eax, eax
// 008e0924  7451                 je 0x8e0977
// 008e0926  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e092a  50                   push eax
// 008e092b  56                   push esi
// 008e092c  8bcf                 mov ecx, edi
// 008e092e  e8cdf4ffff           call 0x8dfe00
// 008e0933  46                   inc esi
// 008e0934  3bf5                 cmp esi, ebp
// 008e0936  7d2f                 jge 0x8e0967
// 008e0938  8d9f84000000         lea ebx, [edi + 0x84]
// 008e093e  8bff                 mov edi, edi
// 008e0940  85f6                 test esi, esi
// 008e0942  7c1a                 jl 0x8e095e
// 008e0944  8bcb                 mov ecx, ebx
// 008e0946  ff15a826a400         call dword ptr [0xa426a8]
// 008e094c  3bf0                 cmp esi, eax
// 008e094e  7d0e                 jge 0x8e095e
// 008e0950  56                   push esi
// 008e0951  8bcb                 mov ecx, ebx
// 008e0953  ff153c25a400         call dword ptr [0xa4253c]
// 008e0959  3a476c               cmp al, byte ptr [edi + 0x6c]
// 008e095c  7405                 je 0x8e0963
// 008e095e  46                   inc esi
// 008e095f  3bf5                 cmp esi, ebp
// 008e0961  7cdd                 jl 0x8e0940
// 008e0963  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008e0967  8d8f80000000         lea ecx, [edi + 0x80]
// 008e096d  ff15a826a400         call dword ptr [0xa426a8]
// 008e0973  3bf0                 cmp esi, eax
// 008e0975  7d0f                 jge 0x8e0986
// 008e0977  43                   inc ebx
// 008e0978  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 008e097c  895c2414             mov dword ptr [esp + 0x14], ebx
// 008e0980  0f8c7affffff         jl 0x8e0900
// 008e0986  89742410             mov dword ptr [esp + 0x10], esi
// 008e098a  6a01                 push 1
// 008e098c  8d4c2414             lea ecx, [esp + 0x14]
// 008e0990  51                   push ecx
// 008e0991  8bcf                 mov ecx, edi
// 008e0993  e8c8f2ffff           call 0x8dfc60
// 008e0998  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e099c  894758               mov dword ptr [edi + 0x58], eax
// 008e099f  894754               mov dword ptr [edi + 0x54], eax
// 008e09a2  5b                   pop ebx
// 008e09a3  5f                   pop edi
// 008e09a4  5e                   pop esi
// 008e09a5  5d                   pop ebp
// 008e09a6  83c40c               add esp, 0xc
// 008e09a9  c20400               ret 4
// copied from an identical function in another client (function ?MaskReplaceSel@?$CXTMaskEditT@VCEdit@@@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp