// roc 2009-12 00845250  unit: CXTPControls  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845250
//
// 00845250  56                   push esi
// 00845251  57                   push edi
// 00845252  8bf9                 mov edi, ecx
// 00845254  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00845257  33f6                 xor esi, esi
// 00845259  85c0                 test eax, eax
// 0084525b  7e3c                 jle 0x845299
// 0084525d  8d4900               lea ecx, [ecx]
// 00845260  85f6                 test esi, esi
// 00845262  7c11                 jl 0x845275
// 00845264  3bf0                 cmp esi, eax
// 00845266  7d0d                 jge 0x845275
// 00845268  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0084526b  7d41                 jge 0x8452ae
// 0084526d  8b4728               mov eax, dword ptr [edi + 0x28]
// 00845270  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00845273  eb02                 jmp 0x845277
// 00845275  33c9                 xor ecx, ecx
// 00845277  8b11                 mov edx, dword ptr [ecx]
// 00845279  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 0084527f  89b180000000         mov dword ptr [ecx + 0x80], esi
// 00845285  89b9f8000000         mov dword ptr [ecx + 0xf8], edi
// 0084528b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084528e  50                   push eax
// 0084528f  ffd2                 call edx
// 00845291  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00845294  46                   inc esi
// 00845295  3bf0                 cmp esi, eax
// 00845297  7cc7                 jl 0x845260
// 00845299  837f2000             cmp dword ptr [edi + 0x20], 0
// 0084529d  7414                 je 0x8452b3
// 0084529f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008452a2  8b01                 mov eax, dword ptr [ecx]
// 008452a4  8b90d8010000         mov edx, dword ptr [eax + 0x1d8]
// 008452aa  5f                   pop edi
// 008452ab  5e                   pop esi
// 008452ac  ffe2                 jmp edx
// 008452ae  e859e8faff           call 0x7f3b0c
// 008452b3  5f                   pop edi
// 008452b4  5e                   pop esi
// 008452b5  c3                   ret 
// copied from an identical function in another client (function ?RefreshIndexes@CXTPControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp