// roc 2012-06 00a78f20  unit: CXTColorSelectorCtrlThemeFactory  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78f20
//
// 00a78f20  6aff                 push -1
// 00a78f22  683192ae00           push 0xae9231
// 00a78f27  64a100000000         mov eax, dword ptr fs:[0]
// 00a78f2d  50                   push eax
// 00a78f2e  56                   push esi
// 00a78f2f  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a78f34  33c4                 xor eax, esp
// 00a78f36  50                   push eax
// 00a78f37  8d442408             lea eax, [esp + 8]
// 00a78f3b  64a300000000         mov dword ptr fs:[0], eax
// 00a78f41  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a78f45  8bc6                 mov eax, esi
// 00a78f47  83e801               sub eax, 1
// 00a78f4a  6a30                 push 0x30
// 00a78f4c  7447                 je 0xa78f95
// 00a78f4e  83e801               sub eax, 1
// 00a78f51  7421                 je 0xa78f74
// 00a78f53  e8c291f0ff           call 0x98211a
// 00a78f58  83c404               add esp, 4
// 00a78f5b  89442418             mov dword ptr [esp + 0x18], eax
// 00a78f5f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a78f67  85c0                 test eax, eax
// 00a78f69  744b                 je 0xa78fb6
// 00a78f6b  8bc8                 mov ecx, eax
// 00a78f6d  e88efdffff           call 0xa78d00
// 00a78f72  eb44                 jmp 0xa78fb8
// 00a78f74  e8a191f0ff           call 0x98211a
// 00a78f79  83c404               add esp, 4
// 00a78f7c  89442418             mov dword ptr [esp + 0x18], eax
// 00a78f80  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a78f88  85c0                 test eax, eax
// 00a78f8a  742a                 je 0xa78fb6
// 00a78f8c  8bc8                 mov ecx, eax
// 00a78f8e  e89dfeffff           call 0xa78e30
// 00a78f93  eb23                 jmp 0xa78fb8
// 00a78f95  e88091f0ff           call 0x98211a
// 00a78f9a  83c404               add esp, 4
// 00a78f9d  89442418             mov dword ptr [esp + 0x18], eax
// 00a78fa1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a78fa9  85c0                 test eax, eax
// 00a78fab  7409                 je 0xa78fb6
// 00a78fad  8bc8                 mov ecx, eax
// 00a78faf  e8ecfdffff           call 0xa78da0
// 00a78fb4  eb02                 jmp 0xa78fb8
// 00a78fb6  33c0                 xor eax, eax
// 00a78fb8  897008               mov dword ptr [eax + 8], esi
// 00a78fbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a78fbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00a78fc6  59                   pop ecx
// 00a78fc7  5e                   pop esi
// 00a78fc8  83c40c               add esp, 0xc
// 00a78fcb  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTColorSelectorCtrlThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrlTheme.cpp