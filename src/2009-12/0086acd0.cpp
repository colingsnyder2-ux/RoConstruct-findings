// roc 2009-12 0086acd0  unit: CXTPPropertyGridItemBool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086acd0
//
// 0086acd0  56                   push esi
// 0086acd1  8bf1                 mov esi, ecx
// 0086acd3  8d8e18010000         lea ecx, [esi + 0x118]
// 0086acd9  c70654f89f00         mov dword ptr [esi], 0x9ff854
// 0086acdf  c74620f4f79f00       mov dword ptr [esi + 0x20], 0x9ff7f4
// 0086ace6  ff15c0de9800         call dword ptr [0x98dec0]
// 0086acec  8d8e14010000         lea ecx, [esi + 0x114]
// 0086acf2  ff15c0de9800         call dword ptr [0x98dec0]
// 0086acf8  8bce                 mov ecx, esi
// 0086acfa  5e                   pop esi
// 0086acfb  e910c1ffff           jmp 0x866e10
// copied from an identical function in another client (function ??1CXTPPropertyGridItemBool@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp