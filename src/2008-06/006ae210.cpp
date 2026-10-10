// roc 2008-06 006ae210  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae210
//
// 006ae210  8b0d60e09700         mov ecx, dword ptr [0x97e060]
// 006ae216  85c9                 test ecx, ecx
// 006ae218  7405                 je 0x6ae21f
// 006ae21a  e8c529ffff           call 0x6a0be4
// 006ae21f  8b442404             mov eax, dword ptr [esp + 4]
// 006ae223  a360e09700           mov dword ptr [0x97e060], eax
// 006ae228  c7804401000007000000 mov dword ptr [eax + 0x144], 7
// 006ae232  8b0d60e09700         mov ecx, dword ptr [0x97e060]
// 006ae238  8b01                 mov eax, dword ptr [ecx]
// 006ae23a  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006ae240  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?SetCustomTheme@CXTPPaintManager@@SAXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
