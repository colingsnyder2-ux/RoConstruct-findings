// roc 2011-06 0082a940  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a940
//
// 0082a940  8b442404             mov eax, dword ptr [esp + 4]
// 0082a944  56                   push esi
// 0082a945  8bf1                 mov esi, ecx
// 0082a947  57                   push edi
// 0082a948  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0082a94b  3bf8                 cmp edi, eax
// 0082a94d  7432                 je 0x82a981
// 0082a94f  894658               mov dword ptr [esi + 0x58], eax
// 0082a952  85ff                 test edi, edi
// 0082a954  7410                 je 0x82a966
// 0082a956  6a01                 push 1
// 0082a958  8bcf                 mov ecx, edi
// 0082a95a  e83124feff           call 0x80cd90
// 0082a95f  8bcf                 mov ecx, edi
// 0082a961  e874fcfdff           call 0x80a5da
// 0082a966  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0082a969  85c9                 test ecx, ecx
// 0082a96b  7414                 je 0x82a981
// 0082a96d  6a00                 push 0
// 0082a96f  e81c24feff           call 0x80cd90
// 0082a974  8b4658               mov eax, dword ptr [esi + 0x58]
// 0082a977  83c004               add eax, 4
// 0082a97a  50                   push eax
// 0082a97b  ff154c03a400         call dword ptr [0xa4034c]
// 0082a981  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0082a984  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0082a987  85c0                 test eax, eax
// 0082a989  7404                 je 0x82a98f
// 0082a98b  8bf0                 mov esi, eax
// 0082a98d  eb06                 jmp 0x82a995
// 0082a98f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 0082a995  85f6                 test esi, esi
// 0082a997  7417                 je 0x82a9b0
// 0082a999  8b7620               mov esi, dword ptr [esi + 0x20]
// 0082a99c  85f6                 test esi, esi
// 0082a99e  7410                 je 0x82a9b0
// 0082a9a0  6a00                 push 0
// 0082a9a2  6a00                 push 0
// 0082a9a4  6857280000           push 0x2857
// 0082a9a9  56                   push esi
// 0082a9aa  ff15c019a400         call dword ptr [0xa419c0]
// 0082a9b0  5f                   pop edi
// 0082a9b1  5e                   pop esi
// 0082a9b2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
