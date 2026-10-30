// roc 2009-12 008f0440  unit: CXTPRibbonQuickAccessControls  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0440
//
// 008f0440  56                   push esi
// 008f0441  57                   push edi
// 008f0442  8bf9                 mov edi, ecx
// 008f0444  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008f0447  33f6                 xor esi, esi
// 008f0449  85c0                 test eax, eax
// 008f044b  7e30                 jle 0x8f047d
// 008f044d  8d4900               lea ecx, [ecx]
// 008f0450  85f6                 test esi, esi
// 008f0452  7c11                 jl 0x8f0465
// 008f0454  3bf0                 cmp esi, eax
// 008f0456  7d0d                 jge 0x8f0465
// 008f0458  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008f045b  7d23                 jge 0x8f0480
// 008f045d  8b4728               mov eax, dword ptr [edi + 0x28]
// 008f0460  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008f0463  eb02                 jmp 0x8f0467
// 008f0465  33c9                 xor ecx, ecx
// 008f0467  8b11                 mov edx, dword ptr [ecx]
// 008f0469  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f046c  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 008f0472  50                   push eax
// 008f0473  ffd2                 call edx
// 008f0475  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008f0478  46                   inc esi
// 008f0479  3bf0                 cmp esi, eax
// 008f047b  7cd3                 jl 0x8f0450
// 008f047d  5f                   pop edi
// 008f047e  5e                   pop esi
// 008f047f  c3                   ret 
// 008f0480  e88736f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RefreshIndexes@CXTPRibbonQuickAccessControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp