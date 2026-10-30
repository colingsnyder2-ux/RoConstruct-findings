// roc 2009-12 0085bae0  unit: CXTPStatusBarPane  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085bae0
//
// 0085bae0  83ec24               sub esp, 0x24
// 0085bae3  53                   push ebx
// 0085bae4  55                   push ebp
// 0085bae5  56                   push esi
// 0085bae6  8bf1                 mov esi, ecx
// 0085bae8  57                   push edi
// 0085bae9  56                   push esi
// 0085baea  8d4c2428             lea ecx, [esp + 0x28]
// 0085baee  e8ddf7feff           call 0x84b2d0
// 0085baf3  8bce                 mov ecx, esi
// 0085baf5  e8a6eeffff           call 0x85a9a0
// 0085bafa  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085bafe  8be8                 mov ebp, eax
// 0085bb00  8b4500               mov eax, dword ptr [ebp]
// 0085bb03  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0085bb09  56                   push esi
// 0085bb0a  51                   push ecx
// 0085bb0b  8bcd                 mov ecx, ebp
// 0085bb0d  ffd2                 call edx
// 0085bb0f  8bce                 mov ecx, esi
// 0085bb11  e81af8ffff           call 0x85b330
// 0085bb16  33db                 xor ebx, ebx
// 0085bb18  399ea0000000         cmp dword ptr [esi + 0xa0], ebx
// 0085bb1e  89442410             mov dword ptr [esp + 0x10], eax
// 0085bb22  0f8eb3000000         jle 0x85bbdb
// 0085bb28  53                   push ebx
// 0085bb29  8bce                 mov ecx, esi
// 0085bb2b  e8d0f7ffff           call 0x85b300
// 0085bb30  8bf8                 mov edi, eax
// 0085bb32  8bcf                 mov ecx, edi
// 0085bb34  e8b778f1ff           call 0x7733f0
// 0085bb39  85c0                 test eax, eax
// 0085bb3b  0f848d000000         je 0x85bbce
// 0085bb41  8d442414             lea eax, [esp + 0x14]
// 0085bb45  50                   push eax
// 0085bb46  53                   push ebx
// 0085bb47  8bce                 mov ecx, esi
// 0085bb49  e832ffffff           call 0x85ba80
// 0085bb4e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0085bb51  c1e908               shr ecx, 8
// 0085bb54  f7d1                 not ecx
// 0085bb56  f6c101               test cl, 1
// 0085bb59  7441                 je 0x85bb9c
// 0085bb5b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085bb5f  33c9                 xor ecx, ecx
// 0085bb61  48                   dec eax
// 0085bb62  394758               cmp dword ptr [edi + 0x58], eax
// 0085bb65  8b5500               mov edx, dword ptr [ebp]
// 0085bb68  0f94c1               sete cl
// 0085bb6b  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0085bb71  51                   push ecx
// 0085bb72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bb76  57                   push edi
// 0085bb77  83ec10               sub esp, 0x10
// 0085bb7a  8bc4                 mov eax, esp
// 0085bb7c  8908                 mov dword ptr [eax], ecx
// 0085bb7e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085bb82  894804               mov dword ptr [eax + 4], ecx
// 0085bb85  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085bb89  894808               mov dword ptr [eax + 8], ecx
// 0085bb8c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085bb90  89480c               mov dword ptr [eax + 0xc], ecx
// 0085bb93  8b442450             mov eax, dword ptr [esp + 0x50]
// 0085bb97  50                   push eax
// 0085bb98  8bcd                 mov ecx, ebp
// 0085bb9a  ffd2                 call edx
// 0085bb9c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085bba0  8b16                 mov edx, dword ptr [esi]
// 0085bba2  8b9284010000         mov edx, dword ptr [edx + 0x184]
// 0085bba8  83ec10               sub esp, 0x10
// 0085bbab  8bc4                 mov eax, esp
// 0085bbad  8908                 mov dword ptr [eax], ecx
// 0085bbaf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085bbb3  894804               mov dword ptr [eax + 4], ecx
// 0085bbb6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085bbba  894808               mov dword ptr [eax + 8], ecx
// 0085bbbd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085bbc1  89480c               mov dword ptr [eax + 0xc], ecx
// 0085bbc4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0085bbc8  53                   push ebx
// 0085bbc9  50                   push eax
// 0085bbca  8bce                 mov ecx, esi
// 0085bbcc  ffd2                 call edx
// 0085bbce  43                   inc ebx
// 0085bbcf  3b9ea0000000         cmp ebx, dword ptr [esi + 0xa0]
// 0085bbd5  0f8c4dffffff         jl 0x85bb28
// 0085bbdb  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085bbde  8b3dbccb9800         mov edi, dword ptr [0x98cbbc]
// 0085bbe4  50                   push eax
// 0085bbe5  ffd7                 call edi
// 0085bbe7  50                   push eax
// 0085bbe8  e83d7ff9ff           call 0x7f3b2a
// 0085bbed  8bc8                 mov ecx, eax
// 0085bbef  e87ea80c00           call 0x926472
// 0085bbf4  a900000400           test eax, 0x40000
// 0085bbf9  7435                 je 0x85bc30
// 0085bbfb  8bce                 mov ecx, esi
// 0085bbfd  e870a80c00           call 0x926472
// 0085bc02  a900010000           test eax, 0x100
// 0085bc07  7427                 je 0x85bc30
// 0085bc09  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085bc0c  51                   push ecx
// 0085bc0d  ffd7                 call edi
// 0085bc0f  50                   push eax
// 0085bc10  ff15f8cb9800         call dword ptr [0x98cbf8]
// 0085bc16  85c0                 test eax, eax
// 0085bc18  7516                 jne 0x85bc30
// 0085bc1a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085bc1e  8b16                 mov edx, dword ptr [esi]
// 0085bc20  8b9288010000         mov edx, dword ptr [edx + 0x188]
// 0085bc26  8d442424             lea eax, [esp + 0x24]
// 0085bc2a  50                   push eax
// 0085bc2b  51                   push ecx
// 0085bc2c  8bce                 mov ecx, esi
// 0085bc2e  ffd2                 call edx
// 0085bc30  5f                   pop edi
// 0085bc31  5e                   pop esi
// 0085bc32  5d                   pop ebp
// 0085bc33  5b                   pop ebx
// 0085bc34  83c424               add esp, 0x24
// 0085bc37  c20400               ret 4
// copied from an identical function in another client (function ?OnDraw@CXTPStatusBar@@QAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp