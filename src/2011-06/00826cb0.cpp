// roc 2011-06 00826cb0  unit: CXTPImageManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826cb0
//
// 00826cb0  56                   push esi
// 00826cb1  8bf1                 mov esi, ecx
// 00826cb3  e8505a1a00           call 0x9cc708
// 00826cb8  8b542408             mov edx, dword ptr [esp + 8]
// 00826cbc  894604               mov dword ptr [esi + 4], eax
// 00826cbf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00826cc5  890e                 mov dword ptr [esi], ecx
// 00826cc7  8990ec000000         mov dword ptr [eax + 0xec], edx
// 00826ccd  8bc6                 mov eax, esi
// 00826ccf  5e                   pop esi
// 00826cd0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPPushRoutingFrame@CXTPToolBar@@QAE@PAVCFrameWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
