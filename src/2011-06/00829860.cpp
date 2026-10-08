// roc 2011-06 00829860  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829860
//
// 00829860  8b442404             mov eax, dword ptr [esp + 4]
// 00829864  56                   push esi
// 00829865  8bf1                 mov esi, ecx
// 00829867  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082986b  51                   push ecx
// 0082986c  50                   push eax
// 0082986d  8bce                 mov ecx, esi
// 0082986f  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00829875  e866e0ffff           call 0x8278e0
// 0082987a  85c0                 test eax, eax
// 0082987c  7504                 jne 0x829882
// 0082987e  5e                   pop esi
// 0082987f  c20800               ret 8
// 00829882  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00829888  e843000300           call 0x8598d0
// 0082988d  b801000000           mov eax, 1
// 00829892  5e                   pop esi
// 00829893  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
