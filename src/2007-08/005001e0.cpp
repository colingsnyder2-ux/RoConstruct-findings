// roc 2007-08 005001e0  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005001e0
//
// 005001e0  6aff                 push -1
// 005001e2  68215f7400           push 0x745f21
// 005001e7  64a100000000         mov eax, dword ptr fs:[0]
// 005001ed  50                   push eax
// 005001ee  83ec08               sub esp, 8
// 005001f1  53                   push ebx
// 005001f2  55                   push ebp
// 005001f3  56                   push esi
// 005001f4  57                   push edi
// 005001f5  a188518b00           mov eax, dword ptr [0x8b5188]
// 005001fa  33c4                 xor eax, esp
// 005001fc  50                   push eax
// 005001fd  8d44241c             lea eax, [esp + 0x1c]
// 00500201  64a300000000         mov dword ptr fs:[0], eax
// 00500207  8bf9                 mov edi, ecx
// 00500209  8b4708               mov eax, dword ptr [edi + 8]
// 0050020c  8b2f                 mov ebp, dword ptr [edi]
// 0050020e  8d0cc500000000       lea ecx, [eax*8]
// 00500215  2bc8                 sub ecx, eax
// 00500217  03c9                 add ecx, ecx
// 00500219  03c9                 add ecx, ecx
// 0050021b  6a10                 push 0x10
// 0050021d  51                   push ecx
// 0050021e  e83dfeffff           call 0x500060
// 00500223  8b4f08               mov ecx, dword ptr [edi + 8]
// 00500226  8b542434             mov edx, dword ptr [esp + 0x34]
// 0050022a  83c408               add esp, 8
// 0050022d  3bd1                 cmp edx, ecx
// 0050022f  8907                 mov dword ptr [edi], eax
// 00500231  7d02                 jge 0x500235
// 00500233  8bca                 mov ecx, edx
// 00500235  8d34cd00000000       lea esi, [ecx*8]
// 0050023c  2bf1                 sub esi, ecx
// 0050023e  8d3cb0               lea edi, [eax + esi*4]
// 00500241  8bf0                 mov esi, eax
// 00500243  3bf7                 cmp esi, edi
// 00500245  8bdd                 mov ebx, ebp
// 00500247  89742414             mov dword ptr [esp + 0x14], esi
// 0050024b  7336                 jae 0x500283
// 0050024d  8d4900               lea ecx, [ecx]
// 00500250  89742418             mov dword ptr [esp + 0x18], esi
// 00500254  85f6                 test esi, esi
// 00500256  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0050025e  740d                 je 0x50026d
// 00500260  53                   push ebx
// 00500261  8bce                 mov ecx, esi
// 00500263  ff159ce67700         call dword ptr [0x77e69c]
// 00500269  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0050026d  83c61c               add esi, 0x1c
// 00500270  83c31c               add ebx, 0x1c
// 00500273  3bf7                 cmp esi, edi
// 00500275  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0050027d  89742414             mov dword ptr [esp + 0x14], esi
// 00500281  72cd                 jb 0x500250
// 00500283  8d04d500000000       lea eax, [edx*8]
// 0050028a  2bc2                 sub eax, edx
// 0050028c  8d7c8500             lea edi, [ebp + eax*4]
// 00500290  3bef                 cmp ebp, edi
// 00500292  8bf5                 mov esi, ebp
// 00500294  730f                 jae 0x5002a5
// 00500296  8bce                 mov ecx, esi
// 00500298  ff15ace67700         call dword ptr [0x77e6ac]
// 0050029e  83c61c               add esi, 0x1c
// 005002a1  3bf7                 cmp esi, edi
// 005002a3  72f1                 jb 0x500296
// 005002a5  55                   push ebp
// 005002a6  e865f5ffff           call 0x4ff810
// 005002ab  83c404               add esp, 4
// 005002ae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005002b2  64890d00000000       mov dword ptr fs:[0], ecx
// 005002b9  59                   pop ecx
// 005002ba  5f                   pop edi
// 005002bb  5e                   pop esi
// 005002bc  5d                   pop ebp
// 005002bd  5b                   pop ebx
// 005002be  83c414               add esp, 0x14
// 005002c1  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
