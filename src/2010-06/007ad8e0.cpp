// roc 2010-06 007ad8e0  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad8e0
//
// 007ad8e0  8b442404             mov eax, dword ptr [esp + 4]
// 007ad8e4  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007ad8ea  83f802               cmp eax, 2
// 007ad8ed  741e                 je 0x7ad90d
// 007ad8ef  83f803               cmp eax, 3
// 007ad8f2  7419                 je 0x7ad90d
// 007ad8f4  837c240800           cmp dword ptr [esp + 8], 0
// 007ad8f9  7409                 je 0x7ad904
// 007ad8fb  8d81f8000000         lea eax, [ecx + 0xf8]
// 007ad901  c20800               ret 8
// 007ad904  8d81f0000000         lea eax, [ecx + 0xf0]
// 007ad90a  c20800               ret 8
// 007ad90d  837c240800           cmp dword ptr [esp + 8], 0
// 007ad912  8d8108010000         lea eax, [ecx + 0x108]
// 007ad918  7506                 jne 0x7ad920
// 007ad91a  8d8100010000         lea eax, [ecx + 0x100]
// 007ad920  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
