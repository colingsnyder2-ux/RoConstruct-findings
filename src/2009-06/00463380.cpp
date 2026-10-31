// roc 2009-06 00463380  unit: Scintilla::CScintillaView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00463380
//
// 00463380  64a100000000         mov eax, dword ptr fs:[0]
// 00463386  6aff                 push -1
// 00463388  68582c8500           push 0x852c58
// 0046338d  50                   push eax
// 0046338e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00463392  64892500000000       mov dword ptr fs:[0], esp
// 00463399  53                   push ebx
// 0046339a  55                   push ebp
// 0046339b  56                   push esi
// 0046339c  57                   push edi
// 0046339d  8bf1                 mov esi, ecx
// 0046339f  50                   push eax
// 004633a0  b9ac689e00           mov ecx, 0x9e68ac
// 004633a5  ff15acfc8900         call dword ptr [0x89fcac]
// 004633ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004633af  51                   push ecx
// 004633b0  b9b0689e00           mov ecx, 0x9e68b0
// 004633b5  ff15acfc8900         call dword ptr [0x89fcac]
// 004633bb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004633bf  8b442430             mov eax, dword ptr [esp + 0x30]
// 004633c3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004633c7  892db4689e00         mov dword ptr [0x9e68b4], ebp
// 004633cd  8915bc689e00         mov dword ptr [0x9e68bc], edx
// 004633d3  c705b8689e0001000000 mov dword ptr [0x9e68b8], 1
// 004633dd  a3c0689e00           mov dword ptr [0x9e68c0], eax
// 004633e2  e80f592b00           call 0x718cf6
// 004633e7  8b4804               mov ecx, dword ptr [eax + 4]
// 004633ea  e8e3612b00           call 0x7195d2
// 004633ef  33ff                 xor edi, edi
// 004633f1  6a01                 push 1
// 004633f3  57                   push edi
// 004633f4  8d5e58               lea ebx, [esi + 0x58]
// 004633f7  57                   push edi
// 004633f8  8bcb                 mov ecx, ebx
// 004633fa  897c2424             mov dword ptr [esp + 0x24], edi
// 004633fe  e82de3ffff           call 0x461730
// 00463403  57                   push edi
// 00463404  6a01                 push 1
// 00463406  8bcb                 mov ecx, ebx
// 00463408  e8b3e3ffff           call 0x4617c0
// 0046340d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00463411  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00463415  a1b8689e00           mov eax, dword ptr [0x9e68b8]
// 0046341a  51                   push ecx
// 0046341b  52                   push edx
// 0046341c  897c2428             mov dword ptr [esp + 0x28], edi
// 00463420  8b3e                 mov edi, dword ptr [esi]
// 00463422  55                   push ebp
// 00463423  50                   push eax
// 00463424  b9ac689e00           mov ecx, 0x9e68ac
// 00463429  81c7b4010000         add edi, 0x1b4
// 0046342f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00463435  8b17                 mov edx, dword ptr [edi]
// 00463437  50                   push eax
// 00463438  8bce                 mov ecx, esi
// 0046343a  ffd2                 call edx
// 0046343c  85c0                 test eax, eax
// 0046343e  7455                 je 0x463495
// 00463440  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00463448  eb06                 jmp 0x463450
// 0046344a  8d9b00000000         lea ebx, [ebx]
// 00463450  6a01                 push 1
// 00463452  b9b0689e00           mov ecx, 0x9e68b0
// 00463457  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0046345d  50                   push eax
// 0046345e  8bcb                 mov ecx, ebx
// 00463460  e85be4ffff           call 0x4618c0
// 00463465  8b442430             mov eax, dword ptr [esp + 0x30]
// 00463469  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046346d  8b15b8689e00         mov edx, dword ptr [0x9e68b8]
// 00463473  8b3e                 mov edi, dword ptr [esi]
// 00463475  50                   push eax
// 00463476  51                   push ecx
// 00463477  55                   push ebp
// 00463478  52                   push edx
// 00463479  b9ac689e00           mov ecx, 0x9e68ac
// 0046347e  81c7b4010000         add edi, 0x1b4
// 00463484  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0046348a  50                   push eax
// 0046348b  8b07                 mov eax, dword ptr [edi]
// 0046348d  8bce                 mov ecx, esi
// 0046348f  ffd0                 call eax
// 00463491  85c0                 test eax, eax
// 00463493  75bb                 jne 0x463450
// 00463495  6a00                 push 0
// 00463497  6a00                 push 0
// 00463499  8bcb                 mov ecx, ebx
// 0046349b  e820e3ffff           call 0x4617c0
// 004634a0  837c242000           cmp dword ptr [esp + 0x20], 0
// 004634a5  752d                 jne 0x4634d4
// 004634a7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004634ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004634af  a1b8689e00           mov eax, dword ptr [0x9e68b8]
// 004634b4  8b3e                 mov edi, dword ptr [esi]
// 004634b6  6a01                 push 1
// 004634b8  51                   push ecx
// 004634b9  52                   push edx
// 004634ba  55                   push ebp
// 004634bb  50                   push eax
// 004634bc  b9ac689e00           mov ecx, 0x9e68ac
// 004634c1  81c7a8010000         add edi, 0x1a8
// 004634c7  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004634cd  8b17                 mov edx, dword ptr [edi]
// 004634cf  50                   push eax
// 004634d0  8bce                 mov ecx, esi
// 004634d2  ffd2                 call edx
// 004634d4  8d4c2430             lea ecx, [esp + 0x30]
// 004634d8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004634e0  e80b17feff           call 0x444bf0
// 004634e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004634e9  5f                   pop edi
// 004634ea  5e                   pop esi
// 004634eb  5d                   pop ebp
// 004634ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004634f3  5b                   pop ebx
// 004634f4  83c40c               add esp, 0xc
// 004634f7  c21400               ret 0x14
// copied from an identical function in another client (function ?replaceAll@View@@QAEXPBD0HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_replaceangleimportcast4a016e70e72eb016.cpp