// roc 2009-06 0080a760  unit: CXTCaptionThemeFactory  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080a760
//
// 0080a760  6aff                 push -1
// 0080a762  68c11d8800           push 0x881dc1
// 0080a767  64a100000000         mov eax, dword ptr fs:[0]
// 0080a76d  50                   push eax
// 0080a76e  56                   push esi
// 0080a76f  57                   push edi
// 0080a770  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080a775  33c4                 xor eax, esp
// 0080a777  50                   push eax
// 0080a778  8d44240c             lea eax, [esp + 0xc]
// 0080a77c  64a300000000         mov dword ptr fs:[0], eax
// 0080a782  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080a786  8bc7                 mov eax, edi
// 0080a788  83e801               sub eax, 1
// 0080a78b  6a2c                 push 0x2c
// 0080a78d  7447                 je 0x80a7d6
// 0080a78f  83e801               sub eax, 1
// 0080a792  7421                 je 0x80a7b5
// 0080a794  e89fe2f0ff           call 0x718a38
// 0080a799  83c404               add esp, 4
// 0080a79c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080a7a0  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0080a7a8  85c0                 test eax, eax
// 0080a7aa  7455                 je 0x80a801
// 0080a7ac  8bc8                 mov ecx, eax
// 0080a7ae  e83df2ffff           call 0x8099f0
// 0080a7b3  eb4e                 jmp 0x80a803
// 0080a7b5  e87ee2f0ff           call 0x718a38
// 0080a7ba  83c404               add esp, 4
// 0080a7bd  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080a7c1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0080a7c9  85c0                 test eax, eax
// 0080a7cb  7434                 je 0x80a801
// 0080a7cd  8bc8                 mov ecx, eax
// 0080a7cf  e8acf2ffff           call 0x809a80
// 0080a7d4  eb2d                 jmp 0x80a803
// 0080a7d6  e85de2f0ff           call 0x718a38
// 0080a7db  8bf0                 mov esi, eax
// 0080a7dd  83c404               add esp, 4
// 0080a7e0  8974241c             mov dword ptr [esp + 0x1c], esi
// 0080a7e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080a7ec  85f6                 test esi, esi
// 0080a7ee  7411                 je 0x80a801
// 0080a7f0  8bce                 mov ecx, esi
// 0080a7f2  e8f9f1ffff           call 0x8099f0
// 0080a7f7  c706ccc09000         mov dword ptr [esi], 0x90c0cc
// 0080a7fd  8bc6                 mov eax, esi
// 0080a7ff  eb02                 jmp 0x80a803
// 0080a801  33c0                 xor eax, eax
// 0080a803  897808               mov dword ptr [eax + 8], edi
// 0080a806  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080a80a  64890d00000000       mov dword ptr fs:[0], ecx
// 0080a811  59                   pop ecx
// 0080a812  5f                   pop edi
// 0080a813  5e                   pop esi
// 0080a814  83c40c               add esp, 0xc
// 0080a817  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTCaptionThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp