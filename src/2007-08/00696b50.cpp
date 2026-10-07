// roc 2007-08 00696b50  unit: CXTPToolTipContext::CRichEditToolTip  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696b50
//
// 00696b50  56                   push esi
// 00696b51  6a40                 push 0x40
// 00696b53  8bf1                 mov esi, ecx
// 00696b55  6a00                 push 0
// 00696b57  56                   push esi
// 00696b58  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00696b5f  e828a0f9ff           call 0x630b8c
// 00696b64  83c40c               add esp, 0xc
// 00696b67  8bc6                 mov eax, esi
// 00696b69  5e                   pop esi
// 00696b6a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTGlobal.cpp (function ??0CXTLogFont@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTGlobal.cpp
