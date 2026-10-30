// from server: 100% by auto
// roc 2011-06 0087cbc0  unit: CXTPPropertyGridItemBool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087cbc0
//
// 0087cbc0  83ec10               sub esp, 0x10
// 0087cbc3  8b01                 mov eax, dword ptr [ecx]
// 0087cbc5  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0087cbc8  8d1424               lea edx, [esp]
// 0087cbcb  52                   push edx
// 0087cbcc  ffd0                 call eax
// 0087cbce  8b0c24               mov ecx, dword ptr [esp]
// 0087cbd1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087cbd5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087cbd9  83c10f               add ecx, 0xf
// 0087cbdc  52                   push edx
// 0087cbdd  894c240c             mov dword ptr [esp + 0xc], ecx
// 0087cbe1  50                   push eax
// 0087cbe2  8d4c2408             lea ecx, [esp + 8]
// 0087cbe6  51                   push ecx
// 0087cbe7  ff15101ca400         call dword ptr [0xa41c10]
// 0087cbed  83c410               add esp, 0x10
// 0087cbf0  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?PtInCheckBoxRect@CXTPPropertyGridItemBool@@IAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
