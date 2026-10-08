// roc 2009-12 005f34b0  unit: seg_005f0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f34b0
//
// 005f34b0  53                   push ebx
// 005f34b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005f34b5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005f34b8  55                   push ebp
// 005f34b9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005f34bd  394514               cmp dword ptr [ebp + 0x14], eax
// 005f34c0  7257                 jb 0x5f3519
// 005f34c2  56                   push esi
// 005f34c3  33f6                 xor esi, esi
// 005f34c5  57                   push edi
// 005f34c6  85c0                 test eax, eax
// 005f34c8  7e41                 jle 0x5f350b
// 005f34ca  3bf0                 cmp esi, eax
// 005f34cc  7606                 jbe 0x5f34d4
// 005f34ce  ff1560b79800         call dword ptr [0x98b760]
// 005f34d4  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005f34d8  7205                 jb 0x5f34df
// 005f34da  8b7b04               mov edi, dword ptr [ebx + 4]
// 005f34dd  eb03                 jmp 0x5f34e2
// 005f34df  8d7b04               lea edi, [ebx + 4]
// 005f34e2  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 005f34e5  7606                 jbe 0x5f34ed
// 005f34e7  ff1560b79800         call dword ptr [0x98b760]
// 005f34ed  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005f34f1  7205                 jb 0x5f34f8
// 005f34f3  8b4504               mov eax, dword ptr [ebp + 4]
// 005f34f6  eb03                 jmp 0x5f34fb
// 005f34f8  8d4504               lea eax, [ebp + 4]
// 005f34fb  8a0c37               mov cl, byte ptr [edi + esi]
// 005f34fe  3a0c30               cmp cl, byte ptr [eax + esi]
// 005f3501  750f                 jne 0x5f3512
// 005f3503  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005f3506  46                   inc esi
// 005f3507  3bf0                 cmp esi, eax
// 005f3509  7cc1                 jl 0x5f34cc
// 005f350b  5f                   pop edi
// 005f350c  5e                   pop esi
// 005f350d  5d                   pop ebp
// 005f350e  b001                 mov al, 1
// 005f3510  5b                   pop ebx
// 005f3511  c3                   ret 
// 005f3512  5f                   pop edi
// 005f3513  5e                   pop esi
// 005f3514  5d                   pop ebp
// 005f3515  32c0                 xor al, al
// 005f3517  5b                   pop ebx
// 005f3518  c3                   ret 
// 005f3519  5d                   pop ebp
// 005f351a  32c0                 xor al, al
// 005f351c  5b                   pop ebx
// 005f351d  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
