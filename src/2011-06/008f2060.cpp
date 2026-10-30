// roc 2011-06 008f2060  unit: CXTCaptionThemeFactory  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2060
//
// 008f2060  6aff                 push -1
// 008f2062  6851eaa000           push 0xa0ea51
// 008f2067  64a100000000         mov eax, dword ptr fs:[0]
// 008f206d  50                   push eax
// 008f206e  56                   push esi
// 008f206f  57                   push edi
// 008f2070  a12058c900           mov eax, dword ptr [0xc95820]
// 008f2075  33c4                 xor eax, esp
// 008f2077  50                   push eax
// 008f2078  8d44240c             lea eax, [esp + 0xc]
// 008f207c  64a300000000         mov dword ptr fs:[0], eax
// 008f2082  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008f2086  8bc7                 mov eax, edi
// 008f2088  83e801               sub eax, 1
// 008f208b  6a2c                 push 0x2c
// 008f208d  7447                 je 0x8f20d6
// 008f208f  83e801               sub eax, 1
// 008f2092  7421                 je 0x8f20b5
// 008f2094  e8c57ff1ff           call 0x80a05e
// 008f2099  83c404               add esp, 4
// 008f209c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f20a0  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008f20a8  85c0                 test eax, eax
// 008f20aa  7455                 je 0x8f2101
// 008f20ac  8bc8                 mov ecx, eax
// 008f20ae  e87df2ffff           call 0x8f1330
// 008f20b3  eb4e                 jmp 0x8f2103
// 008f20b5  e8a47ff1ff           call 0x80a05e
// 008f20ba  83c404               add esp, 4
// 008f20bd  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f20c1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008f20c9  85c0                 test eax, eax
// 008f20cb  7434                 je 0x8f2101
// 008f20cd  8bc8                 mov ecx, eax
// 008f20cf  e8ecf2ffff           call 0x8f13c0
// 008f20d4  eb2d                 jmp 0x8f2103
// 008f20d6  e8837ff1ff           call 0x80a05e
// 008f20db  8bf0                 mov esi, eax
// 008f20dd  83c404               add esp, 4
// 008f20e0  8974241c             mov dword ptr [esp + 0x1c], esi
// 008f20e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f20ec  85f6                 test esi, esi
// 008f20ee  7411                 je 0x8f2101
// 008f20f0  8bce                 mov ecx, esi
// 008f20f2  e839f2ffff           call 0x8f1330
// 008f20f7  c7065ca3ad00         mov dword ptr [esi], 0xada35c
// 008f20fd  8bc6                 mov eax, esi
// 008f20ff  eb02                 jmp 0x8f2103
// 008f2101  33c0                 xor eax, eax
// 008f2103  897808               mov dword ptr [eax + 8], edi
// 008f2106  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f210a  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2111  59                   pop ecx
// 008f2112  5f                   pop edi
// 008f2113  5e                   pop esi
// 008f2114  83c40c               add esp, 0xc
// 008f2117  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTCaptionThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp