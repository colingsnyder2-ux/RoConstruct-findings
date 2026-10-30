// roc 2009-12 008ce060  unit: CXTPTabManagerItem  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce060
//
// 008ce060  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008ce063  c7019ca6a000         mov dword ptr [ecx], 0xa0a69c
// 008ce069  394810               cmp dword ptr [eax + 0x10], ecx
// 008ce06c  7507                 jne 0x8ce075
// 008ce06e  c7401000000000       mov dword ptr [eax + 0x10], 0
// 008ce075  83c128               add ecx, 0x28
// 008ce078  ff25c0de9800         jmp dword ptr [0x98dec0]
// copied from an identical function in another client (function ??1CXTPTabManagerNavigateButton@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp