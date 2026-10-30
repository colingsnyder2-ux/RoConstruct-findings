// roc 2010-06 008a85e0  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a85e0
//
// 008a85e0  83ec10               sub esp, 0x10
// 008a85e3  53                   push ebx
// 008a85e4  57                   push edi
// 008a85e5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008a85e9  8bd9                 mov ebx, ecx
// 008a85eb  85ff                 test edi, edi
// 008a85ed  0f84a9000000         je 0x8a869c
// 008a85f3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 008a85f7  0f849f000000         je 0x8a869c
// 008a85fd  56                   push esi
// 008a85fe  8bcf                 mov ecx, edi
// 008a8600  e81b13ffff           call 0x899920
// 008a8605  8bf0                 mov esi, eax
// 008a8607  85f6                 test esi, esi
// 008a8609  0f848c000000         je 0x8a869b
// 008a860f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a8613  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8617  8b03                 mov eax, dword ptr [ebx]
// 008a8619  55                   push ebp
// 008a861a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008a861e  57                   push edi
// 008a861f  6a00                 push 0
// 008a8621  51                   push ecx
// 008a8622  52                   push edx
// 008a8623  8b5050               mov edx, dword ptr [eax + 0x50]
// 008a8626  55                   push ebp
// 008a8627  8d4c2424             lea ecx, [esp + 0x24]
// 008a862b  51                   push ecx
// 008a862c  8bcb                 mov ecx, ebx
// 008a862e  ffd2                 call edx
// 008a8630  8a442428             mov al, byte ptr [esp + 0x28]
// 008a8634  8bcf                 mov ecx, edi
// 008a8636  a804                 test al, 4
// 008a8638  741c                 je 0x8a8656
// 008a863a  8d442418             lea eax, [esp + 0x18]
// 008a863e  50                   push eax
// 008a863f  e8bc1affff           call 0x89a100
// 008a8644  8b4804               mov ecx, dword ptr [eax + 4]
// 008a8647  8b10                 mov edx, dword ptr [eax]
// 008a8649  51                   push ecx
// 008a864a  52                   push edx
// 008a864b  6a01                 push 1
// 008a864d  8bce                 mov ecx, esi
// 008a864f  e8ecbbf1ff           call 0x7c4240
// 008a8654  eb31                 jmp 0x8a8687
// 008a8656  8d542418             lea edx, [esp + 0x18]
// 008a865a  52                   push edx
// 008a865b  a801                 test al, 1
// 008a865d  7415                 je 0x8a8674
// 008a865f  e89c1affff           call 0x89a100
// 008a8664  8b4804               mov ecx, dword ptr [eax + 4]
// 008a8667  8b10                 mov edx, dword ptr [eax]
// 008a8669  51                   push ecx
// 008a866a  52                   push edx
// 008a866b  8bce                 mov ecx, esi
// 008a866d  e86e66f1ff           call 0x7bece0
// 008a8672  eb13                 jmp 0x8a8687
// 008a8674  e8871affff           call 0x89a100
// 008a8679  8b4804               mov ecx, dword ptr [eax + 4]
// 008a867c  8b10                 mov edx, dword ptr [eax]
// 008a867e  51                   push ecx
// 008a867f  52                   push edx
// 008a8680  8bce                 mov ecx, esi
// 008a8682  e8594cf1ff           call 0x7bd2e0
// 008a8687  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a868b  50                   push eax
// 008a868c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a8690  50                   push eax
// 008a8691  51                   push ecx
// 008a8692  55                   push ebp
// 008a8693  8bce                 mov ecx, esi
// 008a8695  e8b6c8f1ff           call 0x7c4f50
// 008a869a  5d                   pop ebp
// 008a869b  5e                   pop esi
// 008a869c  5f                   pop edi
// 008a869d  5b                   pop ebx
// 008a869e  83c410               add esp, 0x10
// 008a86a1  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
