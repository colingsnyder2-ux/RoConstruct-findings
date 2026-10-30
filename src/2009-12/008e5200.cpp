// roc 2009-12 008e5200  unit: CXTCaptionThemeFactory  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5200
//
// 008e5200  6aff                 push -1
// 008e5202  6881549600           push 0x965481
// 008e5207  64a100000000         mov eax, dword ptr fs:[0]
// 008e520d  50                   push eax
// 008e520e  56                   push esi
// 008e520f  57                   push edi
// 008e5210  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5215  33c4                 xor eax, esp
// 008e5217  50                   push eax
// 008e5218  8d44240c             lea eax, [esp + 0xc]
// 008e521c  64a300000000         mov dword ptr fs:[0], eax
// 008e5222  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008e5226  8bc7                 mov eax, edi
// 008e5228  83e801               sub eax, 1
// 008e522b  6a2c                 push 0x2c
// 008e522d  7447                 je 0x8e5276
// 008e522f  83e801               sub eax, 1
// 008e5232  7421                 je 0x8e5255
// 008e5234  e827e6f0ff           call 0x7f3860
// 008e5239  83c404               add esp, 4
// 008e523c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e5240  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008e5248  85c0                 test eax, eax
// 008e524a  7455                 je 0x8e52a1
// 008e524c  8bc8                 mov ecx, eax
// 008e524e  e86df2ffff           call 0x8e44c0
// 008e5253  eb4e                 jmp 0x8e52a3
// 008e5255  e806e6f0ff           call 0x7f3860
// 008e525a  83c404               add esp, 4
// 008e525d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e5261  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008e5269  85c0                 test eax, eax
// 008e526b  7434                 je 0x8e52a1
// 008e526d  8bc8                 mov ecx, eax
// 008e526f  e8dcf2ffff           call 0x8e4550
// 008e5274  eb2d                 jmp 0x8e52a3
// 008e5276  e8e5e5f0ff           call 0x7f3860
// 008e527b  8bf0                 mov esi, eax
// 008e527d  83c404               add esp, 4
// 008e5280  8974241c             mov dword ptr [esp + 0x1c], esi
// 008e5284  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e528c  85f6                 test esi, esi
// 008e528e  7411                 je 0x8e52a1
// 008e5290  8bce                 mov ecx, esi
// 008e5292  e829f2ffff           call 0x8e44c0
// 008e5297  c7063cc5a000         mov dword ptr [esi], 0xa0c53c
// 008e529d  8bc6                 mov eax, esi
// 008e529f  eb02                 jmp 0x8e52a3
// 008e52a1  33c0                 xor eax, eax
// 008e52a3  897808               mov dword ptr [eax + 8], edi
// 008e52a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e52aa  64890d00000000       mov dword ptr fs:[0], ecx
// 008e52b1  59                   pop ecx
// 008e52b2  5f                   pop edi
// 008e52b3  5e                   pop esi
// 008e52b4  83c40c               add esp, 0xc
// 008e52b7  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTCaptionThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp