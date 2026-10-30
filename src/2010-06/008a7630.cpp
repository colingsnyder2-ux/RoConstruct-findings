// roc 2010-06 008a7630  unit: CXTColorSelectorCtrlThemeFactory  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7630
//
// 008a7630  6aff                 push -1
// 008a7632  6821cb9b00           push 0x9bcb21
// 008a7637  64a100000000         mov eax, dword ptr fs:[0]
// 008a763d  50                   push eax
// 008a763e  56                   push esi
// 008a763f  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a7644  33c4                 xor eax, esp
// 008a7646  50                   push eax
// 008a7647  8d442408             lea eax, [esp + 8]
// 008a764b  64a300000000         mov dword ptr fs:[0], eax
// 008a7651  8b742418             mov esi, dword ptr [esp + 0x18]
// 008a7655  8bc6                 mov eax, esi
// 008a7657  83e801               sub eax, 1
// 008a765a  6a30                 push 0x30
// 008a765c  7447                 je 0x8a76a5
// 008a765e  83e801               sub eax, 1
// 008a7661  7421                 je 0x8a7684
// 008a7663  e83803f0ff           call 0x7a79a0
// 008a7668  83c404               add esp, 4
// 008a766b  89442418             mov dword ptr [esp + 0x18], eax
// 008a766f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008a7677  85c0                 test eax, eax
// 008a7679  744b                 je 0x8a76c6
// 008a767b  8bc8                 mov ecx, eax
// 008a767d  e88efdffff           call 0x8a7410
// 008a7682  eb44                 jmp 0x8a76c8
// 008a7684  e81703f0ff           call 0x7a79a0
// 008a7689  83c404               add esp, 4
// 008a768c  89442418             mov dword ptr [esp + 0x18], eax
// 008a7690  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008a7698  85c0                 test eax, eax
// 008a769a  742a                 je 0x8a76c6
// 008a769c  8bc8                 mov ecx, eax
// 008a769e  e89dfeffff           call 0x8a7540
// 008a76a3  eb23                 jmp 0x8a76c8
// 008a76a5  e8f602f0ff           call 0x7a79a0
// 008a76aa  83c404               add esp, 4
// 008a76ad  89442418             mov dword ptr [esp + 0x18], eax
// 008a76b1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008a76b9  85c0                 test eax, eax
// 008a76bb  7409                 je 0x8a76c6
// 008a76bd  8bc8                 mov ecx, eax
// 008a76bf  e8ecfdffff           call 0x8a74b0
// 008a76c4  eb02                 jmp 0x8a76c8
// 008a76c6  33c0                 xor eax, eax
// 008a76c8  897008               mov dword ptr [eax + 8], esi
// 008a76cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a76cf  64890d00000000       mov dword ptr fs:[0], ecx
// 008a76d6  59                   pop ecx
// 008a76d7  5e                   pop esi
// 008a76d8  83c40c               add esp, 0xc
// 008a76db  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTColorSelectorCtrlThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrlTheme.cpp