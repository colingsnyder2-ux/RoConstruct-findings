// roc 2009-12 005f3610  unit: seg_005f0000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3610
//
// 005f3610  6aff                 push -1
// 005f3612  682af59300           push 0x93f52a
// 005f3617  64a100000000         mov eax, dword ptr fs:[0]
// 005f361d  50                   push eax
// 005f361e  64892500000000       mov dword ptr fs:[0], esp
// 005f3625  83ec24               sub esp, 0x24
// 005f3628  8b442438             mov eax, dword ptr [esp + 0x38]
// 005f362c  53                   push ebx
// 005f362d  55                   push ebp
// 005f362e  56                   push esi
// 005f362f  57                   push edi
// 005f3630  33ff                 xor edi, edi
// 005f3632  897c2410             mov dword ptr [esp + 0x10], edi
// 005f3636  8b742444             mov esi, dword ptr [esp + 0x44]
// 005f363a  50                   push eax
// 005f363b  8bce                 mov ecx, esi
// 005f363d  897c2440             mov dword ptr [esp + 0x40], edi
// 005f3641  ff15f0b69800         call dword ptr [0x98b6f0]
// 005f3647  8d4c241c             lea ecx, [esp + 0x1c]
// 005f364b  51                   push ecx
// 005f364c  8bce                 mov ecx, esi
// 005f364e  897c2440             mov dword ptr [esp + 0x40], edi
// 005f3652  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005f365a  ff15d0b59800         call dword ptr [0x98b5d0]
// 005f3660  8b38                 mov edi, dword ptr [eax]
// 005f3662  8b6804               mov ebp, dword ptr [eax + 4]
// 005f3665  8d542424             lea edx, [esp + 0x24]
// 005f3669  52                   push edx
// 005f366a  8bce                 mov ecx, esi
// 005f366c  ff15d4b59800         call dword ptr [0x98b5d4]
// 005f3672  8b08                 mov ecx, dword ptr [eax]
// 005f3674  8b5804               mov ebx, dword ptr [eax + 4]
// 005f3677  8d54242c             lea edx, [esp + 0x2c]
// 005f367b  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f367f  52                   push edx
// 005f3680  8bce                 mov ecx, esi
// 005f3682  ff15d0b59800         call dword ptr [0x98b5d0]
// 005f3688  8b08                 mov ecx, dword ptr [eax]
// 005f368a  8b4004               mov eax, dword ptr [eax + 4]
// 005f368d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f3691  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005f3695  c644241400           mov byte ptr [esp + 0x14], 0
// 005f369a  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f369e  52                   push edx
// 005f369f  8b15a0b79800         mov edx, dword ptr [0x98b7a0]
// 005f36a5  51                   push ecx
// 005f36a6  52                   push edx
// 005f36a7  55                   push ebp
// 005f36a8  57                   push edi
// 005f36a9  53                   push ebx
// 005f36aa  50                   push eax
// 005f36ab  8d442430             lea eax, [esp + 0x30]
// 005f36af  50                   push eax
// 005f36b0  e81b73e8ff           call 0x47a9d0
// 005f36b5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005f36b9  83c420               add esp, 0x20
// 005f36bc  5f                   pop edi
// 005f36bd  8bc6                 mov eax, esi
// 005f36bf  5e                   pop esi
// 005f36c0  5d                   pop ebp
// 005f36c1  5b                   pop ebx
// 005f36c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005f36c9  83c430               add esp, 0x30
// 005f36cc  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
