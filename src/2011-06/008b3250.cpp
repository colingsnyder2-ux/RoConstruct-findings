// from server: 100% by auto
// roc 2011-06 008b3250  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b3250
//
// 008b3250  51                   push ecx
// 008b3251  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008b3254  e8270bf8ff           call 0x833d80
// 008b3259  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObject.cpp (function ?Remove@CXTPSkinObjectClassInfo@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObject.cpp
