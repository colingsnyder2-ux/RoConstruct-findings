// roc 2009-12 008c6c40  unit: VCEdit::?$CXTMaskEditT  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6c40
//
// 008c6c40  6aff                 push -1
// 008c6c42  6899469600           push 0x964699
// 008c6c47  64a100000000         mov eax, dword ptr fs:[0]
// 008c6c4d  50                   push eax
// 008c6c4e  53                   push ebx
// 008c6c4f  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6c54  33c4                 xor eax, esp
// 008c6c56  50                   push eax
// 008c6c57  8d442408             lea eax, [esp + 8]
// 008c6c5b  64a300000000         mov dword ptr fs:[0], eax
// 008c6c61  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6c65  6a01                 push 1
// 008c6c67  50                   push eax
// 008c6c68  8d4c2420             lea ecx, [esp + 0x20]
// 008c6c6c  ff15f0da9800         call dword ptr [0x98daf0]
// 008c6c72  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008c6c77  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008c6c7f  8d4c2418             lea ecx, [esp + 0x18]
// 008c6c83  7408                 je 0x8c6c8d
// 008c6c85  ff1524d29800         call dword ptr [0x98d224]
// 008c6c8b  eb06                 jmp 0x8c6c93
// 008c6c8d  ff1544d89800         call dword ptr [0x98d844]
// 008c6c93  6a00                 push 0
// 008c6c95  8d4c241c             lea ecx, [esp + 0x1c]
// 008c6c99  ff1510d59800         call dword ptr [0x98d510]
// 008c6c9f  8d4c2418             lea ecx, [esp + 0x18]
// 008c6ca3  8ad8                 mov bl, al
// 008c6ca5  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6cab  8ac3                 mov al, bl
// 008c6cad  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c6cb1  64890d00000000       mov dword ptr fs:[0], ecx
// 008c6cb8  59                   pop ecx
// 008c6cb9  5b                   pop ebx
// 008c6cba  83c40c               add esp, 0xc
// 008c6cbd  c20800               ret 8
// copied from an identical function in another client (function ?ConvertUnicodeAlpha@?$CXTMaskEditT@VCEdit@@@@QBEDDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp