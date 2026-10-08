// roc 2012-06 00a79ea0  unit: CXTButtonThemeOffice2003  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79ea0
//
// 00a79ea0  83ec10               sub esp, 0x10
// 00a79ea3  53                   push ebx
// 00a79ea4  57                   push edi
// 00a79ea5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a79ea9  8bd9                 mov ebx, ecx
// 00a79eab  85ff                 test edi, edi
// 00a79ead  0f84a9000000         je 0xa79f5c
// 00a79eb3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00a79eb7  0f849f000000         je 0xa79f5c
// 00a79ebd  56                   push esi
// 00a79ebe  8bcf                 mov ecx, edi
// 00a79ec0  e87beee1ff           call 0x898d40
// 00a79ec5  8bf0                 mov esi, eax
// 00a79ec7  85f6                 test esi, esi
// 00a79ec9  0f848c000000         je 0xa79f5b
// 00a79ecf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a79ed3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a79ed7  8b03                 mov eax, dword ptr [ebx]
// 00a79ed9  55                   push ebp
// 00a79eda  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00a79ede  57                   push edi
// 00a79edf  6a00                 push 0
// 00a79ee1  51                   push ecx
// 00a79ee2  52                   push edx
// 00a79ee3  8b5050               mov edx, dword ptr [eax + 0x50]
// 00a79ee6  55                   push ebp
// 00a79ee7  8d4c2424             lea ecx, [esp + 0x24]
// 00a79eeb  51                   push ecx
// 00a79eec  8bcb                 mov ecx, ebx
// 00a79eee  ffd2                 call edx
// 00a79ef0  8a442428             mov al, byte ptr [esp + 0x28]
// 00a79ef4  8bcf                 mov ecx, edi
// 00a79ef6  a804                 test al, 4
// 00a79ef8  741c                 je 0xa79f16
// 00a79efa  8d442418             lea eax, [esp + 0x18]
// 00a79efe  50                   push eax
// 00a79eff  e8bc10ffff           call 0xa6afc0
// 00a79f04  8b4804               mov ecx, dword ptr [eax + 4]
// 00a79f07  8b10                 mov edx, dword ptr [eax]
// 00a79f09  51                   push ecx
// 00a79f0a  52                   push edx
// 00a79f0b  6a01                 push 1
// 00a79f0d  8bce                 mov ecx, esi
// 00a79f0f  e84c47f2ff           call 0x99e660
// 00a79f14  eb31                 jmp 0xa79f47
// 00a79f16  8d542418             lea edx, [esp + 0x18]
// 00a79f1a  52                   push edx
// 00a79f1b  a801                 test al, 1
// 00a79f1d  7415                 je 0xa79f34
// 00a79f1f  e89c10ffff           call 0xa6afc0
// 00a79f24  8b4804               mov ecx, dword ptr [eax + 4]
// 00a79f27  8b10                 mov edx, dword ptr [eax]
// 00a79f29  51                   push ecx
// 00a79f2a  52                   push edx
// 00a79f2b  8bce                 mov ecx, esi
// 00a79f2d  e8def4f1ff           call 0x999410
// 00a79f32  eb13                 jmp 0xa79f47
// 00a79f34  e88710ffff           call 0xa6afc0
// 00a79f39  8b4804               mov ecx, dword ptr [eax + 4]
// 00a79f3c  8b10                 mov edx, dword ptr [eax]
// 00a79f3e  51                   push ecx
// 00a79f3f  52                   push edx
// 00a79f40  8bce                 mov ecx, esi
// 00a79f42  e8e9daf1ff           call 0x997a30
// 00a79f47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a79f4b  50                   push eax
// 00a79f4c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a79f50  50                   push eax
// 00a79f51  51                   push ecx
// 00a79f52  55                   push ebp
// 00a79f53  8bce                 mov ecx, esi
// 00a79f55  e84651f2ff           call 0x99f0a0
// 00a79f5a  5d                   pop ebp
// 00a79f5b  5e                   pop esi
// 00a79f5c  5f                   pop edi
// 00a79f5d  5b                   pop ebx
// 00a79f5e  83c410               add esp, 0x10
// 00a79f61  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
