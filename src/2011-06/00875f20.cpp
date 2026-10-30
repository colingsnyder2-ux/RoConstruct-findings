// from server: 100% by auto
// roc 2011-06 00875f20  unit: CXTPPropertyGridView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875f20
//
// 00875f20  56                   push esi
// 00875f21  8b742418             mov esi, dword ptr [esp + 0x18]
// 00875f25  8d542408             lea edx, [esp + 8]
// 00875f29  b803000000           mov eax, 3
// 00875f2e  52                   push edx
// 00875f2f  668906               mov word ptr [esi], ax
// 00875f32  c7460800000000       mov dword ptr [esi + 8], 0
// 00875f39  e8f2b3fdff           call 0x851330
// 00875f3e  85c0                 test eax, eax
// 00875f40  7507                 jne 0x875f49
// 00875f42  c7460800001000       mov dword ptr [esi + 8], 0x100000
// 00875f49  33c0                 xor eax, eax
// 00875f4b  5e                   pop esi
// 00875f4c  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleState@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
