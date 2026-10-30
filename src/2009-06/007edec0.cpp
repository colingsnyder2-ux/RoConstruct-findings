// roc 2009-06 007edec0  unit: CXTPPropertyGridInplaceEdit  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007edec0
//
// 007edec0  83ec0c               sub esp, 0xc
// 007edec3  55                   push ebp
// 007edec4  56                   push esi
// 007edec5  57                   push edi
// 007edec6  8bf9                 mov edi, ecx
// 007edec8  8b4754               mov eax, dword ptr [edi + 0x54]
// 007edecb  3b4758               cmp eax, dword ptr [edi + 0x58]
// 007edece  7405                 je 0x7eded5
// 007eded0  e8cbf9ffff           call 0x7ed8a0
// 007eded5  8b7754               mov esi, dword ptr [edi + 0x54]
// 007eded8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ededc  8974240c             mov dword ptr [esp + 0xc], esi
// 007edee0  8d5001               lea edx, [eax + 1]
// 007edee3  8a08                 mov cl, byte ptr [eax]
// 007edee5  40                   inc eax
// 007edee6  84c9                 test cl, cl
// 007edee8  75f9                 jne 0x7edee3
// 007edeea  2bc2                 sub eax, edx
// 007edeec  8d8f80000000         lea ecx, [edi + 0x80]
// 007edef2  89442414             mov dword ptr [esp + 0x14], eax
// 007edef6  ff1554fb8900         call dword ptr [0x89fb54]
// 007edefc  8be8                 mov ebp, eax
// 007edefe  3bf5                 cmp esi, ebp
// 007edf00  0f8dbd000000         jge 0x7edfc3
// 007edf06  53                   push ebx
// 007edf07  33db                 xor ebx, ebx
// 007edf09  395c2418             cmp dword ptr [esp + 0x18], ebx
// 007edf0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 007edf11  0f8e93000000         jle 0x7edfaa
// 007edf17  eb07                 jmp 0x7edf20
// 007edf19  8da42400000000       lea esp, [esp]
// 007edf20  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007edf24  8a040b               mov al, byte ptr [ebx + ecx]
// 007edf27  88442410             mov byte ptr [esp + 0x10], al
// 007edf2b  3a476c               cmp al, byte ptr [edi + 0x6c]
// 007edf2e  7416                 je 0x7edf46
// 007edf30  8b17                 mov edx, dword ptr [edi]
// 007edf32  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 007edf38  56                   push esi
// 007edf39  8d442414             lea eax, [esp + 0x14]
// 007edf3d  50                   push eax
// 007edf3e  8bcf                 mov ecx, edi
// 007edf40  ffd2                 call edx
// 007edf42  85c0                 test eax, eax
// 007edf44  7451                 je 0x7edf97
// 007edf46  8b442410             mov eax, dword ptr [esp + 0x10]
// 007edf4a  50                   push eax
// 007edf4b  56                   push esi
// 007edf4c  8bcf                 mov ecx, edi
// 007edf4e  e8cdf4ffff           call 0x7ed420
// 007edf53  46                   inc esi
// 007edf54  3bf5                 cmp esi, ebp
// 007edf56  7d2f                 jge 0x7edf87
// 007edf58  8d9f84000000         lea ebx, [edi + 0x84]
// 007edf5e  8bff                 mov edi, edi
// 007edf60  85f6                 test esi, esi
// 007edf62  7c1a                 jl 0x7edf7e
// 007edf64  8bcb                 mov ecx, ebx
// 007edf66  ff1554fb8900         call dword ptr [0x89fb54]
// 007edf6c  3bf0                 cmp esi, eax
// 007edf6e  7d0e                 jge 0x7edf7e
// 007edf70  56                   push esi
// 007edf71  8bcb                 mov ecx, ebx
// 007edf73  ff15e0f98900         call dword ptr [0x89f9e0]
// 007edf79  3a476c               cmp al, byte ptr [edi + 0x6c]
// 007edf7c  7405                 je 0x7edf83
// 007edf7e  46                   inc esi
// 007edf7f  3bf5                 cmp esi, ebp
// 007edf81  7cdd                 jl 0x7edf60
// 007edf83  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007edf87  8d8f80000000         lea ecx, [edi + 0x80]
// 007edf8d  ff1554fb8900         call dword ptr [0x89fb54]
// 007edf93  3bf0                 cmp esi, eax
// 007edf95  7d0f                 jge 0x7edfa6
// 007edf97  43                   inc ebx
// 007edf98  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 007edf9c  895c2414             mov dword ptr [esp + 0x14], ebx
// 007edfa0  0f8c7affffff         jl 0x7edf20
// 007edfa6  89742410             mov dword ptr [esp + 0x10], esi
// 007edfaa  6a01                 push 1
// 007edfac  8d4c2414             lea ecx, [esp + 0x14]
// 007edfb0  51                   push ecx
// 007edfb1  8bcf                 mov ecx, edi
// 007edfb3  e8c8f2ffff           call 0x7ed280
// 007edfb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 007edfbc  894758               mov dword ptr [edi + 0x58], eax
// 007edfbf  894754               mov dword ptr [edi + 0x54], eax
// 007edfc2  5b                   pop ebx
// 007edfc3  5f                   pop edi
// 007edfc4  5e                   pop esi
// 007edfc5  5d                   pop ebp
// 007edfc6  83c40c               add esp, 0xc
// 007edfc9  c20400               ret 4
// copied from an identical function in another client (function ?MaskReplaceSel@?$CXTMaskEditT@VCEdit@@@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp