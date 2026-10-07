// roc 2012-06 009f2280  unit: CXTPPropertyGridItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2280
//
// 009f2280  8b01                 mov eax, dword ptr [ecx]
// 009f2282  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009f2285  83ec10               sub esp, 0x10
// 009f2288  8d1424               lea edx, [esp]
// 009f228b  52                   push edx
// 009f228c  ffd0                 call eax
// 009f228e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009f2292  8b542414             mov edx, dword ptr [esp + 0x14]
// 009f2296  51                   push ecx
// 009f2297  52                   push edx
// 009f2298  8d442408             lea eax, [esp + 8]
// 009f229c  50                   push eax
// 009f229d  ff15483bb200         call dword ptr [0xb23b48]
// 009f22a3  83c410               add esp, 0x10
// 009f22a6  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?PtInValueRect@CXTPPropertyGridItem@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
