// roc 2008-06 0079e240  unit: CXTPScrollBase  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e240
//
// 0079e240  83ec2c               sub esp, 0x2c
// 0079e243  56                   push esi
// 0079e244  8bf1                 mov esi, ecx
// 0079e246  8b06                 mov eax, dword ptr [esi]
// 0079e248  8b5010               mov edx, dword ptr [eax + 0x10]
// 0079e24b  8d4c2404             lea ecx, [esp + 4]
// 0079e24f  51                   push ecx
// 0079e250  8bce                 mov ecx, esi
// 0079e252  ffd2                 call edx
// 0079e254  8b06                 mov eax, dword ptr [esi]
// 0079e256  8b5014               mov edx, dword ptr [eax + 0x14]
// 0079e259  8d4c2414             lea ecx, [esp + 0x14]
// 0079e25d  51                   push ecx
// 0079e25e  8bce                 mov ecx, esi
// 0079e260  ffd2                 call edx
// 0079e262  8b06                 mov eax, dword ptr [esi]
// 0079e264  8d4c2414             lea ecx, [esp + 0x14]
// 0079e268  51                   push ecx
// 0079e269  8d5604               lea edx, [esi + 4]
// 0079e26c  52                   push edx
// 0079e26d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0079e270  8d4c240c             lea ecx, [esp + 0xc]
// 0079e274  51                   push ecx
// 0079e275  8bce                 mov ecx, esi
// 0079e277  ffd2                 call edx
// 0079e279  5e                   pop esi
// 0079e27a  83c42c               add esp, 0x2c
// 0079e27d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?SetupScrollInfo@CXTPScrollBase@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
