// roc 2012-06 00988060  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988060
//
// 00988060  8b442404             mov eax, dword ptr [esp + 4]
// 00988064  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0098806a  83f802               cmp eax, 2
// 0098806d  741e                 je 0x98808d
// 0098806f  83f803               cmp eax, 3
// 00988072  7419                 je 0x98808d
// 00988074  837c240800           cmp dword ptr [esp + 8], 0
// 00988079  7409                 je 0x988084
// 0098807b  8d81f8000000         lea eax, [ecx + 0xf8]
// 00988081  c20800               ret 8
// 00988084  8d81f0000000         lea eax, [ecx + 0xf0]
// 0098808a  c20800               ret 8
// 0098808d  837c240800           cmp dword ptr [esp + 8], 0
// 00988092  8d8108010000         lea eax, [ecx + 0x108]
// 00988098  7506                 jne 0x9880a0
// 0098809a  8d8100010000         lea eax, [ecx + 0x100]
// 009880a0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
