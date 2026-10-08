// from server: 100% by auto
// roc 2010-06 00495af0  unit: seg_00490000  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00495af0
//
// 00495af0  55                   push ebp
// 00495af1  8bec                 mov ebp, esp
// 00495af3  83e4f8               and esp, 0xfffffff8
// 00495af6  6aff                 push -1
// 00495af8  68246a9800           push 0x986a24
// 00495afd  64a100000000         mov eax, dword ptr fs:[0]
// 00495b03  50                   push eax
// 00495b04  64892500000000       mov dword ptr fs:[0], esp
// 00495b0b  83ec08               sub esp, 8
// 00495b0e  53                   push ebx
// 00495b0f  56                   push esi
// 00495b10  8b7508               mov esi, dword ptr [ebp + 8]
// 00495b13  57                   push edi
// 00495b14  8bd9                 mov ebx, ecx
// 00495b16  56                   push esi
// 00495b17  895c2410             mov dword ptr [esp + 0x10], ebx
// 00495b1b  e8a0d5ffff           call 0x4930c0
// 00495b20  d986a0020000         fld dword ptr [esi + 0x2a0]
// 00495b26  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 00495b2c  d986a4020000         fld dword ptr [esi + 0x2a4]
// 00495b32  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 00495b38  d986a8020000         fld dword ptr [esi + 0x2a8]
// 00495b3e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 00495b44  d986ac020000         fld dword ptr [esi + 0x2ac]
// 00495b4a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 00495b50  d986b0020000         fld dword ptr [esi + 0x2b0]
// 00495b56  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 00495b5c  d986b4020000         fld dword ptr [esi + 0x2b4]
// 00495b62  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 00495b68  d986b8020000         fld dword ptr [esi + 0x2b8]
// 00495b6e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 00495b74  d986bc020000         fld dword ptr [esi + 0x2bc]
// 00495b7a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00495b80  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 00495b87  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 00495b8d  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 00495b93  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00495b99  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 00495b9f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00495ba5  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 00495bac  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00495bb2  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 00495bb8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 00495bbe  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 00495bc4  c70100000000         mov dword ptr [ecx], 0
// 00495bca  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 00495bd0  52                   push edx
// 00495bd1  e84a11ffff           call 0x486d20
// 00495bd6  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 00495bdc  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 00495be2  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 00495be8  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 00495bee  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 00495bf4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 00495bfa  81c6fc020000         add esi, 0x2fc
// 00495c00  dd46e4               fld qword ptr [esi - 0x1c]
// 00495c03  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 00495c09  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 00495c0f  b909000000           mov ecx, 9
// 00495c14  d946ec               fld dword ptr [esi - 0x14]
// 00495c17  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00495c1f  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 00495c25  d946f0               fld dword ptr [esi - 0x10]
// 00495c28  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 00495c2e  d946f4               fld dword ptr [esi - 0xc]
// 00495c31  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 00495c37  d946f8               fld dword ptr [esi - 8]
// 00495c3a  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 00495c40  8b56fc               mov edx, dword ptr [esi - 4]
// 00495c43  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 00495c49  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00495c4b  8b7508               mov esi, dword ptr [ebp + 8]
// 00495c4e  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 00495c54  898320030000         mov dword ptr [ebx + 0x320], eax
// 00495c5a  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 00495c60  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 00495c66  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 00495c6c  899328030000         mov dword ptr [ebx + 0x328], edx
// 00495c72  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 00495c78  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 00495c7e  dd8630030000         fld qword ptr [esi + 0x330]
// 00495c84  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 00495c8a  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 00495c90  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00495c96  d9863c030000         fld dword ptr [esi + 0x33c]
// 00495c9c  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00495ca2  d98640030000         fld dword ptr [esi + 0x340]
// 00495ca8  d99b40030000         fstp dword ptr [ebx + 0x340]
// 00495cae  d98644030000         fld dword ptr [esi + 0x344]
// 00495cb4  d99b44030000         fstp dword ptr [ebx + 0x344]
// 00495cba  8d8b60030000         lea ecx, [ebx + 0x360]
// 00495cc0  dd8648030000         fld qword ptr [esi + 0x348]
// 00495cc6  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 00495ccc  dd8650030000         fld qword ptr [esi + 0x350]
// 00495cd2  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 00495cd8  dd8658030000         fld qword ptr [esi + 0x358]
// 00495cde  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 00495ce4  c70100000000         mov dword ptr [ecx], 0
// 00495cea  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 00495cf0  52                   push edx
// 00495cf1  e82a10ffff           call 0x486d20
// 00495cf6  8d8b64030000         lea ecx, [ebx + 0x364]
// 00495cfc  c70100000000         mov dword ptr [ecx], 0
// 00495d02  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00495d08  50                   push eax
// 00495d09  c644242001           mov byte ptr [esp + 0x20], 1
// 00495d0e  e80d10ffff           call 0x486d20
// 00495d13  8d8b68030000         lea ecx, [ebx + 0x368]
// 00495d19  c70100000000         mov dword ptr [ecx], 0
// 00495d1f  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 00495d25  52                   push edx
// 00495d26  c644242002           mov byte ptr [esp + 0x20], 2
// 00495d2b  e8f00fffff           call 0x486d20
// 00495d30  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 00495d36  c70100000000         mov dword ptr [ecx], 0
// 00495d3c  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 00495d42  50                   push eax
// 00495d43  c644242003           mov byte ptr [esp + 0x20], 3
// 00495d48  e8d30fffff           call 0x486d20
// 00495d4d  8d8b70030000         lea ecx, [ebx + 0x370]
// 00495d53  c70100000000         mov dword ptr [ecx], 0
// 00495d59  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 00495d5f  52                   push edx
// 00495d60  c644242004           mov byte ptr [esp + 0x20], 4
// 00495d65  e8b60fffff           call 0x486d20
// 00495d6a  dd8678030000         fld qword ptr [esi + 0x378]
// 00495d70  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 00495d76  6820705200           push 0x527020
// 00495d7b  dd8680030000         fld qword ptr [esi + 0x380]
// 00495d81  68203c4900           push 0x493c20
// 00495d86  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 00495d8c  6a08                 push 8
// 00495d8e  d98688030000         fld dword ptr [esi + 0x388]
// 00495d94  6a5c                 push 0x5c
// 00495d96  d99b88030000         fstp dword ptr [ebx + 0x388]
// 00495d9c  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 00495da2  d9868c030000         fld dword ptr [esi + 0x38c]
// 00495da8  51                   push ecx
// 00495da9  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 00495daf  8d93a8030000         lea edx, [ebx + 0x3a8]
// 00495db5  d98690030000         fld dword ptr [esi + 0x390]
// 00495dbb  52                   push edx
// 00495dbc  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00495dc2  c644243405           mov byte ptr [esp + 0x34], 5
// 00495dc7  d98694030000         fld dword ptr [esi + 0x394]
// 00495dcd  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00495dd3  d98698030000         fld dword ptr [esi + 0x398]
// 00495dd9  d99b98030000         fstp dword ptr [ebx + 0x398]
// 00495ddf  d9869c030000         fld dword ptr [esi + 0x39c]
// 00495de5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 00495deb  d986a0030000         fld dword ptr [esi + 0x3a0]
// 00495df1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00495df7  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 00495dfd  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 00495e03  e8ee333100           call 0x7a91f6
// 00495e08  81c688060000         add esi, 0x688
// 00495e0e  56                   push esi
// 00495e0f  8d8b88060000         lea ecx, [ebx + 0x688]
// 00495e15  e826c3ffff           call 0x492140
// 00495e1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00495e1e  5f                   pop edi
// 00495e1f  5e                   pop esi
// 00495e20  8bc3                 mov eax, ebx
// 00495e22  64890d00000000       mov dword ptr fs:[0], ecx
// 00495e29  5b                   pop ebx
// 00495e2a  8be5                 mov esp, ebp
// 00495e2c  5d                   pop ebp
// 00495e2d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
