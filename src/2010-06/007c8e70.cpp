// roc 2010-06 007c8e70  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8e70
//
// 007c8e70  8b442404             mov eax, dword ptr [esp + 4]
// 007c8e74  56                   push esi
// 007c8e75  8bf1                 mov esi, ecx
// 007c8e77  57                   push edi
// 007c8e78  8b7e58               mov edi, dword ptr [esi + 0x58]
// 007c8e7b  3bf8                 cmp edi, eax
// 007c8e7d  7432                 je 0x7c8eb1
// 007c8e7f  894658               mov dword ptr [esi + 0x58], eax
// 007c8e82  85ff                 test edi, edi
// 007c8e84  7410                 je 0x7c8e96
// 007c8e86  6a01                 push 1
// 007c8e88  8bcf                 mov ecx, edi
// 007c8e8a  e81119feff           call 0x7aa7a0
// 007c8e8f  8bcf                 mov ecx, edi
// 007c8e91  e886f0fdff           call 0x7a7f1c
// 007c8e96  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007c8e99  85c9                 test ecx, ecx
// 007c8e9b  7414                 je 0x7c8eb1
// 007c8e9d  6a00                 push 0
// 007c8e9f  e8fc18feff           call 0x7aa7a0
// 007c8ea4  8b4658               mov eax, dword ptr [esi + 0x58]
// 007c8ea7  83c004               add eax, 4
// 007c8eaa  50                   push eax
// 007c8eab  ff1580a39e00         call dword ptr [0x9ea380]
// 007c8eb1  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 007c8eb4  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007c8eb7  85c0                 test eax, eax
// 007c8eb9  7404                 je 0x7c8ebf
// 007c8ebb  8bf0                 mov esi, eax
// 007c8ebd  eb06                 jmp 0x7c8ec5
// 007c8ebf  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 007c8ec5  85f6                 test esi, esi
// 007c8ec7  7417                 je 0x7c8ee0
// 007c8ec9  8b7620               mov esi, dword ptr [esi + 0x20]
// 007c8ecc  85f6                 test esi, esi
// 007c8ece  7410                 je 0x7c8ee0
// 007c8ed0  6a00                 push 0
// 007c8ed2  6a00                 push 0
// 007c8ed4  6857280000           push 0x2857
// 007c8ed9  56                   push esi
// 007c8eda  ff1554ba9e00         call dword ptr [0x9eba54]
// 007c8ee0  5f                   pop edi
// 007c8ee1  5e                   pop esi
// 007c8ee2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
