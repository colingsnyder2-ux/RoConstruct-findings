// roc 2007-03 004fd560  unit: seg_004f0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd560
//
// 004fd560  53                   push ebx
// 004fd561  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004fd565  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fd568  55                   push ebp
// 004fd569  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004fd56d  394514               cmp dword ptr [ebp + 0x14], eax
// 004fd570  7259                 jb 0x4fd5cb
// 004fd572  56                   push esi
// 004fd573  33f6                 xor esi, esi
// 004fd575  85c0                 test eax, eax
// 004fd577  57                   push edi
// 004fd578  7e43                 jle 0x4fd5bd
// 004fd57a  3bf0                 cmp esi, eax
// 004fd57c  7606                 jbe 0x4fd584
// 004fd57e  ff1544e97700         call dword ptr [0x77e944]
// 004fd584  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004fd588  7205                 jb 0x4fd58f
// 004fd58a  8b7b04               mov edi, dword ptr [ebx + 4]
// 004fd58d  eb03                 jmp 0x4fd592
// 004fd58f  8d7b04               lea edi, [ebx + 4]
// 004fd592  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 004fd595  7606                 jbe 0x4fd59d
// 004fd597  ff1544e97700         call dword ptr [0x77e944]
// 004fd59d  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 004fd5a1  7205                 jb 0x4fd5a8
// 004fd5a3  8b4504               mov eax, dword ptr [ebp + 4]
// 004fd5a6  eb03                 jmp 0x4fd5ab
// 004fd5a8  8d4504               lea eax, [ebp + 4]
// 004fd5ab  8a0c37               mov cl, byte ptr [edi + esi]
// 004fd5ae  3a0c30               cmp cl, byte ptr [eax + esi]
// 004fd5b1  7511                 jne 0x4fd5c4
// 004fd5b3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 004fd5b6  83c601               add esi, 1
// 004fd5b9  3bf0                 cmp esi, eax
// 004fd5bb  7cbf                 jl 0x4fd57c
// 004fd5bd  5f                   pop edi
// 004fd5be  5e                   pop esi
// 004fd5bf  5d                   pop ebp
// 004fd5c0  b001                 mov al, 1
// 004fd5c2  5b                   pop ebx
// 004fd5c3  c3                   ret 
// 004fd5c4  5f                   pop edi
// 004fd5c5  5e                   pop esi
// 004fd5c6  5d                   pop ebp
// 004fd5c7  32c0                 xor al, al
// 004fd5c9  5b                   pop ebx
// 004fd5ca  c3                   ret 
// 004fd5cb  5d                   pop ebp
// 004fd5cc  32c0                 xor al, al
// 004fd5ce  5b                   pop ebx
// 004fd5cf  c3                   ret 
// library rbxgs-g3d/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/stringutils.cpp
