// roc 2011-06 00901ca0  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901ca0
//
// 00901ca0  83ec10               sub esp, 0x10
// 00901ca3  53                   push ebx
// 00901ca4  57                   push edi
// 00901ca5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00901ca9  8bd9                 mov ebx, ecx
// 00901cab  85ff                 test edi, edi
// 00901cad  0f84a9000000         je 0x901d5c
// 00901cb3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00901cb7  0f849f000000         je 0x901d5c
// 00901cbd  56                   push esi
// 00901cbe  8bcf                 mov ecx, edi
// 00901cc0  e8bb07ffff           call 0x8f2480
// 00901cc5  8bf0                 mov esi, eax
// 00901cc7  85f6                 test esi, esi
// 00901cc9  0f848c000000         je 0x901d5b
// 00901ccf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00901cd3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00901cd7  8b03                 mov eax, dword ptr [ebx]
// 00901cd9  55                   push ebp
// 00901cda  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00901cde  57                   push edi
// 00901cdf  6a00                 push 0
// 00901ce1  51                   push ecx
// 00901ce2  52                   push edx
// 00901ce3  8b5050               mov edx, dword ptr [eax + 0x50]
// 00901ce6  55                   push ebp
// 00901ce7  8d4c2424             lea ecx, [esp + 0x24]
// 00901ceb  51                   push ecx
// 00901cec  8bcb                 mov ecx, ebx
// 00901cee  ffd2                 call edx
// 00901cf0  8a442428             mov al, byte ptr [esp + 0x28]
// 00901cf4  8bcf                 mov ecx, edi
// 00901cf6  a804                 test al, 4
// 00901cf8  741c                 je 0x901d16
// 00901cfa  8d442418             lea eax, [esp + 0x18]
// 00901cfe  50                   push eax
// 00901cff  e85c0fffff           call 0x8f2c60
// 00901d04  8b4804               mov ecx, dword ptr [eax + 4]
// 00901d07  8b10                 mov edx, dword ptr [eax]
// 00901d09  51                   push ecx
// 00901d0a  52                   push edx
// 00901d0b  6a01                 push 1
// 00901d0d  8bce                 mov ecx, esi
// 00901d0f  e81c43f2ff           call 0x826030
// 00901d14  eb31                 jmp 0x901d47
// 00901d16  8d542418             lea edx, [esp + 0x18]
// 00901d1a  52                   push edx
// 00901d1b  a801                 test al, 1
// 00901d1d  7415                 je 0x901d34
// 00901d1f  e83c0fffff           call 0x8f2c60
// 00901d24  8b4804               mov ecx, dword ptr [eax + 4]
// 00901d27  8b10                 mov edx, dword ptr [eax]
// 00901d29  51                   push ecx
// 00901d2a  52                   push edx
// 00901d2b  8bce                 mov ecx, esi
// 00901d2d  e88ef0f1ff           call 0x820dc0
// 00901d32  eb13                 jmp 0x901d47
// 00901d34  e8270fffff           call 0x8f2c60
// 00901d39  8b4804               mov ecx, dword ptr [eax + 4]
// 00901d3c  8b10                 mov edx, dword ptr [eax]
// 00901d3e  51                   push ecx
// 00901d3f  52                   push edx
// 00901d40  8bce                 mov ecx, esi
// 00901d42  e8d9d9f1ff           call 0x81f720
// 00901d47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00901d4b  50                   push eax
// 00901d4c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00901d50  50                   push eax
// 00901d51  51                   push ecx
// 00901d52  55                   push ebp
// 00901d53  8bce                 mov ecx, esi
// 00901d55  e8164df2ff           call 0x826a70
// 00901d5a  5d                   pop ebp
// 00901d5b  5e                   pop esi
// 00901d5c  5f                   pop edi
// 00901d5d  5b                   pop ebx
// 00901d5e  83c410               add esp, 0x10
// 00901d61  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
