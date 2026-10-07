// roc 2012-06 00a76b00  unit: CXTPRibbonControlSystemPopupBarButton  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76b00
//
// 00a76b00  56                   push esi
// 00a76b01  8bf1                 mov esi, ecx
// 00a76b03  e8782efaff           call 0xa19980
// 00a76b08  c7062c81c200         mov dword ptr [esi], 0xc2812c
// 00a76b0e  c74620cc80c200       mov dword ptr [esi + 0x20], 0xc280cc
// 00a76b15  8bc6                 mov eax, esi
// 00a76b17  5e                   pop esi
// 00a76b18  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
