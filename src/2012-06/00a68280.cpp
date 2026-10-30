// roc 2012-06 00a68280  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68280
//
// 00a68280  837c240401           cmp dword ptr [esp + 4], 1
// 00a68285  56                   push esi
// 00a68286  8bf1                 mov esi, ecx
// 00a68288  752f                 jne 0xa682b9
// 00a6828a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6828d  6a01                 push 1
// 00a6828f  50                   push eax
// 00a68290  ff15083cb200         call dword ptr [0xb23c08]
// 00a68296  837e6800             cmp dword ptr [esi + 0x68], 0
// 00a6829a  7422                 je 0xa682be
// 00a6829c  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a682a0  741c                 je 0xa682be
// 00a682a2  6a57                 push 0x57
// 00a682a4  6a00                 push 0
// 00a682a6  6a00                 push 0
// 00a682a8  6a00                 push 0
// 00a682aa  6a00                 push 0
// 00a682ac  6a00                 push 0
// 00a682ae  8bce                 mov ecx, esi
// 00a682b0  e81fa2f1ff           call 0x9824d4
// 00a682b5  5e                   pop esi
// 00a682b6  c20400               ret 4
// 00a682b9  e820a4f1ff           call 0x9826de
// 00a682be  5e                   pop esi
// 00a682bf  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
