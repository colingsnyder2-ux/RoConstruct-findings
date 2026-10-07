// roc 2007-08 0064ea10  unit: CXTPImageManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ea10
//
// 0064ea10  56                   push esi
// 0064ea11  8bf1                 mov esi, ecx
// 0064ea13  e85e990e00           call 0x738376
// 0064ea18  8b542408             mov edx, dword ptr [esp + 8]
// 0064ea1c  894604               mov dword ptr [esi + 4], eax
// 0064ea1f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0064ea25  890e                 mov dword ptr [esi], ecx
// 0064ea27  8990ec000000         mov dword ptr [eax + 0xec], edx
// 0064ea2d  8bc6                 mov eax, esi
// 0064ea2f  5e                   pop esi
// 0064ea30  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPPushRoutingFrame@@QAE@PAVCFrameWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
