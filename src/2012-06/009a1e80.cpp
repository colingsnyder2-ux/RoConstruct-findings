// roc 2012-06 009a1e80  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a1e80
//
// 009a1e80  8b442404             mov eax, dword ptr [esp + 4]
// 009a1e84  56                   push esi
// 009a1e85  8bf1                 mov esi, ecx
// 009a1e87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009a1e8b  51                   push ecx
// 009a1e8c  50                   push eax
// 009a1e8d  8bce                 mov ecx, esi
// 009a1e8f  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 009a1e95  e866e0ffff           call 0x99ff00
// 009a1e9a  85c0                 test eax, eax
// 009a1e9c  7504                 jne 0x9a1ea2
// 009a1e9e  5e                   pop esi
// 009a1e9f  c20800               ret 8
// 009a1ea2  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 009a1ea8  e843fe0200           call 0x9d1cf0
// 009a1ead  b801000000           mov eax, 1
// 009a1eb2  5e                   pop esi
// 009a1eb3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
