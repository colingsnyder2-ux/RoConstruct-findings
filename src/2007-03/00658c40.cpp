// roc 2007-03 00658c40  unit: seg_00650000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00658c40
//
// 00658c40  56                   push esi
// 00658c41  57                   push edi
// 00658c42  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00658c46  8bf1                 mov esi, ecx
// 00658c48  56                   push esi
// 00658c49  8bcf                 mov ecx, edi
// 00658c4b  e8e005feff           call 0x639230
// 00658c50  85c0                 test eax, eax
// 00658c52  7559                 jne 0x658cad
// 00658c54  53                   push ebx
// 00658c55  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00658c59  55                   push ebp
// 00658c5a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00658c5e  53                   push ebx
// 00658c5f  57                   push edi
// 00658c60  55                   push ebp
// 00658c61  8bce                 mov ecx, esi
// 00658c63  e858ffffff           call 0x658bc0
// 00658c68  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 00658c6e  e8fdf30300           call 0x698070
// 00658c73  85c0                 test eax, eax
// 00658c75  89442418             mov dword ptr [esp + 0x18], eax
// 00658c79  7430                 je 0x658cab
// 00658c7b  eb03                 jmp 0x658c80
// 00658c7d  8d4900               lea ecx, [ecx]
// 00658c80  8d44241c             lea eax, [esp + 0x1c]
// 00658c84  50                   push eax
// 00658c85  8d4c241c             lea ecx, [esp + 0x1c]
// 00658c89  51                   push ecx
// 00658c8a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 00658c90  e8ebf30300           call 0x698080
// 00658c95  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00658c99  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 00658c9c  53                   push ebx
// 00658c9d  57                   push edi
// 00658c9e  55                   push ebp
// 00658c9f  e8bce4ffff           call 0x657160
// 00658ca4  837c241800           cmp dword ptr [esp + 0x18], 0
// 00658ca9  75d5                 jne 0x658c80
// 00658cab  5d                   pop ebp
// 00658cac  5b                   pop ebx
// 00658cad  5f                   pop edi
// 00658cae  5e                   pop esi
// 00658caf  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
