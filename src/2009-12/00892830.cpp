// roc 2009-12 00892830  unit: CXTPDockBar  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892830
//
// 00892830  83ec20               sub esp, 0x20
// 00892833  53                   push ebx
// 00892834  55                   push ebp
// 00892835  56                   push esi
// 00892836  8b742430             mov esi, dword ptr [esp + 0x30]
// 0089283a  57                   push edi
// 0089283b  8d442420             lea eax, [esp + 0x20]
// 0089283f  8bf9                 mov edi, ecx
// 00892841  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00892844  50                   push eax
// 00892845  51                   push ecx
// 00892846  ff1570cc9800         call dword ptr [0x98cc70]
// 0089284c  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00892850  39be80010000         cmp dword ptr [esi + 0x180], edi
// 00892856  751c                 jne 0x892874
// 00892858  85db                 test ebx, ebx
// 0089285a  0f8431010000         je 0x892991
// 00892860  53                   push ebx
// 00892861  8d542424             lea edx, [esp + 0x24]
// 00892865  52                   push edx
// 00892866  ff15bcca9800         call dword ptr [0x98cabc]
// 0089286c  85c0                 test eax, eax
// 0089286e  0f851d010000         jne 0x892991
// 00892874  83cdff               or ebp, 0xffffffff
// 00892877  85db                 test ebx, ebx
// 00892879  0f8486000000         je 0x892905
// 0089287f  53                   push ebx
// 00892880  8d442414             lea eax, [esp + 0x14]
// 00892884  50                   push eax
// 00892885  ff1564cc9800         call dword ptr [0x98cc64]
// 0089288b  8d4c2410             lea ecx, [esp + 0x10]
// 0089288f  51                   push ecx
// 00892890  8bcf                 mov ecx, edi
// 00892892  e8411ff6ff           call 0x7f47d8
// 00892897  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0089289b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089289f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008928a3  2bc3                 sub eax, ebx
// 008928a5  99                   cdq 
// 008928a6  2bc2                 sub eax, edx
// 008928a8  8bc8                 mov ecx, eax
// 008928aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008928ae  2bc5                 sub eax, ebp
// 008928b0  99                   cdq 
// 008928b1  2bc2                 sub eax, edx
// 008928b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008928b7  d1f8                 sar eax, 1
// 008928b9  d1f9                 sar ecx, 1
// 008928bb  03c5                 add eax, ebp
// 008928bd  50                   push eax
// 008928be  03cb                 add ecx, ebx
// 008928c0  51                   push ecx
// 008928c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008928c5  83ec10               sub esp, 0x10
// 008928c8  8bc4                 mov eax, esp
// 008928ca  8918                 mov dword ptr [eax], ebx
// 008928cc  896804               mov dword ptr [eax + 4], ebp
// 008928cf  895008               mov dword ptr [eax + 8], edx
// 008928d2  89480c               mov dword ptr [eax + 0xc], ecx
// 008928d5  56                   push esi
// 008928d6  8bcf                 mov ecx, edi
// 008928d8  e8b3edffff           call 0x891690
// 008928dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 008928e1  8be8                 mov ebp, eax
// 008928e3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008928e9  83c018               add eax, 0x18
// 008928ec  8910                 mov dword ptr [eax], edx
// 008928ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008928f2  894804               mov dword ptr [eax + 4], ecx
// 008928f5  8b542418             mov edx, dword ptr [esp + 0x18]
// 008928f9  895008               mov dword ptr [eax + 8], edx
// 008928fc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00892900  89480c               mov dword ptr [eax + 0xc], ecx
// 00892903  eb2c                 jmp 0x892931
// 00892905  8b5760               mov edx, dword ptr [edi + 0x60]
// 00892908  8d5f58               lea ebx, [edi + 0x58]
// 0089290b  56                   push esi
// 0089290c  52                   push edx
// 0089290d  8bcb                 mov ecx, ebx
// 0089290f  e85c83fdff           call 0x86ac70
// 00892914  8b4308               mov eax, dword ptr [ebx + 8]
// 00892917  6a00                 push 0
// 00892919  50                   push eax
// 0089291a  8bcb                 mov ecx, ebx
// 0089291c  e84f83fdff           call 0x86ac70
// 00892921  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00892927  83c118               add ecx, 0x18
// 0089292a  51                   push ecx
// 0089292b  ff159cca9800         call dword ptr [0x98ca9c]
// 00892931  8b5620               mov edx, dword ptr [esi + 0x20]
// 00892934  52                   push edx
// 00892935  ff15bccb9800         call dword ptr [0x98cbbc]
// 0089293b  50                   push eax
// 0089293c  e8e911f6ff           call 0x7f3b2a
// 00892941  3bc7                 cmp eax, edi
// 00892943  741c                 je 0x892961
// 00892945  85ff                 test edi, edi
// 00892947  7504                 jne 0x89294d
// 00892949  33c0                 xor eax, eax
// 0089294b  eb03                 jmp 0x892950
// 0089294d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00892950  50                   push eax
// 00892951  8b4620               mov eax, dword ptr [esi + 0x20]
// 00892954  50                   push eax
// 00892955  ff1538cb9800         call dword ptr [0x98cb38]
// 0089295b  50                   push eax
// 0089295c  e8c911f6ff           call 0x7f3b2a
// 00892961  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00892967  3bcf                 cmp ecx, edi
// 00892969  7503                 jne 0x89296e
// 0089296b  55                   push ebp
// 0089296c  eb06                 jmp 0x892974
// 0089296e  85c9                 test ecx, ecx
// 00892970  7408                 je 0x89297a
// 00892972  6aff                 push -1
// 00892974  56                   push esi
// 00892975  e856fcffff           call 0x8925d0
// 0089297a  8bcf                 mov ecx, edi
// 0089297c  89be80010000         mov dword ptr [esi + 0x180], edi
// 00892982  e8c9fbffff           call 0x892550
// 00892987  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0089298a  6a01                 push 1
// 0089298c  e80f20f8ff           call 0x8149a0
// 00892991  5f                   pop edi
// 00892992  5e                   pop esi
// 00892993  5d                   pop ebp
// 00892994  5b                   pop ebx
// 00892995  83c420               add esp, 0x20
// 00892998  c20800               ret 8
// copied from an identical function in another client (function ?DockCommandBar@CXTPDockBar@@IAEXPAVCXTPToolBar@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp