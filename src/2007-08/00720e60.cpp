// from server: 100% by auto
// roc 2007-08 00720e60  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720e60
//
// 00720e60  83ec10               sub esp, 0x10
// 00720e63  53                   push ebx
// 00720e64  57                   push edi
// 00720e65  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00720e69  85ff                 test edi, edi
// 00720e6b  8bd9                 mov ebx, ecx
// 00720e6d  0f84a9000000         je 0x720f1c
// 00720e73  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00720e77  0f849f000000         je 0x720f1c
// 00720e7d  56                   push esi
// 00720e7e  8bcf                 mov ecx, edi
// 00720e80  e80b3dffff           call 0x714b90
// 00720e85  8bf0                 mov esi, eax
// 00720e87  85f6                 test esi, esi
// 00720e89  0f848c000000         je 0x720f1b
// 00720e8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00720e93  8b542424             mov edx, dword ptr [esp + 0x24]
// 00720e97  8b03                 mov eax, dword ptr [ebx]
// 00720e99  55                   push ebp
// 00720e9a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00720e9e  57                   push edi
// 00720e9f  6a00                 push 0
// 00720ea1  51                   push ecx
// 00720ea2  52                   push edx
// 00720ea3  8b5050               mov edx, dword ptr [eax + 0x50]
// 00720ea6  55                   push ebp
// 00720ea7  8d4c2424             lea ecx, [esp + 0x24]
// 00720eab  51                   push ecx
// 00720eac  8bcb                 mov ecx, ebx
// 00720eae  ffd2                 call edx
// 00720eb0  8a442428             mov al, byte ptr [esp + 0x28]
// 00720eb4  a804                 test al, 4
// 00720eb6  8bcf                 mov ecx, edi
// 00720eb8  741c                 je 0x720ed6
// 00720eba  8d442418             lea eax, [esp + 0x18]
// 00720ebe  50                   push eax
// 00720ebf  e84c44ffff           call 0x715310
// 00720ec4  8b4804               mov ecx, dword ptr [eax + 4]
// 00720ec7  8b10                 mov edx, dword ptr [eax]
// 00720ec9  51                   push ecx
// 00720eca  52                   push edx
// 00720ecb  6a01                 push 1
// 00720ecd  8bce                 mov ecx, esi
// 00720ecf  e88cbaf2ff           call 0x64c960
// 00720ed4  eb31                 jmp 0x720f07
// 00720ed6  a801                 test al, 1
// 00720ed8  8d542418             lea edx, [esp + 0x18]
// 00720edc  52                   push edx
// 00720edd  7415                 je 0x720ef4
// 00720edf  e82c44ffff           call 0x715310
// 00720ee4  8b4804               mov ecx, dword ptr [eax + 4]
// 00720ee7  8b10                 mov edx, dword ptr [eax]
// 00720ee9  51                   push ecx
// 00720eea  52                   push edx
// 00720eeb  8bce                 mov ecx, esi
// 00720eed  e88e78f2ff           call 0x648780
// 00720ef2  eb13                 jmp 0x720f07
// 00720ef4  e81744ffff           call 0x715310
// 00720ef9  8b4804               mov ecx, dword ptr [eax + 4]
// 00720efc  8b10                 mov edx, dword ptr [eax]
// 00720efe  51                   push ecx
// 00720eff  52                   push edx
// 00720f00  8bce                 mov ecx, esi
// 00720f02  e82978f2ff           call 0x648730
// 00720f07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720f0b  50                   push eax
// 00720f0c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00720f10  50                   push eax
// 00720f11  51                   push ecx
// 00720f12  55                   push ebp
// 00720f13  8bce                 mov ecx, esi
// 00720f15  e886d8f2ff           call 0x64e7a0
// 00720f1a  5d                   pop ebp
// 00720f1b  5e                   pop esi
// 00720f1c  5f                   pop edi
// 00720f1d  5b                   pop ebx
// 00720f1e  83c410               add esp, 0x10
// 00720f21  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
