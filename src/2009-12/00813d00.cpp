// roc 2009-12 00813d00  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813d00
//
// 00813d00  8b442404             mov eax, dword ptr [esp + 4]
// 00813d04  56                   push esi
// 00813d05  8bf1                 mov esi, ecx
// 00813d07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00813d0b  51                   push ecx
// 00813d0c  50                   push eax
// 00813d0d  8bce                 mov ecx, esi
// 00813d0f  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00813d15  e8d6dfffff           call 0x811cf0
// 00813d1a  85c0                 test eax, eax
// 00813d1c  7504                 jne 0x813d22
// 00813d1e  5e                   pop esi
// 00813d1f  c20800               ret 8
// 00813d22  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00813d28  e813410300           call 0x847e40
// 00813d2d  b801000000           mov eax, 1
// 00813d32  5e                   pop esi
// 00813d33  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
