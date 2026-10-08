// roc 2007-08 0060d8d0  unit: RBX::Block  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060d8d0
//
// 0060d8d0  83ec18               sub esp, 0x18
// 0060d8d3  53                   push ebx
// 0060d8d4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0060d8d8  56                   push esi
// 0060d8d9  57                   push edi
// 0060d8da  53                   push ebx
// 0060d8db  8bf1                 mov esi, ecx
// 0060d8dd  e82ef4ffff           call 0x60cd10
// 0060d8e2  85f6                 test esi, esi
// 0060d8e4  8bf8                 mov edi, eax
// 0060d8e6  7506                 jne 0x60d8ee
// 0060d8e8  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d8ee  3b7e04               cmp edi, dword ptr [esi + 4]
// 0060d8f1  7410                 je 0x60d903
// 0060d8f3  8d470c               lea eax, [edi + 0xc]
// 0060d8f6  50                   push eax
// 0060d8f7  53                   push ebx
// 0060d8f8  8bce                 mov ecx, esi
// 0060d8fa  e8b1eaffff           call 0x60c3b0
// 0060d8ff  84c0                 test al, al
// 0060d901  7434                 je 0x60d937
// 0060d903  d903                 fld dword ptr [ebx]
// 0060d905  8d4c2414             lea ecx, [esp + 0x14]
// 0060d909  51                   push ecx
// 0060d90a  d95c2418             fstp dword ptr [esp + 0x18]
// 0060d90e  d94304               fld dword ptr [ebx + 4]
// 0060d911  57                   push edi
// 0060d912  d95c2420             fstp dword ptr [esp + 0x20]
// 0060d916  56                   push esi
// 0060d917  d94308               fld dword ptr [ebx + 8]
// 0060d91a  8d542418             lea edx, [esp + 0x18]
// 0060d91e  52                   push edx
// 0060d91f  d95c242c             fstp dword ptr [esp + 0x2c]
// 0060d923  8bce                 mov ecx, esi
// 0060d925  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0060d92d  e89efdffff           call 0x60d6d0
// 0060d932  8b30                 mov esi, dword ptr [eax]
// 0060d934  8b7804               mov edi, dword ptr [eax + 4]
// 0060d937  85f6                 test esi, esi
// 0060d939  7506                 jne 0x60d941
// 0060d93b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d941  3b7e04               cmp edi, dword ptr [esi + 4]
// 0060d944  7506                 jne 0x60d94c
// 0060d946  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d94c  8d4718               lea eax, [edi + 0x18]
// 0060d94f  5f                   pop edi
// 0060d950  5e                   pop esi
// 0060d951  5b                   pop ebx
// 0060d952  83c418               add esp, 0x18
// 0060d955  c20400               ret 4
// library rbxgs/v8world\Block.cpp (function ??A?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@QAEAAPAVBlockTemplate@RBX@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
