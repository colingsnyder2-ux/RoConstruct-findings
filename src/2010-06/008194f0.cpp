// roc 2010-06 008194f0  unit: CXTPPropertyGridItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008194f0
//
// 008194f0  8b01                 mov eax, dword ptr [ecx]
// 008194f2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008194f5  83ec10               sub esp, 0x10
// 008194f8  8d1424               lea edx, [esp]
// 008194fb  52                   push edx
// 008194fc  ffd0                 call eax
// 008194fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00819502  8b542414             mov edx, dword ptr [esp + 0x14]
// 00819506  51                   push ecx
// 00819507  52                   push edx
// 00819508  8d442408             lea eax, [esp + 8]
// 0081950c  50                   push eax
// 0081950d  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00819513  83c410               add esp, 0x10
// 00819516  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?PtInValueRect@CXTPPropertyGridItem@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
