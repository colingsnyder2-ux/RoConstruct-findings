// from server: 100% by auto
// roc 2008-06 0078ff00  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ff00
//
// 0078ff00  837c240401           cmp dword ptr [esp + 4], 1
// 0078ff05  56                   push esi
// 0078ff06  8bf1                 mov esi, ecx
// 0078ff08  752f                 jne 0x78ff39
// 0078ff0a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078ff0d  6a01                 push 1
// 0078ff0f  50                   push eax
// 0078ff10  ff151c2e8000         call dword ptr [0x802e1c]
// 0078ff16  837e6800             cmp dword ptr [esi + 0x68], 0
// 0078ff1a  7422                 je 0x78ff3e
// 0078ff1c  837e2000             cmp dword ptr [esi + 0x20], 0
// 0078ff20  741c                 je 0x78ff3e
// 0078ff22  6a57                 push 0x57
// 0078ff24  6a00                 push 0
// 0078ff26  6a00                 push 0
// 0078ff28  6a00                 push 0
// 0078ff2a  6a00                 push 0
// 0078ff2c  6a00                 push 0
// 0078ff2e  8bce                 mov ecx, esi
// 0078ff30  e8110bf1ff           call 0x6a0a46
// 0078ff35  5e                   pop esi
// 0078ff36  c20400               ret 4
// 0078ff39  e82a0df1ff           call 0x6a0c68
// 0078ff3e  5e                   pop esi
// 0078ff3f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
