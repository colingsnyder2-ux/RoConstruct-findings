// from server: 100% by auto
// roc 2010-06 005574e0  unit: seg_00550000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005574e0
//
// 005574e0  53                   push ebx
// 005574e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005574e5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005574e8  55                   push ebp
// 005574e9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005574ed  394514               cmp dword ptr [ebp + 0x14], eax
// 005574f0  7257                 jb 0x557549
// 005574f2  56                   push esi
// 005574f3  33f6                 xor esi, esi
// 005574f5  57                   push edi
// 005574f6  85c0                 test eax, eax
// 005574f8  7e41                 jle 0x55753b
// 005574fa  3bf0                 cmp esi, eax
// 005574fc  7606                 jbe 0x557504
// 005574fe  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557504  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557508  7205                 jb 0x55750f
// 0055750a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0055750d  eb03                 jmp 0x557512
// 0055750f  8d7b04               lea edi, [ebx + 4]
// 00557512  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 00557515  7606                 jbe 0x55751d
// 00557517  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055751d  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00557521  7205                 jb 0x557528
// 00557523  8b4504               mov eax, dword ptr [ebp + 4]
// 00557526  eb03                 jmp 0x55752b
// 00557528  8d4504               lea eax, [ebp + 4]
// 0055752b  8a0c37               mov cl, byte ptr [edi + esi]
// 0055752e  3a0c30               cmp cl, byte ptr [eax + esi]
// 00557531  750f                 jne 0x557542
// 00557533  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00557536  46                   inc esi
// 00557537  3bf0                 cmp esi, eax
// 00557539  7cc1                 jl 0x5574fc
// 0055753b  5f                   pop edi
// 0055753c  5e                   pop esi
// 0055753d  5d                   pop ebp
// 0055753e  b001                 mov al, 1
// 00557540  5b                   pop ebx
// 00557541  c3                   ret 
// 00557542  5f                   pop edi
// 00557543  5e                   pop esi
// 00557544  5d                   pop ebp
// 00557545  32c0                 xor al, al
// 00557547  5b                   pop ebx
// 00557548  c3                   ret 
// 00557549  5d                   pop ebp
// 0055754a  32c0                 xor al, al
// 0055754c  5b                   pop ebx
// 0055754d  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
