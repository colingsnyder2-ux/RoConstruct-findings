// roc 2011-06 0080fd80  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080fd80
//
// 0080fd80  8b442404             mov eax, dword ptr [esp + 4]
// 0080fd84  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0080fd8a  83f802               cmp eax, 2
// 0080fd8d  741e                 je 0x80fdad
// 0080fd8f  83f803               cmp eax, 3
// 0080fd92  7419                 je 0x80fdad
// 0080fd94  837c240800           cmp dword ptr [esp + 8], 0
// 0080fd99  7409                 je 0x80fda4
// 0080fd9b  8d81f8000000         lea eax, [ecx + 0xf8]
// 0080fda1  c20800               ret 8
// 0080fda4  8d81f0000000         lea eax, [ecx + 0xf0]
// 0080fdaa  c20800               ret 8
// 0080fdad  837c240800           cmp dword ptr [esp + 8], 0
// 0080fdb2  8d8108010000         lea eax, [ecx + 0x108]
// 0080fdb8  7506                 jne 0x80fdc0
// 0080fdba  8d8100010000         lea eax, [ecx + 0x100]
// 0080fdc0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
