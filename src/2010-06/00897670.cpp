// roc 2010-06 00897670  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897670
//
// 00897670  83ec30               sub esp, 0x30
// 00897673  53                   push ebx
// 00897674  8bd9                 mov ebx, ecx
// 00897676  53                   push ebx
// 00897677  8d4c2408             lea ecx, [esp + 8]
// 0089767b  e8307cf6ff           call 0x7ff2b0
// 00897680  8d442438             lea eax, [esp + 0x38]
// 00897684  50                   push eax
// 00897685  8d4c2408             lea ecx, [esp + 8]
// 00897689  51                   push ecx
// 0089768a  8d54241c             lea edx, [esp + 0x1c]
// 0089768e  52                   push edx
// 0089768f  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00897695  85c0                 test eax, eax
// 00897697  7473                 je 0x89770c
// 00897699  56                   push esi
// 0089769a  57                   push edi
// 0089769b  53                   push ebx
// 0089769c  8d4c2430             lea ecx, [esp + 0x30]
// 008976a0  e86b7cf6ff           call 0x7ff310
// 008976a5  8b3d0ca19e00         mov edi, dword ptr [0x9ea10c]
// 008976ab  8d44242c             lea eax, [esp + 0x2c]
// 008976af  50                   push eax
// 008976b0  ffd7                 call edi
// 008976b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008976b6  8bf0                 mov esi, eax
// 008976b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008976bc  f7d9                 neg ecx
// 008976be  51                   push ecx
// 008976bf  f7d8                 neg eax
// 008976c1  50                   push eax
// 008976c2  8d4c2424             lea ecx, [esp + 0x24]
// 008976c6  51                   push ecx
// 008976c7  ff1540bc9e00         call dword ptr [0x9ebc40]
// 008976cd  8d54241c             lea edx, [esp + 0x1c]
// 008976d1  52                   push edx
// 008976d2  ffd7                 call edi
// 008976d4  6a04                 push 4
// 008976d6  8bf8                 mov edi, eax
// 008976d8  57                   push edi
// 008976d9  56                   push esi
// 008976da  56                   push esi
// 008976db  ff15f4a09e00         call dword ptr [0x9ea0f4]
// 008976e1  57                   push edi
// 008976e2  8b3dd4a09e00         mov edi, dword ptr [0x9ea0d4]
// 008976e8  ffd7                 call edi
// 008976ea  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008976ed  6a00                 push 0
// 008976ef  56                   push esi
// 008976f0  50                   push eax
// 008976f1  ff150cba9e00         call dword ptr [0x9eba0c]
// 008976f7  85c0                 test eax, eax
// 008976f9  7503                 jne 0x8976fe
// 008976fb  56                   push esi
// 008976fc  ffd7                 call edi
// 008976fe  5f                   pop edi
// 008976ff  5e                   pop esi
// 00897700  b801000000           mov eax, 1
// 00897705  5b                   pop ebx
// 00897706  83c430               add esp, 0x30
// 00897709  c21000               ret 0x10
// 0089770c  b801000000           mov eax, 1
// 00897711  5b                   pop ebx
// 00897712  83c430               add esp, 0x30
// 00897715  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
