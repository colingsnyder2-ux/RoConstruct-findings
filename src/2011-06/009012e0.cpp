// roc 2011-06 009012e0  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009012e0
//
// 009012e0  56                   push esi
// 009012e1  57                   push edi
// 009012e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009012e6  8bf1                 mov esi, ecx
// 009012e8  85ff                 test edi, edi
// 009012ea  7419                 je 0x901305
// 009012ec  56                   push esi
// 009012ed  57                   push edi
// 009012ee  b9f492d100           mov ecx, 0xd192f4
// 009012f3  e888ffffff           call 0x901280
// 009012f8  897e04               mov dword ptr [esi + 4], edi
// 009012fb  5f                   pop edi
// 009012fc  b801000000           mov eax, 1
// 00901301  5e                   pop esi
// 00901302  c20400               ret 4
// 00901305  837e0400             cmp dword ptr [esi + 4], 0
// 00901309  7412                 je 0x90131d
// 0090130b  56                   push esi
// 0090130c  b9f492d100           mov ecx, 0xd192f4
// 00901311  e81afeffff           call 0x901130
// 00901316  c7460800000000       mov dword ptr [esi + 8], 0
// 0090131d  897e04               mov dword ptr [esi + 4], edi
// 00901320  5f                   pop edi
// 00901321  b801000000           mov eax, 1
// 00901326  5e                   pop esi
// 00901327  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
