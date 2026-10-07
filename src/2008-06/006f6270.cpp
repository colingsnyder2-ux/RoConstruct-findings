// roc 2008-06 006f6270  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6270
//
// 006f6270  8b542404             mov edx, dword ptr [esp + 4]
// 006f6274  56                   push esi
// 006f6275  8bf1                 mov esi, ecx
// 006f6277  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006f627d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 006f6283  3bd0                 cmp edx, eax
// 006f6285  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f6289  750b                 jne 0x6f6296
// 006f628b  3bc1                 cmp eax, ecx
// 006f628d  7507                 jne 0x6f6296
// 006f628f  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f6294  7421                 je 0x6f62b7
// 006f6296  6a01                 push 1
// 006f6298  8bce                 mov ecx, esi
// 006f629a  899684010000         mov dword ptr [esi + 0x184], edx
// 006f62a0  898688010000         mov dword ptr [esi + 0x188], eax
// 006f62a6  e82556fbff           call 0x6ab8d0
// 006f62ab  6806100000           push 0x1006
// 006f62b0  8bce                 mov ecx, esi
// 006f62b2  e88974fbff           call 0x6ad740
// 006f62b7  5e                   pop esi
// 006f62b8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
