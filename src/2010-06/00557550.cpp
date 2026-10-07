// roc 2010-06 00557550  unit: seg_00550000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557550
//
// 00557550  6aff                 push -1
// 00557552  684c189900           push 0x99184c
// 00557557  64a100000000         mov eax, dword ptr fs:[0]
// 0055755d  50                   push eax
// 0055755e  64892500000000       mov dword ptr fs:[0], esp
// 00557565  83ec3c               sub esp, 0x3c
// 00557568  53                   push ebx
// 00557569  55                   push ebp
// 0055756a  56                   push esi
// 0055756b  33ed                 xor ebp, ebp
// 0055756d  57                   push edi
// 0055756e  8d4c2414             lea ecx, [esp + 0x14]
// 00557572  896c2410             mov dword ptr [esp + 0x10], ebp
// 00557576  ff1504a49e00         call dword ptr [0x9ea404]
// 0055757c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00557580  8b4604               mov eax, dword ptr [esi + 4]
// 00557583  48                   dec eax
// 00557584  bb01000000           mov ebx, 1
// 00557589  33ff                 xor edi, edi
// 0055758b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0055758f  85c0                 test eax, eax
// 00557591  7e48                 jle 0x5575db
// 00557593  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00557597  8b06                 mov eax, dword ptr [esi]
// 00557599  03c5                 add eax, ebp
// 0055759b  53                   push ebx
// 0055759c  50                   push eax
// 0055759d  8d442438             lea eax, [esp + 0x38]
// 005575a1  50                   push eax
// 005575a2  ff1594a69e00         call dword ptr [0x9ea694]
// 005575a8  83c40c               add esp, 0xc
// 005575ab  50                   push eax
// 005575ac  8d4c2418             lea ecx, [esp + 0x18]
// 005575b0  c644245802           mov byte ptr [esp + 0x58], 2
// 005575b5  ff1518a49e00         call dword ptr [0x9ea418]
// 005575bb  8d4c2430             lea ecx, [esp + 0x30]
// 005575bf  c644245401           mov byte ptr [esp + 0x54], 1
// 005575c4  ff1500a49e00         call dword ptr [0x9ea400]
// 005575ca  8b4604               mov eax, dword ptr [esi + 4]
// 005575cd  47                   inc edi
// 005575ce  48                   dec eax
// 005575cf  83c51c               add ebp, 0x1c
// 005575d2  3bf8                 cmp edi, eax
// 005575d4  7cc1                 jl 0x557597
// 005575d6  bb01000000           mov ebx, 1
// 005575db  8b4604               mov eax, dword ptr [esi + 4]
// 005575de  85c0                 test eax, eax
// 005575e0  7e25                 jle 0x557607
// 005575e2  8b16                 mov edx, dword ptr [esi]
// 005575e4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005575e8  8d0cc500000000       lea ecx, [eax*8]
// 005575ef  2bc8                 sub ecx, eax
// 005575f1  8d448ae4             lea eax, [edx + ecx*4 - 0x1c]
// 005575f5  50                   push eax
// 005575f6  8d442418             lea eax, [esp + 0x18]
// 005575fa  50                   push eax
// 005575fb  56                   push esi
// 005575fc  ff1504a79e00         call dword ptr [0x9ea704]
// 00557602  83c40c               add esp, 0xc
// 00557605  eb11                 jmp 0x557618
// 00557607  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0055760b  8d4c2414             lea ecx, [esp + 0x14]
// 0055760f  51                   push ecx
// 00557610  8bce                 mov ecx, esi
// 00557612  ff150ca49e00         call dword ptr [0x9ea40c]
// 00557618  8d4c2414             lea ecx, [esp + 0x14]
// 0055761c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00557620  c644245400           mov byte ptr [esp + 0x54], 0
// 00557625  ff1500a49e00         call dword ptr [0x9ea400]
// 0055762b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0055762f  5f                   pop edi
// 00557630  8bc6                 mov eax, esi
// 00557632  5e                   pop esi
// 00557633  5d                   pop ebp
// 00557634  5b                   pop ebx
// 00557635  64890d00000000       mov dword ptr fs:[0], ecx
// 0055763c  83c448               add esp, 0x48
// 0055763f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?stringJoin@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
