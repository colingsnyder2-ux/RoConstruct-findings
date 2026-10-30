// roc 2011-06 0088da40  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088da40
//
// 0088da40  83ec40               sub esp, 0x40
// 0088da43  53                   push ebx
// 0088da44  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0088da48  55                   push ebp
// 0088da49  56                   push esi
// 0088da4a  57                   push edi
// 0088da4b  8bf9                 mov edi, ecx
// 0088da4d  b8ac0aad00           mov eax, 0xad0aac
// 0088da52  85db                 test ebx, ebx
// 0088da54  7505                 jne 0x88da5b
// 0088da56  b8940aad00           mov eax, 0xad0a94
// 0088da5b  50                   push eax
// 0088da5c  e82f180000           call 0x88f290
// 0088da61  8bf0                 mov esi, eax
// 0088da63  85f6                 test esi, esi
// 0088da65  0f847a010000         je 0x88dbe5
// 0088da6b  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0088da6f  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 0088da75  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 0088da7b  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 0088da81  89442410             mov dword ptr [esp + 0x10], eax
// 0088da85  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 0088da8b  89542418             mov dword ptr [esp + 0x18], edx
// 0088da8f  8b5500               mov edx, dword ptr [ebp]
// 0088da92  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088da96  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088da9a  8b4278               mov eax, dword ptr [edx + 0x78]
// 0088da9d  8bcd                 mov ecx, ebp
// 0088da9f  ffd0                 call eax
// 0088daa1  85c0                 test eax, eax
// 0088daa3  7407                 je 0x88daac
// 0088daa5  bd02000000           mov ebp, 2
// 0088daaa  eb12                 jmp 0x88dabe
// 0088daac  8b5500               mov edx, dword ptr [ebp]
// 0088daaf  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0088dab2  8bcd                 mov ecx, ebp
// 0088dab4  ffd0                 call eax
// 0088dab6  8be8                 mov ebp, eax
// 0088dab8  f7dd                 neg ebp
// 0088daba  1bed                 sbb ebp, ebp
// 0088dabc  f7dd                 neg ebp
// 0088dabe  b8780aad00           mov eax, 0xad0a78
// 0088dac3  85db                 test ebx, ebx
// 0088dac5  7505                 jne 0x88dacc
// 0088dac7  b8580aad00           mov eax, 0xad0a58
// 0088dacc  50                   push eax
// 0088dacd  8bcf                 mov ecx, edi
// 0088dacf  e8bc170000           call 0x88f290
// 0088dad4  6a03                 push 3
// 0088dad6  55                   push ebp
// 0088dad7  8d4c2448             lea ecx, [esp + 0x48]
// 0088dadb  8bd8                 mov ebx, eax
// 0088dadd  b806000000           mov eax, 6
// 0088dae2  51                   push ecx
// 0088dae3  8bce                 mov ecx, esi
// 0088dae5  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 0088daec  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0088daf4  89442430             mov dword ptr [esp + 0x30], eax
// 0088daf8  c744243403000000     mov dword ptr [esp + 0x34], 3
// 0088db00  89442438             mov dword ptr [esp + 0x38], eax
// 0088db04  e807fc0500           call 0x8ed710
// 0088db09  68ff00ff00           push 0xff00ff
// 0088db0e  8d542424             lea edx, [esp + 0x24]
// 0088db12  52                   push edx
// 0088db13  8b10                 mov edx, dword ptr [eax]
// 0088db15  83ec10               sub esp, 0x10
// 0088db18  8bcc                 mov ecx, esp
// 0088db1a  8911                 mov dword ptr [ecx], edx
// 0088db1c  8b5004               mov edx, dword ptr [eax + 4]
// 0088db1f  895104               mov dword ptr [ecx + 4], edx
// 0088db22  8b5008               mov edx, dword ptr [eax + 8]
// 0088db25  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088db28  895108               mov dword ptr [ecx + 8], edx
// 0088db2b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088db2f  89410c               mov dword ptr [ecx + 0xc], eax
// 0088db32  8d4c2428             lea ecx, [esp + 0x28]
// 0088db36  51                   push ecx
// 0088db37  52                   push edx
// 0088db38  8bce                 mov ecx, esi
// 0088db3a  e811010600           call 0x8edc50
// 0088db3f  6a03                 push 3
// 0088db41  6a00                 push 0
// 0088db43  8d442448             lea eax, [esp + 0x48]
// 0088db47  50                   push eax
// 0088db48  8bcb                 mov ecx, ebx
// 0088db4a  e8c1fb0500           call 0x8ed710
// 0088db4f  8b4808               mov ecx, dword ptr [eax + 8]
// 0088db52  2b08                 sub ecx, dword ptr [eax]
// 0088db54  8b700c               mov esi, dword ptr [eax + 0xc]
// 0088db57  2b7004               sub esi, dword ptr [eax + 4]
// 0088db5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088db5e  2bc1                 sub eax, ecx
// 0088db60  03442418             add eax, dword ptr [esp + 0x18]
// 0088db64  6a03                 push 3
// 0088db66  99                   cdq 
// 0088db67  2bc2                 sub eax, edx
// 0088db69  8bf8                 mov edi, eax
// 0088db6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088db6f  2bc6                 sub eax, esi
// 0088db71  03442418             add eax, dword ptr [esp + 0x18]
// 0088db75  d1ff                 sar edi, 1
// 0088db77  99                   cdq 
// 0088db78  2bc2                 sub eax, edx
// 0088db7a  d1f8                 sar eax, 1
// 0088db7c  89442438             mov dword ptr [esp + 0x38], eax
// 0088db80  897c2434             mov dword ptr [esp + 0x34], edi
// 0088db84  03f9                 add edi, ecx
// 0088db86  03c6                 add eax, esi
// 0088db88  55                   push ebp
// 0088db89  8d4c2448             lea ecx, [esp + 0x48]
// 0088db8d  89442444             mov dword ptr [esp + 0x44], eax
// 0088db91  33c0                 xor eax, eax
// 0088db93  51                   push ecx
// 0088db94  8bcb                 mov ecx, ebx
// 0088db96  897c2444             mov dword ptr [esp + 0x44], edi
// 0088db9a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088db9e  89442430             mov dword ptr [esp + 0x30], eax
// 0088dba2  89442434             mov dword ptr [esp + 0x34], eax
// 0088dba6  89442438             mov dword ptr [esp + 0x38], eax
// 0088dbaa  e861fb0500           call 0x8ed710
// 0088dbaf  68ff00ff00           push 0xff00ff
// 0088dbb4  8d542424             lea edx, [esp + 0x24]
// 0088dbb8  52                   push edx
// 0088dbb9  8b10                 mov edx, dword ptr [eax]
// 0088dbbb  83ec10               sub esp, 0x10
// 0088dbbe  8bcc                 mov ecx, esp
// 0088dbc0  8911                 mov dword ptr [ecx], edx
// 0088dbc2  8b5004               mov edx, dword ptr [eax + 4]
// 0088dbc5  895104               mov dword ptr [ecx + 4], edx
// 0088dbc8  8b5008               mov edx, dword ptr [eax + 8]
// 0088dbcb  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088dbce  895108               mov dword ptr [ecx + 8], edx
// 0088dbd1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088dbd5  89410c               mov dword ptr [ecx + 0xc], eax
// 0088dbd8  8d4c2448             lea ecx, [esp + 0x48]
// 0088dbdc  51                   push ecx
// 0088dbdd  52                   push edx
// 0088dbde  8bcb                 mov ecx, ebx
// 0088dbe0  e86b000600           call 0x8edc50
// 0088dbe5  5f                   pop edi
// 0088dbe6  5e                   pop esi
// 0088dbe7  5d                   pop ebp
// 0088dbe8  5b                   pop ebx
// 0088dbe9  83c440               add esp, 0x40
// 0088dbec  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp