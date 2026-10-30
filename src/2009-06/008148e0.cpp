// roc 2009-06 008148e0  unit: CXTPRibbonQuickAccessControls  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008148e0
//
// 008148e0  56                   push esi
// 008148e1  57                   push edi
// 008148e2  8bf9                 mov edi, ecx
// 008148e4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008148e7  33f6                 xor esi, esi
// 008148e9  85c0                 test eax, eax
// 008148eb  7e30                 jle 0x81491d
// 008148ed  8d4900               lea ecx, [ecx]
// 008148f0  85f6                 test esi, esi
// 008148f2  7c11                 jl 0x814905
// 008148f4  3bf0                 cmp esi, eax
// 008148f6  7d0d                 jge 0x814905
// 008148f8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008148fb  7d23                 jge 0x814920
// 008148fd  8b4728               mov eax, dword ptr [edi + 0x28]
// 00814900  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00814903  eb02                 jmp 0x814907
// 00814905  33c9                 xor ecx, ecx
// 00814907  8b11                 mov edx, dword ptr [ecx]
// 00814909  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081490c  8b92dc000000         mov edx, dword ptr [edx + 0xdc]
// 00814912  50                   push eax
// 00814913  ffd2                 call edx
// 00814915  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00814918  46                   inc esi
// 00814919  3bf0                 cmp esi, eax
// 0081491b  7cd3                 jl 0x8148f0
// 0081491d  5f                   pop edi
// 0081491e  5e                   pop esi
// 0081491f  c3                   ret 
// 00814920  e8bf43f0ff           call 0x718ce4
// copied from an identical function in another client (function ?RefreshIndexes@CXTPRibbonQuickAccessControls@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp