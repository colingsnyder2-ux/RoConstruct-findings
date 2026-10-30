// from server: 100% by auto
// roc 2012-06 0099f2e0  unit: CXTPImageManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f2e0
//
// 0099f2e0  56                   push esi
// 0099f2e1  8bf1                 mov esi, ecx
// 0099f2e3  e8daa30f00           call 0xa996c2
// 0099f2e8  8b542408             mov edx, dword ptr [esp + 8]
// 0099f2ec  894604               mov dword ptr [esi + 4], eax
// 0099f2ef  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0099f2f5  890e                 mov dword ptr [esi], ecx
// 0099f2f7  8990ec000000         mov dword ptr [eax + 0xec], edx
// 0099f2fd  8bc6                 mov eax, esi
// 0099f2ff  5e                   pop esi
// 0099f300  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPPushRoutingFrame@CXTPToolBar@@QAE@PAVCFrameWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
