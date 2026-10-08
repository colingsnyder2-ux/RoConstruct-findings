// roc 2010-06 00496570  unit: seg_00490000  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00496570
//
// 00496570  6aff                 push -1
// 00496572  68766a9800           push 0x986a76
// 00496577  64a100000000         mov eax, dword ptr fs:[0]
// 0049657d  50                   push eax
// 0049657e  64892500000000       mov dword ptr fs:[0], esp
// 00496585  81ecbc070000         sub esp, 0x7bc
// 0049658b  53                   push ebx
// 0049658c  55                   push ebp
// 0049658d  56                   push esi
// 0049658e  8bf1                 mov esi, ecx
// 00496590  57                   push edi
// 00496591  8dbe20010000         lea edi, [esi + 0x120]
// 00496597  57                   push edi
// 00496598  8d4c2470             lea ecx, [esp + 0x70]
// 0049659c  e84ff5ffff           call 0x495af0
// 004965a1  0f57c0               xorps xmm0, xmm0
// 004965a4  33c0                 xor eax, eax
// 004965a6  6a40                 push 0x40
// 004965a8  50                   push eax
// 004965a9  898424dc070000       mov dword ptr [esp + 0x7dc], eax
// 004965b0  89442428             mov dword ptr [esp + 0x28], eax
// 004965b4  8d44242c             lea eax, [esp + 0x2c]
// 004965b8  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 004965be  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004965c4  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004965ca  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004965d0  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 004965d8  50                   push eax
// 004965d9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004965df  c744247004000000     mov dword ptr [esp + 0x70], 4
// 004965e7  e8f8253100           call 0x7a8be4
// 004965ec  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 004965f4  83c40c               add esp, 0xc
// 004965f7  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004965fd  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00496603  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 00496609  f30f11442460         movss dword ptr [esp + 0x60], xmm0
// 0049660f  8b9c24dc070000       mov ebx, dword ptr [esp + 0x7dc]
// 00496616  8bd3                 mov edx, ebx
// 00496618  6bd25c               imul edx, edx, 0x5c
// 0049661b  8d4c2410             lea ecx, [esp + 0x10]
// 0049661f  51                   push ecx
// 00496620  8d8c32c8040000       lea ecx, [edx + esi + 0x4c8]
// 00496627  c68424d807000001     mov byte ptr [esp + 0x7d8], 1
// 0049662f  e8ecceffff           call 0x493520
// 00496634  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00496638  c68424d407000000     mov byte ptr [esp + 0x7d4], 0
// 00496640  85ed                 test ebp, ebp
// 00496642  7420                 je 0x496664
// 00496644  8d4504               lea eax, [ebp + 4]
// 00496647  50                   push eax
// 00496648  ff157ca39e00         call dword ptr [0x9ea37c]
// 0049664e  85c0                 test eax, eax
// 00496650  7512                 jne 0x496664
// 00496652  8bcd                 mov ecx, ebp
// 00496654  e8c7d4feff           call 0x483b20
// 00496659  8b4500               mov eax, dword ptr [ebp]
// 0049665c  8b10                 mov edx, dword ptr [eax]
// 0049665e  6a01                 push 1
// 00496660  8bcd                 mov ecx, ebp
// 00496662  ffd2                 call edx
// 00496664  8b87a4030000         mov eax, dword ptr [edi + 0x3a4]
// 0049666a  3bc3                 cmp eax, ebx
// 0049666c  7d02                 jge 0x496670
// 0049666e  8bc3                 mov eax, ebx
// 00496670  8987a4030000         mov dword ptr [edi + 0x3a4], eax
// 00496676  8d44246c             lea eax, [esp + 0x6c]
// 0049667a  50                   push eax
// 0049667b  8bce                 mov ecx, esi
// 0049667d  e8aee8ffff           call 0x494f30
// 00496682  8d4c246c             lea ecx, [esp + 0x6c]
// 00496686  c78424d4070000ffffffff mov dword ptr [esp + 0x7d4], 0xffffffff
// 00496691  e8dadcffff           call 0x494370
// 00496696  8b8c24cc070000       mov ecx, dword ptr [esp + 0x7cc]
// 0049669d  5f                   pop edi
// 0049669e  5e                   pop esi
// 0049669f  5d                   pop ebp
// 004966a0  5b                   pop ebx
// 004966a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004966a8  81c4c8070000         add esp, 0x7c8
// 004966ae  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?resetTextureUnit@RenderDevice@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
