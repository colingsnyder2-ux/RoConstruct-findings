// roc 2011-06 008f0170  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0170
//
// 008f0170  83ec30               sub esp, 0x30
// 008f0173  53                   push ebx
// 008f0174  8bd9                 mov ebx, ecx
// 008f0176  53                   push ebx
// 008f0177  8d4c2408             lea ecx, [esp + 8]
// 008f017b  e8b0cbf6ff           call 0x85cd30
// 008f0180  8d442438             lea eax, [esp + 0x38]
// 008f0184  50                   push eax
// 008f0185  8d4c2408             lea ecx, [esp + 8]
// 008f0189  51                   push ecx
// 008f018a  8d54241c             lea edx, [esp + 0x1c]
// 008f018e  52                   push edx
// 008f018f  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008f0195  85c0                 test eax, eax
// 008f0197  7473                 je 0x8f020c
// 008f0199  56                   push esi
// 008f019a  57                   push edi
// 008f019b  53                   push ebx
// 008f019c  8d4c2430             lea ecx, [esp + 0x30]
// 008f01a0  e8ebcbf6ff           call 0x85cd90
// 008f01a5  8b3d4c01a400         mov edi, dword ptr [0xa4014c]
// 008f01ab  8d44242c             lea eax, [esp + 0x2c]
// 008f01af  50                   push eax
// 008f01b0  ffd7                 call edi
// 008f01b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f01b6  8bf0                 mov esi, eax
// 008f01b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f01bc  f7d9                 neg ecx
// 008f01be  51                   push ecx
// 008f01bf  f7d8                 neg eax
// 008f01c1  50                   push eax
// 008f01c2  8d4c2424             lea ecx, [esp + 0x24]
// 008f01c6  51                   push ecx
// 008f01c7  ff15601ca400         call dword ptr [0xa41c60]
// 008f01cd  8d54241c             lea edx, [esp + 0x1c]
// 008f01d1  52                   push edx
// 008f01d2  ffd7                 call edi
// 008f01d4  6a04                 push 4
// 008f01d6  8bf8                 mov edi, eax
// 008f01d8  57                   push edi
// 008f01d9  56                   push esi
// 008f01da  56                   push esi
// 008f01db  ff15ac00a400         call dword ptr [0xa400ac]
// 008f01e1  57                   push edi
// 008f01e2  8b3d9c01a400         mov edi, dword ptr [0xa4019c]
// 008f01e8  ffd7                 call edi
// 008f01ea  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008f01ed  6a00                 push 0
// 008f01ef  56                   push esi
// 008f01f0  50                   push eax
// 008f01f1  ff15041ca400         call dword ptr [0xa41c04]
// 008f01f7  85c0                 test eax, eax
// 008f01f9  7503                 jne 0x8f01fe
// 008f01fb  56                   push esi
// 008f01fc  ffd7                 call edi
// 008f01fe  5f                   pop edi
// 008f01ff  5e                   pop esi
// 008f0200  b801000000           mov eax, 1
// 008f0205  5b                   pop ebx
// 008f0206  83c430               add esp, 0x30
// 008f0209  c21000               ret 0x10
// 008f020c  b801000000           mov eax, 1
// 008f0211  5b                   pop ebx
// 008f0212  83c430               add esp, 0x30
// 008f0215  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
