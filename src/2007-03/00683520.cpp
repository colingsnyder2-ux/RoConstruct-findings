// from server: 100% by tester
// roc 2008-06 00711570  unit: CPropertyGridItemBrickColor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711570
//
// 00711570  56                   push esi
// 00711571  8bf1                 mov esi, ecx
// 00711573  e832aa0a00           call 0x7bbfaa
// 00711578  8d4e20               lea ecx, [esi + 0x20]
// 0071157b  c70684d48500         mov dword ptr [esi], 0x85d484
// 00711581  ff15043f8000         call dword ptr [0x803f04]
// 00711587  33c0                 xor eax, eax
// 00711589  89462c               mov dword ptr [esi + 0x2c], eax
// 0071158c  894624               mov dword ptr [esi + 0x24], eax
// 0071158f  894630               mov dword ptr [esi + 0x30], eax
// 00711592  c74628ffffffff       mov dword ptr [esi + 0x28], 0xffffffff
// 00711599  8bc6                 mov eax, esi
// 0071159b  5e                   pop esi
// 0071159c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ??0CXTPPropertyGridItemConstraint@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
