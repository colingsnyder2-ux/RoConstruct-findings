// roc 2010-06 008a7c10  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7c10
//
// 008a7c10  56                   push esi
// 008a7c11  57                   push edi
// 008a7c12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a7c16  8bf1                 mov esi, ecx
// 008a7c18  85ff                 test edi, edi
// 008a7c1a  7419                 je 0x8a7c35
// 008a7c1c  56                   push esi
// 008a7c1d  57                   push edi
// 008a7c1e  b90c67c200           mov ecx, 0xc2670c
// 008a7c23  e888ffffff           call 0x8a7bb0
// 008a7c28  897e04               mov dword ptr [esi + 4], edi
// 008a7c2b  5f                   pop edi
// 008a7c2c  b801000000           mov eax, 1
// 008a7c31  5e                   pop esi
// 008a7c32  c20400               ret 4
// 008a7c35  837e0400             cmp dword ptr [esi + 4], 0
// 008a7c39  7412                 je 0x8a7c4d
// 008a7c3b  56                   push esi
// 008a7c3c  b90c67c200           mov ecx, 0xc2670c
// 008a7c41  e81afeffff           call 0x8a7a60
// 008a7c46  c7460800000000       mov dword ptr [esi + 8], 0
// 008a7c4d  897e04               mov dword ptr [esi + 4], edi
// 008a7c50  5f                   pop edi
// 008a7c51  b801000000           mov eax, 1
// 008a7c56  5e                   pop esi
// 008a7c57  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
