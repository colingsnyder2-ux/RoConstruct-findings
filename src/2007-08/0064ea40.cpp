// roc 2007-08 0064ea40  unit: CXTPImageManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ea40
//
// 0064ea40  8b4104               mov eax, dword ptr [ecx + 4]
// 0064ea43  8b09                 mov ecx, dword ptr [ecx]
// 0064ea45  8988ec000000         mov dword ptr [eax + 0xec], ecx
// 0064ea4b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ??1CXTPPushRoutingFrame@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
