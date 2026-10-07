// roc 2012-06 00a2b6d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b6d0
//
// 00a2b6d0  51                   push ecx
// 00a2b6d1  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a2b6d4  e8a70cf8ff           call 0x9ac380
// 00a2b6d9  c3                   ret 
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObject.cpp (function ?Remove@CXTPSkinObjectClassInfo@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObject.cpp
