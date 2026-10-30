// roc 2012-06 009cec30  unit: CXTPPopupBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cec30
//
// 009cec30  56                   push esi
// 009cec31  8bf1                 mov esi, ecx
// 009cec33  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 009cec3a  57                   push edi
// 009cec3b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009cec3f  743b                 je 0x9cec7c
// 009cec41  83ff28               cmp edi, 0x28
// 009cec44  7536                 jne 0x9cec7c
// 009cec46  6a11                 push 0x11
// 009cec48  ff15843ab200         call dword ptr [0xb23a84]
// 009cec4e  6685c0               test ax, ax
// 009cec51  7c22                 jl 0x9cec75
// 009cec53  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 009cec59  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 009cec5f  6a01                 push 1
// 009cec61  6a00                 push 0
// 009cec63  6a01                 push 1
// 009cec65  6a01                 push 1
// 009cec67  50                   push eax
// 009cec68  e813070000           call 0x9cf380
// 009cec6d  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 009cec73  7f07                 jg 0x9cec7c
// 009cec75  8bce                 mov ecx, esi
// 009cec77  e844f7ffff           call 0x9ce3c0
// 009cec7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cec80  51                   push ecx
// 009cec81  57                   push edi
// 009cec82  8bce                 mov ecx, esi
// 009cec84  e8077dfcff           call 0x996990
// 009cec89  5f                   pop edi
// 009cec8a  5e                   pop esi
// 009cec8b  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPPopupBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp