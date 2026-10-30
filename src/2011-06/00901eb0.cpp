// roc 2011-06 00901eb0  unit: CXTButtonThemeFactory  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901eb0
//
// 00901eb0  6aff                 push -1
// 00901eb2  6801f7a000           push 0xa0f701
// 00901eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00901ebd  50                   push eax
// 00901ebe  56                   push esi
// 00901ebf  a12058c900           mov eax, dword ptr [0xc95820]
// 00901ec4  33c4                 xor eax, esp
// 00901ec6  50                   push eax
// 00901ec7  8d442408             lea eax, [esp + 8]
// 00901ecb  64a300000000         mov dword ptr fs:[0], eax
// 00901ed1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00901ed5  8bc6                 mov eax, esi
// 00901ed7  83e801               sub eax, 1
// 00901eda  7453                 je 0x901f2f
// 00901edc  83e801               sub eax, 1
// 00901edf  7426                 je 0x901f07
// 00901ee1  6880000000           push 0x80
// 00901ee6  e87381f0ff           call 0x80a05e
// 00901eeb  83c404               add esp, 4
// 00901eee  89442418             mov dword ptr [esp + 0x18], eax
// 00901ef2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00901efa  85c0                 test eax, eax
// 00901efc  7459                 je 0x901f57
// 00901efe  8bc8                 mov ecx, eax
// 00901f00  e89bf7ffff           call 0x9016a0
// 00901f05  eb52                 jmp 0x901f59
// 00901f07  68c8000000           push 0xc8
// 00901f0c  e84d81f0ff           call 0x80a05e
// 00901f11  83c404               add esp, 4
// 00901f14  89442418             mov dword ptr [esp + 0x18], eax
// 00901f18  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00901f20  85c0                 test eax, eax
// 00901f22  7433                 je 0x901f57
// 00901f24  6a00                 push 0
// 00901f26  8bc8                 mov ecx, eax
// 00901f28  e833fdffff           call 0x901c60
// 00901f2d  eb2a                 jmp 0x901f59
// 00901f2f  68c8000000           push 0xc8
// 00901f34  e82581f0ff           call 0x80a05e
// 00901f39  83c404               add esp, 4
// 00901f3c  89442418             mov dword ptr [esp + 0x18], eax
// 00901f40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00901f48  85c0                 test eax, eax
// 00901f4a  740b                 je 0x901f57
// 00901f4c  6a00                 push 0
// 00901f4e  8bc8                 mov ecx, eax
// 00901f50  e8abfaffff           call 0x901a00
// 00901f55  eb02                 jmp 0x901f59
// 00901f57  33c0                 xor eax, eax
// 00901f59  897008               mov dword ptr [eax + 8], esi
// 00901f5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00901f60  64890d00000000       mov dword ptr fs:[0], ecx
// 00901f67  59                   pop ecx
// 00901f68  5e                   pop esi
// 00901f69  83c40c               add esp, 0xc
// 00901f6c  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTButtonThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp