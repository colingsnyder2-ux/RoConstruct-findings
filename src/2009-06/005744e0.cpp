// from server: 100% by auto
// roc 2009-06 005744e0  unit: G3D::GCamera  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005744e0
//
// 005744e0  53                   push ebx
// 005744e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005744e5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005744e8  55                   push ebp
// 005744e9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005744ed  394514               cmp dword ptr [ebp + 0x14], eax
// 005744f0  7257                 jb 0x574549
// 005744f2  56                   push esi
// 005744f3  33f6                 xor esi, esi
// 005744f5  57                   push edi
// 005744f6  85c0                 test eax, eax
// 005744f8  7e41                 jle 0x57453b
// 005744fa  3bf0                 cmp esi, eax
// 005744fc  7606                 jbe 0x574504
// 005744fe  ff15ace98900         call dword ptr [0x89e9ac]
// 00574504  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00574508  7205                 jb 0x57450f
// 0057450a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057450d  eb03                 jmp 0x574512
// 0057450f  8d7b04               lea edi, [ebx + 4]
// 00574512  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 00574515  7606                 jbe 0x57451d
// 00574517  ff15ace98900         call dword ptr [0x89e9ac]
// 0057451d  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00574521  7205                 jb 0x574528
// 00574523  8b4504               mov eax, dword ptr [ebp + 4]
// 00574526  eb03                 jmp 0x57452b
// 00574528  8d4504               lea eax, [ebp + 4]
// 0057452b  8a0c37               mov cl, byte ptr [edi + esi]
// 0057452e  3a0c30               cmp cl, byte ptr [eax + esi]
// 00574531  750f                 jne 0x574542
// 00574533  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00574536  46                   inc esi
// 00574537  3bf0                 cmp esi, eax
// 00574539  7cc1                 jl 0x5744fc
// 0057453b  5f                   pop edi
// 0057453c  5e                   pop esi
// 0057453d  5d                   pop ebp
// 0057453e  b001                 mov al, 1
// 00574540  5b                   pop ebx
// 00574541  c3                   ret 
// 00574542  5f                   pop edi
// 00574543  5e                   pop esi
// 00574544  5d                   pop ebp
// 00574545  32c0                 xor al, al
// 00574547  5b                   pop ebx
// 00574548  c3                   ret 
// 00574549  5d                   pop ebp
// 0057454a  32c0                 xor al, al
// 0057454c  5b                   pop ebx
// 0057454d  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
