// from server: 100% by auto
// roc 2011-06 00827160  unit: CXTPToolBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00827160
//
// 00827160  56                   push esi
// 00827161  8bf1                 mov esi, ecx
// 00827163  e82839ffff           call 0x81aa90
// 00827168  8bc8                 mov ecx, eax
// 0082716a  85c9                 test ecx, ecx
// 0082716c  7422                 je 0x827190
// 0082716e  8b542408             mov edx, dword ptr [esp + 8]
// 00827172  83fa02               cmp edx, 2
// 00827175  740e                 je 0x827185
// 00827177  85d2                 test edx, edx
// 00827179  740a                 je 0x827185
// 0082717b  83fa03               cmp edx, 3
// 0082717e  7405                 je 0x827185
// 00827180  83fa01               cmp edx, 1
// 00827183  7511                 jne 0x827196
// 00827185  52                   push edx
// 00827186  56                   push esi
// 00827187  e8b42b0000           call 0x829d40
// 0082718c  85c0                 test eax, eax
// 0082718e  7515                 jne 0x8271a5
// 00827190  33c0                 xor eax, eax
// 00827192  5e                   pop esi
// 00827193  c20400               ret 4
// 00827196  83fa04               cmp edx, 4
// 00827199  75f5                 jne 0x827190
// 0082719b  56                   push esi
// 0082719c  e8df2b0000           call 0x829d80
// 008271a1  85c0                 test eax, eax
// 008271a3  74eb                 je 0x827190
// 008271a5  b801000000           mov eax, 1
// 008271aa  5e                   pop esi
// 008271ab  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPToolBar.cpp (function ?SetPosition@CXTPToolBar@@UAEHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPToolBar.cpp
