// roc 2007-08 00602540  unit: RBX::Running  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602540
//
// 00602540  6aff                 push -1
// 00602542  6898d27500           push 0x75d298
// 00602547  64a100000000         mov eax, dword ptr fs:[0]
// 0060254d  50                   push eax
// 0060254e  64892500000000       mov dword ptr fs:[0], esp
// 00602555  51                   push ecx
// 00602556  56                   push esi
// 00602557  57                   push edi
// 00602558  8bf9                 mov edi, ecx
// 0060255a  897c2408             mov dword ptr [esp + 8], edi
// 0060255e  8b7718               mov esi, dword ptr [edi + 0x18]
// 00602561  85f6                 test esi, esi
// 00602563  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060256b  742a                 je 0x602597
// 0060256d  8d4604               lea eax, [esi + 4]
// 00602570  83c9ff               or ecx, 0xffffffff
// 00602573  f00fc108             lock xadd dword ptr [eax], ecx
// 00602577  751e                 jne 0x602597
// 00602579  8b16                 mov edx, dword ptr [esi]
// 0060257b  8b4204               mov eax, dword ptr [edx + 4]
// 0060257e  8bce                 mov ecx, esi
// 00602580  ffd0                 call eax
// 00602582  8d4e08               lea ecx, [esi + 8]
// 00602585  83caff               or edx, 0xffffffff
// 00602588  f00fc111             lock xadd dword ptr [ecx], edx
// 0060258c  7509                 jne 0x602597
// 0060258e  8b06                 mov eax, dword ptr [esi]
// 00602590  8b5008               mov edx, dword ptr [eax + 8]
// 00602593  8bce                 mov ecx, esi
// 00602595  ffd2                 call edx
// 00602597  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060259b  c707542b7c00         mov dword ptr [edi], 0x7c2b54
// 006025a1  5f                   pop edi
// 006025a2  5e                   pop esi
// 006025a3  64890d00000000       mov dword ptr fs:[0], ecx
// 006025aa  83c410               add esp, 0x10
// 006025ad  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1Balancing@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
