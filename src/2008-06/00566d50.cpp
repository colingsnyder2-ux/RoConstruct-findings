// roc 2008-06 00566d50  unit: RBX::VSelection::?$FactoryProduct  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566d50
//
// 00566d50  6aff                 push -1
// 00566d52  68c0f47c00           push 0x7cf4c0
// 00566d57  64a100000000         mov eax, dword ptr fs:[0]
// 00566d5d  50                   push eax
// 00566d5e  64892500000000       mov dword ptr fs:[0], esp
// 00566d65  83ec14               sub esp, 0x14
// 00566d68  53                   push ebx
// 00566d69  55                   push ebp
// 00566d6a  56                   push esi
// 00566d6b  57                   push edi
// 00566d6c  8bd9                 mov ebx, ecx
// 00566d6e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00566d72  83ec08               sub esp, 8
// 00566d75  8bc4                 mov eax, esp
// 00566d77  8910                 mov dword ptr [eax], edx
// 00566d79  8b542440             mov edx, dword ptr [esp + 0x40]
// 00566d7d  33c9                 xor ecx, ecx
// 00566d7f  895004               mov dword ptr [eax + 4], edx
// 00566d82  8b442440             mov eax, dword ptr [esp + 0x40]
// 00566d86  894c2434             mov dword ptr [esp + 0x34], ecx
// 00566d8a  89642418             mov dword ptr [esp + 0x18], esp
// 00566d8e  3bc1                 cmp eax, ecx
// 00566d90  740c                 je 0x566d9e
// 00566d92  83c004               add eax, 4
// 00566d95  ba01000000           mov edx, 1
// 00566d9a  f00fc110             lock xadd dword ptr [eax], edx
// 00566d9e  83ec08               sub esp, 8
// 00566da1  8bc4                 mov eax, esp
// 00566da3  8908                 mov dword ptr [eax], ecx
// 00566da5  894804               mov dword ptr [eax + 4], ecx
// 00566da8  8d4c2424             lea ecx, [esp + 0x24]
// 00566dac  89642420             mov dword ptr [esp + 0x20], esp
// 00566db0  e8abfaffff           call 0x566860
// 00566db5  8bbb68010000         mov edi, dword ptr [ebx + 0x168]
// 00566dbb  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00566dc0  3bbb6c010000         cmp edi, dword ptr [ebx + 0x16c]
// 00566dc6  7606                 jbe 0x566dce
// 00566dc8  ff1590288000         call dword ptr [0x802890]
// 00566dce  8bb35c010000         mov esi, dword ptr [ebx + 0x15c]
// 00566dd4  eb0a                 jmp 0x566de0
// 00566dd6  8da42400000000       lea esp, [esp]
// 00566ddd  8d4900               lea ecx, [ecx]
// 00566de0  8bab6c010000         mov ebp, dword ptr [ebx + 0x16c]
// 00566de6  39ab68010000         cmp dword ptr [ebx + 0x168], ebp
// 00566dec  7606                 jbe 0x566df4
// 00566dee  ff1590288000         call dword ptr [0x802890]
// 00566df4  8b835c010000         mov eax, dword ptr [ebx + 0x15c]
// 00566dfa  85f6                 test esi, esi
// 00566dfc  7404                 je 0x566e02
// 00566dfe  3bf0                 cmp esi, eax
// 00566e00  7406                 je 0x566e08
// 00566e02  ff1590288000         call dword ptr [0x802890]
// 00566e08  3bfd                 cmp edi, ebp
// 00566e0a  743e                 je 0x566e4a
// 00566e0c  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00566e12  85f6                 test esi, esi
// 00566e14  752c                 jne 0x566e42
// 00566e16  ffd5                 call ebp
// 00566e18  33c0                 xor eax, eax
// 00566e1a  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00566e1d  7202                 jb 0x566e21
// 00566e1f  ffd5                 call ebp
// 00566e21  8b0f                 mov ecx, dword ptr [edi]
// 00566e23  8b01                 mov eax, dword ptr [ecx]
// 00566e25  8b00                 mov eax, dword ptr [eax]
// 00566e27  8d542414             lea edx, [esp + 0x14]
// 00566e2b  52                   push edx
// 00566e2c  ffd0                 call eax
// 00566e2e  85f6                 test esi, esi
// 00566e30  7514                 jne 0x566e46
// 00566e32  ffd5                 call ebp
// 00566e34  33c0                 xor eax, eax
// 00566e36  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00566e39  7202                 jb 0x566e3d
// 00566e3b  ffd5                 call ebp
// 00566e3d  83c704               add edi, 4
// 00566e40  eb9e                 jmp 0x566de0
// 00566e42  8b06                 mov eax, dword ptr [esi]
// 00566e44  ebd4                 jmp 0x566e1a
// 00566e46  8b06                 mov eax, dword ptr [esi]
// 00566e48  ebec                 jmp 0x566e36
// 00566e4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00566e4e  83ec10               sub esp, 0x10
// 00566e51  8bc4                 mov eax, esp
// 00566e53  8908                 mov dword ptr [eax], ecx
// 00566e55  8b542428             mov edx, dword ptr [esp + 0x28]
// 00566e59  895004               mov dword ptr [eax + 4], edx
// 00566e5c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00566e60  89642420             mov dword ptr [esp + 0x20], esp
// 00566e64  85c9                 test ecx, ecx
// 00566e66  740c                 je 0x566e74
// 00566e68  83c104               add ecx, 4
// 00566e6b  ba01000000           mov edx, 1
// 00566e70  f00fc111             lock xadd dword ptr [ecx], edx
// 00566e74  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00566e78  894808               mov dword ptr [eax + 8], ecx
// 00566e7b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00566e7f  89500c               mov dword ptr [eax + 0xc], edx
// 00566e82  8b442430             mov eax, dword ptr [esp + 0x30]
// 00566e86  85c0                 test eax, eax
// 00566e88  740c                 je 0x566e96
// 00566e8a  83c004               add eax, 4
// 00566e8d  b901000000           mov ecx, 1
// 00566e92  f00fc108             lock xadd dword ptr [eax], ecx
// 00566e96  8d8b30010000         lea ecx, [ebx + 0x130]
// 00566e9c  e80ffcffff           call 0x566ab0
// 00566ea1  8d4c2414             lea ecx, [esp + 0x14]
// 00566ea5  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00566eaa  e8b1bdebff           call 0x422c60
// 00566eaf  8b742438             mov esi, dword ptr [esp + 0x38]
// 00566eb3  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00566ebb  85f6                 test esi, esi
// 00566ebd  742a                 je 0x566ee9
// 00566ebf  8d5604               lea edx, [esi + 4]
// 00566ec2  83c8ff               or eax, 0xffffffff
// 00566ec5  f00fc102             lock xadd dword ptr [edx], eax
// 00566ec9  751e                 jne 0x566ee9
// 00566ecb  8b16                 mov edx, dword ptr [esi]
// 00566ecd  8b4204               mov eax, dword ptr [edx + 4]
// 00566ed0  8bce                 mov ecx, esi
// 00566ed2  ffd0                 call eax
// 00566ed4  8d4e08               lea ecx, [esi + 8]
// 00566ed7  83caff               or edx, 0xffffffff
// 00566eda  f00fc111             lock xadd dword ptr [ecx], edx
// 00566ede  7509                 jne 0x566ee9
// 00566ee0  8b06                 mov eax, dword ptr [esi]
// 00566ee2  8b5008               mov edx, dword ptr [eax + 8]
// 00566ee5  8bce                 mov ecx, esi
// 00566ee7  ffd2                 call edx
// 00566ee9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00566eed  5f                   pop edi
// 00566eee  5e                   pop esi
// 00566eef  5d                   pop ebp
// 00566ef0  64890d00000000       mov dword ptr fs:[0], ecx
// 00566ef7  5b                   pop ebx
// 00566ef8  83c420               add esp, 0x20
// 00566efb  c20800               ret 8
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raiseRemoved@Selection@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
