// roc 2011-06 008f13f0  unit: CXTCaptionButtonThemeFactory  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f13f0
//
// 008f13f0  56                   push esi
// 008f13f1  8bf1                 mov esi, ecx
// 008f13f3  e8a8020100           call 0x9016a0
// 008f13f8  c7066ca2ad00         mov dword ptr [esi], 0xada26c
// 008f13fe  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008f1405  8bc6                 mov eax, esi
// 008f1407  5e                   pop esi
// 008f1408  c3                   ret 
// library xtp-15.2.1/Source\Chart\Drawing\XTPChartTransformationDeviceCommand.cpp (function ??0CXTPChartSaveStateDeviceCommand@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Drawing/XTPChartTransformationDeviceCommand.cpp
