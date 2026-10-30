// roc 2009-12 008703c0  unit: CXTPNewToolbarDlg  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008703c0
//
// 008703c0  56                   push esi
// 008703c1  57                   push edi
// 008703c2  e8c9ffffff           call 0x870390
// 008703c7  8bf0                 mov esi, eax
// 008703c9  e8c2ffffff           call 0x870390
// 008703ce  83780c00             cmp dword ptr [eax + 0xc], 0
// 008703d2  8b3d20cd9800         mov edi, dword ptr [0x98cd20]
// 008703d8  7544                 jne 0x87041e
// 008703da  53                   push ebx
// 008703db  8b1decb29800         mov ebx, dword ptr [0x98b2ec]
// 008703e1  8b06                 mov eax, dword ptr [esi]
// 008703e3  83e801               sub eax, 1
// 008703e6  7412                 je 0x8703fa
// 008703e8  83e801               sub eax, 1
// 008703eb  7521                 jne 0x87040e
// 008703ed  6802200100           push 0x12002
// 008703f2  50                   push eax
// 008703f3  68340da000           push 0xa00d34
// 008703f8  eb0c                 jmp 0x870406
// 008703fa  6802200100           push 0x12002
// 008703ff  6a00                 push 0
// 00870401  68280da000           push 0xa00d28
// 00870406  ffd7                 call edi
// 00870408  c70600000000         mov dword ptr [esi], 0
// 0087040e  6a05                 push 5
// 00870410  ffd3                 call ebx
// 00870412  e879ffffff           call 0x870390
// 00870417  83780c00             cmp dword ptr [eax + 0xc], 0
// 0087041b  74c4                 je 0x8703e1
// 0087041d  5b                   pop ebx
// 0087041e  6a40                 push 0x40
// 00870420  6a00                 push 0
// 00870422  6a00                 push 0
// 00870424  ffd7                 call edi
// 00870426  5f                   pop edi
// 00870427  33c0                 xor eax, eax
// 00870429  5e                   pop esi
// 0087042a  c20400               ret 4
// copied from an identical function in another client (function ?SoundThreadProc@CXTPSoundManager@@CGKPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPSoundManager.cpp