// roc 2007-03 00665030  unit: seg_00660000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00665030
//
// 00665030  51                   push ecx
// 00665031  57                   push edi
// 00665032  8bf9                 mov edi, ecx
// 00665034  85ff                 test edi, edi
// 00665036  897c2404             mov dword ptr [esp + 4], edi
// 0066503a  7407                 je 0x665043
// 0066503c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0066503f  85c0                 test eax, eax
// 00665041  7509                 jne 0x66504c
// 00665043  5f                   pop edi
// 00665044  83c404               add esp, 4
// 00665047  e93491fbff           jmp 0x61e180
// 0066504c  55                   push ebp
// 0066504d  8b2d88ed7700         mov ebp, dword ptr [0x77ed88]
// 00665053  56                   push esi
// 00665054  6a05                 push 5
// 00665056  50                   push eax
// 00665057  ffd5                 call ebp
// 00665059  50                   push eax
// 0066505a  e8ef95fbff           call 0x61e64e
// 0066505f  8bf0                 mov esi, eax
// 00665061  85f6                 test esi, esi
// 00665063  8bcf                 mov ecx, edi
// 00665065  750b                 jne 0x665072
// 00665067  5e                   pop esi
// 00665068  5d                   pop ebp
// 00665069  5f                   pop edi
// 0066506a  83c404               add esp, 4
// 0066506d  e90e91fbff           jmp 0x61e180
// 00665072  53                   push ebx
// 00665073  e85868fdff           call 0x63b8d0
// 00665078  8bd8                 mov ebx, eax
// 0066507a  8d9b00000000         lea ebx, [ebx]
// 00665080  8b4620               mov eax, dword ptr [esi + 0x20]
// 00665083  6a02                 push 2
// 00665085  50                   push eax
// 00665086  ffd5                 call ebp
// 00665088  50                   push eax
// 00665089  e8c095fbff           call 0x61e64e
// 0066508e  6a00                 push 0
// 00665090  8bce                 mov ecx, esi
// 00665092  8bf8                 mov edi, eax
// 00665094  e83f93fbff           call 0x61e3d8
// 00665099  85db                 test ebx, ebx
// 0066509b  7504                 jne 0x6650a1
// 0066509d  33c0                 xor eax, eax
// 0066509f  eb03                 jmp 0x6650a4
// 006650a1  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006650a4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006650a7  50                   push eax
// 006650a8  51                   push ecx
// 006650a9  ff1574ef7700         call dword ptr [0x77ef74]
// 006650af  50                   push eax
// 006650b0  e89995fbff           call 0x61e64e
// 006650b5  85ff                 test edi, edi
// 006650b7  8bf7                 mov esi, edi
// 006650b9  75c5                 jne 0x665080
// 006650bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006650bf  5b                   pop ebx
// 006650c0  5e                   pop esi
// 006650c1  5d                   pop ebp
// 006650c2  5f                   pop edi
// 006650c3  83c404               add esp, 4
// 006650c6  e9b590fbff           jmp 0x61e180
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?DestroyWindow@CXTPPopupBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
