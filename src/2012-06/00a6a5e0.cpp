// roc 2012-06 00a6a5e0  unit: CXTCaptionButton  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a5e0
//
// 00a6a5e0  f644240804           test byte ptr [esp + 8], 4
// 00a6a5e5  56                   push esi
// 00a6a5e6  8bf1                 mov esi, ecx
// 00a6a5e8  7509                 jne 0xa6a5f3
// 00a6a5ea  e8ef80f1ff           call 0x9826de
// 00a6a5ef  5e                   pop esi
// 00a6a5f0  c20800               ret 8
// 00a6a5f3  8b442408             mov eax, dword ptr [esp + 8]
// 00a6a5f7  50                   push eax
// 00a6a5f8  e875ef0200           call 0xa99572
// 00a6a5fd  85c0                 test eax, eax
// 00a6a5ff  740d                 je 0xa6a60e
// 00a6a601  8b16                 mov edx, dword ptr [esi]
// 00a6a603  50                   push eax
// 00a6a604  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 00a6a60a  8bce                 mov ecx, esi
// 00a6a60c  ffd0                 call eax
// 00a6a60e  b801000000           mov eax, 1
// 00a6a613  5e                   pop esi
// 00a6a614  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButton.cpp (function ?OnPrintClient@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp
