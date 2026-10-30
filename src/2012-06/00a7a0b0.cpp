// roc 2012-06 00a7a0b0  unit: CXTButtonThemeFactory  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a0b0
//
// 00a7a0b0  6aff                 push -1
// 00a7a0b2  683192ae00           push 0xae9231
// 00a7a0b7  64a100000000         mov eax, dword ptr fs:[0]
// 00a7a0bd  50                   push eax
// 00a7a0be  56                   push esi
// 00a7a0bf  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7a0c4  33c4                 xor eax, esp
// 00a7a0c6  50                   push eax
// 00a7a0c7  8d442408             lea eax, [esp + 8]
// 00a7a0cb  64a300000000         mov dword ptr fs:[0], eax
// 00a7a0d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a7a0d5  8bc6                 mov eax, esi
// 00a7a0d7  83e801               sub eax, 1
// 00a7a0da  7453                 je 0xa7a12f
// 00a7a0dc  83e801               sub eax, 1
// 00a7a0df  7426                 je 0xa7a107
// 00a7a0e1  6880000000           push 0x80
// 00a7a0e6  e82f80f0ff           call 0x98211a
// 00a7a0eb  83c404               add esp, 4
// 00a7a0ee  89442418             mov dword ptr [esp + 0x18], eax
// 00a7a0f2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a7a0fa  85c0                 test eax, eax
// 00a7a0fc  7459                 je 0xa7a157
// 00a7a0fe  8bc8                 mov ecx, eax
// 00a7a100  e87bf7ffff           call 0xa79880
// 00a7a105  eb52                 jmp 0xa7a159
// 00a7a107  68c8000000           push 0xc8
// 00a7a10c  e80980f0ff           call 0x98211a
// 00a7a111  83c404               add esp, 4
// 00a7a114  89442418             mov dword ptr [esp + 0x18], eax
// 00a7a118  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a7a120  85c0                 test eax, eax
// 00a7a122  7433                 je 0xa7a157
// 00a7a124  6a00                 push 0
// 00a7a126  8bc8                 mov ecx, eax
// 00a7a128  e833fdffff           call 0xa79e60
// 00a7a12d  eb2a                 jmp 0xa7a159
// 00a7a12f  68c8000000           push 0xc8
// 00a7a134  e8e17ff0ff           call 0x98211a
// 00a7a139  83c404               add esp, 4
// 00a7a13c  89442418             mov dword ptr [esp + 0x18], eax
// 00a7a140  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a7a148  85c0                 test eax, eax
// 00a7a14a  740b                 je 0xa7a157
// 00a7a14c  6a00                 push 0
// 00a7a14e  8bc8                 mov ecx, eax
// 00a7a150  e89bfaffff           call 0xa79bf0
// 00a7a155  eb02                 jmp 0xa7a159
// 00a7a157  33c0                 xor eax, eax
// 00a7a159  897008               mov dword ptr [eax + 8], esi
// 00a7a15c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a7a160  64890d00000000       mov dword ptr fs:[0], ecx
// 00a7a167  59                   pop ecx
// 00a7a168  5e                   pop esi
// 00a7a169  83c40c               add esp, 0xc
// 00a7a16c  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTButtonThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp