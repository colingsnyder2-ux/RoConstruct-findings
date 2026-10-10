// roc 2008-06 006f1b30  unit: CXTPControls  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1b30
//
// 006f1b30  56                   push esi
// 006f1b31  57                   push edi
// 006f1b32  8bf9                 mov edi, ecx
// 006f1b34  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006f1b37  33f6                 xor esi, esi
// 006f1b39  85c0                 test eax, eax
// 006f1b3b  7e3c                 jle 0x6f1b79
// 006f1b3d  8d4900               lea ecx, [ecx]
// 006f1b40  85f6                 test esi, esi
// 006f1b42  7c11                 jl 0x6f1b55
// 006f1b44  3bf0                 cmp esi, eax
// 006f1b46  7d0d                 jge 0x6f1b55
// 006f1b48  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 006f1b4b  7d41                 jge 0x6f1b8e
// 006f1b4d  8b4728               mov eax, dword ptr [edi + 0x28]
// 006f1b50  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006f1b53  eb02                 jmp 0x6f1b57
// 006f1b55  33c9                 xor ecx, ecx
// 006f1b57  8b11                 mov edx, dword ptr [ecx]
// 006f1b59  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 006f1b5f  89b180000000         mov dword ptr [ecx + 0x80], esi
// 006f1b65  89b9f8000000         mov dword ptr [ecx + 0xf8], edi
// 006f1b6b  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f1b6e  50                   push eax
// 006f1b6f  ffd2                 call edx
// 006f1b71  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006f1b74  46                   inc esi
// 006f1b75  3bf0                 cmp esi, eax
// 006f1b77  7cc7                 jl 0x6f1b40
// 006f1b79  837f2000             cmp dword ptr [edi + 0x20], 0
// 006f1b7d  7414                 je 0x6f1b93
// 006f1b7f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006f1b82  8b01                 mov eax, dword ptr [ecx]
// 006f1b84  8b90d8010000         mov edx, dword ptr [eax + 0x1d8]
// 006f1b8a  5f                   pop edi
// 006f1b8b  5e                   pop esi
// 006f1b8c  ffe2                 jmp edx
// 006f1b8e  e8b1edfaff           call 0x6a0944
// 006f1b93  5f                   pop edi
// 006f1b94  5e                   pop esi
// 006f1b95  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?RefreshIndexes@CXTPControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
