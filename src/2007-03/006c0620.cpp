// roc 2007-03 006c0620  unit: seg_006c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c0620
//
// 006c0620  8bc1                 mov eax, ecx
// 006c0622  33c9                 xor ecx, ecx
// 006c0624  894808               mov dword ptr [eax + 8], ecx
// 006c0627  89480c               mov dword ptr [eax + 0xc], ecx
// 006c062a  894810               mov dword ptr [eax + 0x10], ecx
// 006c062d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c0631  c70028597d00         mov dword ptr [eax], 0x7d5928
// 006c0637  894804               mov dword ptr [eax + 4], ecx
// 006c063a  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
