// roc 2009-12 00867910  unit: CXTPPropertyGridView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867910
//
// 00867910  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00867917  7505                 jne 0x86791e
// 00867919  33c0                 xor eax, eax
// 0086791b  c20800               ret 8
// 0086791e  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00867924  8b01                 mov eax, dword ptr [ecx]
// 00867926  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0086792c  ffe0                 jmp eax
// copied from an identical function in another client (function ?SendNotifyMessageA@CXTPPropertyGridView@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp