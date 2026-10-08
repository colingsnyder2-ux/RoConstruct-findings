// roc 2009-06 00808580  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808580
//
// 00808580  837c240401           cmp dword ptr [esp + 4], 1
// 00808585  56                   push esi
// 00808586  8bf1                 mov esi, ecx
// 00808588  752f                 jne 0x8085b9
// 0080858a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080858d  6a01                 push 1
// 0080858f  50                   push eax
// 00808590  ff1584ee8900         call dword ptr [0x89ee84]
// 00808596  837e6800             cmp dword ptr [esi + 0x68], 0
// 0080859a  7422                 je 0x8085be
// 0080859c  837e2000             cmp dword ptr [esi + 0x20], 0
// 008085a0  741c                 je 0x8085be
// 008085a2  6a57                 push 0x57
// 008085a4  6a00                 push 0
// 008085a6  6a00                 push 0
// 008085a8  6a00                 push 0
// 008085aa  6a00                 push 0
// 008085ac  6a00                 push 0
// 008085ae  8bce                 mov ecx, esi
// 008085b0  e84f08f1ff           call 0x718e04
// 008085b5  5e                   pop esi
// 008085b6  c20400               ret 4
// 008085b9  e84a0af1ff           call 0x719008
// 008085be  5e                   pop esi
// 008085bf  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
