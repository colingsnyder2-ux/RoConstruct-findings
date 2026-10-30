// roc 2007-03 00689ae0  unit: seg_00680000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00689ae0
//
// 00689ae0  56                   push esi
// 00689ae1  8bf1                 mov esi, ecx
// 00689ae3  e8188f0700           call 0x702a00
// 00689ae8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00689aec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00689af0  89867c010000         mov dword ptr [esi + 0x17c], eax
// 00689af6  c706ecf07c00         mov dword ptr [esi], 0x7cf0ec
// 00689afc  c74654dcf07c00       mov dword ptr [esi + 0x54], 0x7cf0dc
// 00689b03  898e64010000         mov dword ptr [esi + 0x164], ecx
// 00689b09  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 00689b13  8bc6                 mov eax, esi
// 00689b15  5e                   pop esi
// 00689b16  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
