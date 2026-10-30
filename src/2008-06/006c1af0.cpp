// from server: 100% by auto
// roc 2008-06 006c1af0  unit: CXTPImageManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1af0
//
// 006c1af0  8b4104               mov eax, dword ptr [ecx + 4]
// 006c1af3  8b09                 mov ecx, dword ptr [ecx]
// 006c1af5  8988ec000000         mov dword ptr [eax + 0xec], ecx
// 006c1afb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??1CXTPPushRoutingFrame@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
