// roc 2009-12 005fadf0  unit: G3D::TextInput::TokenException  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fadf0
//
// 005fadf0  6aff                 push -1
// 005fadf2  68d9f89300           push 0x93f8d9
// 005fadf7  64a100000000         mov eax, dword ptr fs:[0]
// 005fadfd  50                   push eax
// 005fadfe  64892500000000       mov dword ptr fs:[0], esp
// 005fae05  83ec20               sub esp, 0x20
// 005fae08  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fae0c  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fae10  55                   push ebp
// 005fae11  56                   push esi
// 005fae12  57                   push edi
// 005fae13  8bf1                 mov esi, ecx
// 005fae15  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005fae19  50                   push eax
// 005fae1a  51                   push ecx
// 005fae1b  52                   push edx
// 005fae1c  8bce                 mov ecx, esi
// 005fae1e  89742418             mov dword ptr [esp + 0x18], esi
// 005fae22  e889fdffff           call 0x5fabb0
// 005fae27  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005fae2b  55                   push ebp
// 005fae2c  8d4e44               lea ecx, [esi + 0x44]
// 005fae2f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005fae37  c706182e9c00         mov dword ptr [esi], 0x9c2e18
// 005fae3d  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fae43  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 005fae47  57                   push edi
// 005fae48  8d4e60               lea ecx, [esi + 0x60]
// 005fae4b  c644243801           mov byte ptr [esp + 0x38], 1
// 005fae50  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fae56  b810000000           mov eax, 0x10
// 005fae5b  c644243402           mov byte ptr [esp + 0x34], 2
// 005fae60  394718               cmp dword ptr [edi + 0x18], eax
// 005fae63  7205                 jb 0x5fae6a
// 005fae65  8b7f04               mov edi, dword ptr [edi + 4]
// 005fae68  eb03                 jmp 0x5fae6d
// 005fae6a  83c704               add edi, 4
// 005fae6d  394518               cmp dword ptr [ebp + 0x18], eax
// 005fae70  7205                 jb 0x5fae77
// 005fae72  8b4504               mov eax, dword ptr [ebp + 4]
// 005fae75  eb03                 jmp 0x5fae7a
// 005fae77  8d4504               lea eax, [ebp + 4]
// 005fae7a  57                   push edi
// 005fae7b  50                   push eax
// 005fae7c  8d442418             lea eax, [esp + 0x18]
// 005fae80  68e82d9c00           push 0x9c2de8
// 005fae85  50                   push eax
// 005fae86  e8b5eaffff           call 0x5f9940
// 005fae8b  83c410               add esp, 0x10
// 005fae8e  50                   push eax
// 005fae8f  8d4e28               lea ecx, [esi + 0x28]
// 005fae92  c644243803           mov byte ptr [esp + 0x38], 3
// 005fae97  ff15fcb69800         call dword ptr [0x98b6fc]
// 005fae9d  8d4c2410             lea ecx, [esp + 0x10]
// 005faea1  c644243402           mov byte ptr [esp + 0x34], 2
// 005faea6  ff15e4b69800         call dword ptr [0x98b6e4]
// 005faeac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005faeb0  5f                   pop edi
// 005faeb1  8bc6                 mov eax, esi
// 005faeb3  5e                   pop esi
// 005faeb4  5d                   pop ebp
// 005faeb5  64890d00000000       mov dword ptr fs:[0], ecx
// 005faebc  83c42c               add esp, 0x2c
// 005faebf  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
