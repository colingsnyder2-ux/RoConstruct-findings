// roc 2008-06 006d9f80  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9f80
//
// 006d9f80  8b442408             mov eax, dword ptr [esp + 8]
// 006d9f84  8b542404             mov edx, dword ptr [esp + 4]
// 006d9f88  6a01                 push 1
// 006d9f8a  50                   push eax
// 006d9f8b  52                   push edx
// 006d9f8c  83c120               add ecx, 0x20
// 006d9f8f  e86c1c0a00           call 0x77bc00
// 006d9f94  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?InsertAt@CXTPPropertyGridItems@@IAEXHPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
