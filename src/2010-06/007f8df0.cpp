// roc 2010-06 007f8df0  unit: CXTPPopupBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f8df0
//
// 007f8df0  56                   push esi
// 007f8df1  8bf1                 mov esi, ecx
// 007f8df3  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 007f8dfa  57                   push edi
// 007f8dfb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f8dff  743b                 je 0x7f8e3c
// 007f8e01  83ff28               cmp edi, 0x28
// 007f8e04  7536                 jne 0x7f8e3c
// 007f8e06  6a11                 push 0x11
// 007f8e08  ff157cbc9e00         call dword ptr [0x9ebc7c]
// 007f8e0e  6685c0               test ax, ax
// 007f8e11  7c22                 jl 0x7f8e35
// 007f8e13  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007f8e19  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007f8e1f  6a01                 push 1
// 007f8e21  6a00                 push 0
// 007f8e23  6a01                 push 1
// 007f8e25  6a01                 push 1
// 007f8e27  50                   push eax
// 007f8e28  e843070000           call 0x7f9570
// 007f8e2d  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 007f8e33  7f07                 jg 0x7f8e3c
// 007f8e35  8bce                 mov ecx, esi
// 007f8e37  e844f7ffff           call 0x7f8580
// 007f8e3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f8e40  51                   push ecx
// 007f8e41  57                   push edi
// 007f8e42  8bce                 mov ecx, esi
// 007f8e44  e80734fcff           call 0x7bc250
// 007f8e49  5f                   pop edi
// 007f8e4a  5e                   pop esi
// 007f8e4b  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPPopupBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp