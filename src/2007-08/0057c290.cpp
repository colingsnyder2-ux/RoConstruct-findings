// roc 2007-08 0057c290  unit: RBX::Workspace  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c290
//
// 0057c290  6aff                 push -1
// 0057c292  68e03e7500           push 0x753ee0
// 0057c297  64a100000000         mov eax, dword ptr fs:[0]
// 0057c29d  50                   push eax
// 0057c29e  64892500000000       mov dword ptr fs:[0], esp
// 0057c2a5  83ec14               sub esp, 0x14
// 0057c2a8  53                   push ebx
// 0057c2a9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057c2ad  55                   push ebp
// 0057c2ae  33ed                 xor ebp, ebp
// 0057c2b0  396b04               cmp dword ptr [ebx + 4], ebp
// 0057c2b3  56                   push esi
// 0057c2b4  57                   push edi
// 0057c2b5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057c2b9  0f8efe000000         jle 0x57c3bd
// 0057c2bf  8b03                 mov eax, dword ptr [ebx]
// 0057c2c1  8b7ce804             mov edi, dword ptr [eax + ebp*8 + 4]
// 0057c2c5  85ff                 test edi, edi
// 0057c2c7  8b34e8               mov esi, dword ptr [eax + ebp*8]
// 0057c2ca  8d04e8               lea eax, [eax + ebp*8]
// 0057c2cd  8974241c             mov dword ptr [esp + 0x1c], esi
// 0057c2d1  897c2420             mov dword ptr [esp + 0x20], edi
// 0057c2d5  740c                 je 0x57c2e3
// 0057c2d7  8d4f04               lea ecx, [edi + 4]
// 0057c2da  ba01000000           mov edx, 1
// 0057c2df  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c2e3  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0057c2e9  50                   push eax
// 0057c2ea  8d442418             lea eax, [esp + 0x18]
// 0057c2ee  50                   push eax
// 0057c2ef  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057c2f7  e87413f2ff           call 0x49d670
// 0057c2fc  83c408               add esp, 8
// 0057c2ff  6a00                 push 0
// 0057c301  8bce                 mov ecx, esi
// 0057c303  c644243001           mov byte ptr [esp + 0x30], 1
// 0057c308  e82353fcff           call 0x541630
// 0057c30d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057c311  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c315  51                   push ecx
// 0057c316  83ec08               sub esp, 8
// 0057c319  8bc4                 mov eax, esp
// 0057c31b  8910                 mov dword ptr [eax], edx
// 0057c31d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057c321  894804               mov dword ptr [eax + 4], ecx
// 0057c324  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057c328  85c0                 test eax, eax
// 0057c32a  89642440             mov dword ptr [esp + 0x40], esp
// 0057c32e  740c                 je 0x57c33c
// 0057c330  83c004               add eax, 4
// 0057c333  ba01000000           mov edx, 1
// 0057c338  f00fc110             lock xadd dword ptr [eax], edx
// 0057c33c  e8affdffff           call 0x57c0f0
// 0057c341  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057c345  83c40c               add esp, 0xc
// 0057c348  85f6                 test esi, esi
// 0057c34a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0057c34f  742a                 je 0x57c37b
// 0057c351  8d4604               lea eax, [esi + 4]
// 0057c354  83c9ff               or ecx, 0xffffffff
// 0057c357  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c35b  751e                 jne 0x57c37b
// 0057c35d  8b16                 mov edx, dword ptr [esi]
// 0057c35f  8b4204               mov eax, dword ptr [edx + 4]
// 0057c362  8bce                 mov ecx, esi
// 0057c364  ffd0                 call eax
// 0057c366  8d4e08               lea ecx, [esi + 8]
// 0057c369  83caff               or edx, 0xffffffff
// 0057c36c  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c370  7509                 jne 0x57c37b
// 0057c372  8b06                 mov eax, dword ptr [esi]
// 0057c374  8b5008               mov edx, dword ptr [eax + 8]
// 0057c377  8bce                 mov ecx, esi
// 0057c379  ffd2                 call edx
// 0057c37b  85ff                 test edi, edi
// 0057c37d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057c385  742a                 je 0x57c3b1
// 0057c387  8d4704               lea eax, [edi + 4]
// 0057c38a  83c9ff               or ecx, 0xffffffff
// 0057c38d  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c391  751e                 jne 0x57c3b1
// 0057c393  8b17                 mov edx, dword ptr [edi]
// 0057c395  8b4204               mov eax, dword ptr [edx + 4]
// 0057c398  8bcf                 mov ecx, edi
// 0057c39a  ffd0                 call eax
// 0057c39c  8d4f08               lea ecx, [edi + 8]
// 0057c39f  83caff               or edx, 0xffffffff
// 0057c3a2  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c3a6  7509                 jne 0x57c3b1
// 0057c3a8  8b07                 mov eax, dword ptr [edi]
// 0057c3aa  8b5008               mov edx, dword ptr [eax + 8]
// 0057c3ad  8bcf                 mov ecx, edi
// 0057c3af  ffd2                 call edx
// 0057c3b1  83c501               add ebp, 1
// 0057c3b4  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0057c3b7  0f8c02ffffff         jl 0x57c2bf
// 0057c3bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057c3c1  5f                   pop edi
// 0057c3c2  5e                   pop esi
// 0057c3c3  5d                   pop ebp
// 0057c3c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c3cb  5b                   pop ebx
// 0057c3cc  83c420               add esp, 0x20
// 0057c3cf  c20400               ret 4
// library rbxgs/v8datamodel\Workspace.cpp (function ?handleFallenParts@Workspace@RBX@@AAEXABV?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
