// roc 2009-12 008d3350  unit: CXTPTabPaintManager  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d3350
//
// 008d3350  6aff                 push -1
// 008d3352  68b9529600           push 0x9652b9
// 008d3357  64a100000000         mov eax, dword ptr fs:[0]
// 008d335d  50                   push eax
// 008d335e  56                   push esi
// 008d335f  57                   push edi
// 008d3360  a10052b600           mov eax, dword ptr [0xb65200]
// 008d3365  33c4                 xor eax, esp
// 008d3367  50                   push eax
// 008d3368  8d44240c             lea eax, [esp + 0xc]
// 008d336c  64a300000000         mov dword ptr fs:[0], eax
// 008d3372  8bf9                 mov edi, ecx
// 008d3374  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d3378  8987fc000000         mov dword ptr [edi + 0xfc], eax
// 008d337e  83f805               cmp eax, 5
// 008d3381  7546                 jne 0x8d33c9
// 008d3383  6a24                 push 0x24
// 008d3385  e8d604f2ff           call 0x7f3860
// 008d338a  8bf0                 mov esi, eax
// 008d338c  83c404               add esp, 4
// 008d338f  8974241c             mov dword ptr [esp + 0x1c], esi
// 008d3393  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d339b  85f6                 test esi, esi
// 008d339d  0f84d9010000         je 0x8d357c
// 008d33a3  8bce                 mov ecx, esi
// 008d33a5  e836110000           call 0x8d44e0
// 008d33aa  6a00                 push 0
// 008d33ac  6a04                 push 4
// 008d33ae  6a02                 push 2
// 008d33b0  6a04                 push 4
// 008d33b2  8d4604               lea eax, [esi + 4]
// 008d33b5  50                   push eax
// 008d33b6  c706b4a9a000         mov dword ptr [esi], 0xa0a9b4
// 008d33bc  ff1538ca9800         call dword ptr [0x98ca38]
// 008d33c2  8bc6                 mov eax, esi
// 008d33c4  e9b5010000           jmp 0x8d357e
// 008d33c9  83f807               cmp eax, 7
// 008d33cc  752a                 jne 0x8d33f8
// 008d33ce  6a24                 push 0x24
// 008d33d0  e88b04f2ff           call 0x7f3860
// 008d33d5  83c404               add esp, 4
// 008d33d8  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d33dc  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d33e4  85c0                 test eax, eax
// 008d33e6  0f8490010000         je 0x8d357c
// 008d33ec  8bc8                 mov ecx, eax
// 008d33ee  e8fdd6ffff           call 0x8d0af0
// 008d33f3  e986010000           jmp 0x8d357e
// 008d33f8  83f802               cmp eax, 2
// 008d33fb  752a                 jne 0x8d3427
// 008d33fd  6a2c                 push 0x2c
// 008d33ff  e85c04f2ff           call 0x7f3860
// 008d3404  83c404               add esp, 4
// 008d3407  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d340b  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008d3413  85c0                 test eax, eax
// 008d3415  0f8461010000         je 0x8d357c
// 008d341b  8bc8                 mov ecx, eax
// 008d341d  e85ee8f9ff           call 0x871c80
// 008d3422  e957010000           jmp 0x8d357e
// 008d3427  83f806               cmp eax, 6
// 008d342a  752a                 jne 0x8d3456
// 008d342c  6a24                 push 0x24
// 008d342e  e82d04f2ff           call 0x7f3860
// 008d3433  83c404               add esp, 4
// 008d3436  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d343a  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008d3442  85c0                 test eax, eax
// 008d3444  0f8432010000         je 0x8d357c
// 008d344a  8bc8                 mov ecx, eax
// 008d344c  e85fe7f9ff           call 0x871bb0
// 008d3451  e928010000           jmp 0x8d357e
// 008d3456  83f804               cmp eax, 4
// 008d3459  752a                 jne 0x8d3485
// 008d345b  6a24                 push 0x24
// 008d345d  e8fe03f2ff           call 0x7f3860
// 008d3462  83c404               add esp, 4
// 008d3465  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d3469  c744241404000000     mov dword ptr [esp + 0x14], 4
// 008d3471  85c0                 test eax, eax
// 008d3473  0f8403010000         je 0x8d357c
// 008d3479  8bc8                 mov ecx, eax
// 008d347b  e8c0d5ffff           call 0x8d0a40
// 008d3480  e9f9000000           jmp 0x8d357e
// 008d3485  83f801               cmp eax, 1
// 008d3488  752a                 jne 0x8d34b4
// 008d348a  6a24                 push 0x24
// 008d348c  e8cf03f2ff           call 0x7f3860
// 008d3491  83c404               add esp, 4
// 008d3494  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d3498  c744241405000000     mov dword ptr [esp + 0x14], 5
// 008d34a0  85c0                 test eax, eax
// 008d34a2  0f84d4000000         je 0x8d357c
// 008d34a8  8bc8                 mov ecx, eax
// 008d34aa  e811d8ffff           call 0x8d0cc0
// 008d34af  e9ca000000           jmp 0x8d357e
// 008d34b4  83f803               cmp eax, 3
// 008d34b7  752a                 jne 0x8d34e3
// 008d34b9  6a28                 push 0x28
// 008d34bb  e8a003f2ff           call 0x7f3860
// 008d34c0  83c404               add esp, 4
// 008d34c3  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d34c7  c744241406000000     mov dword ptr [esp + 0x14], 6
// 008d34cf  85c0                 test eax, eax
// 008d34d1  0f84a5000000         je 0x8d357c
// 008d34d7  8bc8                 mov ecx, eax
// 008d34d9  e8b2d4ffff           call 0x8d0990
// 008d34de  e99b000000           jmp 0x8d357e
// 008d34e3  83f808               cmp eax, 8
// 008d34e6  7523                 jne 0x8d350b
// 008d34e8  6a24                 push 0x24
// 008d34ea  e87103f2ff           call 0x7f3860
// 008d34ef  83c404               add esp, 4
// 008d34f2  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d34f6  c744241407000000     mov dword ptr [esp + 0x14], 7
// 008d34fe  85c0                 test eax, eax
// 008d3500  747a                 je 0x8d357c
// 008d3502  8bc8                 mov ecx, eax
// 008d3504  e897d2ffff           call 0x8d07a0
// 008d3509  eb73                 jmp 0x8d357e
// 008d350b  83f809               cmp eax, 9
// 008d350e  7523                 jne 0x8d3533
// 008d3510  6a28                 push 0x28
// 008d3512  e84903f2ff           call 0x7f3860
// 008d3517  83c404               add esp, 4
// 008d351a  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d351e  c744241408000000     mov dword ptr [esp + 0x14], 8
// 008d3526  85c0                 test eax, eax
// 008d3528  7452                 je 0x8d357c
// 008d352a  8bc8                 mov ecx, eax
// 008d352c  e84fd5ffff           call 0x8d0a80
// 008d3531  eb4b                 jmp 0x8d357e
// 008d3533  6a24                 push 0x24
// 008d3535  83f80a               cmp eax, 0xa
// 008d3538  7521                 jne 0x8d355b
// 008d353a  e82103f2ff           call 0x7f3860
// 008d353f  83c404               add esp, 4
// 008d3542  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d3546  c744241409000000     mov dword ptr [esp + 0x14], 9
// 008d354e  85c0                 test eax, eax
// 008d3550  742a                 je 0x8d357c
// 008d3552  8bc8                 mov ecx, eax
// 008d3554  e8a7d4ffff           call 0x8d0a00
// 008d3559  eb23                 jmp 0x8d357e
// 008d355b  e80003f2ff           call 0x7f3860
// 008d3560  83c404               add esp, 4
// 008d3563  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d3567  c74424140a000000     mov dword ptr [esp + 0x14], 0xa
// 008d356f  85c0                 test eax, eax
// 008d3571  7409                 je 0x8d357c
// 008d3573  8bc8                 mov ecx, eax
// 008d3575  e8d6d3ffff           call 0x8d0950
// 008d357a  eb02                 jmp 0x8d357e
// 008d357c  33c0                 xor eax, eax
// 008d357e  50                   push eax
// 008d357f  8bcf                 mov ecx, edi
// 008d3581  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008d3589  e842e3ffff           call 0x8d18d0
// 008d358e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d3592  64890d00000000       mov dword ptr fs:[0], ecx
// 008d3599  59                   pop ecx
// 008d359a  5f                   pop edi
// 008d359b  5e                   pop esi
// 008d359c  83c40c               add esp, 0xc
// 008d359f  c20400               ret 4
// copied from an identical function in another client (function ?SetAppearance@CXTPTabPaintManager@@QAEPAVCAppearanceSet@1@W4XTPTabAppearanceStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp