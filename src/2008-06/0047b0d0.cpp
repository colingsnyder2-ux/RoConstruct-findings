// from server: 100% by auto
// roc 2008-06 0047b0d0  unit: CInstanceRecord::CNameItem  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047b0d0
//
// 0047b0d0  55                   push ebp
// 0047b0d1  8bec                 mov ebp, esp
// 0047b0d3  83e4f8               and esp, 0xfffffff8
// 0047b0d6  6aff                 push -1
// 0047b0d8  68a44b7c00           push 0x7c4ba4
// 0047b0dd  64a100000000         mov eax, dword ptr fs:[0]
// 0047b0e3  50                   push eax
// 0047b0e4  64892500000000       mov dword ptr fs:[0], esp
// 0047b0eb  83ec08               sub esp, 8
// 0047b0ee  53                   push ebx
// 0047b0ef  56                   push esi
// 0047b0f0  8b7508               mov esi, dword ptr [ebp + 8]
// 0047b0f3  57                   push edi
// 0047b0f4  8bd9                 mov ebx, ecx
// 0047b0f6  56                   push esi
// 0047b0f7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0047b0fb  e800d8ffff           call 0x478900
// 0047b100  d986a0020000         fld dword ptr [esi + 0x2a0]
// 0047b106  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 0047b10c  d986a4020000         fld dword ptr [esi + 0x2a4]
// 0047b112  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 0047b118  d986a8020000         fld dword ptr [esi + 0x2a8]
// 0047b11e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 0047b124  d986ac020000         fld dword ptr [esi + 0x2ac]
// 0047b12a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 0047b130  d986b0020000         fld dword ptr [esi + 0x2b0]
// 0047b136  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 0047b13c  d986b4020000         fld dword ptr [esi + 0x2b4]
// 0047b142  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 0047b148  d986b8020000         fld dword ptr [esi + 0x2b8]
// 0047b14e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 0047b154  d986bc020000         fld dword ptr [esi + 0x2bc]
// 0047b15a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 0047b160  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 0047b167  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 0047b16d  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 0047b173  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 0047b179  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 0047b17f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 0047b185  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 0047b18c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 0047b192  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 0047b198  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 0047b19e  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 0047b1a4  c70100000000         mov dword ptr [ecx], 0
// 0047b1aa  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 0047b1b0  52                   push edx
// 0047b1b1  e8eadd1100           call 0x598fa0
// 0047b1b6  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 0047b1bc  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 0047b1c2  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 0047b1c8  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 0047b1ce  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 0047b1d4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 0047b1da  81c6fc020000         add esi, 0x2fc
// 0047b1e0  dd46e4               fld qword ptr [esi - 0x1c]
// 0047b1e3  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 0047b1e9  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 0047b1ef  b909000000           mov ecx, 9
// 0047b1f4  d946ec               fld dword ptr [esi - 0x14]
// 0047b1f7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0047b1ff  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 0047b205  d946f0               fld dword ptr [esi - 0x10]
// 0047b208  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 0047b20e  d946f4               fld dword ptr [esi - 0xc]
// 0047b211  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 0047b217  d946f8               fld dword ptr [esi - 8]
// 0047b21a  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 0047b220  8b56fc               mov edx, dword ptr [esi - 4]
// 0047b223  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 0047b229  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047b22b  8b7508               mov esi, dword ptr [ebp + 8]
// 0047b22e  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 0047b234  898320030000         mov dword ptr [ebx + 0x320], eax
// 0047b23a  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 0047b240  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 0047b246  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 0047b24c  899328030000         mov dword ptr [ebx + 0x328], edx
// 0047b252  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 0047b258  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 0047b25e  dd8630030000         fld qword ptr [esi + 0x330]
// 0047b264  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 0047b26a  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 0047b270  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 0047b276  d9863c030000         fld dword ptr [esi + 0x33c]
// 0047b27c  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 0047b282  d98640030000         fld dword ptr [esi + 0x340]
// 0047b288  d99b40030000         fstp dword ptr [ebx + 0x340]
// 0047b28e  d98644030000         fld dword ptr [esi + 0x344]
// 0047b294  d99b44030000         fstp dword ptr [ebx + 0x344]
// 0047b29a  8d8b60030000         lea ecx, [ebx + 0x360]
// 0047b2a0  dd8648030000         fld qword ptr [esi + 0x348]
// 0047b2a6  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 0047b2ac  dd8650030000         fld qword ptr [esi + 0x350]
// 0047b2b2  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 0047b2b8  dd8658030000         fld qword ptr [esi + 0x358]
// 0047b2be  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 0047b2c4  c70100000000         mov dword ptr [ecx], 0
// 0047b2ca  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 0047b2d0  52                   push edx
// 0047b2d1  e8cadc1100           call 0x598fa0
// 0047b2d6  8d8b64030000         lea ecx, [ebx + 0x364]
// 0047b2dc  c70100000000         mov dword ptr [ecx], 0
// 0047b2e2  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 0047b2e8  50                   push eax
// 0047b2e9  c644242001           mov byte ptr [esp + 0x20], 1
// 0047b2ee  e8addc1100           call 0x598fa0
// 0047b2f3  8d8b68030000         lea ecx, [ebx + 0x368]
// 0047b2f9  c70100000000         mov dword ptr [ecx], 0
// 0047b2ff  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 0047b305  52                   push edx
// 0047b306  c644242002           mov byte ptr [esp + 0x20], 2
// 0047b30b  e890dc1100           call 0x598fa0
// 0047b310  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 0047b316  c70100000000         mov dword ptr [ecx], 0
// 0047b31c  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 0047b322  50                   push eax
// 0047b323  c644242003           mov byte ptr [esp + 0x20], 3
// 0047b328  e873dc1100           call 0x598fa0
// 0047b32d  8d8b70030000         lea ecx, [ebx + 0x370]
// 0047b333  c70100000000         mov dword ptr [ecx], 0
// 0047b339  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 0047b33f  52                   push edx
// 0047b340  c644242004           mov byte ptr [esp + 0x20], 4
// 0047b345  e856dc1100           call 0x598fa0
// 0047b34a  dd8678030000         fld qword ptr [esi + 0x378]
// 0047b350  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 0047b356  6840764d00           push 0x4d7640
// 0047b35b  dd8680030000         fld qword ptr [esi + 0x380]
// 0047b361  68f0934700           push 0x4793f0
// 0047b366  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 0047b36c  6a08                 push 8
// 0047b36e  d98688030000         fld dword ptr [esi + 0x388]
// 0047b374  6a5c                 push 0x5c
// 0047b376  d99b88030000         fstp dword ptr [ebx + 0x388]
// 0047b37c  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 0047b382  d9868c030000         fld dword ptr [esi + 0x38c]
// 0047b388  51                   push ecx
// 0047b389  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 0047b38f  8d93a8030000         lea edx, [ebx + 0x3a8]
// 0047b395  d98690030000         fld dword ptr [esi + 0x390]
// 0047b39b  52                   push edx
// 0047b39c  d99b90030000         fstp dword ptr [ebx + 0x390]
// 0047b3a2  c644243405           mov byte ptr [esp + 0x34], 5
// 0047b3a7  d98694030000         fld dword ptr [esi + 0x394]
// 0047b3ad  d99b94030000         fstp dword ptr [ebx + 0x394]
// 0047b3b3  d98698030000         fld dword ptr [esi + 0x398]
// 0047b3b9  d99b98030000         fstp dword ptr [ebx + 0x398]
// 0047b3bf  d9869c030000         fld dword ptr [esi + 0x39c]
// 0047b3c5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 0047b3cb  d986a0030000         fld dword ptr [esi + 0x3a0]
// 0047b3d1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 0047b3d7  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 0047b3dd  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 0047b3e3  e8ce672200           call 0x6a1bb6
// 0047b3e8  81c688060000         add esi, 0x688
// 0047b3ee  56                   push esi
// 0047b3ef  8d8b88060000         lea ecx, [ebx + 0x688]
// 0047b3f5  e8c6c7ffff           call 0x477bc0
// 0047b3fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047b3fe  5f                   pop edi
// 0047b3ff  5e                   pop esi
// 0047b400  8bc3                 mov eax, ebx
// 0047b402  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b409  5b                   pop ebx
// 0047b40a  8be5                 mov esp, ebp
// 0047b40c  5d                   pop ebp
// 0047b40d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
