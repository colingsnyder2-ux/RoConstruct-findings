// roc 2009-12 008f3ae0  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3ae0
//
// 008f3ae0  56                   push esi
// 008f3ae1  57                   push edi
// 008f3ae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f3ae6  8bf1                 mov esi, ecx
// 008f3ae8  85ff                 test edi, edi
// 008f3aea  7419                 je 0x8f3b05
// 008f3aec  56                   push esi
// 008f3aed  57                   push edi
// 008f3aee  b9dcbfb900           mov ecx, 0xb9bfdc
// 008f3af3  e888ffffff           call 0x8f3a80
// 008f3af8  897e04               mov dword ptr [esi + 4], edi
// 008f3afb  5f                   pop edi
// 008f3afc  b801000000           mov eax, 1
// 008f3b01  5e                   pop esi
// 008f3b02  c20400               ret 4
// 008f3b05  837e0400             cmp dword ptr [esi + 4], 0
// 008f3b09  7412                 je 0x8f3b1d
// 008f3b0b  56                   push esi
// 008f3b0c  b9dcbfb900           mov ecx, 0xb9bfdc
// 008f3b11  e81afeffff           call 0x8f3930
// 008f3b16  c7460800000000       mov dword ptr [esi + 8], 0
// 008f3b1d  897e04               mov dword ptr [esi + 4], edi
// 008f3b20  5f                   pop edi
// 008f3b21  b801000000           mov eax, 1
// 008f3b26  5e                   pop esi
// 008f3b27  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
