// roc 2011-06 008dfb80  unit: VCEdit::?$CXTMaskEditT  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dfb80
//
// 008dfb80  6aff                 push -1
// 008dfb82  68ead8a000           push 0xa0d8ea
// 008dfb87  64a100000000         mov eax, dword ptr fs:[0]
// 008dfb8d  50                   push eax
// 008dfb8e  83ec08               sub esp, 8
// 008dfb91  53                   push ebx
// 008dfb92  55                   push ebp
// 008dfb93  56                   push esi
// 008dfb94  57                   push edi
// 008dfb95  a12058c900           mov eax, dword ptr [0xc95820]
// 008dfb9a  33c4                 xor eax, esp
// 008dfb9c  50                   push eax
// 008dfb9d  8d44241c             lea eax, [esp + 0x1c]
// 008dfba1  64a300000000         mov dword ptr fs:[0], eax
// 008dfba7  8bd9                 mov ebx, ecx
// 008dfba9  895c2414             mov dword ptr [esp + 0x14], ebx
// 008dfbad  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008dfbb1  83eb80               sub ebx, -0x80
// 008dfbb4  33f6                 xor esi, esi
// 008dfbb6  8bcb                 mov ecx, ebx
// 008dfbb8  89742418             mov dword ptr [esp + 0x18], esi
// 008dfbbc  ff15a826a400         call dword ptr [0xa426a8]
// 008dfbc2  83ffff               cmp edi, -1
// 008dfbc5  740c                 je 0x8dfbd3
// 008dfbc7  3bf8                 cmp edi, eax
// 008dfbc9  7c0a                 jl 0x8dfbd5
// 008dfbcb  8bcb                 mov ecx, ebx
// 008dfbcd  ff15a826a400         call dword ptr [0xa426a8]
// 008dfbd3  8bf8                 mov edi, eax
// 008dfbd5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008dfbd9  8bcd                 mov ecx, ebp
// 008dfbdb  ff15b42da400         call dword ptr [0xa42db4]
// 008dfbe1  89742424             mov dword ptr [esp + 0x24], esi
// 008dfbe5  8b742430             mov esi, dword ptr [esp + 0x30]
// 008dfbe9  3bf7                 cmp esi, edi
// 008dfbeb  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008dfbf3  7d4f                 jge 0x8dfc44
// 008dfbf5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008dfbf9  81c584000000         add ebp, 0x84
// 008dfbff  90                   nop 
// 008dfc00  85f6                 test esi, esi
// 008dfc02  7c35                 jl 0x8dfc39
// 008dfc04  8bcd                 mov ecx, ebp
// 008dfc06  ff15a826a400         call dword ptr [0xa426a8]
// 008dfc0c  3bf0                 cmp esi, eax
// 008dfc0e  7d29                 jge 0x8dfc39
// 008dfc10  56                   push esi
// 008dfc11  8bcd                 mov ecx, ebp
// 008dfc13  ff153c25a400         call dword ptr [0xa4253c]
// 008dfc19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dfc1d  3a416c               cmp al, byte ptr [ecx + 0x6c]
// 008dfc20  7517                 jne 0x8dfc39
// 008dfc22  56                   push esi
// 008dfc23  8bcb                 mov ecx, ebx
// 008dfc25  ff153c25a400         call dword ptr [0xa4253c]
// 008dfc2b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dfc2f  0fb6d0               movzx edx, al
// 008dfc32  52                   push edx
// 008dfc33  ff156828a400         call dword ptr [0xa42868]
// 008dfc39  46                   inc esi
// 008dfc3a  3bf7                 cmp esi, edi
// 008dfc3c  7cc2                 jl 0x8dfc00
// 008dfc3e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008dfc42  eb02                 jmp 0x8dfc46
// 008dfc44  8bc5                 mov eax, ebp
// 008dfc46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dfc4a  64890d00000000       mov dword ptr fs:[0], ecx
// 008dfc51  59                   pop ecx
// 008dfc52  5f                   pop edi
// 008dfc53  5e                   pop esi
// 008dfc54  5d                   pop ebp
// 008dfc55  5b                   pop ebx
// 008dfc56  83c414               add esp, 0x14
// 008dfc59  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetMaskedText@?$CXTMaskEditT@VCEdit@@@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp