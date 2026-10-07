// roc 2012-06 00a69770  unit: CXTCaptionButtonThemeFactory  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69770
//
// 00a69770  56                   push esi
// 00a69771  8bf1                 mov esi, ecx
// 00a69773  e808010100           call 0xa79880
// 00a69778  c7060459c200         mov dword ptr [esi], 0xc25904
// 00a6977e  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00a69785  8bc6                 mov eax, esi
// 00a69787  5e                   pop esi
// 00a69788  c3                   ret 
// library xtp-15.2.1/Source\Chart\Drawing\XTPChartTransformationDeviceCommand.cpp (function ??0CXTPChartSaveStateDeviceCommand@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Drawing/XTPChartTransformationDeviceCommand.cpp
