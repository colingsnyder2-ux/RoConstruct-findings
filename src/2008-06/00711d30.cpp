// roc 2008-06 00711d30  unit: CXTPPropertyGridItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711d30
//
// 00711d30  8b01                 mov eax, dword ptr [ecx]
// 00711d32  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00711d35  83ec10               sub esp, 0x10
// 00711d38  8d1424               lea edx, [esp]
// 00711d3b  52                   push edx
// 00711d3c  ffd0                 call eax
// 00711d3e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00711d42  8b542414             mov edx, dword ptr [esp + 0x14]
// 00711d46  51                   push ecx
// 00711d47  52                   push edx
// 00711d48  8d442408             lea eax, [esp + 8]
// 00711d4c  50                   push eax
// 00711d4d  ff152c2d8000         call dword ptr [0x802d2c]
// 00711d53  83c410               add esp, 0x10
// 00711d56  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?PtInValueRect@CXTPPropertyGridItem@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
