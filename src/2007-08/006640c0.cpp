// from server: 100% by auto
// roc 2007-08 006640c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006640c0
//
// 006640c0  8b442408             mov eax, dword ptr [esp + 8]
// 006640c4  8b542404             mov edx, dword ptr [esp + 4]
// 006640c8  6a01                 push 1
// 006640ca  50                   push eax
// 006640cb  52                   push edx
// 006640cc  83c120               add ecx, 0x20
// 006640cf  e87c77fdff           call 0x63b850
// 006640d4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?InsertAt@CXTPPropertyGridItems@@IAEXHPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridItem.cpp
