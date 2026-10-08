// roc 2007-03 00477c50  unit: seg_00470000  size: 844 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00477c50
//
// 00477c50  55                   push ebp
// 00477c51  8bec                 mov ebp, esp
// 00477c53  83e4f8               and esp, 0xfffffff8
// 00477c56  6aff                 push -1
// 00477c58  6824757400           push 0x747524
// 00477c5d  64a100000000         mov eax, dword ptr fs:[0]
// 00477c63  50                   push eax
// 00477c64  83ec08               sub esp, 8
// 00477c67  53                   push ebx
// 00477c68  56                   push esi
// 00477c69  57                   push edi
// 00477c6a  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00477c6f  33c4                 xor eax, esp
// 00477c71  50                   push eax
// 00477c72  8d442418             lea eax, [esp + 0x18]
// 00477c76  64a300000000         mov dword ptr fs:[0], eax
// 00477c7c  8bd9                 mov ebx, ecx
// 00477c7e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00477c82  8b7508               mov esi, dword ptr [ebp + 8]
// 00477c85  56                   push esi
// 00477c86  e8f5dbffff           call 0x475880
// 00477c8b  d986a0020000         fld dword ptr [esi + 0x2a0]
// 00477c91  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 00477c97  d986a4020000         fld dword ptr [esi + 0x2a4]
// 00477c9d  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 00477ca3  d986a8020000         fld dword ptr [esi + 0x2a8]
// 00477ca9  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 00477caf  d986ac020000         fld dword ptr [esi + 0x2ac]
// 00477cb5  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 00477cbb  d986b0020000         fld dword ptr [esi + 0x2b0]
// 00477cc1  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 00477cc7  d986b4020000         fld dword ptr [esi + 0x2b4]
// 00477ccd  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 00477cd3  d986b8020000         fld dword ptr [esi + 0x2b8]
// 00477cd9  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 00477cdf  d986bc020000         fld dword ptr [esi + 0x2bc]
// 00477ce5  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00477ceb  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 00477cf2  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 00477cf8  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 00477cfe  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00477d04  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 00477d0a  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00477d10  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 00477d17  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00477d1d  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 00477d23  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 00477d29  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 00477d2f  c70100000000         mov dword ptr [ecx], 0
// 00477d35  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 00477d3b  52                   push edx
// 00477d3c  e84fd3ffff           call 0x475090
// 00477d41  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 00477d47  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 00477d4d  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 00477d53  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 00477d59  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 00477d5f  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 00477d65  81c6fc020000         add esi, 0x2fc
// 00477d6b  dd46e4               fld qword ptr [esi - 0x1c]
// 00477d6e  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 00477d74  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 00477d7a  b909000000           mov ecx, 9
// 00477d7f  d946ec               fld dword ptr [esi - 0x14]
// 00477d82  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00477d8a  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 00477d90  d946f0               fld dword ptr [esi - 0x10]
// 00477d93  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 00477d99  d946f4               fld dword ptr [esi - 0xc]
// 00477d9c  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 00477da2  d946f8               fld dword ptr [esi - 8]
// 00477da5  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 00477dab  8b56fc               mov edx, dword ptr [esi - 4]
// 00477dae  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 00477db4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00477db6  8b7508               mov esi, dword ptr [ebp + 8]
// 00477db9  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 00477dbf  898320030000         mov dword ptr [ebx + 0x320], eax
// 00477dc5  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 00477dcb  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 00477dd1  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 00477dd7  899328030000         mov dword ptr [ebx + 0x328], edx
// 00477ddd  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 00477de3  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 00477de9  dd8630030000         fld qword ptr [esi + 0x330]
// 00477def  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 00477df5  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 00477dfb  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00477e01  d9863c030000         fld dword ptr [esi + 0x33c]
// 00477e07  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00477e0d  d98640030000         fld dword ptr [esi + 0x340]
// 00477e13  d99b40030000         fstp dword ptr [ebx + 0x340]
// 00477e19  d98644030000         fld dword ptr [esi + 0x344]
// 00477e1f  d99b44030000         fstp dword ptr [ebx + 0x344]
// 00477e25  dd8648030000         fld qword ptr [esi + 0x348]
// 00477e2b  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 00477e31  dd8650030000         fld qword ptr [esi + 0x350]
// 00477e37  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 00477e3d  dd8658030000         fld qword ptr [esi + 0x358]
// 00477e43  8d8b60030000         lea ecx, [ebx + 0x360]
// 00477e49  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 00477e4f  c70100000000         mov dword ptr [ecx], 0
// 00477e55  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 00477e5b  52                   push edx
// 00477e5c  e82fd2ffff           call 0x475090
// 00477e61  8d8b64030000         lea ecx, [ebx + 0x364]
// 00477e67  c70100000000         mov dword ptr [ecx], 0
// 00477e6d  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00477e73  50                   push eax
// 00477e74  c644242401           mov byte ptr [esp + 0x24], 1
// 00477e79  e812d2ffff           call 0x475090
// 00477e7e  8d8b68030000         lea ecx, [ebx + 0x368]
// 00477e84  c70100000000         mov dword ptr [ecx], 0
// 00477e8a  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 00477e90  52                   push edx
// 00477e91  c644242402           mov byte ptr [esp + 0x24], 2
// 00477e96  e8f5d1ffff           call 0x475090
// 00477e9b  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 00477ea1  c70100000000         mov dword ptr [ecx], 0
// 00477ea7  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 00477ead  50                   push eax
// 00477eae  c644242403           mov byte ptr [esp + 0x24], 3
// 00477eb3  e8d8d1ffff           call 0x475090
// 00477eb8  8d8b70030000         lea ecx, [ebx + 0x370]
// 00477ebe  c70100000000         mov dword ptr [ecx], 0
// 00477ec4  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 00477eca  52                   push edx
// 00477ecb  c644242404           mov byte ptr [esp + 0x24], 4
// 00477ed0  e8bbd1ffff           call 0x475090
// 00477ed5  dd8678030000         fld qword ptr [esi + 0x378]
// 00477edb  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 00477ee1  68a0234c00           push 0x4c23a0
// 00477ee6  dd8680030000         fld qword ptr [esi + 0x380]
// 00477eec  6850634700           push 0x476350
// 00477ef1  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 00477ef7  6a08                 push 8
// 00477ef9  d98688030000         fld dword ptr [esi + 0x388]
// 00477eff  6a5c                 push 0x5c
// 00477f01  d99b88030000         fstp dword ptr [ebx + 0x388]
// 00477f07  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 00477f0d  d9868c030000         fld dword ptr [esi + 0x38c]
// 00477f13  51                   push ecx
// 00477f14  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 00477f1a  8d93a8030000         lea edx, [ebx + 0x3a8]
// 00477f20  d98690030000         fld dword ptr [esi + 0x390]
// 00477f26  52                   push edx
// 00477f27  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00477f2d  c644243805           mov byte ptr [esp + 0x38], 5
// 00477f32  d98694030000         fld dword ptr [esi + 0x394]
// 00477f38  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00477f3e  d98698030000         fld dword ptr [esi + 0x398]
// 00477f44  d99b98030000         fstp dword ptr [ebx + 0x398]
// 00477f4a  d9869c030000         fld dword ptr [esi + 0x39c]
// 00477f50  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 00477f56  d986a0030000         fld dword ptr [esi + 0x3a0]
// 00477f5c  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00477f62  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 00477f68  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 00477f6e  e861761a00           call 0x61f5d4
// 00477f73  81c688060000         add esi, 0x688
// 00477f79  56                   push esi
// 00477f7a  8d8b88060000         lea ecx, [ebx + 0x688]
// 00477f80  e85bcaffff           call 0x4749e0
// 00477f85  8bc3                 mov eax, ebx
// 00477f87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00477f8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00477f92  59                   pop ecx
// 00477f93  5f                   pop edi
// 00477f94  5e                   pop esi
// 00477f95  5b                   pop ebx
// 00477f96  8be5                 mov esp, ebp
// 00477f98  5d                   pop ebp
// 00477f99  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
