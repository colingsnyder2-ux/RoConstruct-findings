// roc 2012-06 00a4b480  unit: CXTPTabManagerItem  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b480
//
// 00a4b480  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a4b483  c701802fc200         mov dword ptr [ecx], 0xc22f80
// 00a4b489  394810               cmp dword ptr [eax + 0x10], ecx
// 00a4b48c  7507                 jne 0xa4b495
// 00a4b48e  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00a4b495  83c128               add ecx, 0x28
// 00a4b498  ff25d047b200         jmp dword ptr [0xb247d0]
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabManager.cpp (function ??1CXTPTabManagerNavigateButton@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabManager.cpp
