// roc 2011-06 00826ce0  unit: CXTPImageManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826ce0
//
// 00826ce0  8b4104               mov eax, dword ptr [ecx + 4]
// 00826ce3  8b09                 mov ecx, dword ptr [ecx]
// 00826ce5  8988ec000000         mov dword ptr [eax + 0xec], ecx
// 00826ceb  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ??1CXTPPushRoutingFrame@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
