// roc 2010-06 007c7de0  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c7de0
//
// 007c7de0  8b442404             mov eax, dword ptr [esp + 4]
// 007c7de4  56                   push esi
// 007c7de5  8bf1                 mov esi, ecx
// 007c7de7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c7deb  51                   push ecx
// 007c7dec  50                   push eax
// 007c7ded  8bce                 mov ecx, esi
// 007c7def  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 007c7df5  e8b6dfffff           call 0x7c5db0
// 007c7dfa  85c0                 test eax, eax
// 007c7dfc  7504                 jne 0x7c7e02
// 007c7dfe  5e                   pop esi
// 007c7dff  c20800               ret 8
// 007c7e02  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007c7e08  e8d3400300           call 0x7fbee0
// 007c7e0d  b801000000           mov eax, 1
// 007c7e12  5e                   pop esi
// 007c7e13  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
