// roc 2012-06 00a75520  unit: CXTPRibbonQuickAccessControls  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75520
//
// 00a75520  56                   push esi
// 00a75521  57                   push edi
// 00a75522  8bf9                 mov edi, ecx
// 00a75524  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a75527  33f6                 xor esi, esi
// 00a75529  85c0                 test eax, eax
// 00a7552b  7e30                 jle 0xa7555d
// 00a7552d  8d4900               lea ecx, [ecx]
// 00a75530  85f6                 test esi, esi
// 00a75532  7c11                 jl 0xa75545
// 00a75534  3bf0                 cmp esi, eax
// 00a75536  7d0d                 jge 0xa75545
// 00a75538  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00a7553b  7d23                 jge 0xa75560
// 00a7553d  8b4728               mov eax, dword ptr [edi + 0x28]
// 00a75540  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a75543  eb02                 jmp 0xa75547
// 00a75545  33c9                 xor ecx, ecx
// 00a75547  8b11                 mov edx, dword ptr [ecx]
// 00a75549  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a7554c  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 00a75552  50                   push eax
// 00a75553  ffd2                 call edx
// 00a75555  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a75558  46                   inc esi
// 00a75559  3bf0                 cmp esi, eax
// 00a7555b  7cd3                 jl 0xa75530
// 00a7555d  5f                   pop edi
// 00a7555e  5e                   pop esi
// 00a7555f  c3                   ret 
// 00a75560  e85bcef0ff           call 0x9823c0
// copied from an identical function in another client (function ?RefreshIndexes@CXTPRibbonQuickAccessControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp