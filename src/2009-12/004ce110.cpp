// roc 2009-12 004ce110  unit: G3D::PBVTextureFormat::?$Table  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ce110
//
// 004ce110  53                   push ebx
// 004ce111  55                   push ebp
// 004ce112  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004ce116  56                   push esi
// 004ce117  57                   push edi
// 004ce118  55                   push ebp
// 004ce119  8bd9                 mov ebx, ecx
// 004ce11b  e860e0ffff           call 0x4cc180
// 004ce120  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 004ce126  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 004ce12c  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 004ce132  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 004ce138  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 004ce13e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 004ce144  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 004ce14a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 004ce150  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 004ce156  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 004ce15c  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 004ce162  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 004ce168  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 004ce16e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 004ce174  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 004ce17a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 004ce180  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 004ce187  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 004ce18d  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 004ce193  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 004ce199  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 004ce19f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 004ce1a5  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 004ce1ac  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 004ce1b2  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 004ce1b8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 004ce1be  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 004ce1c4  52                   push edx
// 004ce1c5  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 004ce1cb  e8a0d9f7ff           call 0x44bb70
// 004ce1d0  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 004ce1d6  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 004ce1dc  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 004ce1e2  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 004ce1e8  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 004ce1ee  8db5fc020000         lea esi, [ebp + 0x2fc]
// 004ce1f4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 004ce1fa  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 004ce200  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 004ce206  b909000000           mov ecx, 9
// 004ce20b  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 004ce211  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 004ce217  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 004ce21d  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 004ce223  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 004ce229  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 004ce22f  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 004ce235  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 004ce23b  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 004ce241  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 004ce247  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 004ce24d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ce24f  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 004ce255  898320030000         mov dword ptr [ebx + 0x320], eax
// 004ce25b  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 004ce261  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 004ce267  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 004ce26d  899328030000         mov dword ptr [ebx + 0x328], edx
// 004ce273  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 004ce279  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 004ce27f  dd8530030000         fld qword ptr [ebp + 0x330]
// 004ce285  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 004ce28b  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 004ce291  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 004ce297  d9853c030000         fld dword ptr [ebp + 0x33c]
// 004ce29d  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 004ce2a3  d98540030000         fld dword ptr [ebp + 0x340]
// 004ce2a9  d99b40030000         fstp dword ptr [ebx + 0x340]
// 004ce2af  d98544030000         fld dword ptr [ebp + 0x344]
// 004ce2b5  d99b44030000         fstp dword ptr [ebx + 0x344]
// 004ce2bb  dd8548030000         fld qword ptr [ebp + 0x348]
// 004ce2c1  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 004ce2c7  dd8550030000         fld qword ptr [ebp + 0x350]
// 004ce2cd  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 004ce2d3  8d8b60030000         lea ecx, [ebx + 0x360]
// 004ce2d9  dd8558030000         fld qword ptr [ebp + 0x358]
// 004ce2df  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 004ce2e5  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 004ce2eb  52                   push edx
// 004ce2ec  e87fd8f7ff           call 0x44bb70
// 004ce2f1  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 004ce2f7  50                   push eax
// 004ce2f8  8d8b64030000         lea ecx, [ebx + 0x364]
// 004ce2fe  e86dd8f7ff           call 0x44bb70
// 004ce303  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 004ce309  51                   push ecx
// 004ce30a  8d8b68030000         lea ecx, [ebx + 0x368]
// 004ce310  e85bd8f7ff           call 0x44bb70
// 004ce315  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 004ce31b  52                   push edx
// 004ce31c  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 004ce322  e849d8f7ff           call 0x44bb70
// 004ce327  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 004ce32d  50                   push eax
// 004ce32e  8d8b70030000         lea ecx, [ebx + 0x370]
// 004ce334  e837d8f7ff           call 0x44bb70
// 004ce339  dd8578030000         fld qword ptr [ebp + 0x378]
// 004ce33f  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 004ce345  8bfd                 mov edi, ebp
// 004ce347  dd8580030000         fld qword ptr [ebp + 0x380]
// 004ce34d  8db3a8030000         lea esi, [ebx + 0x3a8]
// 004ce353  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 004ce359  2bfb                 sub edi, ebx
// 004ce35b  d98588030000         fld dword ptr [ebp + 0x388]
// 004ce361  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004ce369  d99b88030000         fstp dword ptr [ebx + 0x388]
// 004ce36f  d9858c030000         fld dword ptr [ebp + 0x38c]
// 004ce375  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 004ce37b  d98590030000         fld dword ptr [ebp + 0x390]
// 004ce381  d99b90030000         fstp dword ptr [ebx + 0x390]
// 004ce387  d98594030000         fld dword ptr [ebp + 0x394]
// 004ce38d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 004ce393  d98598030000         fld dword ptr [ebp + 0x398]
// 004ce399  d99b98030000         fstp dword ptr [ebx + 0x398]
// 004ce39f  d9859c030000         fld dword ptr [ebp + 0x39c]
// 004ce3a5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 004ce3ab  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 004ce3b1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 004ce3b7  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 004ce3bd  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 004ce3c3  8d1437               lea edx, [edi + esi]
// 004ce3c6  52                   push edx
// 004ce3c7  8bce                 mov ecx, esi
// 004ce3c9  e8e2e5ffff           call 0x4cc9b0
// 004ce3ce  83c65c               add esi, 0x5c
// 004ce3d1  836c241401           sub dword ptr [esp + 0x14], 1
// 004ce3d6  75eb                 jne 0x4ce3c3
// 004ce3d8  81c588060000         add ebp, 0x688
// 004ce3de  55                   push ebp
// 004ce3df  8d8b88060000         lea ecx, [ebx + 0x688]
// 004ce3e5  e886c1ffff           call 0x4ca570
// 004ce3ea  5f                   pop edi
// 004ce3eb  5e                   pop esi
// 004ce3ec  5d                   pop ebp
// 004ce3ed  8bc3                 mov eax, ebx
// 004ce3ef  5b                   pop ebx
// 004ce3f0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
