// from server: 100% by auto
// roc 2012-06 009bb450  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb450
//
// 009bb450  8b442408             mov eax, dword ptr [esp + 8]
// 009bb454  8b542404             mov edx, dword ptr [esp + 4]
// 009bb458  6a01                 push 1
// 009bb45a  50                   push eax
// 009bb45b  52                   push edx
// 009bb45c  83c120               add ecx, 0x20
// 009bb45f  e86cfeffff           call 0x9bb2d0
// 009bb464  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?InsertAt@CXTPPropertyGridItems@@IAEXHPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
