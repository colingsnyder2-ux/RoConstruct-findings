// roc 2008-06 00648e10  unit: RBX::Block  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648e10
//
// 00648e10  83ec18               sub esp, 0x18
// 00648e13  53                   push ebx
// 00648e14  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00648e18  55                   push ebp
// 00648e19  56                   push esi
// 00648e1a  57                   push edi
// 00648e1b  53                   push ebx
// 00648e1c  8bf1                 mov esi, ecx
// 00648e1e  e88df2ffff           call 0x6480b0
// 00648e23  8be8                 mov ebp, eax
// 00648e25  85f6                 test esi, esi
// 00648e27  7506                 jne 0x648e2f
// 00648e29  ff1590288000         call dword ptr [0x802890]
// 00648e2f  8b3e                 mov edi, dword ptr [esi]
// 00648e31  8b4618               mov eax, dword ptr [esi + 0x18]
// 00648e34  89442414             mov dword ptr [esp + 0x14], eax
// 00648e38  85ff                 test edi, edi
// 00648e3a  7404                 je 0x648e40
// 00648e3c  3bff                 cmp edi, edi
// 00648e3e  7406                 je 0x648e46
// 00648e40  ff1590288000         call dword ptr [0x802890]
// 00648e46  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00648e4a  7411                 je 0x648e5d
// 00648e4c  8d4d0c               lea ecx, [ebp + 0xc]
// 00648e4f  51                   push ecx
// 00648e50  53                   push ebx
// 00648e51  8d4e08               lea ecx, [esi + 8]
// 00648e54  e807e9ffff           call 0x647760
// 00648e59  84c0                 test al, al
// 00648e5b  7434                 je 0x648e91
// 00648e5d  d903                 fld dword ptr [ebx]
// 00648e5f  8d542418             lea edx, [esp + 0x18]
// 00648e63  d95c2418             fstp dword ptr [esp + 0x18]
// 00648e67  52                   push edx
// 00648e68  d94304               fld dword ptr [ebx + 4]
// 00648e6b  55                   push ebp
// 00648e6c  d95c2424             fstp dword ptr [esp + 0x24]
// 00648e70  57                   push edi
// 00648e71  d94308               fld dword ptr [ebx + 8]
// 00648e74  8d44241c             lea eax, [esp + 0x1c]
// 00648e78  50                   push eax
// 00648e79  d95c2430             fstp dword ptr [esp + 0x30]
// 00648e7d  8bce                 mov ecx, esi
// 00648e7f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00648e87  e864fdffff           call 0x648bf0
// 00648e8c  8b38                 mov edi, dword ptr [eax]
// 00648e8e  8b6804               mov ebp, dword ptr [eax + 4]
// 00648e91  85ff                 test edi, edi
// 00648e93  751e                 jne 0x648eb3
// 00648e95  ff1590288000         call dword ptr [0x802890]
// 00648e9b  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 00648e9e  7506                 jne 0x648ea6
// 00648ea0  ff1590288000         call dword ptr [0x802890]
// 00648ea6  5f                   pop edi
// 00648ea7  5e                   pop esi
// 00648ea8  8d4518               lea eax, [ebp + 0x18]
// 00648eab  5d                   pop ebp
// 00648eac  5b                   pop ebx
// 00648ead  83c418               add esp, 0x18
// 00648eb0  c20400               ret 4
// 00648eb3  8b3f                 mov edi, dword ptr [edi]
// 00648eb5  ebe4                 jmp 0x648e9b
// library rbxgs/v8world\Block.cpp (function ??A?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@QAEAAPAVBlockTemplate@RBX@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
