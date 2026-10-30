// roc 2011-06 008fd1d0  unit: CXTPRibbonQuickAccessControls  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd1d0
//
// 008fd1d0  56                   push esi
// 008fd1d1  57                   push edi
// 008fd1d2  8bf9                 mov edi, ecx
// 008fd1d4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008fd1d7  33f6                 xor esi, esi
// 008fd1d9  85c0                 test eax, eax
// 008fd1db  7e30                 jle 0x8fd20d
// 008fd1dd  8d4900               lea ecx, [ecx]
// 008fd1e0  85f6                 test esi, esi
// 008fd1e2  7c11                 jl 0x8fd1f5
// 008fd1e4  3bf0                 cmp esi, eax
// 008fd1e6  7d0d                 jge 0x8fd1f5
// 008fd1e8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008fd1eb  7d23                 jge 0x8fd210
// 008fd1ed  8b4728               mov eax, dword ptr [edi + 0x28]
// 008fd1f0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008fd1f3  eb02                 jmp 0x8fd1f7
// 008fd1f5  33c9                 xor ecx, ecx
// 008fd1f7  8b11                 mov edx, dword ptr [ecx]
// 008fd1f9  8b4720               mov eax, dword ptr [edi + 0x20]
// 008fd1fc  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 008fd202  50                   push eax
// 008fd203  ffd2                 call edx
// 008fd205  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008fd208  46                   inc esi
// 008fd209  3bf0                 cmp esi, eax
// 008fd20b  7cd3                 jl 0x8fd1e0
// 008fd20d  5f                   pop edi
// 008fd20e  5e                   pop esi
// 008fd20f  c3                   ret 
// 008fd210  e8f5d0f0ff           call 0x80a30a
// copied from an identical function in another client (function ?RefreshIndexes@CXTPRibbonQuickAccessControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp