// roc 2009-12 008f4480  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4480
//
// 008f4480  83ec10               sub esp, 0x10
// 008f4483  53                   push ebx
// 008f4484  57                   push edi
// 008f4485  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008f4489  8bd9                 mov ebx, ecx
// 008f448b  85ff                 test edi, edi
// 008f448d  0f84a9000000         je 0x8f453c
// 008f4493  837b1400             cmp dword ptr [ebx + 0x14], 0
// 008f4497  0f849f000000         je 0x8f453c
// 008f449d  56                   push esi
// 008f449e  8bcf                 mov ecx, edi
// 008f44a0  e88b0ed7ff           call 0x665330
// 008f44a5  8bf0                 mov esi, eax
// 008f44a7  85f6                 test esi, esi
// 008f44a9  0f848c000000         je 0x8f453b
// 008f44af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f44b3  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f44b7  8b03                 mov eax, dword ptr [ebx]
// 008f44b9  55                   push ebp
// 008f44ba  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008f44be  57                   push edi
// 008f44bf  6a00                 push 0
// 008f44c1  51                   push ecx
// 008f44c2  52                   push edx
// 008f44c3  8b5050               mov edx, dword ptr [eax + 0x50]
// 008f44c6  55                   push ebp
// 008f44c7  8d4c2424             lea ecx, [esp + 0x24]
// 008f44cb  51                   push ecx
// 008f44cc  8bcb                 mov ecx, ebx
// 008f44ce  ffd2                 call edx
// 008f44d0  8a442428             mov al, byte ptr [esp + 0x28]
// 008f44d4  8bcf                 mov ecx, edi
// 008f44d6  a804                 test al, 4
// 008f44d8  741c                 je 0x8f44f6
// 008f44da  8d442418             lea eax, [esp + 0x18]
// 008f44de  50                   push eax
// 008f44df  e8fc18ffff           call 0x8e5de0
// 008f44e4  8b4804               mov ecx, dword ptr [eax + 4]
// 008f44e7  8b10                 mov edx, dword ptr [eax]
// 008f44e9  51                   push ecx
// 008f44ea  52                   push edx
// 008f44eb  6a01                 push 1
// 008f44ed  8bce                 mov ecx, esi
// 008f44ef  e8acbcf1ff           call 0x8101a0
// 008f44f4  eb31                 jmp 0x8f4527
// 008f44f6  8d542418             lea edx, [esp + 0x18]
// 008f44fa  52                   push edx
// 008f44fb  a801                 test al, 1
// 008f44fd  7415                 je 0x8f4514
// 008f44ff  e8dc18ffff           call 0x8e5de0
// 008f4504  8b4804               mov ecx, dword ptr [eax + 4]
// 008f4507  8b10                 mov edx, dword ptr [eax]
// 008f4509  51                   push ecx
// 008f450a  52                   push edx
// 008f450b  8bce                 mov ecx, esi
// 008f450d  e87e66f1ff           call 0x80ab90
// 008f4512  eb13                 jmp 0x8f4527
// 008f4514  e8c718ffff           call 0x8e5de0
// 008f4519  8b4804               mov ecx, dword ptr [eax + 4]
// 008f451c  8b10                 mov edx, dword ptr [eax]
// 008f451e  51                   push ecx
// 008f451f  52                   push edx
// 008f4520  8bce                 mov ecx, esi
// 008f4522  e8194cf1ff           call 0x809140
// 008f4527  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f452b  50                   push eax
// 008f452c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f4530  50                   push eax
// 008f4531  51                   push ecx
// 008f4532  55                   push ebp
// 008f4533  8bce                 mov ecx, esi
// 008f4535  e876c9f1ff           call 0x810eb0
// 008f453a  5d                   pop ebp
// 008f453b  5e                   pop esi
// 008f453c  5f                   pop edi
// 008f453d  5b                   pop ebx
// 008f453e  83c410               add esp, 0x10
// 008f4541  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
