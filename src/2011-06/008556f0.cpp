// from server: 100% by auto
// roc 2011-06 008556f0  unit: CXTPPopupBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008556f0
//
// 008556f0  51                   push ecx
// 008556f1  57                   push edi
// 008556f2  8bf9                 mov edi, ecx
// 008556f4  897c2404             mov dword ptr [esp + 4], edi
// 008556f8  85ff                 test edi, edi
// 008556fa  7407                 je 0x855703
// 008556fc  8b4720               mov eax, dword ptr [edi + 0x20]
// 008556ff  85c0                 test eax, eax
// 00855701  7509                 jne 0x85570c
// 00855703  5f                   pop edi
// 00855704  83c404               add esp, 4
// 00855707  e9d049fbff           jmp 0x80a0dc
// 0085570c  55                   push ebp
// 0085570d  8b2d581ba400         mov ebp, dword ptr [0xa41b58]
// 00855713  56                   push esi
// 00855714  6a05                 push 5
// 00855716  50                   push eax
// 00855717  ffd5                 call ebp
// 00855719  50                   push eax
// 0085571a  e8094cfbff           call 0x80a328
// 0085571f  8bf0                 mov esi, eax
// 00855721  8bcf                 mov ecx, edi
// 00855723  85f6                 test esi, esi
// 00855725  750b                 jne 0x855732
// 00855727  5e                   pop esi
// 00855728  5d                   pop ebp
// 00855729  5f                   pop edi
// 0085572a  83c404               add esp, 4
// 0085572d  e9aa49fbff           jmp 0x80a0dc
// 00855732  53                   push ebx
// 00855733  e8387ffcff           call 0x81d670
// 00855738  8bd8                 mov ebx, eax
// 0085573a  8d9b00000000         lea ebx, [ebx]
// 00855740  8b4620               mov eax, dword ptr [esi + 0x20]
// 00855743  6a02                 push 2
// 00855745  50                   push eax
// 00855746  ffd5                 call ebp
// 00855748  50                   push eax
// 00855749  e8da4bfbff           call 0x80a328
// 0085574e  6a00                 push 0
// 00855750  8bce                 mov ecx, esi
// 00855752  8bf8                 mov edi, eax
// 00855754  e8ed4bfbff           call 0x80a346
// 00855759  85db                 test ebx, ebx
// 0085575b  7504                 jne 0x855761
// 0085575d  33c0                 xor eax, eax
// 0085575f  eb03                 jmp 0x855764
// 00855761  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00855764  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00855767  50                   push eax
// 00855768  51                   push ecx
// 00855769  ff15a01aa400         call dword ptr [0xa41aa0]
// 0085576f  50                   push eax
// 00855770  e8b34bfbff           call 0x80a328
// 00855775  8bf7                 mov esi, edi
// 00855777  85ff                 test edi, edi
// 00855779  75c5                 jne 0x855740
// 0085577b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085577f  5b                   pop ebx
// 00855780  5e                   pop esi
// 00855781  5d                   pop ebp
// 00855782  5f                   pop edi
// 00855783  83c404               add esp, 4
// 00855786  e95149fbff           jmp 0x80a0dc
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?DestroyWindow@CXTPPopupBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
