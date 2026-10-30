// roc 2010-06 00899510  unit: CXTCaptionThemeFactory  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899510
//
// 00899510  6aff                 push -1
// 00899512  68f1be9b00           push 0x9bbef1
// 00899517  64a100000000         mov eax, dword ptr fs:[0]
// 0089951d  50                   push eax
// 0089951e  56                   push esi
// 0089951f  57                   push edi
// 00899520  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00899525  33c4                 xor eax, esp
// 00899527  50                   push eax
// 00899528  8d44240c             lea eax, [esp + 0xc]
// 0089952c  64a300000000         mov dword ptr fs:[0], eax
// 00899532  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00899536  8bc7                 mov eax, edi
// 00899538  83e801               sub eax, 1
// 0089953b  6a2c                 push 0x2c
// 0089953d  7447                 je 0x899586
// 0089953f  83e801               sub eax, 1
// 00899542  7421                 je 0x899565
// 00899544  e857e4f0ff           call 0x7a79a0
// 00899549  83c404               add esp, 4
// 0089954c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00899550  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00899558  85c0                 test eax, eax
// 0089955a  7455                 je 0x8995b1
// 0089955c  8bc8                 mov ecx, eax
// 0089955e  e86df2ffff           call 0x8987d0
// 00899563  eb4e                 jmp 0x8995b3
// 00899565  e836e4f0ff           call 0x7a79a0
// 0089956a  83c404               add esp, 4
// 0089956d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00899571  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00899579  85c0                 test eax, eax
// 0089957b  7434                 je 0x8995b1
// 0089957d  8bc8                 mov ecx, eax
// 0089957f  e8dcf2ffff           call 0x898860
// 00899584  eb2d                 jmp 0x8995b3
// 00899586  e815e4f0ff           call 0x7a79a0
// 0089958b  8bf0                 mov esi, eax
// 0089958d  83c404               add esp, 4
// 00899590  8974241c             mov dword ptr [esp + 0x1c], esi
// 00899594  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0089959c  85f6                 test esi, esi
// 0089959e  7411                 je 0x8995b1
// 008995a0  8bce                 mov ecx, esi
// 008995a2  e829f2ffff           call 0x8987d0
// 008995a7  c7063408a700         mov dword ptr [esi], 0xa70834
// 008995ad  8bc6                 mov eax, esi
// 008995af  eb02                 jmp 0x8995b3
// 008995b1  33c0                 xor eax, eax
// 008995b3  897808               mov dword ptr [eax + 8], edi
// 008995b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008995ba  64890d00000000       mov dword ptr fs:[0], ecx
// 008995c1  59                   pop ecx
// 008995c2  5f                   pop edi
// 008995c3  5e                   pop esi
// 008995c4  83c40c               add esp, 0xc
// 008995c7  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTCaptionThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp