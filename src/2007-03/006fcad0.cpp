// roc 2007-03 006fcad0  unit: seg_006f0000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006fcad0
//
// 006fcad0  83ec10               sub esp, 0x10
// 006fcad3  53                   push ebx
// 006fcad4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006fcad8  55                   push ebp
// 006fcad9  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006fcadd  56                   push esi
// 006fcade  57                   push edi
// 006fcadf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006fcae3  6a01                 push 1
// 006fcae5  6863090000           push 0x963
// 006fcaea  53                   push ebx
// 006fcaeb  55                   push ebp
// 006fcaec  8bcf                 mov ecx, edi
// 006fcaee  e89d4ef8ff           call 0x681990
// 006fcaf3  6aff                 push -1
// 006fcaf5  68d90e0000           push 0xed9
// 006fcafa  53                   push ebx
// 006fcafb  55                   push ebp
// 006fcafc  8bcf                 mov ecx, edi
// 006fcafe  8bf0                 mov esi, eax
// 006fcb00  e8eb4ef8ff           call 0x6819f0
// 006fcb05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fcb09  6aff                 push -1
// 006fcb0b  68da0e0000           push 0xeda
// 006fcb10  53                   push ebx
// 006fcb11  55                   push ebp
// 006fcb12  8bf8                 mov edi, eax
// 006fcb14  e8d74ef8ff           call 0x6819f0
// 006fcb19  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fcb1d  6a00                 push 0
// 006fcb1f  689b080000           push 0x89b
// 006fcb24  53                   push ebx
// 006fcb25  55                   push ebp
// 006fcb26  89442440             mov dword ptr [esp + 0x40], eax
// 006fcb2a  e8914ef8ff           call 0x6819c0
// 006fcb2f  89442428             mov dword ptr [esp + 0x28], eax
// 006fcb33  8b442434             mov eax, dword ptr [esp + 0x34]
// 006fcb37  50                   push eax
// 006fcb38  8d4c2414             lea ecx, [esp + 0x14]
// 006fcb3c  51                   push ecx
// 006fcb3d  ff1550ed7700         call dword ptr [0x77ed50]
// 006fcb43  85f6                 test esi, esi
// 006fcb45  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006fcb49  0f8e8f000000         jle 0x6fcbde
// 006fcb4f  83ffff               cmp edi, -1
// 006fcb52  0f8486000000         je 0x6fcbde
// 006fcb58  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fcb5c  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fcb60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fcb64  57                   push edi
// 006fcb65  56                   push esi
// 006fcb66  2bd0                 sub edx, eax
// 006fcb68  52                   push edx
// 006fcb69  51                   push ecx
// 006fcb6a  50                   push eax
// 006fcb6b  8bcb                 mov ecx, ebx
// 006fcb6d  e87adf0300           call 0x73aaec
// 006fcb72  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fcb76  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fcb7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fcb7e  57                   push edi
// 006fcb7f  56                   push esi
// 006fcb80  2bd0                 sub edx, eax
// 006fcb82  52                   push edx
// 006fcb83  2bce                 sub ecx, esi
// 006fcb85  51                   push ecx
// 006fcb86  50                   push eax
// 006fcb87  8bcb                 mov ecx, ebx
// 006fcb89  e85edf0300           call 0x73aaec
// 006fcb8e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006fcb92  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fcb96  8d2c36               lea ebp, [esi + esi]
// 006fcb99  57                   push edi
// 006fcb9a  2bd5                 sub edx, ebp
// 006fcb9c  2bd0                 sub edx, eax
// 006fcb9e  52                   push edx
// 006fcb9f  56                   push esi
// 006fcba0  03c6                 add eax, esi
// 006fcba2  50                   push eax
// 006fcba3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fcba7  50                   push eax
// 006fcba8  8bcb                 mov ecx, ebx
// 006fcbaa  e83ddf0300           call 0x73aaec
// 006fcbaf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fcbb3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fcbb7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fcbbb  57                   push edi
// 006fcbbc  2bcd                 sub ecx, ebp
// 006fcbbe  2bc8                 sub ecx, eax
// 006fcbc0  51                   push ecx
// 006fcbc1  56                   push esi
// 006fcbc2  03c6                 add eax, esi
// 006fcbc4  50                   push eax
// 006fcbc5  2bd6                 sub edx, esi
// 006fcbc7  52                   push edx
// 006fcbc8  8bcb                 mov ecx, ebx
// 006fcbca  e81ddf0300           call 0x73aaec
// 006fcbcf  f7de                 neg esi
// 006fcbd1  56                   push esi
// 006fcbd2  56                   push esi
// 006fcbd3  8d442418             lea eax, [esp + 0x18]
// 006fcbd7  50                   push eax
// 006fcbd8  ff159ced7700         call dword ptr [0x77ed9c]
// 006fcbde  8b442430             mov eax, dword ptr [esp + 0x30]
// 006fcbe2  83f8ff               cmp eax, -1
// 006fcbe5  7414                 je 0x6fcbfb
// 006fcbe7  837c242800           cmp dword ptr [esp + 0x28], 0
// 006fcbec  750d                 jne 0x6fcbfb
// 006fcbee  50                   push eax
// 006fcbef  8d4c2414             lea ecx, [esp + 0x14]
// 006fcbf3  51                   push ecx
// 006fcbf4  8bcb                 mov ecx, ebx
// 006fcbf6  e81f21f2ff           call 0x61ed1a
// 006fcbfb  5f                   pop edi
// 006fcbfc  5e                   pop esi
// 006fcbfd  5d                   pop ebp
// 006fcbfe  b801000000           mov eax, 1
// 006fcc03  5b                   pop ebx
// 006fcc04  83c410               add esp, 0x10
// 006fcc07  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?DrawThemeBackgroundBorder@CXTPSkinManagerSchema@@IAEHPAVCDC@@PAVCXTPSkinManagerClass@@HHPBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerSchema.cpp
