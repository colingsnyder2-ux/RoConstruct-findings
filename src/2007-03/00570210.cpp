// roc 2007-03 00570210  unit: seg_00570000  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570210
//
// 00570210  6aff                 push -1
// 00570212  68085d7500           push 0x755d08
// 00570217  64a100000000         mov eax, dword ptr fs:[0]
// 0057021d  50                   push eax
// 0057021e  64892500000000       mov dword ptr fs:[0], esp
// 00570225  83ec10               sub esp, 0x10
// 00570228  53                   push ebx
// 00570229  55                   push ebp
// 0057022a  56                   push esi
// 0057022b  57                   push edi
// 0057022c  8bf1                 mov esi, ecx
// 0057022e  e89df8ffff           call 0x56fad0
// 00570233  8bc8                 mov ecx, eax
// 00570235  89442410             mov dword ptr [esp + 0x10], eax
// 00570239  e842681b00           call 0x726a80
// 0057023e  c644241401           mov byte ptr [esp + 0x14], 1
// 00570243  8b5e08               mov ebx, dword ptr [esi + 8]
// 00570246  395e04               cmp dword ptr [esi + 4], ebx
// 00570249  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0057024f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00570257  7602                 jbe 0x57025b
// 00570259  ffd5                 call ebp
// 0057025b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057025e  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570261  7602                 jbe 0x570265
// 00570263  ffd5                 call ebp
// 00570265  6a00                 push 0
// 00570267  68e0065700           push 0x5706e0
// 0057026c  8d442438             lea eax, [esp + 0x38]
// 00570270  50                   push eax
// 00570271  53                   push ebx
// 00570272  57                   push edi
// 00570273  897c2430             mov dword ptr [esp + 0x30], edi
// 00570277  e844f9ffff           call 0x56fbc0
// 0057027c  8b7e08               mov edi, dword ptr [esi + 8]
// 0057027f  83c414               add esp, 0x14
// 00570282  397e04               cmp dword ptr [esi + 4], edi
// 00570285  8bd8                 mov ebx, eax
// 00570287  7602                 jbe 0x57028b
// 00570289  ffd5                 call ebp
// 0057028b  85f6                 test esi, esi
// 0057028d  7404                 je 0x570293
// 0057028f  3bf6                 cmp esi, esi
// 00570291  7402                 je 0x570295
// 00570293  ffd5                 call ebp
// 00570295  3bdf                 cmp ebx, edi
// 00570297  7415                 je 0x5702ae
// 00570299  85f6                 test esi, esi
// 0057029b  7502                 jne 0x57029f
// 0057029d  ffd5                 call ebp
// 0057029f  3b5e08               cmp ebx, dword ptr [esi + 8]
// 005702a2  7202                 jb 0x5702a6
// 005702a4  ffd5                 call ebp
// 005702a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005702aa  390b                 cmp dword ptr [ebx], ecx
// 005702ac  7413                 je 0x5702c1
// 005702ae  8d542430             lea edx, [esp + 0x30]
// 005702b2  52                   push edx
// 005702b3  53                   push ebx
// 005702b4  56                   push esi
// 005702b5  8d442424             lea eax, [esp + 0x24]
// 005702b9  50                   push eax
// 005702ba  8bce                 mov ecx, esi
// 005702bc  e8af060000           call 0x570970
// 005702c1  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005702c4  83c610               add esi, 0x10
// 005702c7  3b7e08               cmp edi, dword ptr [esi + 8]
// 005702ca  7604                 jbe 0x5702d0
// 005702cc  ffd5                 call ebp
// 005702ce  8bff                 mov edi, edi
// 005702d0  8b5e08               mov ebx, dword ptr [esi + 8]
// 005702d3  395e04               cmp dword ptr [esi + 4], ebx
// 005702d6  7602                 jbe 0x5702da
// 005702d8  ffd5                 call ebp
// 005702da  3bf6                 cmp esi, esi
// 005702dc  7402                 je 0x5702e0
// 005702de  ffd5                 call ebp
// 005702e0  3bfb                 cmp edi, ebx
// 005702e2  741f                 je 0x570303
// 005702e4  3b7e08               cmp edi, dword ptr [esi + 8]
// 005702e7  7202                 jb 0x5702eb
// 005702e9  ffd5                 call ebp
// 005702eb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005702ef  51                   push ecx
// 005702f0  8b0f                 mov ecx, dword ptr [edi]
// 005702f2  e819ffffff           call 0x570210
// 005702f7  3b7e08               cmp edi, dword ptr [esi + 8]
// 005702fa  7202                 jb 0x5702fe
// 005702fc  ffd5                 call ebp
// 005702fe  83c704               add edi, 4
// 00570301  ebcd                 jmp 0x5702d0
// 00570303  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570307  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0057030f  e88c671b00           call 0x726aa0
// 00570314  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00570318  5f                   pop edi
// 00570319  5e                   pop esi
// 0057031a  5d                   pop ebp
// 0057031b  5b                   pop ebx
// 0057031c  64890d00000000       mov dword ptr fs:[0], ecx
// 00570323  83c41c               add esp, 0x1c
// 00570326  c20400               ret 4
// library openrbx-client/App\reflection\reflection_function.cpp (function ?declare@?$MemberDescriptorContainer@VFunctionDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVFunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
