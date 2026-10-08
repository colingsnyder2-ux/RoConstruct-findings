// roc 2011-06 008efe30  unit: CXTShadowWnd  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efe30
//
// 008efe30  837c240401           cmp dword ptr [esp + 4], 1
// 008efe35  56                   push esi
// 008efe36  8bf1                 mov esi, ecx
// 008efe38  752f                 jne 0x8efe69
// 008efe3a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008efe3d  6a01                 push 1
// 008efe3f  50                   push eax
// 008efe40  ff15d019a400         call dword ptr [0xa419d0]
// 008efe46  837e6800             cmp dword ptr [esi + 0x68], 0
// 008efe4a  7422                 je 0x8efe6e
// 008efe4c  837e2000             cmp dword ptr [esi + 0x20], 0
// 008efe50  741c                 je 0x8efe6e
// 008efe52  6a57                 push 0x57
// 008efe54  6a00                 push 0
// 008efe56  6a00                 push 0
// 008efe58  6a00                 push 0
// 008efe5a  6a00                 push 0
// 008efe5c  6a00                 push 0
// 008efe5e  8bce                 mov ecx, esi
// 008efe60  e8c5a5f1ff           call 0x80a42a
// 008efe65  5e                   pop esi
// 008efe66  c20400               ret 4
// 008efe69  e8c0a7f1ff           call 0x80a62e
// 008efe6e  5e                   pop esi
// 008efe6f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnTimer@CXTShadowWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
