// from server: 100% by auto
// roc 2007-08 006d73c0  unit: CXTMemDC  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d73c0
//
// 006d73c0  8bc1                 mov eax, ecx
// 006d73c2  33c9                 xor ecx, ecx
// 006d73c4  894808               mov dword ptr [eax + 8], ecx
// 006d73c7  89480c               mov dword ptr [eax + 0xc], ecx
// 006d73ca  894810               mov dword ptr [eax + 0x10], ecx
// 006d73cd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d73d1  c700e08b7d00         mov dword ptr [eax], 0x7d8be0
// 006d73d7  894804               mov dword ptr [eax + 4], ecx
// 006d73da  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTRegistryManager.cpp
