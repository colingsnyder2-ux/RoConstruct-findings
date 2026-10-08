// roc 2008-06 00717c70  unit: CXTPPropertyGridItemBool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717c70
//
// 00717c70  83ec10               sub esp, 0x10
// 00717c73  8b01                 mov eax, dword ptr [ecx]
// 00717c75  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00717c78  8d1424               lea edx, [esp]
// 00717c7b  52                   push edx
// 00717c7c  ffd0                 call eax
// 00717c7e  8b0c24               mov ecx, dword ptr [esp]
// 00717c81  8b542418             mov edx, dword ptr [esp + 0x18]
// 00717c85  8b442414             mov eax, dword ptr [esp + 0x14]
// 00717c89  83c10f               add ecx, 0xf
// 00717c8c  52                   push edx
// 00717c8d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00717c91  50                   push eax
// 00717c92  8d4c2408             lea ecx, [esp + 8]
// 00717c96  51                   push ecx
// 00717c97  ff152c2d8000         call dword ptr [0x802d2c]
// 00717c9d  83c410               add esp, 0x10
// 00717ca0  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?PtInCheckBoxRect@CXTPPropertyGridItemBool@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
