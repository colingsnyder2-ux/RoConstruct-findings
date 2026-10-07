// roc 2009-06 00574550  unit: G3D::GCamera  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574550
//
// 00574550  6aff                 push -1
// 00574552  688cf58500           push 0x85f58c
// 00574557  64a100000000         mov eax, dword ptr fs:[0]
// 0057455d  50                   push eax
// 0057455e  64892500000000       mov dword ptr fs:[0], esp
// 00574565  83ec3c               sub esp, 0x3c
// 00574568  53                   push ebx
// 00574569  55                   push ebp
// 0057456a  56                   push esi
// 0057456b  33ed                 xor ebp, ebp
// 0057456d  57                   push edi
// 0057456e  8d4c2414             lea ecx, [esp + 0x14]
// 00574572  896c2410             mov dword ptr [esp + 0x10], ebp
// 00574576  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057457c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00574580  8b4604               mov eax, dword ptr [esi + 4]
// 00574583  48                   dec eax
// 00574584  bb01000000           mov ebx, 1
// 00574589  33ff                 xor edi, edi
// 0057458b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0057458f  85c0                 test eax, eax
// 00574591  7e48                 jle 0x5745db
// 00574593  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00574597  8b06                 mov eax, dword ptr [esi]
// 00574599  03c5                 add eax, ebp
// 0057459b  53                   push ebx
// 0057459c  50                   push eax
// 0057459d  8d442438             lea eax, [esp + 0x38]
// 005745a1  50                   push eax
// 005745a2  ff1534e58900         call dword ptr [0x89e534]
// 005745a8  83c40c               add esp, 0xc
// 005745ab  50                   push eax
// 005745ac  8d4c2418             lea ecx, [esp + 0x18]
// 005745b0  c644245802           mov byte ptr [esp + 0x58], 2
// 005745b5  ff15ace48900         call dword ptr [0x89e4ac]
// 005745bb  8d4c2430             lea ecx, [esp + 0x30]
// 005745bf  c644245401           mov byte ptr [esp + 0x54], 1
// 005745c4  ff15c4e48900         call dword ptr [0x89e4c4]
// 005745ca  8b4604               mov eax, dword ptr [esi + 4]
// 005745cd  47                   inc edi
// 005745ce  48                   dec eax
// 005745cf  83c51c               add ebp, 0x1c
// 005745d2  3bf8                 cmp edi, eax
// 005745d4  7cc1                 jl 0x574597
// 005745d6  bb01000000           mov ebx, 1
// 005745db  8b4604               mov eax, dword ptr [esi + 4]
// 005745de  85c0                 test eax, eax
// 005745e0  7e25                 jle 0x574607
// 005745e2  8b16                 mov edx, dword ptr [esi]
// 005745e4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005745e8  8d0cc500000000       lea ecx, [eax*8]
// 005745ef  2bc8                 sub ecx, eax
// 005745f1  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 005745f5  50                   push eax
// 005745f6  8d442418             lea eax, [esp + 0x18]
// 005745fa  50                   push eax
// 005745fb  56                   push esi
// 005745fc  ff150ce58900         call dword ptr [0x89e50c]
// 00574602  83c40c               add esp, 0xc
// 00574605  eb11                 jmp 0x574618
// 00574607  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0057460b  8d4c2414             lea ecx, [esp + 0x14]
// 0057460f  51                   push ecx
// 00574610  8bce                 mov ecx, esi
// 00574612  ff15b8e48900         call dword ptr [0x89e4b8]
// 00574618  8d4c2414             lea ecx, [esp + 0x14]
// 0057461c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00574620  c644245400           mov byte ptr [esp + 0x54], 0
// 00574625  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057462b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057462f  5f                   pop edi
// 00574630  8bc6                 mov eax, esi
// 00574632  5e                   pop esi
// 00574633  5d                   pop ebp
// 00574634  5b                   pop ebx
// 00574635  64890d00000000       mov dword ptr fs:[0], ecx
// 0057463c  83c448               add esp, 0x48
// 0057463f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
