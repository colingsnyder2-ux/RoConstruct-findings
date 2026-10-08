// roc 2009-06 006d3c30  unit: RBX::Block  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d3c30
//
// 006d3c30  83ec18               sub esp, 0x18
// 006d3c33  53                   push ebx
// 006d3c34  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006d3c38  55                   push ebp
// 006d3c39  56                   push esi
// 006d3c3a  57                   push edi
// 006d3c3b  53                   push ebx
// 006d3c3c  8bf1                 mov esi, ecx
// 006d3c3e  e88df2ffff           call 0x6d2ed0
// 006d3c43  8be8                 mov ebp, eax
// 006d3c45  85f6                 test esi, esi
// 006d3c47  7506                 jne 0x6d3c4f
// 006d3c49  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3c4f  8b3e                 mov edi, dword ptr [esi]
// 006d3c51  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d3c54  89442414             mov dword ptr [esp + 0x14], eax
// 006d3c58  85ff                 test edi, edi
// 006d3c5a  7404                 je 0x6d3c60
// 006d3c5c  3bff                 cmp edi, edi
// 006d3c5e  7406                 je 0x6d3c66
// 006d3c60  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3c66  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 006d3c6a  7411                 je 0x6d3c7d
// 006d3c6c  8d4d0c               lea ecx, [ebp + 0xc]
// 006d3c6f  51                   push ecx
// 006d3c70  53                   push ebx
// 006d3c71  8d4e08               lea ecx, [esi + 8]
// 006d3c74  e807e9ffff           call 0x6d2580
// 006d3c79  84c0                 test al, al
// 006d3c7b  7434                 je 0x6d3cb1
// 006d3c7d  d903                 fld dword ptr [ebx]
// 006d3c7f  8d542418             lea edx, [esp + 0x18]
// 006d3c83  d95c2418             fstp dword ptr [esp + 0x18]
// 006d3c87  52                   push edx
// 006d3c88  d94304               fld dword ptr [ebx + 4]
// 006d3c8b  55                   push ebp
// 006d3c8c  d95c2424             fstp dword ptr [esp + 0x24]
// 006d3c90  57                   push edi
// 006d3c91  d94308               fld dword ptr [ebx + 8]
// 006d3c94  8d44241c             lea eax, [esp + 0x1c]
// 006d3c98  50                   push eax
// 006d3c99  d95c2430             fstp dword ptr [esp + 0x30]
// 006d3c9d  8bce                 mov ecx, esi
// 006d3c9f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006d3ca7  e864fdffff           call 0x6d3a10
// 006d3cac  8b38                 mov edi, dword ptr [eax]
// 006d3cae  8b6804               mov ebp, dword ptr [eax + 4]
// 006d3cb1  85ff                 test edi, edi
// 006d3cb3  751e                 jne 0x6d3cd3
// 006d3cb5  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3cbb  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 006d3cbe  7506                 jne 0x6d3cc6
// 006d3cc0  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3cc6  5f                   pop edi
// 006d3cc7  5e                   pop esi
// 006d3cc8  8d4518               lea eax, [ebp + 0x18]
// 006d3ccb  5d                   pop ebp
// 006d3ccc  5b                   pop ebx
// 006d3ccd  83c418               add esp, 0x18
// 006d3cd0  c20400               ret 4
// 006d3cd3  8b3f                 mov edi, dword ptr [edi]
// 006d3cd5  ebe4                 jmp 0x6d3cbb
// library rbxgs/v8world\Block.cpp (function ??A?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@QAEAAPAVBlockTemplate@RBX@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
