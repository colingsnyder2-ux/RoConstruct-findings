// roc 2010-06 0087bec0  unit: VCEdit::?$CXTMaskEditT  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bec0
//
// 0087bec0  6aff                 push -1
// 0087bec2  684aa79b00           push 0x9ba74a
// 0087bec7  64a100000000         mov eax, dword ptr fs:[0]
// 0087becd  50                   push eax
// 0087bece  83ec08               sub esp, 8
// 0087bed1  53                   push ebx
// 0087bed2  55                   push ebp
// 0087bed3  56                   push esi
// 0087bed4  57                   push edi
// 0087bed5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087beda  33c4                 xor eax, esp
// 0087bedc  50                   push eax
// 0087bedd  8d44241c             lea eax, [esp + 0x1c]
// 0087bee1  64a300000000         mov dword ptr fs:[0], eax
// 0087bee7  8bd9                 mov ebx, ecx
// 0087bee9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0087beed  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0087bef1  83eb80               sub ebx, -0x80
// 0087bef4  33f6                 xor esi, esi
// 0087bef6  8bcb                 mov ecx, ebx
// 0087bef8  89742418             mov dword ptr [esp + 0x18], esi
// 0087befc  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bf02  83ffff               cmp edi, -1
// 0087bf05  740c                 je 0x87bf13
// 0087bf07  3bf8                 cmp edi, eax
// 0087bf09  7c0a                 jl 0x87bf15
// 0087bf0b  8bcb                 mov ecx, ebx
// 0087bf0d  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bf13  8bf8                 mov edi, eax
// 0087bf15  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087bf19  8bcd                 mov ecx, ebp
// 0087bf1b  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0087bf21  89742424             mov dword ptr [esp + 0x24], esi
// 0087bf25  8b742430             mov esi, dword ptr [esp + 0x30]
// 0087bf29  3bf7                 cmp esi, edi
// 0087bf2b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0087bf33  7d4f                 jge 0x87bf84
// 0087bf35  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087bf39  81c584000000         add ebp, 0x84
// 0087bf3f  90                   nop 
// 0087bf40  85f6                 test esi, esi
// 0087bf42  7c35                 jl 0x87bf79
// 0087bf44  8bcd                 mov ecx, ebp
// 0087bf46  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087bf4c  3bf0                 cmp esi, eax
// 0087bf4e  7d29                 jge 0x87bf79
// 0087bf50  56                   push esi
// 0087bf51  8bcd                 mov ecx, ebp
// 0087bf53  ff1558c59e00         call dword ptr [0x9ec558]
// 0087bf59  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087bf5d  3a416c               cmp al, byte ptr [ecx + 0x6c]
// 0087bf60  7517                 jne 0x87bf79
// 0087bf62  56                   push esi
// 0087bf63  8bcb                 mov ecx, ebx
// 0087bf65  ff1558c59e00         call dword ptr [0x9ec558]
// 0087bf6b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087bf6f  0fb6d0               movzx edx, al
// 0087bf72  52                   push edx
// 0087bf73  ff15b4c79e00         call dword ptr [0x9ec7b4]
// 0087bf79  46                   inc esi
// 0087bf7a  3bf7                 cmp esi, edi
// 0087bf7c  7cc2                 jl 0x87bf40
// 0087bf7e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087bf82  eb02                 jmp 0x87bf86
// 0087bf84  8bc5                 mov eax, ebp
// 0087bf86  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087bf8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bf91  59                   pop ecx
// 0087bf92  5f                   pop edi
// 0087bf93  5e                   pop esi
// 0087bf94  5d                   pop ebp
// 0087bf95  5b                   pop ebx
// 0087bf96  83c414               add esp, 0x14
// 0087bf99  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetMaskedText@?$CXTMaskEditT@VCEdit@@@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp