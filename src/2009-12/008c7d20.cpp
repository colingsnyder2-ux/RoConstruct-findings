// roc 2009-12 008c7d20  unit: VCEdit::?$CXTMaskEditT  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7d20
//
// 008c7d20  6aff                 push -1
// 008c7d22  68da479600           push 0x9647da
// 008c7d27  64a100000000         mov eax, dword ptr fs:[0]
// 008c7d2d  50                   push eax
// 008c7d2e  83ec08               sub esp, 8
// 008c7d31  53                   push ebx
// 008c7d32  55                   push ebp
// 008c7d33  56                   push esi
// 008c7d34  57                   push edi
// 008c7d35  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7d3a  33c4                 xor eax, esp
// 008c7d3c  50                   push eax
// 008c7d3d  8d44241c             lea eax, [esp + 0x1c]
// 008c7d41  64a300000000         mov dword ptr fs:[0], eax
// 008c7d47  8bd9                 mov ebx, ecx
// 008c7d49  895c2414             mov dword ptr [esp + 0x14], ebx
// 008c7d4d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008c7d51  83eb80               sub ebx, -0x80
// 008c7d54  33f6                 xor esi, esi
// 008c7d56  8bcb                 mov ecx, ebx
// 008c7d58  89742418             mov dword ptr [esp + 0x18], esi
// 008c7d5c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7d62  83ffff               cmp edi, -1
// 008c7d65  740c                 je 0x8c7d73
// 008c7d67  3bf8                 cmp edi, eax
// 008c7d69  7c0a                 jl 0x8c7d75
// 008c7d6b  8bcb                 mov ecx, ebx
// 008c7d6d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7d73  8bf8                 mov edi, eax
// 008c7d75  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008c7d79  8bcd                 mov ecx, ebp
// 008c7d7b  ff1574de9800         call dword ptr [0x98de74]
// 008c7d81  89742424             mov dword ptr [esp + 0x24], esi
// 008c7d85  8b742430             mov esi, dword ptr [esp + 0x30]
// 008c7d89  3bf7                 cmp esi, edi
// 008c7d8b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008c7d93  7d4f                 jge 0x8c7de4
// 008c7d95  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008c7d99  81c584000000         add ebp, 0x84
// 008c7d9f  90                   nop 
// 008c7da0  85f6                 test esi, esi
// 008c7da2  7c35                 jl 0x8c7dd9
// 008c7da4  8bcd                 mov ecx, ebp
// 008c7da6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7dac  3bf0                 cmp esi, eax
// 008c7dae  7d29                 jge 0x8c7dd9
// 008c7db0  56                   push esi
// 008c7db1  8bcd                 mov ecx, ebp
// 008c7db3  ff1510d59800         call dword ptr [0x98d510]
// 008c7db9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c7dbd  3a416c               cmp al, byte ptr [ecx + 0x6c]
// 008c7dc0  7517                 jne 0x8c7dd9
// 008c7dc2  56                   push esi
// 008c7dc3  8bcb                 mov ecx, ebx
// 008c7dc5  ff1510d59800         call dword ptr [0x98d510]
// 008c7dcb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008c7dcf  0fb6d0               movzx edx, al
// 008c7dd2  52                   push edx
// 008c7dd3  ff15bcd79800         call dword ptr [0x98d7bc]
// 008c7dd9  46                   inc esi
// 008c7dda  3bf7                 cmp esi, edi
// 008c7ddc  7cc2                 jl 0x8c7da0
// 008c7dde  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c7de2  eb02                 jmp 0x8c7de6
// 008c7de4  8bc5                 mov eax, ebp
// 008c7de6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c7dea  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7df1  59                   pop ecx
// 008c7df2  5f                   pop edi
// 008c7df3  5e                   pop esi
// 008c7df4  5d                   pop ebp
// 008c7df5  5b                   pop ebx
// 008c7df6  83c414               add esp, 0x14
// 008c7df9  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetMaskedText@?$CXTMaskEditT@VCEdit@@@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp