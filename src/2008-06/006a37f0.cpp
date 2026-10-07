// roc 2008-06 006a37f0  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a37f0
//
// 006a37f0  8b442404             mov eax, dword ptr [esp + 4]
// 006a37f4  56                   push esi
// 006a37f5  8bf1                 mov esi, ecx
// 006a37f7  57                   push edi
// 006a37f8  8b7e58               mov edi, dword ptr [esi + 0x58]
// 006a37fb  3bf8                 cmp edi, eax
// 006a37fd  7432                 je 0x6a3831
// 006a37ff  894658               mov dword ptr [esi + 0x58], eax
// 006a3802  85ff                 test edi, edi
// 006a3804  7410                 je 0x6a3816
// 006a3806  6a01                 push 1
// 006a3808  8bcf                 mov ecx, edi
// 006a380a  e8c1800000           call 0x6ab8d0
// 006a380f  8bcf                 mov ecx, edi
// 006a3811  e8ced3ffff           call 0x6a0be4
// 006a3816  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006a3819  85c9                 test ecx, ecx
// 006a381b  7414                 je 0x6a3831
// 006a381d  6a00                 push 0
// 006a381f  e8ac800000           call 0x6ab8d0
// 006a3824  8b4658               mov eax, dword ptr [esi + 0x58]
// 006a3827  83c004               add eax, 4
// 006a382a  50                   push eax
// 006a382b  ff15b0218000         call dword ptr [0x8021b0]
// 006a3831  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006a3834  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006a3837  85c0                 test eax, eax
// 006a3839  7404                 je 0x6a383f
// 006a383b  8bf0                 mov esi, eax
// 006a383d  eb06                 jmp 0x6a3845
// 006a383f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 006a3845  85f6                 test esi, esi
// 006a3847  7417                 je 0x6a3860
// 006a3849  8b7620               mov esi, dword ptr [esi + 0x20]
// 006a384c  85f6                 test esi, esi
// 006a384e  7410                 je 0x6a3860
// 006a3850  6a00                 push 0
// 006a3852  6a00                 push 0
// 006a3854  6857280000           push 0x2857
// 006a3859  56                   push esi
// 006a385a  ff15142e8000         call dword ptr [0x802e14]
// 006a3860  5f                   pop edi
// 006a3861  5e                   pop esi
// 006a3862  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
