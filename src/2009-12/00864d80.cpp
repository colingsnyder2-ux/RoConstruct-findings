// roc 2009-12 00864d80  unit: CPropertyGridItemBrickColor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864d80
//
// 00864d80  56                   push esi
// 00864d81  8bf1                 mov esi, ecx
// 00864d83  e8ba160c00           call 0x926442
// 00864d88  8d4e20               lea ecx, [esi + 0x20]
// 00864d8b  c70664e99f00         mov dword ptr [esi], 0x9fe964
// 00864d91  ff1574de9800         call dword ptr [0x98de74]
// 00864d97  33c0                 xor eax, eax
// 00864d99  89462c               mov dword ptr [esi + 0x2c], eax
// 00864d9c  894624               mov dword ptr [esi + 0x24], eax
// 00864d9f  894630               mov dword ptr [esi + 0x30], eax
// 00864da2  c74628ffffffff       mov dword ptr [esi + 0x28], 0xffffffff
// 00864da9  8bc6                 mov eax, esi
// 00864dab  5e                   pop esi
// 00864dac  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGridItemConstraint@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp