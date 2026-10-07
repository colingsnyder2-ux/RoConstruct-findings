// roc 2008-06 007a1350  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1350
//
// 007a1350  56                   push esi
// 007a1351  57                   push edi
// 007a1352  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a1356  8bf1                 mov esi, ecx
// 007a1358  85ff                 test edi, edi
// 007a135a  7419                 je 0x7a1375
// 007a135c  56                   push esi
// 007a135d  57                   push edi
// 007a135e  b98cf29700           mov ecx, 0x97f28c
// 007a1363  e888ffffff           call 0x7a12f0
// 007a1368  897e04               mov dword ptr [esi + 4], edi
// 007a136b  5f                   pop edi
// 007a136c  b801000000           mov eax, 1
// 007a1371  5e                   pop esi
// 007a1372  c20400               ret 4
// 007a1375  837e0400             cmp dword ptr [esi + 4], 0
// 007a1379  7412                 je 0x7a138d
// 007a137b  56                   push esi
// 007a137c  b98cf29700           mov ecx, 0x97f28c
// 007a1381  e81afeffff           call 0x7a11a0
// 007a1386  c7460800000000       mov dword ptr [esi + 8], 0
// 007a138d  897e04               mov dword ptr [esi + 4], edi
// 007a1390  5f                   pop edi
// 007a1391  b801000000           mov eax, 1
// 007a1396  5e                   pop esi
// 007a1397  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
