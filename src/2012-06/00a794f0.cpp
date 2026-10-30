// roc 2012-06 00a794f0  unit: CXTShadowHook  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a794f0
//
// 00a794f0  56                   push esi
// 00a794f1  57                   push edi
// 00a794f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a794f6  8bf1                 mov esi, ecx
// 00a794f8  85ff                 test edi, edi
// 00a794fa  7419                 je 0xa79515
// 00a794fc  56                   push esi
// 00a794fd  57                   push edi
// 00a794fe  b964a4e500           mov ecx, 0xe5a464
// 00a79503  e888ffffff           call 0xa79490
// 00a79508  897e04               mov dword ptr [esi + 4], edi
// 00a7950b  5f                   pop edi
// 00a7950c  b801000000           mov eax, 1
// 00a79511  5e                   pop esi
// 00a79512  c20400               ret 4
// 00a79515  837e0400             cmp dword ptr [esi + 4], 0
// 00a79519  7412                 je 0xa7952d
// 00a7951b  56                   push esi
// 00a7951c  b964a4e500           mov ecx, 0xe5a464
// 00a79521  e81afeffff           call 0xa79340
// 00a79526  c7460800000000       mov dword ptr [esi + 8], 0
// 00a7952d  897e04               mov dword ptr [esi + 4], edi
// 00a79530  5f                   pop edi
// 00a79531  b801000000           mov eax, 1
// 00a79536  5e                   pop esi
// 00a79537  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
