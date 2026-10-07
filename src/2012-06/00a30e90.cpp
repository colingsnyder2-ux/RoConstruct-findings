// roc 2012-06 00a30e90  unit: CXTPReportHyperlinks  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30e90
//
// 00a30e90  8b01                 mov eax, dword ptr [ecx]
// 00a30e92  85c0                 test eax, eax
// 00a30e94  7407                 je 0xa30e9d
// 00a30e96  50                   push eax
// 00a30e97  ff150420b200         call dword ptr [0xb22004]
// 00a30e9d  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPRegistryManager.cpp (function ??1CHKey@CXTPRegistryManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPRegistryManager.cpp
