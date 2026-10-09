// roc 2007-03 00703a00  unit: seg_00700000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703a00
//
// 00703a00  837c240401           cmp dword ptr [esp + 4], 1
// 00703a05  56                   push esi
// 00703a06  8bf1                 mov esi, ecx
// 00703a08  752f                 jne 0x703a39
// 00703a0a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00703a0d  6a01                 push 1
// 00703a0f  50                   push eax
// 00703a10  ff155cee7700         call dword ptr [0x77ee5c]
// 00703a16  837e6800             cmp dword ptr [esi + 0x68], 0
// 00703a1a  7422                 je 0x703a3e
// 00703a1c  837e2000             cmp dword ptr [esi + 0x20], 0
// 00703a20  741c                 je 0x703a3e
// 00703a22  6a57                 push 0x57
// 00703a24  6a00                 push 0
// 00703a26  6a00                 push 0
// 00703a28  6a00                 push 0
// 00703a2a  6a00                 push 0
// 00703a2c  6a00                 push 0
// 00703a2e  8bce                 mov ecx, esi
// 00703a30  e881aaf1ff           call 0x61e4b6
// 00703a35  5e                   pop esi
// 00703a36  c20400               ret 4
// 00703a39  e894acf1ff           call 0x61e6d2
// 00703a3e  5e                   pop esi
// 00703a3f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
