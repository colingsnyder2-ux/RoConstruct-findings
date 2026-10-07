// roc 2011-06 00843010  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843010
//
// 00843010  8b442408             mov eax, dword ptr [esp + 8]
// 00843014  8b542404             mov edx, dword ptr [esp + 4]
// 00843018  6a01                 push 1
// 0084301a  50                   push eax
// 0084301b  52                   push edx
// 0084301c  83c120               add ecx, 0x20
// 0084301f  e82c550100           call 0x858550
// 00843024  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?InsertAt@CXTPPropertyGridItems@@IAEXHPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
