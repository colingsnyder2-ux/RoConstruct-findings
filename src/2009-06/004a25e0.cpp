// roc 2009-06 004a25e0  unit: G3D::PBVTextureFormat::?$Table  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a25e0
//
// 004a25e0  55                   push ebp
// 004a25e1  8bec                 mov ebp, esp
// 004a25e3  83e4f8               and esp, 0xfffffff8
// 004a25e6  6aff                 push -1
// 004a25e8  68d4718500           push 0x8571d4
// 004a25ed  64a100000000         mov eax, dword ptr fs:[0]
// 004a25f3  50                   push eax
// 004a25f4  64892500000000       mov dword ptr fs:[0], esp
// 004a25fb  83ec08               sub esp, 8
// 004a25fe  53                   push ebx
// 004a25ff  56                   push esi
// 004a2600  8b7508               mov esi, dword ptr [ebp + 8]
// 004a2603  57                   push edi
// 004a2604  8bd9                 mov ebx, ecx
// 004a2606  56                   push esi
// 004a2607  895c2410             mov dword ptr [esp + 0x10], ebx
// 004a260b  e8d0d8ffff           call 0x49fee0
// 004a2610  d986a0020000         fld dword ptr [esi + 0x2a0]
// 004a2616  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 004a261c  d986a4020000         fld dword ptr [esi + 0x2a4]
// 004a2622  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 004a2628  d986a8020000         fld dword ptr [esi + 0x2a8]
// 004a262e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 004a2634  d986ac020000         fld dword ptr [esi + 0x2ac]
// 004a263a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 004a2640  d986b0020000         fld dword ptr [esi + 0x2b0]
// 004a2646  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 004a264c  d986b4020000         fld dword ptr [esi + 0x2b4]
// 004a2652  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 004a2658  d986b8020000         fld dword ptr [esi + 0x2b8]
// 004a265e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 004a2664  d986bc020000         fld dword ptr [esi + 0x2bc]
// 004a266a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 004a2670  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 004a2677  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 004a267d  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 004a2683  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 004a2689  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 004a268f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 004a2695  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 004a269c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 004a26a2  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 004a26a8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 004a26ae  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 004a26b4  c70100000000         mov dword ptr [ecx], 0
// 004a26ba  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 004a26c0  52                   push edx
// 004a26c1  e89ad1ffff           call 0x49f860
// 004a26c6  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 004a26cc  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 004a26d2  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 004a26d8  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 004a26de  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 004a26e4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 004a26ea  81c6fc020000         add esi, 0x2fc
// 004a26f0  dd46e4               fld qword ptr [esi - 0x1c]
// 004a26f3  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 004a26f9  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 004a26ff  b909000000           mov ecx, 9
// 004a2704  d946ec               fld dword ptr [esi - 0x14]
// 004a2707  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004a270f  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 004a2715  d946f0               fld dword ptr [esi - 0x10]
// 004a2718  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 004a271e  d946f4               fld dword ptr [esi - 0xc]
// 004a2721  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 004a2727  d946f8               fld dword ptr [esi - 8]
// 004a272a  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 004a2730  8b56fc               mov edx, dword ptr [esi - 4]
// 004a2733  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 004a2739  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a273b  8b7508               mov esi, dword ptr [ebp + 8]
// 004a273e  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 004a2744  898320030000         mov dword ptr [ebx + 0x320], eax
// 004a274a  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 004a2750  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 004a2756  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 004a275c  899328030000         mov dword ptr [ebx + 0x328], edx
// 004a2762  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 004a2768  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 004a276e  dd8630030000         fld qword ptr [esi + 0x330]
// 004a2774  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 004a277a  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 004a2780  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 004a2786  d9863c030000         fld dword ptr [esi + 0x33c]
// 004a278c  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 004a2792  d98640030000         fld dword ptr [esi + 0x340]
// 004a2798  d99b40030000         fstp dword ptr [ebx + 0x340]
// 004a279e  d98644030000         fld dword ptr [esi + 0x344]
// 004a27a4  d99b44030000         fstp dword ptr [ebx + 0x344]
// 004a27aa  8d8b60030000         lea ecx, [ebx + 0x360]
// 004a27b0  dd8648030000         fld qword ptr [esi + 0x348]
// 004a27b6  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 004a27bc  dd8650030000         fld qword ptr [esi + 0x350]
// 004a27c2  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 004a27c8  dd8658030000         fld qword ptr [esi + 0x358]
// 004a27ce  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 004a27d4  c70100000000         mov dword ptr [ecx], 0
// 004a27da  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 004a27e0  52                   push edx
// 004a27e1  e87ad0ffff           call 0x49f860
// 004a27e6  8d8b64030000         lea ecx, [ebx + 0x364]
// 004a27ec  c70100000000         mov dword ptr [ecx], 0
// 004a27f2  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 004a27f8  50                   push eax
// 004a27f9  c644242001           mov byte ptr [esp + 0x20], 1
// 004a27fe  e85dd0ffff           call 0x49f860
// 004a2803  8d8b68030000         lea ecx, [ebx + 0x368]
// 004a2809  c70100000000         mov dword ptr [ecx], 0
// 004a280f  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 004a2815  52                   push edx
// 004a2816  c644242002           mov byte ptr [esp + 0x20], 2
// 004a281b  e840d0ffff           call 0x49f860
// 004a2820  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 004a2826  c70100000000         mov dword ptr [ecx], 0
// 004a282c  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004a2832  50                   push eax
// 004a2833  c644242003           mov byte ptr [esp + 0x20], 3
// 004a2838  e823d0ffff           call 0x49f860
// 004a283d  8d8b70030000         lea ecx, [ebx + 0x370]
// 004a2843  c70100000000         mov dword ptr [ecx], 0
// 004a2849  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 004a284f  52                   push edx
// 004a2850  c644242004           mov byte ptr [esp + 0x20], 4
// 004a2855  e806d0ffff           call 0x49f860
// 004a285a  dd8678030000         fld qword ptr [esi + 0x378]
// 004a2860  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 004a2866  6810755100           push 0x517510
// 004a286b  dd8680030000         fld qword ptr [esi + 0x380]
// 004a2871  68d0084a00           push 0x4a08d0
// 004a2876  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 004a287c  6a08                 push 8
// 004a287e  d98688030000         fld dword ptr [esi + 0x388]
// 004a2884  6a5c                 push 0x5c
// 004a2886  d99b88030000         fstp dword ptr [ebx + 0x388]
// 004a288c  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 004a2892  d9868c030000         fld dword ptr [esi + 0x38c]
// 004a2898  51                   push ecx
// 004a2899  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 004a289f  8d93a8030000         lea edx, [ebx + 0x3a8]
// 004a28a5  d98690030000         fld dword ptr [esi + 0x390]
// 004a28ab  52                   push edx
// 004a28ac  d99b90030000         fstp dword ptr [ebx + 0x390]
// 004a28b2  c644243405           mov byte ptr [esp + 0x34], 5
// 004a28b7  d98694030000         fld dword ptr [esi + 0x394]
// 004a28bd  d99b94030000         fstp dword ptr [ebx + 0x394]
// 004a28c3  d98698030000         fld dword ptr [esi + 0x398]
// 004a28c9  d99b98030000         fstp dword ptr [ebx + 0x398]
// 004a28cf  d9869c030000         fld dword ptr [esi + 0x39c]
// 004a28d5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 004a28db  d986a0030000         fld dword ptr [esi + 0x3a0]
// 004a28e1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 004a28e7  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 004a28ed  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 004a28f3  e88e792700           call 0x71a286
// 004a28f8  81c688060000         add esi, 0x688
// 004a28fe  56                   push esi
// 004a28ff  8d8b88060000         lea ecx, [ebx + 0x688]
// 004a2905  e826c9ffff           call 0x49f230
// 004a290a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a290e  5f                   pop edi
// 004a290f  5e                   pop esi
// 004a2910  8bc3                 mov eax, ebx
// 004a2912  64890d00000000       mov dword ptr fs:[0], ecx
// 004a2919  5b                   pop ebx
// 004a291a  8be5                 mov esp, ebp
// 004a291c  5d                   pop ebp
// 004a291d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
