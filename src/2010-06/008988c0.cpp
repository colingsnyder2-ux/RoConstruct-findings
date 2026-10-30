// roc 2010-06 008988c0  unit: CXTPDockingPane  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008988c0
//
// 008988c0  56                   push esi
// 008988c1  6a00                 push 0
// 008988c3  8bf1                 mov esi, ecx
// 008988c5  e866fa0000           call 0x8a8330
// 008988ca  c706b407a700         mov dword ptr [esi], 0xa707b4
// 008988d0  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008988da  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008988e4  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008988eb  8bc6                 mov eax, esi
// 008988ed  5e                   pop esi
// 008988ee  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
