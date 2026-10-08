// roc 2007-03 005e98c0  unit: seg_005e0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e98c0
//
// 005e98c0  6aff                 push -1
// 005e98c2  68a8c37500           push 0x75c3a8
// 005e98c7  64a100000000         mov eax, dword ptr fs:[0]
// 005e98cd  50                   push eax
// 005e98ce  64892500000000       mov dword ptr fs:[0], esp
// 005e98d5  51                   push ecx
// 005e98d6  56                   push esi
// 005e98d7  57                   push edi
// 005e98d8  8bf9                 mov edi, ecx
// 005e98da  897c2408             mov dword ptr [esp + 8], edi
// 005e98de  8b7718               mov esi, dword ptr [edi + 0x18]
// 005e98e1  85f6                 test esi, esi
// 005e98e3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e98eb  742a                 je 0x5e9917
// 005e98ed  8d4604               lea eax, [esi + 4]
// 005e98f0  83c9ff               or ecx, 0xffffffff
// 005e98f3  f00fc108             lock xadd dword ptr [eax], ecx
// 005e98f7  751e                 jne 0x5e9917
// 005e98f9  8b16                 mov edx, dword ptr [esi]
// 005e98fb  8b4204               mov eax, dword ptr [edx + 4]
// 005e98fe  8bce                 mov ecx, esi
// 005e9900  ffd0                 call eax
// 005e9902  8d4e08               lea ecx, [esi + 8]
// 005e9905  83caff               or edx, 0xffffffff
// 005e9908  f00fc111             lock xadd dword ptr [ecx], edx
// 005e990c  7509                 jne 0x5e9917
// 005e990e  8b06                 mov eax, dword ptr [esi]
// 005e9910  8b5008               mov edx, dword ptr [eax + 8]
// 005e9913  8bce                 mov ecx, esi
// 005e9915  ffd2                 call edx
// 005e9917  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e991b  c707c4fb7b00         mov dword ptr [edi], 0x7bfbc4
// 005e9921  5f                   pop edi
// 005e9922  5e                   pop esi
// 005e9923  64890d00000000       mov dword ptr fs:[0], ecx
// 005e992a  83c410               add esp, 0x10
// 005e992d  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1Balancing@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
