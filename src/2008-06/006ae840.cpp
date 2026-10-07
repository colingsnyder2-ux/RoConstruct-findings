// roc 2008-06 006ae840  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae840
//
// 006ae840  8b442404             mov eax, dword ptr [esp + 4]
// 006ae844  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006ae84a  83f802               cmp eax, 2
// 006ae84d  741e                 je 0x6ae86d
// 006ae84f  83f803               cmp eax, 3
// 006ae852  7419                 je 0x6ae86d
// 006ae854  837c240800           cmp dword ptr [esp + 8], 0
// 006ae859  7409                 je 0x6ae864
// 006ae85b  8d81f8000000         lea eax, [ecx + 0xf8]
// 006ae861  c20800               ret 8
// 006ae864  8d81f0000000         lea eax, [ecx + 0xf0]
// 006ae86a  c20800               ret 8
// 006ae86d  837c240800           cmp dword ptr [esp + 8], 0
// 006ae872  8d8108010000         lea eax, [ecx + 0x108]
// 006ae878  7506                 jne 0x6ae880
// 006ae87a  8d8100010000         lea eax, [ecx + 0x100]
// 006ae880  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarFont@CXTPPaintManager@@UAEPAVCFont@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
