// roc 2008-06 005120b0  unit: G3D::GCamera  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005120b0
//
// 005120b0  53                   push ebx
// 005120b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005120b5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005120b8  55                   push ebp
// 005120b9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005120bd  394514               cmp dword ptr [ebp + 0x14], eax
// 005120c0  7257                 jb 0x512119
// 005120c2  56                   push esi
// 005120c3  33f6                 xor esi, esi
// 005120c5  57                   push edi
// 005120c6  85c0                 test eax, eax
// 005120c8  7e41                 jle 0x51210b
// 005120ca  3bf0                 cmp esi, eax
// 005120cc  7606                 jbe 0x5120d4
// 005120ce  ff1590288000         call dword ptr [0x802890]
// 005120d4  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005120d8  7205                 jb 0x5120df
// 005120da  8b7b04               mov edi, dword ptr [ebx + 4]
// 005120dd  eb03                 jmp 0x5120e2
// 005120df  8d7b04               lea edi, [ebx + 4]
// 005120e2  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 005120e5  7606                 jbe 0x5120ed
// 005120e7  ff1590288000         call dword ptr [0x802890]
// 005120ed  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005120f1  7205                 jb 0x5120f8
// 005120f3  8b4504               mov eax, dword ptr [ebp + 4]
// 005120f6  eb03                 jmp 0x5120fb
// 005120f8  8d4504               lea eax, [ebp + 4]
// 005120fb  8a0c37               mov cl, byte ptr [edi + esi]
// 005120fe  3a0c30               cmp cl, byte ptr [eax + esi]
// 00512101  750f                 jne 0x512112
// 00512103  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512106  46                   inc esi
// 00512107  3bf0                 cmp esi, eax
// 00512109  7cc1                 jl 0x5120cc
// 0051210b  5f                   pop edi
// 0051210c  5e                   pop esi
// 0051210d  5d                   pop ebp
// 0051210e  b001                 mov al, 1
// 00512110  5b                   pop ebx
// 00512111  c3                   ret 
// 00512112  5f                   pop edi
// 00512113  5e                   pop esi
// 00512114  5d                   pop ebp
// 00512115  32c0                 xor al, al
// 00512117  5b                   pop ebx
// 00512118  c3                   ret 
// 00512119  5d                   pop ebp
// 0051211a  32c0                 xor al, al
// 0051211c  5b                   pop ebx
// 0051211d  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
