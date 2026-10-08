// from server: 100% by auto
// roc 2009-06 00574640  unit: G3D::GCamera  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574640
//
// 00574640  6aff                 push -1
// 00574642  680a068600           push 0x86060a
// 00574647  64a100000000         mov eax, dword ptr fs:[0]
// 0057464d  50                   push eax
// 0057464e  64892500000000       mov dword ptr fs:[0], esp
// 00574655  83ec24               sub esp, 0x24
// 00574658  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057465c  53                   push ebx
// 0057465d  55                   push ebp
// 0057465e  56                   push esi
// 0057465f  57                   push edi
// 00574660  33ff                 xor edi, edi
// 00574662  897c2410             mov dword ptr [esp + 0x10], edi
// 00574666  8b742444             mov esi, dword ptr [esp + 0x44]
// 0057466a  50                   push eax
// 0057466b  8bce                 mov ecx, esi
// 0057466d  897c2440             mov dword ptr [esp + 0x40], edi
// 00574671  ff15b8e48900         call dword ptr [0x89e4b8]
// 00574677  8d4c241c             lea ecx, [esp + 0x1c]
// 0057467b  51                   push ecx
// 0057467c  8bce                 mov ecx, esi
// 0057467e  897c2440             mov dword ptr [esp + 0x40], edi
// 00574682  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0057468a  ff15e8e48900         call dword ptr [0x89e4e8]
// 00574690  8b38                 mov edi, dword ptr [eax]
// 00574692  8b6804               mov ebp, dword ptr [eax + 4]
// 00574695  8d542424             lea edx, [esp + 0x24]
// 00574699  52                   push edx
// 0057469a  8bce                 mov ecx, esi
// 0057469c  ff15e4e48900         call dword ptr [0x89e4e4]
// 005746a2  8b08                 mov ecx, dword ptr [eax]
// 005746a4  8b5804               mov ebx, dword ptr [eax + 4]
// 005746a7  8d54242c             lea edx, [esp + 0x2c]
// 005746ab  894c2414             mov dword ptr [esp + 0x14], ecx
// 005746af  52                   push edx
// 005746b0  8bce                 mov ecx, esi
// 005746b2  ff15e8e48900         call dword ptr [0x89e4e8]
// 005746b8  8b08                 mov ecx, dword ptr [eax]
// 005746ba  8b4004               mov eax, dword ptr [eax + 4]
// 005746bd  894c2414             mov dword ptr [esp + 0x14], ecx
// 005746c1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005746c5  c644241400           mov byte ptr [esp + 0x14], 0
// 005746ca  8b542414             mov edx, dword ptr [esp + 0x14]
// 005746ce  52                   push edx
// 005746cf  8b15e8e88900         mov edx, dword ptr [0x89e8e8]
// 005746d5  51                   push ecx
// 005746d6  52                   push edx
// 005746d7  55                   push ebp
// 005746d8  57                   push edi
// 005746d9  53                   push ebx
// 005746da  50                   push eax
// 005746db  8d442430             lea eax, [esp + 0x30]
// 005746df  50                   push eax
// 005746e0  e80bc0efff           call 0x4706f0
// 005746e5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005746e9  83c420               add esp, 0x20
// 005746ec  5f                   pop edi
// 005746ed  8bc6                 mov eax, esi
// 005746ef  5e                   pop esi
// 005746f0  5d                   pop ebp
// 005746f1  5b                   pop ebx
// 005746f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005746f9  83c430               add esp, 0x30
// 005746fc  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
