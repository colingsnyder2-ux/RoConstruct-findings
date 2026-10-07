// roc 2007-08 00477af0  unit: CInstanceRecord::CNameItem  size: 844 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00477af0
//
// 00477af0  55                   push ebp
// 00477af1  8bec                 mov ebp, esp
// 00477af3  83e4f8               and esp, 0xfffffff8
// 00477af6  6aff                 push -1
// 00477af8  6874507400           push 0x745074
// 00477afd  64a100000000         mov eax, dword ptr fs:[0]
// 00477b03  50                   push eax
// 00477b04  83ec08               sub esp, 8
// 00477b07  53                   push ebx
// 00477b08  56                   push esi
// 00477b09  57                   push edi
// 00477b0a  a188518b00           mov eax, dword ptr [0x8b5188]
// 00477b0f  33c4                 xor eax, esp
// 00477b11  50                   push eax
// 00477b12  8d442418             lea eax, [esp + 0x18]
// 00477b16  64a300000000         mov dword ptr fs:[0], eax
// 00477b1c  8bd9                 mov ebx, ecx
// 00477b1e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00477b22  8b7508               mov esi, dword ptr [ebp + 8]
// 00477b25  56                   push esi
// 00477b26  e835dcffff           call 0x475760
// 00477b2b  d986a0020000         fld dword ptr [esi + 0x2a0]
// 00477b31  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 00477b37  d986a4020000         fld dword ptr [esi + 0x2a4]
// 00477b3d  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 00477b43  d986a8020000         fld dword ptr [esi + 0x2a8]
// 00477b49  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 00477b4f  d986ac020000         fld dword ptr [esi + 0x2ac]
// 00477b55  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 00477b5b  d986b0020000         fld dword ptr [esi + 0x2b0]
// 00477b61  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 00477b67  d986b4020000         fld dword ptr [esi + 0x2b4]
// 00477b6d  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 00477b73  d986b8020000         fld dword ptr [esi + 0x2b8]
// 00477b79  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 00477b7f  d986bc020000         fld dword ptr [esi + 0x2bc]
// 00477b85  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00477b8b  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 00477b92  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 00477b98  8a8ec1020000         mov cl, byte ptr [esi + 0x2c1]
// 00477b9e  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00477ba4  8a96c2020000         mov dl, byte ptr [esi + 0x2c2]
// 00477baa  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00477bb0  0fb686c3020000       movzx eax, byte ptr [esi + 0x2c3]
// 00477bb7  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00477bbd  8b8ec4020000         mov ecx, dword ptr [esi + 0x2c4]
// 00477bc3  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 00477bc9  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 00477bcf  c70100000000         mov dword ptr [ecx], 0
// 00477bd5  8b96c8020000         mov edx, dword ptr [esi + 0x2c8]
// 00477bdb  52                   push edx
// 00477bdc  e88fd3ffff           call 0x474f70
// 00477be1  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 00477be7  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 00477bed  8b8ed0020000         mov ecx, dword ptr [esi + 0x2d0]
// 00477bf3  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 00477bf9  dd86d8020000         fld qword ptr [esi + 0x2d8]
// 00477bff  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 00477c05  81c6fc020000         add esi, 0x2fc
// 00477c0b  dd46e4               fld qword ptr [esi - 0x1c]
// 00477c0e  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 00477c14  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 00477c1a  b909000000           mov ecx, 9
// 00477c1f  d946ec               fld dword ptr [esi - 0x14]
// 00477c22  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00477c2a  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 00477c30  d946f0               fld dword ptr [esi - 0x10]
// 00477c33  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 00477c39  d946f4               fld dword ptr [esi - 0xc]
// 00477c3c  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 00477c42  d946f8               fld dword ptr [esi - 8]
// 00477c45  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 00477c4b  8b56fc               mov edx, dword ptr [esi - 4]
// 00477c4e  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 00477c54  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00477c56  8b7508               mov esi, dword ptr [ebp + 8]
// 00477c59  8b8620030000         mov eax, dword ptr [esi + 0x320]
// 00477c5f  898320030000         mov dword ptr [ebx + 0x320], eax
// 00477c65  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 00477c6b  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 00477c71  8b9628030000         mov edx, dword ptr [esi + 0x328]
// 00477c77  899328030000         mov dword ptr [ebx + 0x328], edx
// 00477c7d  8b862c030000         mov eax, dword ptr [esi + 0x32c]
// 00477c83  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 00477c89  dd8630030000         fld qword ptr [esi + 0x330]
// 00477c8f  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 00477c95  8b8e38030000         mov ecx, dword ptr [esi + 0x338]
// 00477c9b  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00477ca1  d9863c030000         fld dword ptr [esi + 0x33c]
// 00477ca7  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00477cad  d98640030000         fld dword ptr [esi + 0x340]
// 00477cb3  d99b40030000         fstp dword ptr [ebx + 0x340]
// 00477cb9  d98644030000         fld dword ptr [esi + 0x344]
// 00477cbf  d99b44030000         fstp dword ptr [ebx + 0x344]
// 00477cc5  dd8648030000         fld qword ptr [esi + 0x348]
// 00477ccb  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 00477cd1  dd8650030000         fld qword ptr [esi + 0x350]
// 00477cd7  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 00477cdd  dd8658030000         fld qword ptr [esi + 0x358]
// 00477ce3  8d8b60030000         lea ecx, [ebx + 0x360]
// 00477ce9  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 00477cef  c70100000000         mov dword ptr [ecx], 0
// 00477cf5  8b9660030000         mov edx, dword ptr [esi + 0x360]
// 00477cfb  52                   push edx
// 00477cfc  e86fd2ffff           call 0x474f70
// 00477d01  8d8b64030000         lea ecx, [ebx + 0x364]
// 00477d07  c70100000000         mov dword ptr [ecx], 0
// 00477d0d  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00477d13  50                   push eax
// 00477d14  c644242401           mov byte ptr [esp + 0x24], 1
// 00477d19  e852d2ffff           call 0x474f70
// 00477d1e  8d8b68030000         lea ecx, [ebx + 0x368]
// 00477d24  c70100000000         mov dword ptr [ecx], 0
// 00477d2a  8b9668030000         mov edx, dword ptr [esi + 0x368]
// 00477d30  52                   push edx
// 00477d31  c644242402           mov byte ptr [esp + 0x24], 2
// 00477d36  e835d2ffff           call 0x474f70
// 00477d3b  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 00477d41  c70100000000         mov dword ptr [ecx], 0
// 00477d47  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 00477d4d  50                   push eax
// 00477d4e  c644242403           mov byte ptr [esp + 0x24], 3
// 00477d53  e818d2ffff           call 0x474f70
// 00477d58  8d8b70030000         lea ecx, [ebx + 0x370]
// 00477d5e  c70100000000         mov dword ptr [ecx], 0
// 00477d64  8b9670030000         mov edx, dword ptr [esi + 0x370]
// 00477d6a  52                   push edx
// 00477d6b  c644242404           mov byte ptr [esp + 0x24], 4
// 00477d70  e8fbd1ffff           call 0x474f70
// 00477d75  dd8678030000         fld qword ptr [esi + 0x378]
// 00477d7b  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 00477d81  68d0d64c00           push 0x4cd6d0
// 00477d86  dd8680030000         fld qword ptr [esi + 0x380]
// 00477d8c  68f0614700           push 0x4761f0
// 00477d91  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 00477d97  6a08                 push 8
// 00477d99  d98688030000         fld dword ptr [esi + 0x388]
// 00477d9f  6a5c                 push 0x5c
// 00477da1  d99b88030000         fstp dword ptr [ebx + 0x388]
// 00477da7  8d8ea8030000         lea ecx, [esi + 0x3a8]
// 00477dad  d9868c030000         fld dword ptr [esi + 0x38c]
// 00477db3  51                   push ecx
// 00477db4  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 00477dba  8d93a8030000         lea edx, [ebx + 0x3a8]
// 00477dc0  d98690030000         fld dword ptr [esi + 0x390]
// 00477dc6  52                   push edx
// 00477dc7  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00477dcd  c644243805           mov byte ptr [esp + 0x38], 5
// 00477dd2  d98694030000         fld dword ptr [esi + 0x394]
// 00477dd8  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00477dde  d98698030000         fld dword ptr [esi + 0x398]
// 00477de4  d99b98030000         fstp dword ptr [ebx + 0x398]
// 00477dea  d9869c030000         fld dword ptr [esi + 0x39c]
// 00477df0  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 00477df6  d986a0030000         fld dword ptr [esi + 0x3a0]
// 00477dfc  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00477e02  8b86a4030000         mov eax, dword ptr [esi + 0x3a4]
// 00477e08  8983a4030000         mov dword ptr [ebx + 0x3a4], eax
// 00477e0e  e821931b00           call 0x631134
// 00477e13  81c688060000         add esi, 0x688
// 00477e19  56                   push esi
// 00477e1a  8d8b88060000         lea ecx, [ebx + 0x688]
// 00477e20  e8bbcaffff           call 0x4748e0
// 00477e25  8bc3                 mov eax, ebx
// 00477e27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00477e2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00477e32  59                   pop ecx
// 00477e33  5f                   pop edi
// 00477e34  5e                   pop esi
// 00477e35  5b                   pop ebx
// 00477e36  8be5                 mov esp, ebp
// 00477e38  5d                   pop ebp
// 00477e39  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
