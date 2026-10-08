// roc 2008-06 00648f30  unit: RBX::Block  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648f30
//
// 00648f30  83ec08               sub esp, 8
// 00648f33  53                   push ebx
// 00648f34  55                   push ebp
// 00648f35  56                   push esi
// 00648f36  57                   push edi
// 00648f37  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00648f3b  57                   push edi
// 00648f3c  8d442414             lea eax, [esp + 0x14]
// 00648f40  50                   push eax
// 00648f41  b9ecd59700           mov ecx, 0x97d5ec
// 00648f46  e825fcffff           call 0x648b70
// 00648f4b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00648f4f  8b1d04d69700         mov ebx, dword ptr [0x97d604]
// 00648f55  85f6                 test esi, esi
// 00648f57  7408                 je 0x648f61
// 00648f59  3b35ecd59700         cmp esi, dword ptr [0x97d5ec]
// 00648f5f  7406                 je 0x648f67
// 00648f61  ff1590288000         call dword ptr [0x802890]
// 00648f67  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00648f6b  3beb                 cmp ebp, ebx
// 00648f6d  7424                 je 0x648f93
// 00648f6f  85f6                 test esi, esi
// 00648f71  751c                 jne 0x648f8f
// 00648f73  ff1590288000         call dword ptr [0x802890]
// 00648f79  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 00648f7c  7506                 jne 0x648f84
// 00648f7e  ff1590288000         call dword ptr [0x802890]
// 00648f84  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00648f87  5f                   pop edi
// 00648f88  5e                   pop esi
// 00648f89  5d                   pop ebp
// 00648f8a  5b                   pop ebx
// 00648f8b  83c408               add esp, 8
// 00648f8e  c3                   ret 
// 00648f8f  8b36                 mov esi, dword ptr [esi]
// 00648f91  ebe6                 jmp 0x648f79
// 00648f93  6a60                 push 0x60
// 00648f95  e886790500           call 0x6a0920
// 00648f9a  83c404               add esp, 4
// 00648f9d  85c0                 test eax, eax
// 00648f9f  740c                 je 0x648fad
// 00648fa1  57                   push edi
// 00648fa2  8bc8                 mov ecx, eax
// 00648fa4  e8c7eeffff           call 0x647e70
// 00648fa9  8bf0                 mov esi, eax
// 00648fab  eb02                 jmp 0x648faf
// 00648fad  33f6                 xor esi, esi
// 00648faf  57                   push edi
// 00648fb0  b9ecd59700           mov ecx, 0x97d5ec
// 00648fb5  e856feffff           call 0x648e10
// 00648fba  5f                   pop edi
// 00648fbb  8930                 mov dword ptr [eax], esi
// 00648fbd  8bc6                 mov eax, esi
// 00648fbf  5e                   pop esi
// 00648fc0  5d                   pop ebp
// 00648fc1  5b                   pop ebx
// 00648fc2  83c408               add esp, 8
// 00648fc5  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?getVertices@BlockTemplate@RBX@@SAPBVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
