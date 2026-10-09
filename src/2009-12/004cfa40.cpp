// roc 2009-12 004cfa40  unit: G3D::PBVTextureFormat::?$Table  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cfa40
//
// 004cfa40  6aff                 push -1
// 004cfa42  68e6309300           push 0x9330e6
// 004cfa47  64a100000000         mov eax, dword ptr fs:[0]
// 004cfa4d  50                   push eax
// 004cfa4e  64892500000000       mov dword ptr fs:[0], esp
// 004cfa55  81ecbc070000         sub esp, 0x7bc
// 004cfa5b  53                   push ebx
// 004cfa5c  55                   push ebp
// 004cfa5d  56                   push esi
// 004cfa5e  8bf1                 mov esi, ecx
// 004cfa60  57                   push edi
// 004cfa61  8dbe20010000         lea edi, [esi + 0x120]
// 004cfa67  57                   push edi
// 004cfa68  8d4c2470             lea ecx, [esp + 0x70]
// 004cfa6c  e84ff5ffff           call 0x4cefc0
// 004cfa71  0f57c0               xorps xmm0, xmm0
// 004cfa74  33c0                 xor eax, eax
// 004cfa76  6a40                 push 0x40
// 004cfa78  50                   push eax
// 004cfa79  898424dc070000       mov dword ptr [esp + 0x7dc], eax
// 004cfa80  89442428             mov dword ptr [esp + 0x28], eax
// 004cfa84  8d44242c             lea eax, [esp + 0x2c]
// 004cfa88  f30f11442470         movss dword ptr [esp + 0x70], xmm0
// 004cfa8e  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004cfa94  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004cfa9a  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004cfaa0  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cfaa8  50                   push eax
// 004cfaa9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004cfaaf  c744247004000000     mov dword ptr [esp + 0x70], 4
// 004cfab7  e8e84f3200           call 0x7f4aa4
// 004cfabc  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cfac4  83c40c               add esp, 0xc
// 004cfac7  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004cfacd  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004cfad3  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 004cfad9  f30f11442460         movss dword ptr [esp + 0x60], xmm0
// 004cfadf  8b9c24dc070000       mov ebx, dword ptr [esp + 0x7dc]
// 004cfae6  8bd3                 mov edx, ebx
// 004cfae8  6bd25c               imul edx, edx, 0x5c
// 004cfaeb  8d4c2410             lea ecx, [esp + 0x10]
// 004cfaef  51                   push ecx
// 004cfaf0  8d8c32c8040000       lea ecx, [edx + esi + 0x4c8]
// 004cfaf7  c68424d807000001     mov byte ptr [esp + 0x7d8], 1
// 004cfaff  e8acceffff           call 0x4cc9b0
// 004cfb04  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004cfb08  c68424d407000000     mov byte ptr [esp + 0x7d4], 0
// 004cfb10  85ed                 test ebp, ebp
// 004cfb12  7420                 je 0x4cfb34
// 004cfb14  8d4504               lea eax, [ebp + 4]
// 004cfb17  50                   push eax
// 004cfb18  ff1508b29800         call dword ptr [0x98b208]
// 004cfb1e  85c0                 test eax, eax
// 004cfb20  7512                 jne 0x4cfb34
// 004cfb22  8bcd                 mov ecx, ebp
// 004cfb24  e8f7b4f7ff           call 0x44b020
// 004cfb29  8b4500               mov eax, dword ptr [ebp]
// 004cfb2c  8b10                 mov edx, dword ptr [eax]
// 004cfb2e  6a01                 push 1
// 004cfb30  8bcd                 mov ecx, ebp
// 004cfb32  ffd2                 call edx
// 004cfb34  8b87a4030000         mov eax, dword ptr [edi + 0x3a4]
// 004cfb3a  3bc3                 cmp eax, ebx
// 004cfb3c  7d02                 jge 0x4cfb40
// 004cfb3e  8bc3                 mov eax, ebx
// 004cfb40  8987a4030000         mov dword ptr [edi + 0x3a4], eax
// 004cfb46  8d44246c             lea eax, [esp + 0x6c]
// 004cfb4a  50                   push eax
// 004cfb4b  8bce                 mov ecx, esi
// 004cfb4d  e8aee8ffff           call 0x4ce400
// 004cfb52  8d4c246c             lea ecx, [esp + 0x6c]
// 004cfb56  c78424d4070000ffffffff mov dword ptr [esp + 0x7d4], 0xffffffff
// 004cfb61  e8dadcffff           call 0x4cd840
// 004cfb66  8b8c24cc070000       mov ecx, dword ptr [esp + 0x7cc]
// 004cfb6d  5f                   pop edi
// 004cfb6e  5e                   pop esi
// 004cfb6f  5d                   pop ebp
// 004cfb70  5b                   pop ebx
// 004cfb71  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfb78  81c4c8070000         add esp, 0x7c8
// 004cfb7e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?resetTextureUnit@RenderDevice@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
