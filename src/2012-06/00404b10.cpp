// roc 2012-06 00404b10  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404b10
//
// 00404b10  8b442408             mov eax, dword ptr [esp + 8]
// 00404b14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00404b18  83caff               or edx, 0xffffffff
// 00404b1b  2bd0                 sub edx, eax
// 00404b1d  3bd1                 cmp edx, ecx
// 00404b1f  7306                 jae 0x404b27
// 00404b21  b857000780           mov eax, 0x80070057
// 00404b26  c3                   ret 
// 00404b27  03c1                 add eax, ecx
// 00404b29  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00404b2d  8901                 mov dword ptr [ecx], eax
// 00404b2f  33c0                 xor eax, eax
// 00404b31  c3                   ret 
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartScaleTypeMap.cpp (function ??$AtlAdd@K@ATL@@YAJPAKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartScaleTypeMap.cpp
