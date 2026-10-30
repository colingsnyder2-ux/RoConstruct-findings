// roc 2010-06 008a4610  unit: CXTPRibbonQuickAccessControls  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4610
//
// 008a4610  56                   push esi
// 008a4611  57                   push edi
// 008a4612  8bf9                 mov edi, ecx
// 008a4614  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008a4617  33f6                 xor esi, esi
// 008a4619  85c0                 test eax, eax
// 008a461b  7e30                 jle 0x8a464d
// 008a461d  8d4900               lea ecx, [ecx]
// 008a4620  85f6                 test esi, esi
// 008a4622  7c11                 jl 0x8a4635
// 008a4624  3bf0                 cmp esi, eax
// 008a4626  7d0d                 jge 0x8a4635
// 008a4628  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008a462b  7d23                 jge 0x8a4650
// 008a462d  8b4728               mov eax, dword ptr [edi + 0x28]
// 008a4630  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008a4633  eb02                 jmp 0x8a4637
// 008a4635  33c9                 xor ecx, ecx
// 008a4637  8b11                 mov edx, dword ptr [ecx]
// 008a4639  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a463c  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 008a4642  50                   push eax
// 008a4643  ffd2                 call edx
// 008a4645  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008a4648  46                   inc esi
// 008a4649  3bf0                 cmp esi, eax
// 008a464b  7cd3                 jl 0x8a4620
// 008a464d  5f                   pop edi
// 008a464e  5e                   pop esi
// 008a464f  c3                   ret 
// 008a4650  e8f735f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RefreshIndexes@CXTPRibbonQuickAccessControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp