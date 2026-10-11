// roc 2007-08 0058cff0  unit: RBX::SoundService  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058cff0
//
// 0058cff0  6aff                 push -1
// 0058cff2  685c657500           push 0x75655c
// 0058cff7  64a100000000         mov eax, dword ptr fs:[0]
// 0058cffd  50                   push eax
// 0058cffe  64892500000000       mov dword ptr fs:[0], esp
// 0058d005  83ec20               sub esp, 0x20
// 0058d008  53                   push ebx
// 0058d009  56                   push esi
// 0058d00a  57                   push edi
// 0058d00b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0058d00f  33db                 xor ebx, ebx
// 0058d011  895c240c             mov dword ptr [esp + 0xc], ebx
// 0058d015  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0058d019  57                   push edi
// 0058d01a  56                   push esi
// 0058d01b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0058d01f  e8dc35ffff           call 0x580600
// 0058d024  83c408               add esp, 8
// 0058d027  6840cc7800           push 0x78cc40
// 0058d02c  8bce                 mov ecx, esi
// 0058d02e  895c2438             mov dword ptr [esp + 0x38], ebx
// 0058d032  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0058d03a  ff1560e67700         call dword ptr [0x77e660]
// 0058d040  8d4704               lea eax, [edi + 4]
// 0058d043  50                   push eax
// 0058d044  8d4c2414             lea ecx, [esp + 0x14]
// 0058d048  51                   push ecx
// 0058d049  e8b235ffff           call 0x580600
// 0058d04e  83c408               add esp, 8
// 0058d051  50                   push eax
// 0058d052  8bce                 mov ecx, esi
// 0058d054  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0058d05c  ff1564e67700         call dword ptr [0x77e664]
// 0058d062  8d4c2410             lea ecx, [esp + 0x10]
// 0058d066  885c2434             mov byte ptr [esp + 0x34], bl
// 0058d06a  ff15ace67700         call dword ptr [0x77e6ac]
// 0058d070  6840cc7800           push 0x78cc40
// 0058d075  8bce                 mov ecx, esi
// 0058d077  ff1560e67700         call dword ptr [0x77e660]
// 0058d07d  83c708               add edi, 8
// 0058d080  8d542410             lea edx, [esp + 0x10]
// 0058d084  57                   push edi
// 0058d085  52                   push edx
// 0058d086  e87535ffff           call 0x580600
// 0058d08b  83c408               add esp, 8
// 0058d08e  50                   push eax
// 0058d08f  8bce                 mov ecx, esi
// 0058d091  c744243802000000     mov dword ptr [esp + 0x38], 2
// 0058d099  ff1564e67700         call dword ptr [0x77e664]
// 0058d09f  8d4c2410             lea ecx, [esp + 0x10]
// 0058d0a3  885c2434             mov byte ptr [esp + 0x34], bl
// 0058d0a7  ff15ace67700         call dword ptr [0x77e6ac]
// 0058d0ad  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058d0b1  5f                   pop edi
// 0058d0b2  8bc6                 mov eax, esi
// 0058d0b4  5e                   pop esi
// 0058d0b5  5b                   pop ebx
// 0058d0b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d0bd  83c42c               add esp, 0x2c
// 0058d0c0  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
