// from server: 100% by auto
// roc 2011-06 008f3d00  unit: CXTPScrollBase  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3d00
//
// 008f3d00  83ec2c               sub esp, 0x2c
// 008f3d03  56                   push esi
// 008f3d04  8bf1                 mov esi, ecx
// 008f3d06  8b06                 mov eax, dword ptr [esi]
// 008f3d08  8b5010               mov edx, dword ptr [eax + 0x10]
// 008f3d0b  8d4c2404             lea ecx, [esp + 4]
// 008f3d0f  51                   push ecx
// 008f3d10  8bce                 mov ecx, esi
// 008f3d12  ffd2                 call edx
// 008f3d14  8b06                 mov eax, dword ptr [esi]
// 008f3d16  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f3d19  8d4c2414             lea ecx, [esp + 0x14]
// 008f3d1d  51                   push ecx
// 008f3d1e  8bce                 mov ecx, esi
// 008f3d20  ffd2                 call edx
// 008f3d22  8b06                 mov eax, dword ptr [esi]
// 008f3d24  8d4c2414             lea ecx, [esp + 0x14]
// 008f3d28  51                   push ecx
// 008f3d29  8d5604               lea edx, [esi + 4]
// 008f3d2c  52                   push edx
// 008f3d2d  8b5020               mov edx, dword ptr [eax + 0x20]
// 008f3d30  8d4c240c             lea ecx, [esp + 0xc]
// 008f3d34  51                   push ecx
// 008f3d35  8bce                 mov ecx, esi
// 008f3d37  ffd2                 call edx
// 008f3d39  5e                   pop esi
// 008f3d3a  83c42c               add esp, 0x2c
// 008f3d3d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?SetupScrollInfo@CXTPScrollBase@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
