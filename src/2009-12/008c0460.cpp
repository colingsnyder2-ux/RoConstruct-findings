// roc 2009-12 008c0460  unit: PAVCXTPDockingPaneBase::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0460
//
// 008c0460  53                   push ebx
// 008c0461  8bd9                 mov ebx, ecx
// 008c0463  57                   push edi
// 008c0464  8b7b08               mov edi, dword ptr [ebx + 8]
// 008c0467  85ff                 test edi, edi
// 008c0469  743a                 je 0x8c04a5
// 008c046b  55                   push ebp
// 008c046c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008c0470  56                   push esi
// 008c0471  8bc7                 mov eax, edi
// 008c0473  8b7008               mov esi, dword ptr [eax + 8]
// 008c0476  8b4668               mov eax, dword ptr [esi + 0x68]
// 008c0479  8b3f                 mov edi, dword ptr [edi]
// 008c047b  3be8                 cmp ebp, eax
// 008c047d  7520                 jne 0x8c049f
// 008c047f  8d4e54               lea ecx, [esi + 0x54]
// 008c0482  85c0                 test eax, eax
// 008c0484  7403                 je 0x8c0489
// 008c0486  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c0489  51                   push ecx
// 008c048a  50                   push eax
// 008c048b  e85004fbff           call 0x8708e0
// 008c0490  8bc8                 mov ecx, eax
// 008c0492  e8c908fbff           call 0x870d60
// 008c0497  56                   push esi
// 008c0498  8bcb                 mov ecx, ebx
// 008c049a  e861feffff           call 0x8c0300
// 008c049f  85ff                 test edi, edi
// 008c04a1  75ce                 jne 0x8c0471
// 008c04a3  5e                   pop esi
// 008c04a4  5d                   pop ebp
// 008c04a5  5f                   pop edi
// 008c04a6  5b                   pop ebx
// 008c04a7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
