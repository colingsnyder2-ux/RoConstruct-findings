// roc 2010-06 0081f400  unit: CXTPPropertyGridItemBool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081f400
//
// 0081f400  83ec10               sub esp, 0x10
// 0081f403  8b01                 mov eax, dword ptr [ecx]
// 0081f405  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0081f408  8d1424               lea edx, [esp]
// 0081f40b  52                   push edx
// 0081f40c  ffd0                 call eax
// 0081f40e  8b0c24               mov ecx, dword ptr [esp]
// 0081f411  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081f415  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081f419  83c10f               add ecx, 0xf
// 0081f41c  52                   push edx
// 0081f41d  894c240c             mov dword ptr [esp + 0xc], ecx
// 0081f421  50                   push eax
// 0081f422  8d4c2408             lea ecx, [esp + 8]
// 0081f426  51                   push ecx
// 0081f427  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0081f42d  83c410               add esp, 0x10
// 0081f430  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?PtInCheckBoxRect@CXTPPropertyGridItemBool@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
