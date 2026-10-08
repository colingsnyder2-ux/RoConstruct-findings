// roc 2009-06 00722f50  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00722f50
//
// 00722f50  8b442404             mov eax, dword ptr [esp + 4]
// 00722f54  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00722f5a  83f802               cmp eax, 2
// 00722f5d  741e                 je 0x722f7d
// 00722f5f  83f803               cmp eax, 3
// 00722f62  7419                 je 0x722f7d
// 00722f64  837c240800           cmp dword ptr [esp + 8], 0
// 00722f69  7409                 je 0x722f74
// 00722f6b  8d81f8000000         lea eax, [ecx + 0xf8]
// 00722f71  c20800               ret 8
// 00722f74  8d81f0000000         lea eax, [ecx + 0xf0]
// 00722f7a  c20800               ret 8
// 00722f7d  837c240800           cmp dword ptr [esp + 8], 0
// 00722f82  8d8108010000         lea eax, [ecx + 0x108]
// 00722f88  7506                 jne 0x722f90
// 00722f8a  8d8100010000         lea eax, [ecx + 0x100]
// 00722f90  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
