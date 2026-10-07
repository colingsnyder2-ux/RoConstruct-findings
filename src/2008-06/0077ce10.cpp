// roc 2008-06 0077ce10  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ce10
//
// 0077ce10  83ec24               sub esp, 0x24
// 0077ce13  53                   push ebx
// 0077ce14  8bd9                 mov ebx, ecx
// 0077ce16  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0077ce19  8b01                 mov eax, dword ptr [ecx]
// 0077ce1b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077ce1e  55                   push ebp
// 0077ce1f  56                   push esi
// 0077ce20  57                   push edi
// 0077ce21  ffd2                 call edx
// 0077ce23  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0077ce29  8b01                 mov eax, dword ptr [ecx]
// 0077ce2b  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077ce2e  8d542424             lea edx, [esp + 0x24]
// 0077ce32  52                   push edx
// 0077ce33  ffd0                 call eax
// 0077ce35  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0077ce38  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0077ce3c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077ce3f  8b17                 mov edx, dword ptr [edi]
// 0077ce41  8b4704               mov eax, dword ptr [edi + 4]
// 0077ce44  8b6f08               mov ebp, dword ptr [edi + 8]
// 0077ce47  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077ce4b  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0077ce4e  89542414             mov dword ptr [esp + 0x14], edx
// 0077ce52  8b16                 mov edx, dword ptr [esi]
// 0077ce54  89442418             mov dword ptr [esp + 0x18], eax
// 0077ce58  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077ce5b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0077ce5f  8bce                 mov ecx, esi
// 0077ce61  ffd0                 call eax
// 0077ce63  83f802               cmp eax, 2
// 0077ce66  740d                 je 0x77ce75
// 0077ce68  8b16                 mov edx, dword ptr [esi]
// 0077ce6a  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077ce6d  8bce                 mov ecx, esi
// 0077ce6f  ffd0                 call eax
// 0077ce71  85c0                 test eax, eax
// 0077ce73  7508                 jne 0x77ce7d
// 0077ce75  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0077ce79  8bf5                 mov esi, ebp
// 0077ce7b  eb08                 jmp 0x77ce85
// 0077ce7d  8b742420             mov esi, dword ptr [esp + 0x20]
// 0077ce81  2b742418             sub esi, dword ptr [esp + 0x18]
// 0077ce85  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0077ce88  e813f3ffff           call 0x77c1a0
// 0077ce8d  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 0077ce91  03442410             add eax, dword ptr [esp + 0x10]
// 0077ce95  2b742424             sub esi, dword ptr [esp + 0x24]
// 0077ce99  33c9                 xor ecx, ecx
// 0077ce9b  83ee1c               sub esi, 0x1c
// 0077ce9e  3bc6                 cmp eax, esi
// 0077cea0  0f9fc1               setg cl
// 0077cea3  57                   push edi
// 0077cea4  894b20               mov dword ptr [ebx + 0x20], ecx
// 0077cea7  8bcb                 mov ecx, ebx
// 0077cea9  e892feffff           call 0x77cd40
// 0077ceae  5f                   pop edi
// 0077ceaf  5e                   pop esi
// 0077ceb0  5d                   pop ebp
// 0077ceb1  5b                   pop ebx
// 0077ceb2  83c424               add esp, 0x24
// 0077ceb5  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowRight@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
