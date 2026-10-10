// from server: 100% by tester
// roc 2008-06 0077ad60  unit: CXTPTabManagerItem  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad60
//
// 0077ad60  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0077ad63  c70104928600         mov dword ptr [ecx], 0x869204
// 0077ad69  394810               cmp dword ptr [eax + 0x10], ecx
// 0077ad6c  7507                 jne 0x77ad75
// 0077ad6e  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0077ad75  83c128               add ecx, 0x28
// 0077ad78  ff25143f8000         jmp dword ptr [0x803f14]
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabManager.cpp (function ??1CXTPTabManagerNavigateButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp
