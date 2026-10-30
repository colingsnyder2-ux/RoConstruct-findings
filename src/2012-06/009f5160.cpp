// from server: 100% by auto
// roc 2012-06 009f5160  unit: CXTPPropertyGridItemBool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5160
//
// 009f5160  83ec10               sub esp, 0x10
// 009f5163  8b01                 mov eax, dword ptr [ecx]
// 009f5165  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009f5168  8d1424               lea edx, [esp]
// 009f516b  52                   push edx
// 009f516c  ffd0                 call eax
// 009f516e  8b0c24               mov ecx, dword ptr [esp]
// 009f5171  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f5175  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f5179  83c10f               add ecx, 0xf
// 009f517c  52                   push edx
// 009f517d  894c240c             mov dword ptr [esp + 0xc], ecx
// 009f5181  50                   push eax
// 009f5182  8d4c2408             lea ecx, [esp + 8]
// 009f5186  51                   push ecx
// 009f5187  ff15483bb200         call dword ptr [0xb23b48]
// 009f518d  83c410               add esp, 0x10
// 009f5190  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?PtInCheckBoxRect@CXTPPropertyGridItemBool@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
