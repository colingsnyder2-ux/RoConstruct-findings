// roc 2008-06 0047a200  unit: CInstanceRecord::CNameItem  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047a200
//
// 0047a200  53                   push ebx
// 0047a201  55                   push ebp
// 0047a202  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0047a206  56                   push esi
// 0047a207  57                   push edi
// 0047a208  55                   push ebp
// 0047a209  8bd9                 mov ebx, ecx
// 0047a20b  e8a0e2ffff           call 0x4784b0
// 0047a210  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 0047a216  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 0047a21c  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 0047a222  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 0047a228  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 0047a22e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 0047a234  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 0047a23a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 0047a240  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 0047a246  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 0047a24c  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 0047a252  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 0047a258  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 0047a25e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 0047a264  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 0047a26a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 0047a270  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 0047a277  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 0047a27d  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 0047a283  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 0047a289  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 0047a28f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 0047a295  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 0047a29c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 0047a2a2  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 0047a2a8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 0047a2ae  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 0047a2b4  52                   push edx
// 0047a2b5  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 0047a2bb  e8e0ec1100           call 0x598fa0
// 0047a2c0  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 0047a2c6  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 0047a2cc  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 0047a2d2  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 0047a2d8  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 0047a2de  8db5fc020000         lea esi, [ebp + 0x2fc]
// 0047a2e4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 0047a2ea  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 0047a2f0  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 0047a2f6  b909000000           mov ecx, 9
// 0047a2fb  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 0047a301  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 0047a307  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 0047a30d  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 0047a313  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 0047a319  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 0047a31f  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 0047a325  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 0047a32b  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 0047a331  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 0047a337  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 0047a33d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047a33f  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 0047a345  898320030000         mov dword ptr [ebx + 0x320], eax
// 0047a34b  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 0047a351  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 0047a357  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 0047a35d  899328030000         mov dword ptr [ebx + 0x328], edx
// 0047a363  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 0047a369  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 0047a36f  dd8530030000         fld qword ptr [ebp + 0x330]
// 0047a375  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 0047a37b  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 0047a381  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 0047a387  d9853c030000         fld dword ptr [ebp + 0x33c]
// 0047a38d  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 0047a393  d98540030000         fld dword ptr [ebp + 0x340]
// 0047a399  d99b40030000         fstp dword ptr [ebx + 0x340]
// 0047a39f  d98544030000         fld dword ptr [ebp + 0x344]
// 0047a3a5  d99b44030000         fstp dword ptr [ebx + 0x344]
// 0047a3ab  dd8548030000         fld qword ptr [ebp + 0x348]
// 0047a3b1  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 0047a3b7  dd8550030000         fld qword ptr [ebp + 0x350]
// 0047a3bd  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 0047a3c3  8d8b60030000         lea ecx, [ebx + 0x360]
// 0047a3c9  dd8558030000         fld qword ptr [ebp + 0x358]
// 0047a3cf  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 0047a3d5  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 0047a3db  52                   push edx
// 0047a3dc  e8bfeb1100           call 0x598fa0
// 0047a3e1  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 0047a3e7  50                   push eax
// 0047a3e8  8d8b64030000         lea ecx, [ebx + 0x364]
// 0047a3ee  e8adeb1100           call 0x598fa0
// 0047a3f3  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 0047a3f9  51                   push ecx
// 0047a3fa  8d8b68030000         lea ecx, [ebx + 0x368]
// 0047a400  e89beb1100           call 0x598fa0
// 0047a405  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 0047a40b  52                   push edx
// 0047a40c  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 0047a412  e889eb1100           call 0x598fa0
// 0047a417  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 0047a41d  50                   push eax
// 0047a41e  8d8b70030000         lea ecx, [ebx + 0x370]
// 0047a424  e877eb1100           call 0x598fa0
// 0047a429  dd8578030000         fld qword ptr [ebp + 0x378]
// 0047a42f  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 0047a435  8bfd                 mov edi, ebp
// 0047a437  dd8580030000         fld qword ptr [ebp + 0x380]
// 0047a43d  8db3a8030000         lea esi, [ebx + 0x3a8]
// 0047a443  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 0047a449  2bfb                 sub edi, ebx
// 0047a44b  d98588030000         fld dword ptr [ebp + 0x388]
// 0047a451  c744241408000000     mov dword ptr [esp + 0x14], 8
// 0047a459  d99b88030000         fstp dword ptr [ebx + 0x388]
// 0047a45f  d9858c030000         fld dword ptr [ebp + 0x38c]
// 0047a465  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 0047a46b  d98590030000         fld dword ptr [ebp + 0x390]
// 0047a471  d99b90030000         fstp dword ptr [ebx + 0x390]
// 0047a477  d98594030000         fld dword ptr [ebp + 0x394]
// 0047a47d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 0047a483  d98598030000         fld dword ptr [ebp + 0x398]
// 0047a489  d99b98030000         fstp dword ptr [ebx + 0x398]
// 0047a48f  d9859c030000         fld dword ptr [ebp + 0x39c]
// 0047a495  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 0047a49b  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 0047a4a1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 0047a4a7  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 0047a4ad  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 0047a4b3  8d1437               lea edx, [edi + esi]
// 0047a4b6  52                   push edx
// 0047a4b7  8bce                 mov ecx, esi
// 0047a4b9  e882e8ffff           call 0x478d40
// 0047a4be  83c65c               add esi, 0x5c
// 0047a4c1  836c241401           sub dword ptr [esp + 0x14], 1
// 0047a4c6  75eb                 jne 0x47a4b3
// 0047a4c8  81c588060000         add ebp, 0x688
// 0047a4ce  55                   push ebp
// 0047a4cf  8d8b88060000         lea ecx, [ebx + 0x688]
// 0047a4d5  e826c4ffff           call 0x476900
// 0047a4da  5f                   pop edi
// 0047a4db  5e                   pop esi
// 0047a4dc  5d                   pop ebp
// 0047a4dd  8bc3                 mov eax, ebx
// 0047a4df  5b                   pop ebx
// 0047a4e0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
