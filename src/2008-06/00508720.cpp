// roc 2008-06 00508720  unit: G3D::Shader  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508720
//
// 00508720  64a100000000         mov eax, dword ptr fs:[0]
// 00508726  6aff                 push -1
// 00508728  6881757d00           push 0x7d7581
// 0050872d  50                   push eax
// 0050872e  64892500000000       mov dword ptr fs:[0], esp
// 00508735  83ec08               sub esp, 8
// 00508738  55                   push ebp
// 00508739  57                   push edi
// 0050873a  8bf9                 mov edi, ecx
// 0050873c  8b4708               mov eax, dword ptr [edi + 8]
// 0050873f  8b2f                 mov ebp, dword ptr [edi]
// 00508741  8d0cc500000000       lea ecx, [eax*8]
// 00508748  2bc8                 sub ecx, eax
// 0050874a  03c9                 add ecx, ecx
// 0050874c  03c9                 add ecx, ecx
// 0050874e  6a10                 push 0x10
// 00508750  51                   push ecx
// 00508751  e82afeffff           call 0x508580
// 00508756  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050875a  8907                 mov dword ptr [edi], eax
// 0050875c  8b7f08               mov edi, dword ptr [edi + 8]
// 0050875f  83c408               add esp, 8
// 00508762  3bd7                 cmp edx, edi
// 00508764  8bcf                 mov ecx, edi
// 00508766  7d02                 jge 0x50876a
// 00508768  8bca                 mov ecx, edx
// 0050876a  53                   push ebx
// 0050876b  56                   push esi
// 0050876c  8d34cd00000000       lea esi, [ecx*8]
// 00508773  2bf1                 sub esi, ecx
// 00508775  8d3cb0               lea edi, [eax + esi*4]
// 00508778  8bf0                 mov esi, eax
// 0050877a  8bdd                 mov ebx, ebp
// 0050877c  89742410             mov dword ptr [esp + 0x10], esi
// 00508780  3bf7                 cmp esi, edi
// 00508782  733f                 jae 0x5087c3
// 00508784  eb0a                 jmp 0x508790
// 00508786  8da42400000000       lea esp, [esp]
// 0050878d  8d4900               lea ecx, [ecx]
// 00508790  89742414             mov dword ptr [esp + 0x14], esi
// 00508794  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0050879c  85f6                 test esi, esi
// 0050879e  740d                 je 0x5087ad
// 005087a0  53                   push ebx
// 005087a1  8bce                 mov ecx, esi
// 005087a3  ff155c248000         call dword ptr [0x80245c]
// 005087a9  8b542428             mov edx, dword ptr [esp + 0x28]
// 005087ad  83c61c               add esi, 0x1c
// 005087b0  83c31c               add ebx, 0x1c
// 005087b3  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005087bb  89742410             mov dword ptr [esp + 0x10], esi
// 005087bf  3bf7                 cmp esi, edi
// 005087c1  72cd                 jb 0x508790
// 005087c3  8d04d500000000       lea eax, [edx*8]
// 005087ca  2bc2                 sub eax, edx
// 005087cc  8d7c8500             lea edi, [ebp + eax*4]
// 005087d0  8bf5                 mov esi, ebp
// 005087d2  3bef                 cmp ebp, edi
// 005087d4  730f                 jae 0x5087e5
// 005087d6  8bce                 mov ecx, esi
// 005087d8  ff1568248000         call dword ptr [0x802468]
// 005087de  83c61c               add esi, 0x1c
// 005087e1  3bf7                 cmp esi, edi
// 005087e3  72f1                 jb 0x5087d6
// 005087e5  5e                   pop esi
// 005087e6  5b                   pop ebx
// 005087e7  85ed                 test ebp, ebp
// 005087e9  740f                 je 0x5087fa
// 005087eb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005087ee  51                   push ecx
// 005087ef  8b0d14359700         mov ecx, dword ptr [0x973514]
// 005087f5  e806f4ffff           call 0x507c00
// 005087fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005087fe  5f                   pop edi
// 005087ff  5d                   pop ebp
// 00508800  64890d00000000       mov dword ptr fs:[0], ecx
// 00508807  83c414               add esp, 0x14
// 0050880a  c20400               ret 4
// library g3d-6.09/G3Dcpp\System.cpp (function ?realloc@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
