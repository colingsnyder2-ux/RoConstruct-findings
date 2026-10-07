// roc 2008-06 007a1d10  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1d10
//
// 007a1d10  83ec10               sub esp, 0x10
// 007a1d13  53                   push ebx
// 007a1d14  57                   push edi
// 007a1d15  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a1d19  8bd9                 mov ebx, ecx
// 007a1d1b  85ff                 test edi, edi
// 007a1d1d  0f84a9000000         je 0x7a1dcc
// 007a1d23  837b1400             cmp dword ptr [ebx + 0x14], 0
// 007a1d27  0f849f000000         je 0x7a1dcc
// 007a1d2d  56                   push esi
// 007a1d2e  8bcf                 mov ecx, edi
// 007a1d30  e81b07ffff           call 0x792450
// 007a1d35  8bf0                 mov esi, eax
// 007a1d37  85f6                 test esi, esi
// 007a1d39  0f848c000000         je 0x7a1dcb
// 007a1d3f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a1d43  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a1d47  8b03                 mov eax, dword ptr [ebx]
// 007a1d49  55                   push ebp
// 007a1d4a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007a1d4e  57                   push edi
// 007a1d4f  6a00                 push 0
// 007a1d51  51                   push ecx
// 007a1d52  52                   push edx
// 007a1d53  8b5050               mov edx, dword ptr [eax + 0x50]
// 007a1d56  55                   push ebp
// 007a1d57  8d4c2424             lea ecx, [esp + 0x24]
// 007a1d5b  51                   push ecx
// 007a1d5c  8bcb                 mov ecx, ebx
// 007a1d5e  ffd2                 call edx
// 007a1d60  8a442428             mov al, byte ptr [esp + 0x28]
// 007a1d64  8bcf                 mov ecx, edi
// 007a1d66  a804                 test al, 4
// 007a1d68  741c                 je 0x7a1d86
// 007a1d6a  8d442418             lea eax, [esp + 0x18]
// 007a1d6e  50                   push eax
// 007a1d6f  e87c0effff           call 0x792bf0
// 007a1d74  8b4804               mov ecx, dword ptr [eax + 4]
// 007a1d77  8b10                 mov edx, dword ptr [eax]
// 007a1d79  51                   push ecx
// 007a1d7a  52                   push edx
// 007a1d7b  6a01                 push 1
// 007a1d7d  8bce                 mov ecx, esi
// 007a1d7f  e8ecedf1ff           call 0x6c0b70
// 007a1d84  eb31                 jmp 0x7a1db7
// 007a1d86  8d542418             lea edx, [esp + 0x18]
// 007a1d8a  52                   push edx
// 007a1d8b  a801                 test al, 1
// 007a1d8d  7415                 je 0x7a1da4
// 007a1d8f  e85c0effff           call 0x792bf0
// 007a1d94  8b4804               mov ecx, dword ptr [eax + 4]
// 007a1d97  8b10                 mov edx, dword ptr [eax]
// 007a1d99  51                   push ecx
// 007a1d9a  52                   push edx
// 007a1d9b  8bce                 mov ecx, esi
// 007a1d9d  e80e98f1ff           call 0x6bb5b0
// 007a1da2  eb13                 jmp 0x7a1db7
// 007a1da4  e8470effff           call 0x792bf0
// 007a1da9  8b4804               mov ecx, dword ptr [eax + 4]
// 007a1dac  8b10                 mov edx, dword ptr [eax]
// 007a1dae  51                   push ecx
// 007a1daf  52                   push edx
// 007a1db0  8bce                 mov ecx, esi
// 007a1db2  e8b97cf1ff           call 0x6b9a70
// 007a1db7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a1dbb  50                   push eax
// 007a1dbc  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a1dc0  50                   push eax
// 007a1dc1  51                   push ecx
// 007a1dc2  55                   push ebp
// 007a1dc3  8bce                 mov ecx, esi
// 007a1dc5  e8b6faf1ff           call 0x6c1880
// 007a1dca  5d                   pop ebp
// 007a1dcb  5e                   pop esi
// 007a1dcc  5f                   pop edi
// 007a1dcd  5b                   pop ebx
// 007a1dce  83c410               add esp, 0x10
// 007a1dd1  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
