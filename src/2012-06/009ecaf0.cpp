// from server: 100% by auto
// roc 2012-06 009ecaf0  unit: CXTPToolTipContext  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ecaf0
//
// 009ecaf0  8b442408             mov eax, dword ptr [esp + 8]
// 009ecaf4  8b542404             mov edx, dword ptr [esp + 4]
// 009ecaf8  6a01                 push 1
// 009ecafa  50                   push eax
// 009ecafb  52                   push edx
// 009ecafc  e86ff7ffff           call 0x9ec270
// 009ecb01  c20800               ret 8
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartScaleTypeMap.cpp (function ?Insert@CStorage@CXTPChartQualitativeScaleTypeMap@@QAEXHABV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartScaleTypeMap.cpp
