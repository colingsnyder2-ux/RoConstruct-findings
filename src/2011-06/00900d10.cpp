// roc 2011-06 00900d10  unit: CXTColorSelectorCtrlThemeFactory  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900d10
//
// 00900d10  6aff                 push -1
// 00900d12  6801f7a000           push 0xa0f701
// 00900d17  64a100000000         mov eax, dword ptr fs:[0]
// 00900d1d  50                   push eax
// 00900d1e  56                   push esi
// 00900d1f  a12058c900           mov eax, dword ptr [0xc95820]
// 00900d24  33c4                 xor eax, esp
// 00900d26  50                   push eax
// 00900d27  8d442408             lea eax, [esp + 8]
// 00900d2b  64a300000000         mov dword ptr fs:[0], eax
// 00900d31  8b742418             mov esi, dword ptr [esp + 0x18]
// 00900d35  8bc6                 mov eax, esi
// 00900d37  83e801               sub eax, 1
// 00900d3a  6a30                 push 0x30
// 00900d3c  7447                 je 0x900d85
// 00900d3e  83e801               sub eax, 1
// 00900d41  7421                 je 0x900d64
// 00900d43  e81693f0ff           call 0x80a05e
// 00900d48  83c404               add esp, 4
// 00900d4b  89442418             mov dword ptr [esp + 0x18], eax
// 00900d4f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00900d57  85c0                 test eax, eax
// 00900d59  744b                 je 0x900da6
// 00900d5b  8bc8                 mov ecx, eax
// 00900d5d  e88efdffff           call 0x900af0
// 00900d62  eb44                 jmp 0x900da8
// 00900d64  e8f592f0ff           call 0x80a05e
// 00900d69  83c404               add esp, 4
// 00900d6c  89442418             mov dword ptr [esp + 0x18], eax
// 00900d70  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00900d78  85c0                 test eax, eax
// 00900d7a  742a                 je 0x900da6
// 00900d7c  8bc8                 mov ecx, eax
// 00900d7e  e89dfeffff           call 0x900c20
// 00900d83  eb23                 jmp 0x900da8
// 00900d85  e8d492f0ff           call 0x80a05e
// 00900d8a  83c404               add esp, 4
// 00900d8d  89442418             mov dword ptr [esp + 0x18], eax
// 00900d91  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00900d99  85c0                 test eax, eax
// 00900d9b  7409                 je 0x900da6
// 00900d9d  8bc8                 mov ecx, eax
// 00900d9f  e8ecfdffff           call 0x900b90
// 00900da4  eb02                 jmp 0x900da8
// 00900da6  33c0                 xor eax, eax
// 00900da8  897008               mov dword ptr [eax + 8], esi
// 00900dab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00900daf  64890d00000000       mov dword ptr fs:[0], ecx
// 00900db6  59                   pop ecx
// 00900db7  5e                   pop esi
// 00900db8  83c40c               add esp, 0xc
// 00900dbb  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTColorSelectorCtrlThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrlTheme.cpp