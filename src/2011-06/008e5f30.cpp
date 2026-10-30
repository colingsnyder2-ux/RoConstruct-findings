// roc 2011-06 008e5f30  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5f30
//
// 008e5f30  6aff                 push -1
// 008e5f32  6851eaa000           push 0xa0ea51
// 008e5f37  64a100000000         mov eax, dword ptr fs:[0]
// 008e5f3d  50                   push eax
// 008e5f3e  56                   push esi
// 008e5f3f  57                   push edi
// 008e5f40  a12058c900           mov eax, dword ptr [0xc95820]
// 008e5f45  33c4                 xor eax, esp
// 008e5f47  50                   push eax
// 008e5f48  8d44240c             lea eax, [esp + 0xc]
// 008e5f4c  64a300000000         mov dword ptr fs:[0], eax
// 008e5f52  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008e5f56  8bc7                 mov eax, edi
// 008e5f58  83e801               sub eax, 1
// 008e5f5b  6a1c                 push 0x1c
// 008e5f5d  7451                 je 0x8e5fb0
// 008e5f5f  83e801               sub eax, 1
// 008e5f62  7421                 je 0x8e5f85
// 008e5f64  e8f540f2ff           call 0x80a05e
// 008e5f69  83c404               add esp, 4
// 008e5f6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e5f70  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008e5f78  85c0                 test eax, eax
// 008e5f7a  745f                 je 0x8e5fdb
// 008e5f7c  8bc8                 mov ecx, eax
// 008e5f7e  e85dfeffff           call 0x8e5de0
// 008e5f83  eb58                 jmp 0x8e5fdd
// 008e5f85  e8d440f2ff           call 0x80a05e
// 008e5f8a  8bf0                 mov esi, eax
// 008e5f8c  83c404               add esp, 4
// 008e5f8f  8974241c             mov dword ptr [esp + 0x1c], esi
// 008e5f93  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008e5f9b  85f6                 test esi, esi
// 008e5f9d  743c                 je 0x8e5fdb
// 008e5f9f  8bce                 mov ecx, esi
// 008e5fa1  e83afeffff           call 0x8e5de0
// 008e5fa6  c706b48aad00         mov dword ptr [esi], 0xad8ab4
// 008e5fac  8bc6                 mov eax, esi
// 008e5fae  eb2d                 jmp 0x8e5fdd
// 008e5fb0  e8a940f2ff           call 0x80a05e
// 008e5fb5  8bf0                 mov esi, eax
// 008e5fb7  83c404               add esp, 4
// 008e5fba  8974241c             mov dword ptr [esp + 0x1c], esi
// 008e5fbe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e5fc6  85f6                 test esi, esi
// 008e5fc8  7411                 je 0x8e5fdb
// 008e5fca  8bce                 mov ecx, esi
// 008e5fcc  e80ffeffff           call 0x8e5de0
// 008e5fd1  c706a08aad00         mov dword ptr [esi], 0xad8aa0
// 008e5fd7  8bc6                 mov eax, esi
// 008e5fd9  eb02                 jmp 0x8e5fdd
// 008e5fdb  33c0                 xor eax, eax
// 008e5fdd  897808               mov dword ptr [eax + 8], edi
// 008e5fe0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e5fe4  64890d00000000       mov dword ptr fs:[0], ecx
// 008e5feb  59                   pop ecx
// 008e5fec  5f                   pop edi
// 008e5fed  5e                   pop esi
// 008e5fee  83c40c               add esp, 0xc
// 008e5ff1  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTSplitterWndThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp