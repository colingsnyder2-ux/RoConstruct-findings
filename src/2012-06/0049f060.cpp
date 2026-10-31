// roc 2012-06 0049f060  unit: Scintilla::CScintillaView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049f060
//
// 0049f060  64a100000000         mov eax, dword ptr fs:[0]
// 0049f066  6aff                 push -1
// 0049f068  68c83aaa00           push 0xaa3ac8
// 0049f06d  50                   push eax
// 0049f06e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049f072  64892500000000       mov dword ptr fs:[0], esp
// 0049f079  53                   push ebx
// 0049f07a  55                   push ebp
// 0049f07b  56                   push esi
// 0049f07c  57                   push edi
// 0049f07d  8bf1                 mov esi, ecx
// 0049f07f  50                   push eax
// 0049f080  b90417d700           mov ecx, 0xd71704
// 0049f085  ff157847b200         call dword ptr [0xb24778]
// 0049f08b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049f08f  51                   push ecx
// 0049f090  b90817d700           mov ecx, 0xd71708
// 0049f095  ff157847b200         call dword ptr [0xb24778]
// 0049f09b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049f09f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049f0a3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0049f0a7  892d0c17d700         mov dword ptr [0xd7170c], ebp
// 0049f0ad  89151417d700         mov dword ptr [0xd71714], edx
// 0049f0b3  c7051017d70001000000 mov dword ptr [0xd71710], 1
// 0049f0bd  a31817d700           mov dword ptr [0xd71718], eax
// 0049f0c2  e80b334e00           call 0x9823d2
// 0049f0c7  8b4804               mov ecx, dword ptr [eax + 4]
// 0049f0ca  e8bb3b4e00           call 0x982c8a
// 0049f0cf  33ff                 xor edi, edi
// 0049f0d1  6a01                 push 1
// 0049f0d3  57                   push edi
// 0049f0d4  8d5e58               lea ebx, [esi + 0x58]
// 0049f0d7  57                   push edi
// 0049f0d8  8bcb                 mov ecx, ebx
// 0049f0da  897c2424             mov dword ptr [esp + 0x24], edi
// 0049f0de  e82de3ffff           call 0x49d410
// 0049f0e3  57                   push edi
// 0049f0e4  6a01                 push 1
// 0049f0e6  8bcb                 mov ecx, ebx
// 0049f0e8  e8b3e3ffff           call 0x49d4a0
// 0049f0ed  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049f0f1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049f0f5  a11017d700           mov eax, dword ptr [0xd71710]
// 0049f0fa  51                   push ecx
// 0049f0fb  52                   push edx
// 0049f0fc  897c2428             mov dword ptr [esp + 0x28], edi
// 0049f100  8b3e                 mov edi, dword ptr [esi]
// 0049f102  55                   push ebp
// 0049f103  50                   push eax
// 0049f104  b90417d700           mov ecx, 0xd71704
// 0049f109  81c7b4010000         add edi, 0x1b4
// 0049f10f  ff159847b200         call dword ptr [0xb24798]
// 0049f115  8b17                 mov edx, dword ptr [edi]
// 0049f117  50                   push eax
// 0049f118  8bce                 mov ecx, esi
// 0049f11a  ffd2                 call edx
// 0049f11c  85c0                 test eax, eax
// 0049f11e  7455                 je 0x49f175
// 0049f120  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0049f128  eb06                 jmp 0x49f130
// 0049f12a  8d9b00000000         lea ebx, [ebx]
// 0049f130  6a01                 push 1
// 0049f132  b90817d700           mov ecx, 0xd71708
// 0049f137  ff159847b200         call dword ptr [0xb24798]
// 0049f13d  50                   push eax
// 0049f13e  8bcb                 mov ecx, ebx
// 0049f140  e85be4ffff           call 0x49d5a0
// 0049f145  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049f149  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049f14d  8b151017d700         mov edx, dword ptr [0xd71710]
// 0049f153  8b3e                 mov edi, dword ptr [esi]
// 0049f155  50                   push eax
// 0049f156  51                   push ecx
// 0049f157  55                   push ebp
// 0049f158  52                   push edx
// 0049f159  b90417d700           mov ecx, 0xd71704
// 0049f15e  81c7b4010000         add edi, 0x1b4
// 0049f164  ff159847b200         call dword ptr [0xb24798]
// 0049f16a  50                   push eax
// 0049f16b  8b07                 mov eax, dword ptr [edi]
// 0049f16d  8bce                 mov ecx, esi
// 0049f16f  ffd0                 call eax
// 0049f171  85c0                 test eax, eax
// 0049f173  75bb                 jne 0x49f130
// 0049f175  6a00                 push 0
// 0049f177  6a00                 push 0
// 0049f179  8bcb                 mov ecx, ebx
// 0049f17b  e820e3ffff           call 0x49d4a0
// 0049f180  837c242000           cmp dword ptr [esp + 0x20], 0
// 0049f185  752d                 jne 0x49f1b4
// 0049f187  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049f18b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049f18f  a11017d700           mov eax, dword ptr [0xd71710]
// 0049f194  8b3e                 mov edi, dword ptr [esi]
// 0049f196  6a01                 push 1
// 0049f198  51                   push ecx
// 0049f199  52                   push edx
// 0049f19a  55                   push ebp
// 0049f19b  50                   push eax
// 0049f19c  b90417d700           mov ecx, 0xd71704
// 0049f1a1  81c7a8010000         add edi, 0x1a8
// 0049f1a7  ff159847b200         call dword ptr [0xb24798]
// 0049f1ad  8b17                 mov edx, dword ptr [edi]
// 0049f1af  50                   push eax
// 0049f1b0  8bce                 mov ecx, esi
// 0049f1b2  ffd2                 call edx
// 0049f1b4  8d4c2430             lea ecx, [esp + 0x30]
// 0049f1b8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0049f1c0  e8bbd3fcff           call 0x46c580
// 0049f1c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049f1c9  5f                   pop edi
// 0049f1ca  5e                   pop esi
// 0049f1cb  5d                   pop ebp
// 0049f1cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f1d3  5b                   pop ebx
// 0049f1d4  83c40c               add esp, 0xc
// 0049f1d7  c21400               ret 0x14
// copied from an identical function in another client (function ?replaceAll@View@@QAEXPBD0HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_replaceangleimportcast4a016e70e72eb016.cpp