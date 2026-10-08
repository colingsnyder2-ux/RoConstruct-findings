// from server: 100% by auto
// roc 2010-06 00494c40  unit: seg_00490000  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494c40
//
// 00494c40  53                   push ebx
// 00494c41  55                   push ebp
// 00494c42  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00494c46  56                   push esi
// 00494c47  57                   push edi
// 00494c48  55                   push ebp
// 00494c49  8bd9                 mov ebx, ecx
// 00494c4b  e800e0ffff           call 0x492c50
// 00494c50  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 00494c56  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 00494c5c  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 00494c62  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 00494c68  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 00494c6e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 00494c74  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 00494c7a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 00494c80  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 00494c86  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 00494c8c  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 00494c92  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 00494c98  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 00494c9e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 00494ca4  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 00494caa  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00494cb0  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 00494cb7  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 00494cbd  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 00494cc3  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00494cc9  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 00494ccf  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00494cd5  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 00494cdc  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00494ce2  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 00494ce8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 00494cee  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 00494cf4  52                   push edx
// 00494cf5  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 00494cfb  e82020ffff           call 0x486d20
// 00494d00  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 00494d06  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 00494d0c  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 00494d12  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 00494d18  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 00494d1e  8db5fc020000         lea esi, [ebp + 0x2fc]
// 00494d24  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 00494d2a  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 00494d30  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 00494d36  b909000000           mov ecx, 9
// 00494d3b  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 00494d41  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 00494d47  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 00494d4d  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 00494d53  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 00494d59  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 00494d5f  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 00494d65  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 00494d6b  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 00494d71  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 00494d77  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 00494d7d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00494d7f  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 00494d85  898320030000         mov dword ptr [ebx + 0x320], eax
// 00494d8b  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 00494d91  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 00494d97  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 00494d9d  899328030000         mov dword ptr [ebx + 0x328], edx
// 00494da3  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 00494da9  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 00494daf  dd8530030000         fld qword ptr [ebp + 0x330]
// 00494db5  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 00494dbb  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 00494dc1  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00494dc7  d9853c030000         fld dword ptr [ebp + 0x33c]
// 00494dcd  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00494dd3  d98540030000         fld dword ptr [ebp + 0x340]
// 00494dd9  d99b40030000         fstp dword ptr [ebx + 0x340]
// 00494ddf  d98544030000         fld dword ptr [ebp + 0x344]
// 00494de5  d99b44030000         fstp dword ptr [ebx + 0x344]
// 00494deb  dd8548030000         fld qword ptr [ebp + 0x348]
// 00494df1  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 00494df7  dd8550030000         fld qword ptr [ebp + 0x350]
// 00494dfd  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 00494e03  8d8b60030000         lea ecx, [ebx + 0x360]
// 00494e09  dd8558030000         fld qword ptr [ebp + 0x358]
// 00494e0f  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 00494e15  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 00494e1b  52                   push edx
// 00494e1c  e8ff1effff           call 0x486d20
// 00494e21  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 00494e27  50                   push eax
// 00494e28  8d8b64030000         lea ecx, [ebx + 0x364]
// 00494e2e  e8ed1effff           call 0x486d20
// 00494e33  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 00494e39  51                   push ecx
// 00494e3a  8d8b68030000         lea ecx, [ebx + 0x368]
// 00494e40  e8db1effff           call 0x486d20
// 00494e45  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 00494e4b  52                   push edx
// 00494e4c  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 00494e52  e8c91effff           call 0x486d20
// 00494e57  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 00494e5d  50                   push eax
// 00494e5e  8d8b70030000         lea ecx, [ebx + 0x370]
// 00494e64  e8b71effff           call 0x486d20
// 00494e69  dd8578030000         fld qword ptr [ebp + 0x378]
// 00494e6f  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 00494e75  8bfd                 mov edi, ebp
// 00494e77  dd8580030000         fld qword ptr [ebp + 0x380]
// 00494e7d  8db3a8030000         lea esi, [ebx + 0x3a8]
// 00494e83  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 00494e89  2bfb                 sub edi, ebx
// 00494e8b  d98588030000         fld dword ptr [ebp + 0x388]
// 00494e91  c744241408000000     mov dword ptr [esp + 0x14], 8
// 00494e99  d99b88030000         fstp dword ptr [ebx + 0x388]
// 00494e9f  d9858c030000         fld dword ptr [ebp + 0x38c]
// 00494ea5  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 00494eab  d98590030000         fld dword ptr [ebp + 0x390]
// 00494eb1  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00494eb7  d98594030000         fld dword ptr [ebp + 0x394]
// 00494ebd  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00494ec3  d98598030000         fld dword ptr [ebp + 0x398]
// 00494ec9  d99b98030000         fstp dword ptr [ebx + 0x398]
// 00494ecf  d9859c030000         fld dword ptr [ebp + 0x39c]
// 00494ed5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 00494edb  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 00494ee1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00494ee7  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 00494eed  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 00494ef3  8d1437               lea edx, [edi + esi]
// 00494ef6  52                   push edx
// 00494ef7  8bce                 mov ecx, esi
// 00494ef9  e822e6ffff           call 0x493520
// 00494efe  83c65c               add esi, 0x5c
// 00494f01  836c241401           sub dword ptr [esp + 0x14], 1
// 00494f06  75eb                 jne 0x494ef3
// 00494f08  81c588060000         add ebp, 0x688
// 00494f0e  55                   push ebp
// 00494f0f  8d8b88060000         lea ecx, [ebx + 0x688]
// 00494f15  e8f6beffff           call 0x490e10
// 00494f1a  5f                   pop edi
// 00494f1b  5e                   pop esi
// 00494f1c  5d                   pop ebp
// 00494f1d  8bc3                 mov eax, ebx
// 00494f1f  5b                   pop ebx
// 00494f20  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
