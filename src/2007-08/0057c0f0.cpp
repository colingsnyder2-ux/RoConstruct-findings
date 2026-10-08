// roc 2007-08 0057c0f0  unit: RBX::Workspace  size: 406 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c0f0
//
// 0057c0f0  6aff                 push -1
// 0057c0f2  6838567500           push 0x755638
// 0057c0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0057c0fd  50                   push eax
// 0057c0fe  64892500000000       mov dword ptr fs:[0], esp
// 0057c105  83ec08               sub esp, 8
// 0057c108  55                   push ebp
// 0057c109  56                   push esi
// 0057c10a  57                   push edi
// 0057c10b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057c10f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0057c113  3bfd                 cmp edi, ebp
// 0057c115  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057c11d  0f8417010000         je 0x57c23a
// 0057c123  6a00                 push 0
// 0057c125  68b8c68800           push 0x88c6b8
// 0057c12a  684c1f8800           push 0x881f4c
// 0057c12f  6a00                 push 0
// 0057c131  57                   push edi
// 0057c132  e8ff4b0b00           call 0x630d36
// 0057c137  8bf0                 mov esi, eax
// 0057c139  83c414               add esp, 0x14
// 0057c13c  85f6                 test esi, esi
// 0057c13e  746f                 je 0x57c1af
// 0057c140  56                   push esi
// 0057c141  e86a950200           call 0x5a56b0
// 0057c146  83c404               add esp, 4
// 0057c149  85c0                 test eax, eax
// 0057c14b  7562                 jne 0x57c1af
// 0057c14d  8bce                 mov ecx, esi
// 0057c14f  e8ecf4ffff           call 0x57b640
// 0057c154  85c0                 test eax, eax
// 0057c156  7557                 jne 0x57c1af
// 0057c158  8bce                 mov ecx, esi
// 0057c15a  e861f5ffff           call 0x57b6c0
// 0057c15f  85c0                 test eax, eax
// 0057c161  754c                 jne 0x57c1af
// 0057c163  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0057c169  50                   push eax
// 0057c16a  8d442410             lea eax, [esp + 0x10]
// 0057c16e  50                   push eax
// 0057c16f  e8fc14f2ff           call 0x49d670
// 0057c174  83c408               add esp, 8
// 0057c177  6a00                 push 0
// 0057c179  8bce                 mov ecx, esi
// 0057c17b  c644242001           mov byte ptr [esp + 0x20], 1
// 0057c180  e8ab54fcff           call 0x541630
// 0057c185  55                   push ebp
// 0057c186  83ec08               sub esp, 8
// 0057c189  8d542418             lea edx, [esp + 0x18]
// 0057c18d  8bcc                 mov ecx, esp
// 0057c18f  89642438             mov dword ptr [esp + 0x38], esp
// 0057c193  52                   push edx
// 0057c194  e8c7aaf2ff           call 0x4a6c60
// 0057c199  e852ffffff           call 0x57c0f0
// 0057c19e  83c40c               add esp, 0xc
// 0057c1a1  8d4c240c             lea ecx, [esp + 0xc]
// 0057c1a5  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0057c1aa  e8b161f1ff           call 0x492360
// 0057c1af  6a00                 push 0
// 0057c1b1  68d01b8a00           push 0x8a1bd0
// 0057c1b6  684c1f8800           push 0x881f4c
// 0057c1bb  6a00                 push 0
// 0057c1bd  57                   push edi
// 0057c1be  e8734b0b00           call 0x630d36
// 0057c1c3  8bf0                 mov esi, eax
// 0057c1c5  83c414               add esp, 0x14
// 0057c1c8  85f6                 test esi, esi
// 0057c1ca  746e                 je 0x57c23a
// 0057c1cc  8bce                 mov ecx, esi
// 0057c1ce  e86df4ffff           call 0x57b640
// 0057c1d3  85c0                 test eax, eax
// 0057c1d5  7563                 jne 0x57c23a
// 0057c1d7  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0057c1dd  50                   push eax
// 0057c1de  8d442410             lea eax, [esp + 0x10]
// 0057c1e2  50                   push eax
// 0057c1e3  e88814f2ff           call 0x49d670
// 0057c1e8  83c408               add esp, 8
// 0057c1eb  6a00                 push 0
// 0057c1ed  8bce                 mov ecx, esi
// 0057c1ef  c644242002           mov byte ptr [esp + 0x20], 2
// 0057c1f4  e83754fcff           call 0x541630
// 0057c1f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057c1fd  55                   push ebp
// 0057c1fe  83ec08               sub esp, 8
// 0057c201  8bc4                 mov eax, esp
// 0057c203  8908                 mov dword ptr [eax], ecx
// 0057c205  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057c209  895004               mov dword ptr [eax + 4], edx
// 0057c20c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057c210  85c0                 test eax, eax
// 0057c212  89642438             mov dword ptr [esp + 0x38], esp
// 0057c216  740c                 je 0x57c224
// 0057c218  83c004               add eax, 4
// 0057c21b  b901000000           mov ecx, 1
// 0057c220  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c224  e8c7feffff           call 0x57c0f0
// 0057c229  83c40c               add esp, 0xc
// 0057c22c  8d4c240c             lea ecx, [esp + 0xc]
// 0057c230  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0057c235  e82661f1ff           call 0x492360
// 0057c23a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0057c23e  85f6                 test esi, esi
// 0057c240  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057c248  742a                 je 0x57c274
// 0057c24a  8d5604               lea edx, [esi + 4]
// 0057c24d  83c8ff               or eax, 0xffffffff
// 0057c250  f00fc102             lock xadd dword ptr [edx], eax
// 0057c254  751e                 jne 0x57c274
// 0057c256  8b16                 mov edx, dword ptr [esi]
// 0057c258  8b4204               mov eax, dword ptr [edx + 4]
// 0057c25b  8bce                 mov ecx, esi
// 0057c25d  ffd0                 call eax
// 0057c25f  8d4e08               lea ecx, [esi + 8]
// 0057c262  83caff               or edx, 0xffffffff
// 0057c265  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c269  7509                 jne 0x57c274
// 0057c26b  8b06                 mov eax, dword ptr [esi]
// 0057c26d  8b5008               mov edx, dword ptr [eax + 8]
// 0057c270  8bce                 mov ecx, esi
// 0057c272  ffd2                 call edx
// 0057c274  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057c278  5f                   pop edi
// 0057c279  5e                   pop esi
// 0057c27a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c281  5d                   pop ebp
// 0057c282  83c414               add esp, 0x14
// 0057c285  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?clearEmptiedModels@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@PAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
