// roc 2007-08 00712680  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712680
//
// 00712680  837c240401           cmp dword ptr [esp + 4], 1
// 00712685  56                   push esi
// 00712686  8bf1                 mov esi, ecx
// 00712688  752f                 jne 0x7126b9
// 0071268a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071268d  6a01                 push 1
// 0071268f  50                   push eax
// 00712690  ff15e0ec7700         call dword ptr [0x77ece0]
// 00712696  837e6800             cmp dword ptr [esi + 0x68], 0
// 0071269a  7422                 je 0x7126be
// 0071269c  837e2000             cmp dword ptr [esi + 0x20], 0
// 007126a0  741c                 je 0x7126be
// 007126a2  6a57                 push 0x57
// 007126a4  6a00                 push 0
// 007126a6  6a00                 push 0
// 007126a8  6a00                 push 0
// 007126aa  6a00                 push 0
// 007126ac  6a00                 push 0
// 007126ae  8bce                 mov ecx, esi
// 007126b0  e879d9f1ff           call 0x63002e
// 007126b5  5e                   pop esi
// 007126b6  c20400               ret 4
// 007126b9  e880dbf1ff           call 0x63023e
// 007126be  5e                   pop esi
// 007126bf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
