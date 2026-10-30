// roc 2010-06 00897330  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897330
//
// 00897330  837c240401           cmp dword ptr [esp + 4], 1
// 00897335  56                   push esi
// 00897336  8bf1                 mov esi, ecx
// 00897338  752f                 jne 0x897369
// 0089733a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089733d  6a01                 push 1
// 0089733f  50                   push eax
// 00897340  ff1560ba9e00         call dword ptr [0x9eba60]
// 00897346  837e6800             cmp dword ptr [esi + 0x68], 0
// 0089734a  7422                 je 0x89736e
// 0089734c  837e2000             cmp dword ptr [esi + 0x20], 0
// 00897350  741c                 je 0x89736e
// 00897352  6a57                 push 0x57
// 00897354  6a00                 push 0
// 00897356  6a00                 push 0
// 00897358  6a00                 push 0
// 0089735a  6a00                 push 0
// 0089735c  6a00                 push 0
// 0089735e  8bce                 mov ecx, esi
// 00897360  e8070af1ff           call 0x7a7d6c
// 00897365  5e                   pop esi
// 00897366  c20400               ret 4
// 00897369  e8020cf1ff           call 0x7a7f70
// 0089736e  5e                   pop esi
// 0089736f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
