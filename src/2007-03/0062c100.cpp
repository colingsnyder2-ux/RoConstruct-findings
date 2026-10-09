// roc 2007-03 0062c100  unit: seg_00620000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062c100
//
// 0062c100  8b442404             mov eax, dword ptr [esp + 4]
// 0062c104  56                   push esi
// 0062c105  8bf1                 mov esi, ecx
// 0062c107  57                   push edi
// 0062c108  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0062c10b  3bf8                 cmp edi, eax
// 0062c10d  7432                 je 0x62c141
// 0062c10f  85ff                 test edi, edi
// 0062c111  894658               mov dword ptr [esi + 0x58], eax
// 0062c114  7410                 je 0x62c126
// 0062c116  6a01                 push 1
// 0062c118  8bcf                 mov ecx, edi
// 0062c11a  e8913a0000           call 0x62fbb0
// 0062c11f  8bcf                 mov ecx, edi
// 0062c121  e84c25ffff           call 0x61e672
// 0062c126  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0062c129  85c9                 test ecx, ecx
// 0062c12b  7414                 je 0x62c141
// 0062c12d  6a00                 push 0
// 0062c12f  e87c3a0000           call 0x62fbb0
// 0062c134  8b4658               mov eax, dword ptr [esi + 0x58]
// 0062c137  83c004               add eax, 4
// 0062c13a  50                   push eax
// 0062c13b  ff15acd27700         call dword ptr [0x77d2ac]
// 0062c141  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0062c144  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0062c147  85c0                 test eax, eax
// 0062c149  7404                 je 0x62c14f
// 0062c14b  8bf0                 mov esi, eax
// 0062c14d  eb06                 jmp 0x62c155
// 0062c14f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 0062c155  85f6                 test esi, esi
// 0062c157  7417                 je 0x62c170
// 0062c159  8b7620               mov esi, dword ptr [esi + 0x20]
// 0062c15c  85f6                 test esi, esi
// 0062c15e  7410                 je 0x62c170
// 0062c160  6a00                 push 0
// 0062c162  6a00                 push 0
// 0062c164  6857280000           push 0x2857
// 0062c169  56                   push esi
// 0062c16a  ff1550ee7700         call dword ptr [0x77ee50]
// 0062c170  5f                   pop edi
// 0062c171  5e                   pop esi
// 0062c172  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
