// roc 2011-06 00901330  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901330
//
// 00901330  56                   push esi
// 00901331  8bf1                 mov esi, ecx
// 00901333  8b4604               mov eax, dword ptr [esi + 4]
// 00901336  c7068ce1ad00         mov dword ptr [esi], 0xade18c
// 0090133c  85c0                 test eax, eax
// 0090133e  7414                 je 0x901354
// 00901340  50                   push eax
// 00901341  ff15ec1ba400         call dword ptr [0xa41bec]
// 00901347  85c0                 test eax, eax
// 00901349  7409                 je 0x901354
// 0090134b  6a00                 push 0
// 0090134d  8bce                 mov ecx, esi
// 0090134f  e88cffffff           call 0x9012e0
// 00901354  5e                   pop esi
// 00901355  c3                   ret 
// copied from an identical function in another client (function ??1CXTWndHook@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp