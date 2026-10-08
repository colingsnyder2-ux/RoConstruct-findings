// from server: 100% by auto
// roc 2008-06 0070ff20  unit: CXTPStatusBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ff20
//
// 0070ff20  56                   push esi
// 0070ff21  6a40                 push 0x40
// 0070ff23  8bf1                 mov esi, ecx
// 0070ff25  6a00                 push 0
// 0070ff27  56                   push esi
// 0070ff28  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 0070ff2f  e8d017f9ff           call 0x6a1704
// 0070ff34  83c40c               add esp, 0xc
// 0070ff37  8bc6                 mov eax, esi
// 0070ff39  5e                   pop esi
// 0070ff3a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ??0CXTLogFont@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
