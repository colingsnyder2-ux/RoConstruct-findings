// roc 2008-06 00648b70  unit: RBX::Block  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648b70
//
// 00648b70  83ec10               sub esp, 0x10
// 00648b73  53                   push ebx
// 00648b74  55                   push ebp
// 00648b75  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00648b79  56                   push esi
// 00648b7a  55                   push ebp
// 00648b7b  8bf1                 mov esi, ecx
// 00648b7d  e82ef5ffff           call 0x6480b0
// 00648b82  8bd8                 mov ebx, eax
// 00648b84  895c2410             mov dword ptr [esp + 0x10], ebx
// 00648b88  85f6                 test esi, esi
// 00648b8a  7506                 jne 0x648b92
// 00648b8c  ff1590288000         call dword ptr [0x802890]
// 00648b92  8b06                 mov eax, dword ptr [esi]
// 00648b94  57                   push edi
// 00648b95  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00648b98  89442410             mov dword ptr [esp + 0x10], eax
// 00648b9c  85c0                 test eax, eax
// 00648b9e  7404                 je 0x648ba4
// 00648ba0  3bc0                 cmp eax, eax
// 00648ba2  7406                 je 0x648baa
// 00648ba4  ff1590288000         call dword ptr [0x802890]
// 00648baa  3bdf                 cmp ebx, edi
// 00648bac  5f                   pop edi
// 00648bad  7417                 je 0x648bc6
// 00648baf  83c30c               add ebx, 0xc
// 00648bb2  53                   push ebx
// 00648bb3  55                   push ebp
// 00648bb4  8d4e08               lea ecx, [esi + 8]
// 00648bb7  e8a4ebffff           call 0x647760
// 00648bbc  84c0                 test al, al
// 00648bbe  7506                 jne 0x648bc6
// 00648bc0  8d4c240c             lea ecx, [esp + 0xc]
// 00648bc4  eb11                 jmp 0x648bd7
// 00648bc6  8b0e                 mov ecx, dword ptr [esi]
// 00648bc8  8b4618               mov eax, dword ptr [esi + 0x18]
// 00648bcb  894c2414             mov dword ptr [esp + 0x14], ecx
// 00648bcf  89442418             mov dword ptr [esp + 0x18], eax
// 00648bd3  8d4c2414             lea ecx, [esp + 0x14]
// 00648bd7  8b11                 mov edx, dword ptr [ecx]
// 00648bd9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00648bdd  8b4904               mov ecx, dword ptr [ecx + 4]
// 00648be0  5e                   pop esi
// 00648be1  5d                   pop ebp
// 00648be2  8910                 mov dword ptr [eax], edx
// 00648be4  894804               mov dword ptr [eax + 4], ecx
// 00648be7  5b                   pop ebx
// 00648be8  83c410               add esp, 0x10
// 00648beb  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?find@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
