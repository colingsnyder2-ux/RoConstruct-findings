// roc 2009-12 008e3060  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3060
//
// 008e3060  837c240401           cmp dword ptr [esp + 4], 1
// 008e3065  56                   push esi
// 008e3066  8bf1                 mov esi, ecx
// 008e3068  752f                 jne 0x8e3099
// 008e306a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e306d  6a01                 push 1
// 008e306f  50                   push eax
// 008e3070  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008e3076  837e6800             cmp dword ptr [esi + 0x68], 0
// 008e307a  7422                 je 0x8e309e
// 008e307c  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e3080  741c                 je 0x8e309e
// 008e3082  6a57                 push 0x57
// 008e3084  6a00                 push 0
// 008e3086  6a00                 push 0
// 008e3088  6a00                 push 0
// 008e308a  6a00                 push 0
// 008e308c  6a00                 push 0
// 008e308e  8bce                 mov ecx, esi
// 008e3090  e8970bf1ff           call 0x7f3c2c
// 008e3095  5e                   pop esi
// 008e3096  c20400               ret 4
// 008e3099  e8920df1ff           call 0x7f3e30
// 008e309e  5e                   pop esi
// 008e309f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
