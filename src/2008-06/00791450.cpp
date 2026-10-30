// from server: 100% by auto
// roc 2008-06 00791450  unit: CXTPDockingPane  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791450
//
// 00791450  56                   push esi
// 00791451  6a00                 push 0
// 00791453  8bf1                 mov esi, ecx
// 00791455  e806060100           call 0x7a1a60
// 0079145a  c70624b08600         mov dword ptr [esi], 0x86b024
// 00791460  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 0079146a  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00791474  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0079147b  8bc6                 mov eax, esi
// 0079147d  5e                   pop esi
// 0079147e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
