// roc 2009-12 008480c0  unit: CXTPControls  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008480c0
//
// 008480c0  53                   push ebx
// 008480c1  55                   push ebp
// 008480c2  56                   push esi
// 008480c3  57                   push edi
// 008480c4  8bd9                 mov ebx, ecx
// 008480c6  e815d2ffff           call 0x8452e0
// 008480cb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008480cf  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008480d2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008480d6  33f6                 xor esi, esi
// 008480d8  85c0                 test eax, eax
// 008480da  7e4e                 jle 0x84812a
// 008480dc  8d642400             lea esp, [esp]
// 008480e0  85f6                 test esi, esi
// 008480e2  7c11                 jl 0x8480f5
// 008480e4  3bf0                 cmp esi, eax
// 008480e6  7d0d                 jge 0x8480f5
// 008480e8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 008480eb  7d59                 jge 0x848146
// 008480ed  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 008480f0  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008480f3  eb02                 jmp 0x8480f7
// 008480f5  33c9                 xor ecx, ecx
// 008480f7  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 008480fe  7522                 jne 0x848122
// 00848100  85f6                 test esi, esi
// 00848102  7c11                 jl 0x848115
// 00848104  3bf0                 cmp esi, eax
// 00848106  7d0d                 jge 0x848115
// 00848108  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0084810b  7d39                 jge 0x848146
// 0084810d  8b5728               mov edx, dword ptr [edi + 0x28]
// 00848110  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00848113  eb02                 jmp 0x848117
// 00848115  33c0                 xor eax, eax
// 00848117  55                   push ebp
// 00848118  6aff                 push -1
// 0084811a  50                   push eax
// 0084811b  8bcb                 mov ecx, ebx
// 0084811d  e88ef1ffff           call 0x8472b0
// 00848122  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00848125  46                   inc esi
// 00848126  3bf0                 cmp esi, eax
// 00848128  7cb6                 jl 0x8480e0
// 0084812a  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0084812d  85c9                 test ecx, ecx
// 0084812f  741a                 je 0x84814b
// 00848131  55                   push ebp
// 00848132  e879fcffff           call 0x847db0
// 00848137  50                   push eax
// 00848138  8bcb                 mov ecx, ebx
// 0084813a  e8f1d0ffff           call 0x845230
// 0084813f  5f                   pop edi
// 00848140  5e                   pop esi
// 00848141  5d                   pop ebp
// 00848142  5b                   pop ebx
// 00848143  c20800               ret 8
// 00848146  e8c1b9faff           call 0x7f3b0c
// 0084814b  6a00                 push 0
// 0084814d  8bcb                 mov ecx, ebx
// 0084814f  e8dcd0ffff           call 0x845230
// 00848154  5f                   pop edi
// 00848155  5e                   pop esi
// 00848156  5d                   pop ebp
// 00848157  5b                   pop ebx
// 00848158  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControls@@UAEXPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp