// from server: 100% by auto
// roc 2011-06 008ea1f0  unit: CXTColorBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea1f0
//
// 008ea1f0  56                   push esi
// 008ea1f1  8bf1                 mov esi, ecx
// 008ea1f3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ea1f6  50                   push eax
// 008ea1f7  ff15ec1ba400         call dword ptr [0xa41bec]
// 008ea1fd  85c0                 test eax, eax
// 008ea1ff  7422                 je 0x8ea223
// 008ea201  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ea204  6af0                 push -0x10
// 008ea206  51                   push ecx
// 008ea207  ff15981ca400         call dword ptr [0xa41c98]
// 008ea20d  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ea210  0d00010000           or eax, 0x100
// 008ea215  50                   push eax
// 008ea216  6af0                 push -0x10
// 008ea218  52                   push edx
// 008ea219  ff15001aa400         call dword ptr [0xa41a00]
// 008ea21f  b001                 mov al, 1
// 008ea221  5e                   pop esi
// 008ea222  c3                   ret 
// 008ea223  32c0                 xor al, al
// 008ea225  5e                   pop esi
// 008ea226  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?Init@CXTPColorBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
