// roc 2009-12 005f3520  unit: seg_005f0000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3520
//
// 005f3520  6aff                 push -1
// 005f3522  68bcfb9300           push 0x93fbbc
// 005f3527  64a100000000         mov eax, dword ptr fs:[0]
// 005f352d  50                   push eax
// 005f352e  64892500000000       mov dword ptr fs:[0], esp
// 005f3535  83ec3c               sub esp, 0x3c
// 005f3538  53                   push ebx
// 005f3539  55                   push ebp
// 005f353a  56                   push esi
// 005f353b  33ed                 xor ebp, ebp
// 005f353d  57                   push edi
// 005f353e  8d4c2414             lea ecx, [esp + 0x14]
// 005f3542  896c2410             mov dword ptr [esp + 0x10], ebp
// 005f3546  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f354c  8b742460             mov esi, dword ptr [esp + 0x60]
// 005f3550  8b4604               mov eax, dword ptr [esi + 4]
// 005f3553  48                   dec eax
// 005f3554  bb01000000           mov ebx, 1
// 005f3559  33ff                 xor edi, edi
// 005f355b  895c2454             mov dword ptr [esp + 0x54], ebx
// 005f355f  85c0                 test eax, eax
// 005f3561  7e48                 jle 0x5f35ab
// 005f3563  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 005f3567  8b06                 mov eax, dword ptr [esi]
// 005f3569  03c5                 add eax, ebp
// 005f356b  53                   push ebx
// 005f356c  50                   push eax
// 005f356d  8d442438             lea eax, [esp + 0x38]
// 005f3571  50                   push eax
// 005f3572  ff1578b59800         call dword ptr [0x98b578]
// 005f3578  83c40c               add esp, 0xc
// 005f357b  50                   push eax
// 005f357c  8d4c2418             lea ecx, [esp + 0x18]
// 005f3580  c644245802           mov byte ptr [esp + 0x58], 2
// 005f3585  ff15fcb69800         call dword ptr [0x98b6fc]
// 005f358b  8d4c2430             lea ecx, [esp + 0x30]
// 005f358f  c644245401           mov byte ptr [esp + 0x54], 1
// 005f3594  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f359a  8b4604               mov eax, dword ptr [esi + 4]
// 005f359d  47                   inc edi
// 005f359e  48                   dec eax
// 005f359f  83c51c               add ebp, 0x1c
// 005f35a2  3bf8                 cmp edi, eax
// 005f35a4  7cc1                 jl 0x5f3567
// 005f35a6  bb01000000           mov ebx, 1
// 005f35ab  8b4604               mov eax, dword ptr [esi + 4]
// 005f35ae  85c0                 test eax, eax
// 005f35b0  7e25                 jle 0x5f35d7
// 005f35b2  8b16                 mov edx, dword ptr [esi]
// 005f35b4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005f35b8  8d0cc500000000       lea ecx, [eax*8]
// 005f35bf  2bc8                 sub ecx, eax
// 005f35c1  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 005f35c5  50                   push eax
// 005f35c6  8d442418             lea eax, [esp + 0x18]
// 005f35ca  50                   push eax
// 005f35cb  56                   push esi
// 005f35cc  ff159cb59800         call dword ptr [0x98b59c]
// 005f35d2  83c40c               add esp, 0xc
// 005f35d5  eb11                 jmp 0x5f35e8
// 005f35d7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005f35db  8d4c2414             lea ecx, [esp + 0x14]
// 005f35df  51                   push ecx
// 005f35e0  8bce                 mov ecx, esi
// 005f35e2  ff15f0b69800         call dword ptr [0x98b6f0]
// 005f35e8  8d4c2414             lea ecx, [esp + 0x14]
// 005f35ec  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f35f0  c644245400           mov byte ptr [esp + 0x54], 0
// 005f35f5  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f35fb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005f35ff  5f                   pop edi
// 005f3600  8bc6                 mov eax, esi
// 005f3602  5e                   pop esi
// 005f3603  5d                   pop ebp
// 005f3604  5b                   pop ebx
// 005f3605  64890d00000000       mov dword ptr fs:[0], ecx
// 005f360c  83c448               add esp, 0x48
// 005f360f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
