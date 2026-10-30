// roc 2007-03 0071e400  unit: seg_00710000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071e400
//
// 0071e400  83ec30               sub esp, 0x30
// 0071e403  56                   push esi
// 0071e404  8bf1                 mov esi, ecx
// 0071e406  57                   push edi
// 0071e407  56                   push esi
// 0071e408  8d4c241c             lea ecx, [esp + 0x1c]
// 0071e40c  e8bfd3f4ff           call 0x66b7d0
// 0071e411  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071e414  6a02                 push 2
// 0071e416  50                   push eax
// 0071e417  ff1588ed7700         call dword ptr [0x77ed88]
// 0071e41d  85c0                 test eax, eax
// 0071e41f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0071e423  745a                 je 0x71e47f
// 0071e425  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0071e428  7455                 je 0x71e47f
// 0071e42a  50                   push eax
// 0071e42b  8d4c242c             lea ecx, [esp + 0x2c]
// 0071e42f  e86cd3f4ff           call 0x66b7a0
// 0071e434  8d4c2428             lea ecx, [esp + 0x28]
// 0071e438  51                   push ecx
// 0071e439  8d54241c             lea edx, [esp + 0x1c]
// 0071e43d  52                   push edx
// 0071e43e  8d442410             lea eax, [esp + 0x10]
// 0071e442  50                   push eax
// 0071e443  ff153cef7700         call dword ptr [0x77ef3c]
// 0071e449  85c0                 test eax, eax
// 0071e44b  7432                 je 0x71e47f
// 0071e44d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071e451  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0071e455  83f902               cmp ecx, 2
// 0071e458  7525                 jne 0x71e47f
// 0071e45a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071e45e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071e462  f7d9                 neg ecx
// 0071e464  51                   push ecx
// 0071e465  f7d8                 neg eax
// 0071e467  50                   push eax
// 0071e468  8d542410             lea edx, [esp + 0x10]
// 0071e46c  52                   push edx
// 0071e46d  ff1558ed7700         call dword ptr [0x77ed58]
// 0071e473  8d442408             lea eax, [esp + 8]
// 0071e477  50                   push eax
// 0071e478  8bcf                 mov ecx, edi
// 0071e47a  e8c7cc0100           call 0x73b146
// 0071e47f  57                   push edi
// 0071e480  8bce                 mov ecx, esi
// 0071e482  e849070000           call 0x71ebd0
// 0071e487  5f                   pop edi
// 0071e488  5e                   pop esi
// 0071e489  83c430               add esp, 0x30
// 0071e48c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectEdit.cpp (function ?DrawFrame@CXTPSkinObjectEdit@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectEdit.cpp
