// roc 2007-03 00721bc0  unit: seg_00720000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721bc0
//
// 00721bc0  56                   push esi
// 00721bc1  57                   push edi
// 00721bc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00721bc6  85ff                 test edi, edi
// 00721bc8  8bf1                 mov esi, ecx
// 00721bca  7419                 je 0x721be5
// 00721bcc  56                   push esi
// 00721bcd  57                   push edi
// 00721bce  b9bc288c00           mov ecx, 0x8c28bc
// 00721bd3  e888ffffff           call 0x721b60
// 00721bd8  897e04               mov dword ptr [esi + 4], edi
// 00721bdb  5f                   pop edi
// 00721bdc  b801000000           mov eax, 1
// 00721be1  5e                   pop esi
// 00721be2  c20400               ret 4
// 00721be5  837e0400             cmp dword ptr [esi + 4], 0
// 00721be9  7412                 je 0x721bfd
// 00721beb  56                   push esi
// 00721bec  b9bc288c00           mov ecx, 0x8c28bc
// 00721bf1  e82afeffff           call 0x721a20
// 00721bf6  c7460800000000       mov dword ptr [esi + 8], 0
// 00721bfd  897e04               mov dword ptr [esi + 4], edi
// 00721c00  5f                   pop edi
// 00721c01  b801000000           mov eax, 1
// 00721c06  5e                   pop esi
// 00721c07  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndHook.cpp
