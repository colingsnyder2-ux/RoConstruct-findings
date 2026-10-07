// roc 2008-06 00772c90  unit: CXTPControlCustom  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772c90
//
// 00772c90  55                   push ebp
// 00772c91  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00772c95  56                   push esi
// 00772c96  57                   push edi
// 00772c97  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00772c9b  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 00772ca1  55                   push ebp
// 00772ca2  8bce                 mov ecx, esi
// 00772ca4  e86fe7f2ff           call 0x6a1418
// 00772ca9  85c0                 test eax, eax
// 00772cab  740e                 je 0x772cbb
// 00772cad  55                   push ebp
// 00772cae  8bce                 mov ecx, esi
// 00772cb0  e863e7f2ff           call 0x6a1418
// 00772cb5  5f                   pop edi
// 00772cb6  5e                   pop esi
// 00772cb7  5d                   pop ebp
// 00772cb8  c20800               ret 8
// 00772cbb  33f6                 xor esi, esi
// 00772cbd  39b784000000         cmp dword ptr [edi + 0x84], esi
// 00772cc3  53                   push ebx
// 00772cc4  7e1f                 jle 0x772ce5
// 00772cc6  56                   push esi
// 00772cc7  8bcf                 mov ecx, edi
// 00772cc9  e8620af3ff           call 0x6a3730
// 00772cce  8bd8                 mov ebx, eax
// 00772cd0  55                   push ebp
// 00772cd1  8bcb                 mov ecx, ebx
// 00772cd3  e840e7f2ff           call 0x6a1418
// 00772cd8  85c0                 test eax, eax
// 00772cda  7512                 jne 0x772cee
// 00772cdc  46                   inc esi
// 00772cdd  3bb784000000         cmp esi, dword ptr [edi + 0x84]
// 00772ce3  7ce1                 jl 0x772cc6
// 00772ce5  5b                   pop ebx
// 00772ce6  5f                   pop edi
// 00772ce7  5e                   pop esi
// 00772ce8  33c0                 xor eax, eax
// 00772cea  5d                   pop ebp
// 00772ceb  c20800               ret 8
// 00772cee  55                   push ebp
// 00772cef  8bcb                 mov ecx, ebx
// 00772cf1  e822e7f2ff           call 0x6a1418
// 00772cf6  5b                   pop ebx
// 00772cf7  5f                   pop edi
// 00772cf8  5e                   pop esi
// 00772cf9  5d                   pop ebp
// 00772cfa  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?FindChildWindow@CXTPControlCustom@@AAEPAVCWnd@@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
