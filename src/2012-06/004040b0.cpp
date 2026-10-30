// from server: 100% by auto
// roc 2012-06 004040b0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004040b0
//
// 004040b0  8b442408             mov eax, dword ptr [esp + 8]
// 004040b4  f76c240c             imul dword ptr [esp + 0xc]
// 004040b8  8bc8                 mov ecx, eax
// 004040ba  81c100000080         add ecx, 0x80000000
// 004040c0  83d200               adc edx, 0
// 004040c3  85d2                 test edx, edx
// 004040c5  7710                 ja 0x4040d7
// 004040c7  7205                 jb 0x4040ce
// 004040c9  83f9ff               cmp ecx, -1
// 004040cc  7709                 ja 0x4040d7
// 004040ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004040d2  8901                 mov dword ptr [ecx], eax
// 004040d4  33c0                 xor eax, eax
// 004040d6  c3                   ret 
// 004040d7  b857000780           mov eax, 0x80070057
// 004040dc  c3                   ret 
// library xtp-15.2.1/Source\Chart\Diagram\Axis\XTPChartScaleTypeMap.cpp (function ??$AtlMultiply@H@ATL@@YAJPAHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Axis/XTPChartScaleTypeMap.cpp
