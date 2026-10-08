// roc 2009-12 004cefc0  unit: G3D::PBVTextureFormat::?$Table  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cefc0
//
// 004cefc0  55                   push ebp
// 004cefc1  8bec                 mov ebp, esp
// 004cefc3  83e4f8               and esp, 0xfffffff8
// 004cefc6  6aff                 push -1
// 004cefc8  6894309300           push 0x933094
// 004cefcd  64a100000000         mov eax, dword ptr fs:[0]
// 004cefd3  50                   push eax
// 004cefd4  64892500000000       mov dword ptr fs:[0], esp
// 004cefdb  83ec08               sub esp, 8
// 004cefde  53                   push ebx
// 004cefdf  56                   push esi
// 004cefe0  8b7508               mov esi, dword ptr [ebp + 8]
// 004cefe3  57                   push edi
// 004cefe4  8bd9                 mov ebx, ecx
// 004cefe6  56                   push esi
// 004cefe7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cefeb  e800d6ffff           call 0x4cc5f0
// 004ceff0  d986a0020000         fld dword ptr [esi + 0x2a0]
// 004ceff6  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 004ceffc  d986a4020000         fld dword ptr [esi + 0x2a4]
// 004cf002  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 004cf008  d986a8020000         fld dword ptr [esi + 0x2a8]
// 004cf00e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 004cf014  d986ac020000         fld dword ptr [esi + 0x2ac]
// 004cf01a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 004cf020  d986b0020000         fld dword ptr [esi + 0x2b0]
// 004cf026  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 004cf02c  d986b4020000         fld dword ptr [esi + 0x2b4]
// 004cf032  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 004cf038  d986b8020000         fld dword ptr [esi + 0x2b8]
// 004cf03e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 004cf044  d986bc020000         fld dword ptr [esi + 0x2bc]
// 004cf04a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 004cf050  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 004cf057  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 004cf05d  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 004cf063  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 004cf069  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 004cf06f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 004cf075  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 004cf07c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 004cf082  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 004cf088  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 004cf08e  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 004cf094  c70100000000         mov dword ptr [ecx], 0
// 004cf09a  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 004cf0a0  52                   push edx
// 004cf0a1  e8cacaf7ff           call 0x44bb70
// 004cf0a6  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 004cf0ac  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 004cf0b2  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 004cf0b8  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 004cf0be  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 004cf0c4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 004cf0ca  81c6fc020000         add esi, 0x2fc
// 004cf0d0  dd46e4               fld qword ptr [esi - 0x1c]
// 004cf0d3  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 004cf0d9  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 004cf0df  b909000000           mov ecx, 9
// 004cf0e4  d946ec               fld dword ptr [esi - 0x14]
// 004cf0e7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004cf0ef  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 004cf0f5  d946f0               fld dword ptr [esi - 0x10]
// 004cf0f8  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 004cf0fe  d946f4               fld dword ptr [esi - 0xc]
// 004cf101  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 004cf107  d946f8               fld dword ptr [esi - 8]
// 004cf10a  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 004cf110  8b56fc               mov edx, dword ptr [esi - 4]
// 004cf113  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 004cf119  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cf11b  8b7508               mov esi, dword ptr [ebp + 8]
// 004cf11e  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 004cf124  898320030000         mov dword ptr [ebx + 0x320], eax
// 004cf12a  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 004cf130  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 004cf136  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 004cf13c  899328030000         mov dword ptr [ebx + 0x328], edx
// 004cf142  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 004cf148  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 004cf14e  dd8630030000         fld qword ptr [esi + 0x330]
// 004cf154  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 004cf15a  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 004cf160  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 004cf166  d9863c030000         fld dword ptr [esi + 0x33c]
// 004cf16c  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 004cf172  d98640030000         fld dword ptr [esi + 0x340]
// 004cf178  d99b40030000         fstp dword ptr [ebx + 0x340]
// 004cf17e  d98644030000         fld dword ptr [esi + 0x344]
// 004cf184  d99b44030000         fstp dword ptr [ebx + 0x344]
// 004cf18a  8d8b60030000         lea ecx, [ebx + 0x360]
// 004cf190  dd8648030000         fld qword ptr [esi + 0x348]
// 004cf196  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 004cf19c  dd8650030000         fld qword ptr [esi + 0x350]
// 004cf1a2  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 004cf1a8  dd8658030000         fld qword ptr [esi + 0x358]
// 004cf1ae  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 004cf1b4  c70100000000         mov dword ptr [ecx], 0
// 004cf1ba  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 004cf1c0  52                   push edx
// 004cf1c1  e8aac9f7ff           call 0x44bb70
// 004cf1c6  8d8b64030000         lea ecx, [ebx + 0x364]
// 004cf1cc  c70100000000         mov dword ptr [ecx], 0
// 004cf1d2  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 004cf1d8  50                   push eax
// 004cf1d9  c644242001           mov byte ptr [esp + 0x20], 1
// 004cf1de  e88dc9f7ff           call 0x44bb70
// 004cf1e3  8d8b68030000         lea ecx, [ebx + 0x368]
// 004cf1e9  c70100000000         mov dword ptr [ecx], 0
// 004cf1ef  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 004cf1f5  52                   push edx
// 004cf1f6  c644242002           mov byte ptr [esp + 0x20], 2
// 004cf1fb  e870c9f7ff           call 0x44bb70
// 004cf200  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 004cf206  c70100000000         mov dword ptr [ecx], 0
// 004cf20c  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004cf212  50                   push eax
// 004cf213  c644242003           mov byte ptr [esp + 0x20], 3
// 004cf218  e853c9f7ff           call 0x44bb70
// 004cf21d  8d8b70030000         lea ecx, [ebx + 0x370]
// 004cf223  c70100000000         mov dword ptr [ecx], 0
// 004cf229  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 004cf22f  52                   push edx
// 004cf230  c644242004           mov byte ptr [esp + 0x20], 4
// 004cf235  e836c9f7ff           call 0x44bb70
// 004cf23a  dd8678030000         fld qword ptr [esi + 0x378]
// 004cf240  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 004cf246  6890d05c00           push 0x5cd090
// 004cf24b  dd8680030000         fld qword ptr [esi + 0x380]
// 004cf251  68b0d04c00           push 0x4cd0b0
// 004cf256  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 004cf25c  6a08                 push 8
// 004cf25e  d98688030000         fld dword ptr [esi + 0x388]
// 004cf264  6a5c                 push 0x5c
// 004cf266  d99b88030000         fstp dword ptr [ebx + 0x388]
// 004cf26c  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 004cf272  d9868c030000         fld dword ptr [esi + 0x38c]
// 004cf278  51                   push ecx
// 004cf279  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 004cf27f  8d93a8030000         lea edx, [ebx + 0x3a8]
// 004cf285  d98690030000         fld dword ptr [esi + 0x390]
// 004cf28b  52                   push edx
// 004cf28c  d99b90030000         fstp dword ptr [ebx + 0x390]
// 004cf292  c644243405           mov byte ptr [esp + 0x34], 5
// 004cf297  d98694030000         fld dword ptr [esi + 0x394]
// 004cf29d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 004cf2a3  d98698030000         fld dword ptr [esi + 0x398]
// 004cf2a9  d99b98030000         fstp dword ptr [ebx + 0x398]
// 004cf2af  d9869c030000         fld dword ptr [esi + 0x39c]
// 004cf2b5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 004cf2bb  d986a0030000         fld dword ptr [esi + 0x3a0]
// 004cf2c1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 004cf2c7  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 004cf2cd  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 004cf2d3  e8e45d3200           call 0x7f50bc
// 004cf2d8  81c688060000         add esi, 0x688
// 004cf2de  56                   push esi
// 004cf2df  8d8b88060000         lea ecx, [ebx + 0x688]
// 004cf2e5  e8b6c5ffff           call 0x4cb8a0
// 004cf2ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cf2ee  5f                   pop edi
// 004cf2ef  5e                   pop esi
// 004cf2f0  8bc3                 mov eax, ebx
// 004cf2f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf2f9  5b                   pop ebx
// 004cf2fa  8be5                 mov esp, ebp
// 004cf2fc  5d                   pop ebp
// 004cf2fd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
