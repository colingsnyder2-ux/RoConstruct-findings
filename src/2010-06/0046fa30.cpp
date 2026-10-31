// roc 2010-06 0046fa30  unit: Scintilla::CScintillaView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046fa30
//
// 0046fa30  64a100000000         mov eax, dword ptr fs:[0]
// 0046fa36  6aff                 push -1
// 0046fa38  68c8459800           push 0x9845c8
// 0046fa3d  50                   push eax
// 0046fa3e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046fa42  64892500000000       mov dword ptr fs:[0], esp
// 0046fa49  53                   push ebx
// 0046fa4a  55                   push ebp
// 0046fa4b  56                   push esi
// 0046fa4c  57                   push edi
// 0046fa4d  8bf1                 mov esi, ecx
// 0046fa4f  50                   push eax
// 0046fa50  b9f04eb800           mov ecx, 0xb84ef0
// 0046fa55  ff158cce9e00         call dword ptr [0x9ece8c]
// 0046fa5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046fa5f  51                   push ecx
// 0046fa60  b9f44eb800           mov ecx, 0xb84ef4
// 0046fa65  ff158cce9e00         call dword ptr [0x9ece8c]
// 0046fa6b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046fa6f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0046fa73  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0046fa77  892df84eb800         mov dword ptr [0xb84ef8], ebp
// 0046fa7d  8915004fb800         mov dword ptr [0xb84f00], edx
// 0046fa83  c705fc4eb80001000000 mov dword ptr [0xb84efc], 1
// 0046fa8d  a3044fb800           mov dword ptr [0xb84f04], eax
// 0046fa92  e8c7813300           call 0x7a7c5e
// 0046fa97  8b4804               mov ecx, dword ptr [eax + 4]
// 0046fa9a  e8a18a3300           call 0x7a8540
// 0046fa9f  33ff                 xor edi, edi
// 0046faa1  6a01                 push 1
// 0046faa3  57                   push edi
// 0046faa4  8d5e58               lea ebx, [esi + 0x58]
// 0046faa7  57                   push edi
// 0046faa8  8bcb                 mov ecx, ebx
// 0046faaa  897c2424             mov dword ptr [esp + 0x24], edi
// 0046faae  e81de3ffff           call 0x46ddd0
// 0046fab3  57                   push edi
// 0046fab4  6a01                 push 1
// 0046fab6  8bcb                 mov ecx, ebx
// 0046fab8  e8a3e3ffff           call 0x46de60
// 0046fabd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0046fac1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046fac5  a1fc4eb800           mov eax, dword ptr [0xb84efc]
// 0046faca  51                   push ecx
// 0046facb  52                   push edx
// 0046facc  897c2428             mov dword ptr [esp + 0x28], edi
// 0046fad0  8b3e                 mov edi, dword ptr [esi]
// 0046fad2  55                   push ebp
// 0046fad3  50                   push eax
// 0046fad4  b9f04eb800           mov ecx, 0xb84ef0
// 0046fad9  81c7b4010000         add edi, 0x1b4
// 0046fadf  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046fae5  8b17                 mov edx, dword ptr [edi]
// 0046fae7  50                   push eax
// 0046fae8  8bce                 mov ecx, esi
// 0046faea  ffd2                 call edx
// 0046faec  85c0                 test eax, eax
// 0046faee  7455                 je 0x46fb45
// 0046faf0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0046faf8  eb06                 jmp 0x46fb00
// 0046fafa  8d9b00000000         lea ebx, [ebx]
// 0046fb00  6a01                 push 1
// 0046fb02  b9f44eb800           mov ecx, 0xb84ef4
// 0046fb07  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046fb0d  50                   push eax
// 0046fb0e  8bcb                 mov ecx, ebx
// 0046fb10  e84be4ffff           call 0x46df60
// 0046fb15  8b442430             mov eax, dword ptr [esp + 0x30]
// 0046fb19  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046fb1d  8b15fc4eb800         mov edx, dword ptr [0xb84efc]
// 0046fb23  8b3e                 mov edi, dword ptr [esi]
// 0046fb25  50                   push eax
// 0046fb26  51                   push ecx
// 0046fb27  55                   push ebp
// 0046fb28  52                   push edx
// 0046fb29  b9f04eb800           mov ecx, 0xb84ef0
// 0046fb2e  81c7b4010000         add edi, 0x1b4
// 0046fb34  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046fb3a  50                   push eax
// 0046fb3b  8b07                 mov eax, dword ptr [edi]
// 0046fb3d  8bce                 mov ecx, esi
// 0046fb3f  ffd0                 call eax
// 0046fb41  85c0                 test eax, eax
// 0046fb43  75bb                 jne 0x46fb00
// 0046fb45  6a00                 push 0
// 0046fb47  6a00                 push 0
// 0046fb49  8bcb                 mov ecx, ebx
// 0046fb4b  e810e3ffff           call 0x46de60
// 0046fb50  837c242000           cmp dword ptr [esp + 0x20], 0
// 0046fb55  752d                 jne 0x46fb84
// 0046fb57  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0046fb5b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046fb5f  a1fc4eb800           mov eax, dword ptr [0xb84efc]
// 0046fb64  8b3e                 mov edi, dword ptr [esi]
// 0046fb66  6a01                 push 1
// 0046fb68  51                   push ecx
// 0046fb69  52                   push edx
// 0046fb6a  55                   push ebp
// 0046fb6b  50                   push eax
// 0046fb6c  b9f04eb800           mov ecx, 0xb84ef0
// 0046fb71  81c7a8010000         add edi, 0x1a8
// 0046fb77  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046fb7d  8b17                 mov edx, dword ptr [edi]
// 0046fb7f  50                   push eax
// 0046fb80  8bce                 mov ecx, esi
// 0046fb82  ffd2                 call edx
// 0046fb84  8d4c2430             lea ecx, [esp + 0x30]
// 0046fb88  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046fb90  e89bcafdff           call 0x44c630
// 0046fb95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046fb99  5f                   pop edi
// 0046fb9a  5e                   pop esi
// 0046fb9b  5d                   pop ebp
// 0046fb9c  64890d00000000       mov dword ptr fs:[0], ecx
// 0046fba3  5b                   pop ebx
// 0046fba4  83c40c               add esp, 0xc
// 0046fba7  c21400               ret 0x14
// copied from an identical function in another client (function ?replaceAll@View@@QAEXPBD0HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_replaceangleimportcast4a016e70e72eb016.cpp