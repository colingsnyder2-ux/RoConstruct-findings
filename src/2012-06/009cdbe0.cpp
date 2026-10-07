// roc 2012-06 009cdbe0  unit: CXTPPopupBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cdbe0
//
// 009cdbe0  51                   push ecx
// 009cdbe1  57                   push edi
// 009cdbe2  8bf9                 mov edi, ecx
// 009cdbe4  897c2404             mov dword ptr [esp + 4], edi
// 009cdbe8  85ff                 test edi, edi
// 009cdbea  7407                 je 0x9cdbf3
// 009cdbec  8b4720               mov eax, dword ptr [edi + 0x20]
// 009cdbef  85c0                 test eax, eax
// 009cdbf1  7509                 jne 0x9cdbfc
// 009cdbf3  5f                   pop edi
// 009cdbf4  83c404               add esp, 4
// 009cdbf7  e99c45fbff           jmp 0x982198
// 009cdbfc  55                   push ebp
// 009cdbfd  8b2d403bb200         mov ebp, dword ptr [0xb23b40]
// 009cdc03  56                   push esi
// 009cdc04  6a05                 push 5
// 009cdc06  50                   push eax
// 009cdc07  ffd5                 call ebp
// 009cdc09  50                   push eax
// 009cdc0a  e8574afbff           call 0x982666
// 009cdc0f  8bf0                 mov esi, eax
// 009cdc11  8bcf                 mov ecx, edi
// 009cdc13  85f6                 test esi, esi
// 009cdc15  750b                 jne 0x9cdc22
// 009cdc17  5e                   pop esi
// 009cdc18  5d                   pop ebp
// 009cdc19  5f                   pop edi
// 009cdc1a  83c404               add esp, 4
// 009cdc1d  e97645fbff           jmp 0x982198
// 009cdc22  53                   push ebx
// 009cdc23  e8187dfcff           call 0x995940
// 009cdc28  8bd8                 mov ebx, eax
// 009cdc2a  8d9b00000000         lea ebx, [ebx]
// 009cdc30  8b4620               mov eax, dword ptr [esi + 0x20]
// 009cdc33  6a02                 push 2
// 009cdc35  50                   push eax
// 009cdc36  ffd5                 call ebp
// 009cdc38  50                   push eax
// 009cdc39  e8284afbff           call 0x982666
// 009cdc3e  6a00                 push 0
// 009cdc40  8bce                 mov ecx, esi
// 009cdc42  8bf8                 mov edi, eax
// 009cdc44  e85b4efbff           call 0x982aa4
// 009cdc49  85db                 test ebx, ebx
// 009cdc4b  7504                 jne 0x9cdc51
// 009cdc4d  33c0                 xor eax, eax
// 009cdc4f  eb03                 jmp 0x9cdc54
// 009cdc51  8b4320               mov eax, dword ptr [ebx + 0x20]
// 009cdc54  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009cdc57  50                   push eax
// 009cdc58  51                   push ecx
// 009cdc59  ff15ac3cb200         call dword ptr [0xb23cac]
// 009cdc5f  50                   push eax
// 009cdc60  e8014afbff           call 0x982666
// 009cdc65  8bf7                 mov esi, edi
// 009cdc67  85ff                 test edi, edi
// 009cdc69  75c5                 jne 0x9cdc30
// 009cdc6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cdc6f  5b                   pop ebx
// 009cdc70  5e                   pop esi
// 009cdc71  5d                   pop ebp
// 009cdc72  5f                   pop edi
// 009cdc73  83c404               add esp, 4
// 009cdc76  e91d45fbff           jmp 0x982198
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?DestroyWindow@CXTPPopupBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
