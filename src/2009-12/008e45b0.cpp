// roc 2009-12 008e45b0  unit: CXTPDockingPane  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e45b0
//
// 008e45b0  56                   push esi
// 008e45b1  6a00                 push 0
// 008e45b3  8bf1                 mov esi, ecx
// 008e45b5  e836fc0000           call 0x8f41f0
// 008e45ba  c706bcc4a000         mov dword ptr [esi], 0xa0c4bc
// 008e45c0  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008e45ca  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008e45d4  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008e45db  8bc6                 mov eax, esi
// 008e45dd  5e                   pop esi
// 008e45de  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
