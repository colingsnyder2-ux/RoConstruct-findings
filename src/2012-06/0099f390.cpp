// roc 2012-06 0099f390  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f390
//
// 0099f390  56                   push esi
// 0099f391  8bf1                 mov esi, ecx
// 0099f393  e8e8a50700           call 0xa19980
// 0099f398  33c0                 xor eax, eax
// 0099f39a  898674010000         mov dword ptr [esi + 0x174], eax
// 0099f3a0  898678010000         mov dword ptr [esi + 0x178], eax
// 0099f3a6  c7061cebc000         mov dword ptr [esi], 0xc0eb1c
// 0099f3ac  c74620bceac000       mov dword ptr [esi + 0x20], 0xc0eabc
// 0099f3b3  8bc6                 mov eax, esi
// 0099f3b5  5e                   pop esi
// 0099f3b6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
