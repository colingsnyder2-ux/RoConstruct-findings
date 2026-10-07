// roc 2011-06 00879d10  unit: CXTPPropertyGridItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879d10
//
// 00879d10  8b01                 mov eax, dword ptr [ecx]
// 00879d12  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00879d15  83ec10               sub esp, 0x10
// 00879d18  8d1424               lea edx, [esp]
// 00879d1b  52                   push edx
// 00879d1c  ffd0                 call eax
// 00879d1e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00879d22  8b542414             mov edx, dword ptr [esp + 0x14]
// 00879d26  51                   push ecx
// 00879d27  52                   push edx
// 00879d28  8d442408             lea eax, [esp + 8]
// 00879d2c  50                   push eax
// 00879d2d  ff15101ca400         call dword ptr [0xa41c10]
// 00879d33  83c410               add esp, 0x10
// 00879d36  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?PtInValueRect@CXTPPropertyGridItem@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
