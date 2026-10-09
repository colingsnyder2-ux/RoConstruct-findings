// roc 2009-12 007fde10  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fde10
//
// 007fde10  8b442404             mov eax, dword ptr [esp + 4]
// 007fde14  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007fde1a  83f802               cmp eax, 2
// 007fde1d  741e                 je 0x7fde3d
// 007fde1f  83f803               cmp eax, 3
// 007fde22  7419                 je 0x7fde3d
// 007fde24  837c240800           cmp dword ptr [esp + 8], 0
// 007fde29  7409                 je 0x7fde34
// 007fde2b  8d81f8000000         lea eax, [ecx + 0xf8]
// 007fde31  c20800               ret 8
// 007fde34  8d81f0000000         lea eax, [ecx + 0xf0]
// 007fde3a  c20800               ret 8
// 007fde3d  837c240800           cmp dword ptr [esp + 8], 0
// 007fde42  8d8108010000         lea eax, [ecx + 0x108]
// 007fde48  7506                 jne 0x7fde50
// 007fde4a  8d8100010000         lea eax, [ecx + 0x100]
// 007fde50  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
