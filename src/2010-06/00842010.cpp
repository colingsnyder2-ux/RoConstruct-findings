// roc 2010-06 00842010  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842010
//
// 00842010  53                   push ebx
// 00842011  56                   push esi
// 00842012  57                   push edi
// 00842013  8bf9                 mov edi, ecx
// 00842015  33f6                 xor esi, esi
// 00842017  397724               cmp dword ptr [edi + 0x24], esi
// 0084201a  7e2d                 jle 0x842049
// 0084201c  8d642400             lea esp, [esp]
// 00842020  85f6                 test esi, esi
// 00842022  7c5d                 jl 0x842081
// 00842024  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00842027  7d58                 jge 0x842081
// 00842029  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084202c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0084202f  85db                 test ebx, ebx
// 00842031  7410                 je 0x842043
// 00842033  8bcb                 mov ecx, ebx
// 00842035  e806f8ffff           call 0x841840
// 0084203a  53                   push ebx
// 0084203b  e85a59f6ff           call 0x7a799a
// 00842040  83c404               add esp, 4
// 00842043  46                   inc esi
// 00842044  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00842047  7cd7                 jl 0x842020
// 00842049  6aff                 push -1
// 0084204b  6a00                 push 0
// 0084204d  8d4f1c               lea ecx, [edi + 0x1c]
// 00842050  e8abf2f9ff           call 0x7e1300
// 00842055  837f1000             cmp dword ptr [edi + 0x10], 0
// 00842059  741b                 je 0x842076
// 0084205b  8b07                 mov eax, dword ptr [edi]
// 0084205d  85c0                 test eax, eax
// 0084205f  7415                 je 0x842076
// 00842061  83782000             cmp dword ptr [eax + 0x20], 0
// 00842065  740f                 je 0x842076
// 00842067  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084206a  6843cd0a00           push 0xacd43
// 0084206f  51                   push ecx
// 00842070  ff1560ba9e00         call dword ptr [0x9eba60]
// 00842076  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0084207d  5f                   pop edi
// 0084207e  5e                   pop esi
// 0084207f  5b                   pop ebx
// 00842080  c3                   ret 
// 00842081  e8c65bf6ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAnimations@CXTPCommandBarAnimation@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp