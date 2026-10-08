// from server: 100% by auto
// roc 2012-06 00a4b0b0  unit: CXTPControlCustom  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b0b0
//
// 00a4b0b0  55                   push ebp
// 00a4b0b1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00a4b0b5  56                   push esi
// 00a4b0b6  57                   push edi
// 00a4b0b7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a4b0bb  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 00a4b0c1  55                   push ebp
// 00a4b0c2  8bce                 mov ecx, esi
// 00a4b0c4  e8277ff3ff           call 0x982ff0
// 00a4b0c9  85c0                 test eax, eax
// 00a4b0cb  740e                 je 0xa4b0db
// 00a4b0cd  55                   push ebp
// 00a4b0ce  8bce                 mov ecx, esi
// 00a4b0d0  e81b7ff3ff           call 0x982ff0
// 00a4b0d5  5f                   pop edi
// 00a4b0d6  5e                   pop esi
// 00a4b0d7  5d                   pop ebp
// 00a4b0d8  c20800               ret 8
// 00a4b0db  33f6                 xor esi, esi
// 00a4b0dd  39b784000000         cmp dword ptr [edi + 0x84], esi
// 00a4b0e3  53                   push ebx
// 00a4b0e4  7e1f                 jle 0xa4b105
// 00a4b0e6  56                   push esi
// 00a4b0e7  8bcf                 mov ecx, edi
// 00a4b0e9  e8627df5ff           call 0x9a2e50
// 00a4b0ee  8bd8                 mov ebx, eax
// 00a4b0f0  55                   push ebp
// 00a4b0f1  8bcb                 mov ecx, ebx
// 00a4b0f3  e8f87ef3ff           call 0x982ff0
// 00a4b0f8  85c0                 test eax, eax
// 00a4b0fa  7512                 jne 0xa4b10e
// 00a4b0fc  46                   inc esi
// 00a4b0fd  3bb784000000         cmp esi, dword ptr [edi + 0x84]
// 00a4b103  7ce1                 jl 0xa4b0e6
// 00a4b105  5b                   pop ebx
// 00a4b106  5f                   pop edi
// 00a4b107  5e                   pop esi
// 00a4b108  33c0                 xor eax, eax
// 00a4b10a  5d                   pop ebp
// 00a4b10b  c20800               ret 8
// 00a4b10e  55                   push ebp
// 00a4b10f  8bcb                 mov ecx, ebx
// 00a4b111  e8da7ef3ff           call 0x982ff0
// 00a4b116  5b                   pop ebx
// 00a4b117  5f                   pop edi
// 00a4b118  5e                   pop esi
// 00a4b119  5d                   pop ebp
// 00a4b11a  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlCustom.cpp (function ?FindChildWindow@CXTPControlCustom@@AAEPAVCWnd@@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlCustom.cpp
