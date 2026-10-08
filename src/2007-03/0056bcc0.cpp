// roc 2007-03 0056bcc0  unit: seg_00560000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056bcc0
//
// 0056bcc0  6aff                 push -1
// 0056bcc2  688bac7500           push 0x75ac8b
// 0056bcc7  64a100000000         mov eax, dword ptr fs:[0]
// 0056bccd  50                   push eax
// 0056bcce  64892500000000       mov dword ptr fs:[0], esp
// 0056bcd5  51                   push ecx
// 0056bcd6  53                   push ebx
// 0056bcd7  55                   push ebp
// 0056bcd8  8be9                 mov ebp, ecx
// 0056bcda  56                   push esi
// 0056bcdb  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056bcdf  8d5d04               lea ebx, [ebp + 4]
// 0056bce2  56                   push esi
// 0056bce3  8bcb                 mov ecx, ebx
// 0056bce5  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056bce9  897500               mov dword ptr [ebp], esi
// 0056bcec  e83fffffff           call 0x56bc30
// 0056bcf1  85f6                 test esi, esi
// 0056bcf3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0056bcfb  7450                 je 0x56bd4d
// 0056bcfd  57                   push edi
// 0056bcfe  8d7e18               lea edi, [esi + 0x18]
// 0056bd01  85ff                 test edi, edi
// 0056bd03  7431                 je 0x56bd36
// 0056bd05  8937                 mov dword ptr [edi], esi
// 0056bd07  8b33                 mov esi, dword ptr [ebx]
// 0056bd09  85f6                 test esi, esi
// 0056bd0b  740c                 je 0x56bd19
// 0056bd0d  8d4608               lea eax, [esi + 8]
// 0056bd10  b901000000           mov ecx, 1
// 0056bd15  f00fc108             lock xadd dword ptr [eax], ecx
// 0056bd19  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056bd1c  85c9                 test ecx, ecx
// 0056bd1e  7413                 je 0x56bd33
// 0056bd20  8d5108               lea edx, [ecx + 8]
// 0056bd23  83c8ff               or eax, 0xffffffff
// 0056bd26  f00fc102             lock xadd dword ptr [edx], eax
// 0056bd2a  7507                 jne 0x56bd33
// 0056bd2c  8b11                 mov edx, dword ptr [ecx]
// 0056bd2e  8b4208               mov eax, dword ptr [edx + 8]
// 0056bd31  ffd0                 call eax
// 0056bd33  897704               mov dword ptr [edi + 4], esi
// 0056bd36  5f                   pop edi
// 0056bd37  5e                   pop esi
// 0056bd38  8bc5                 mov eax, ebp
// 0056bd3a  5d                   pop ebp
// 0056bd3b  5b                   pop ebx
// 0056bd3c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056bd40  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bd47  83c410               add esp, 0x10
// 0056bd4a  c20400               ret 4
// 0056bd4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056bd51  5e                   pop esi
// 0056bd52  8bc5                 mov eax, ebp
// 0056bd54  5d                   pop ebp
// 0056bd55  5b                   pop ebx
// 0056bd56  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bd5d  83c410               add esp, 0x10
// 0056bd60  c20400               ret 4
// library rbxgs/util\standardout.cpp (function ??$?0VStandardOut@RBX@@@?$shared_ptr@VStandardOut@RBX@@@boost@@QAE@PAVStandardOut@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
