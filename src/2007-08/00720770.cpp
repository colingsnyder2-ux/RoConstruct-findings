// from server: 100% by auto
// roc 2007-08 00720770  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720770
//
// 00720770  56                   push esi
// 00720771  57                   push edi
// 00720772  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00720776  85ff                 test edi, edi
// 00720778  8bf1                 mov esi, ecx
// 0072077a  7419                 je 0x720795
// 0072077c  56                   push esi
// 0072077d  57                   push edi
// 0072077e  b908988c00           mov ecx, 0x8c9808
// 00720783  e888ffffff           call 0x720710
// 00720788  897e04               mov dword ptr [esi + 4], edi
// 0072078b  5f                   pop edi
// 0072078c  b801000000           mov eax, 1
// 00720791  5e                   pop esi
// 00720792  c20400               ret 4
// 00720795  837e0400             cmp dword ptr [esi + 4], 0
// 00720799  7412                 je 0x7207ad
// 0072079b  56                   push esi
// 0072079c  b908988c00           mov ecx, 0x8c9808
// 007207a1  e82afeffff           call 0x7205d0
// 007207a6  c7460800000000       mov dword ptr [esi + 8], 0
// 007207ad  897e04               mov dword ptr [esi + 4], edi
// 007207b0  5f                   pop edi
// 007207b1  b801000000           mov eax, 1
// 007207b6  5e                   pop esi
// 007207b7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndHook.cpp
