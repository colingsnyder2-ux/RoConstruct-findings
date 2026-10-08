// roc 2009-06 00818e10  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818e10
//
// 00818e10  56                   push esi
// 00818e11  57                   push edi
// 00818e12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00818e16  8bf1                 mov esi, ecx
// 00818e18  85ff                 test edi, edi
// 00818e1a  7419                 je 0x818e35
// 00818e1c  56                   push esi
// 00818e1d  57                   push edi
// 00818e1e  b9842ba500           mov ecx, 0xa52b84
// 00818e23  e888ffffff           call 0x818db0
// 00818e28  897e04               mov dword ptr [esi + 4], edi
// 00818e2b  5f                   pop edi
// 00818e2c  b801000000           mov eax, 1
// 00818e31  5e                   pop esi
// 00818e32  c20400               ret 4
// 00818e35  837e0400             cmp dword ptr [esi + 4], 0
// 00818e39  7412                 je 0x818e4d
// 00818e3b  56                   push esi
// 00818e3c  b9842ba500           mov ecx, 0xa52b84
// 00818e41  e81afeffff           call 0x818c60
// 00818e46  c7460800000000       mov dword ptr [esi + 8], 0
// 00818e4d  897e04               mov dword ptr [esi + 4], edi
// 00818e50  5f                   pop edi
// 00818e51  b801000000           mov eax, 1
// 00818e56  5e                   pop esi
// 00818e57  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
