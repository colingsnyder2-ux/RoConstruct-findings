// roc 2008-06 006f0600  unit: CXTPPopupBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0600
//
// 006f0600  51                   push ecx
// 006f0601  57                   push edi
// 006f0602  8bf9                 mov edi, ecx
// 006f0604  897c2404             mov dword ptr [esp + 4], edi
// 006f0608  85ff                 test edi, edi
// 006f060a  7407                 je 0x6f0613
// 006f060c  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f060f  85c0                 test eax, eax
// 006f0611  7509                 jne 0x6f061c
// 006f0613  5f                   pop edi
// 006f0614  83c404               add esp, 4
// 006f0617  e9e800fbff           jmp 0x6a0704
// 006f061c  55                   push ebp
// 006f061d  8b2dfc2d8000         mov ebp, dword ptr [0x802dfc]
// 006f0623  56                   push esi
// 006f0624  6a05                 push 5
// 006f0626  50                   push eax
// 006f0627  ffd5                 call ebp
// 006f0629  50                   push eax
// 006f062a  e8af05fbff           call 0x6a0bde
// 006f062f  8bf0                 mov esi, eax
// 006f0631  8bcf                 mov ecx, edi
// 006f0633  85f6                 test esi, esi
// 006f0635  750b                 jne 0x6f0642
// 006f0637  5e                   pop esi
// 006f0638  5d                   pop ebp
// 006f0639  5f                   pop edi
// 006f063a  83c404               add esp, 4
// 006f063d  e9c200fbff           jmp 0x6a0704
// 006f0642  53                   push ebx
// 006f0643  e87873fcff           call 0x6b79c0
// 006f0648  8bd8                 mov ebx, eax
// 006f064a  8d9b00000000         lea ebx, [ebx]
// 006f0650  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f0653  6a02                 push 2
// 006f0655  50                   push eax
// 006f0656  ffd5                 call ebp
// 006f0658  50                   push eax
// 006f0659  e88005fbff           call 0x6a0bde
// 006f065e  6a00                 push 0
// 006f0660  8bce                 mov ecx, esi
// 006f0662  8bf8                 mov edi, eax
// 006f0664  e80503fbff           call 0x6a096e
// 006f0669  85db                 test ebx, ebx
// 006f066b  7504                 jne 0x6f0671
// 006f066d  33c0                 xor eax, eax
// 006f066f  eb03                 jmp 0x6f0674
// 006f0671  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006f0674  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f0677  50                   push eax
// 006f0678  51                   push ecx
// 006f0679  ff15b82b8000         call dword ptr [0x802bb8]
// 006f067f  50                   push eax
// 006f0680  e85905fbff           call 0x6a0bde
// 006f0685  8bf7                 mov esi, edi
// 006f0687  85ff                 test edi, edi
// 006f0689  75c5                 jne 0x6f0650
// 006f068b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f068f  5b                   pop ebx
// 006f0690  5e                   pop esi
// 006f0691  5d                   pop ebp
// 006f0692  5f                   pop edi
// 006f0693  83c404               add esp, 4
// 006f0696  e96900fbff           jmp 0x6a0704
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?DestroyWindow@CXTPPopupBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
