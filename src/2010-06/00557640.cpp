// from server: 100% by auto
// roc 2010-06 00557640  unit: seg_00550000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557640
//
// 00557640  6aff                 push -1
// 00557642  680a139900           push 0x99130a
// 00557647  64a100000000         mov eax, dword ptr fs:[0]
// 0055764d  50                   push eax
// 0055764e  64892500000000       mov dword ptr fs:[0], esp
// 00557655  83ec24               sub esp, 0x24
// 00557658  8b442438             mov eax, dword ptr [esp + 0x38]
// 0055765c  53                   push ebx
// 0055765d  55                   push ebp
// 0055765e  56                   push esi
// 0055765f  57                   push edi
// 00557660  33ff                 xor edi, edi
// 00557662  897c2410             mov dword ptr [esp + 0x10], edi
// 00557666  8b742444             mov esi, dword ptr [esp + 0x44]
// 0055766a  50                   push eax
// 0055766b  8bce                 mov ecx, esi
// 0055766d  897c2440             mov dword ptr [esp + 0x40], edi
// 00557671  ff150ca49e00         call dword ptr [0x9ea40c]
// 00557677  8d4c241c             lea ecx, [esp + 0x1c]
// 0055767b  51                   push ecx
// 0055767c  8bce                 mov ecx, esi
// 0055767e  897c2440             mov dword ptr [esp + 0x40], edi
// 00557682  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0055768a  ff1540a59e00         call dword ptr [0x9ea540]
// 00557690  8b38                 mov edi, dword ptr [eax]
// 00557692  8b6804               mov ebp, dword ptr [eax + 4]
// 00557695  8d542424             lea edx, [esp + 0x24]
// 00557699  52                   push edx
// 0055769a  8bce                 mov ecx, esi
// 0055769c  ff153ca59e00         call dword ptr [0x9ea53c]
// 005576a2  8b08                 mov ecx, dword ptr [eax]
// 005576a4  8b5804               mov ebx, dword ptr [eax + 4]
// 005576a7  8d54242c             lea edx, [esp + 0x2c]
// 005576ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 005576af  52                   push edx
// 005576b0  8bce                 mov ecx, esi
// 005576b2  ff1540a59e00         call dword ptr [0x9ea540]
// 005576b8  8b08                 mov ecx, dword ptr [eax]
// 005576ba  8b4004               mov eax, dword ptr [eax + 4]
// 005576bd  894c2414             mov dword ptr [esp + 0x14], ecx
// 005576c1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005576c5  c644241400           mov byte ptr [esp + 0x14], 0
// 005576ca  8b542414             mov edx, dword ptr [esp + 0x14]
// 005576ce  52                   push edx
// 005576cf  8b15a0a89e00         mov edx, dword ptr [0x9ea8a0]
// 005576d5  51                   push ecx
// 005576d6  52                   push edx
// 005576d7  55                   push ebp
// 005576d8  57                   push edi
// 005576d9  53                   push ebx
// 005576da  50                   push eax
// 005576db  8d442430             lea eax, [esp + 0x30]
// 005576df  50                   push eax
// 005576e0  e8cb96f2ff           call 0x480db0
// 005576e5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005576e9  83c420               add esp, 0x20
// 005576ec  5f                   pop edi
// 005576ed  8bc6                 mov eax, esi
// 005576ef  5e                   pop esi
// 005576f0  5d                   pop ebp
// 005576f1  5b                   pop ebx
// 005576f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005576f9  83c430               add esp, 0x30
// 005576fc  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
