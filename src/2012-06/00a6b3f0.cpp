// roc 2012-06 00a6b3f0  unit: CXTButton  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b3f0
//
// 00a6b3f0  6aff                 push -1
// 00a6b3f2  688687ae00           push 0xae8786
// 00a6b3f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b3fd  50                   push eax
// 00a6b3fe  56                   push esi
// 00a6b3ff  57                   push edi
// 00a6b400  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b405  33c4                 xor eax, esp
// 00a6b407  50                   push eax
// 00a6b408  8d44240c             lea eax, [esp + 0xc]
// 00a6b40c  64a300000000         mov dword ptr fs:[0], eax
// 00a6b412  8bf1                 mov esi, ecx
// 00a6b414  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a6b418  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00a6b41e  898680000000         mov dword ptr [esi + 0x80], eax
// 00a6b424  a840                 test al, 0x40
// 00a6b426  7428                 je 0xa6b450
// 00a6b428  68c8000000           push 0xc8
// 00a6b42d  e8e86cf1ff           call 0x98211a
// 00a6b432  83c404               add esp, 4
// 00a6b435  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a6b439  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a6b441  85c0                 test eax, eax
// 00a6b443  7435                 je 0xa6b47a
// 00a6b445  6a00                 push 0
// 00a6b447  8bc8                 mov ecx, eax
// 00a6b449  e8a2e70000           call 0xa79bf0
// 00a6b44e  eb2c                 jmp 0xa6b47c
// 00a6b450  a801                 test al, 1
// 00a6b452  7439                 je 0xa6b48d
// 00a6b454  6880000000           push 0x80
// 00a6b459  e8bc6cf1ff           call 0x98211a
// 00a6b45e  83c404               add esp, 4
// 00a6b461  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a6b465  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a6b46d  85c0                 test eax, eax
// 00a6b46f  7409                 je 0xa6b47a
// 00a6b471  8bc8                 mov ecx, eax
// 00a6b473  e808e40000           call 0xa79880
// 00a6b478  eb02                 jmp 0xa6b47c
// 00a6b47a  33c0                 xor eax, eax
// 00a6b47c  50                   push eax
// 00a6b47d  8d4e54               lea ecx, [esi + 0x54]
// 00a6b480  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00a6b488  e803b6f7ff           call 0x9e6a90
// 00a6b48d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6b490  50                   push eax
// 00a6b491  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b497  85c0                 test eax, eax
// 00a6b499  7415                 je 0xa6b4b0
// 00a6b49b  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a6b4a0  740e                 je 0xa6b4b0
// 00a6b4a2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6b4a5  6a01                 push 1
// 00a6b4a7  6a00                 push 0
// 00a6b4a9  51                   push ecx
// 00a6b4aa  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6b4b0  8bc7                 mov eax, edi
// 00a6b4b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6b4b6  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b4bd  59                   pop ecx
// 00a6b4be  5f                   pop edi
// 00a6b4bf  5e                   pop esi
// 00a6b4c0  83c40c               add esp, 0xc
// 00a6b4c3  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp