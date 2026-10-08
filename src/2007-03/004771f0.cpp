// roc 2007-03 004771f0  unit: seg_00470000  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004771f0
//
// 004771f0  53                   push ebx
// 004771f1  55                   push ebp
// 004771f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004771f6  56                   push esi
// 004771f7  57                   push edi
// 004771f8  55                   push ebp
// 004771f9  8bd9                 mov ebx, ecx
// 004771fb  e820e2ffff           call 0x475420
// 00477200  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 00477206  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 0047720c  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 00477212  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 00477218  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 0047721e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 00477224  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 0047722a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 00477230  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 00477236  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 0047723c  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 00477242  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 00477248  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 0047724e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 00477254  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 0047725a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00477260  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 00477267  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 0047726d  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 00477273  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00477279  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 0047727f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00477285  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 0047728c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00477292  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 00477298  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 0047729e  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 004772a4  52                   push edx
// 004772a5  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 004772ab  e8e0ddffff           call 0x475090
// 004772b0  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 004772b6  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 004772bc  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 004772c2  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 004772c8  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 004772ce  8db5fc020000         lea esi, [ebp + 0x2fc]
// 004772d4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 004772da  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 004772e0  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 004772e6  b909000000           mov ecx, 9
// 004772eb  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 004772f1  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 004772f7  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 004772fd  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 00477303  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 00477309  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 0047730f  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 00477315  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 0047731b  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 00477321  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 00477327  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 0047732d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047732f  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 00477335  898320030000         mov dword ptr [ebx + 0x320], eax
// 0047733b  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 00477341  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 00477347  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 0047734d  899328030000         mov dword ptr [ebx + 0x328], edx
// 00477353  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 00477359  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 0047735f  dd8530030000         fld qword ptr [ebp + 0x330]
// 00477365  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 0047736b  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 00477371  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00477377  d9853c030000         fld dword ptr [ebp + 0x33c]
// 0047737d  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00477383  d98540030000         fld dword ptr [ebp + 0x340]
// 00477389  d99b40030000         fstp dword ptr [ebx + 0x340]
// 0047738f  d98544030000         fld dword ptr [ebp + 0x344]
// 00477395  d99b44030000         fstp dword ptr [ebx + 0x344]
// 0047739b  dd8548030000         fld qword ptr [ebp + 0x348]
// 004773a1  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 004773a7  dd8550030000         fld qword ptr [ebp + 0x350]
// 004773ad  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 004773b3  8d8b60030000         lea ecx, [ebx + 0x360]
// 004773b9  dd8558030000         fld qword ptr [ebp + 0x358]
// 004773bf  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 004773c5  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 004773cb  52                   push edx
// 004773cc  e8bfdcffff           call 0x475090
// 004773d1  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 004773d7  50                   push eax
// 004773d8  8d8b64030000         lea ecx, [ebx + 0x364]
// 004773de  e8addcffff           call 0x475090
// 004773e3  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 004773e9  51                   push ecx
// 004773ea  8d8b68030000         lea ecx, [ebx + 0x368]
// 004773f0  e89bdcffff           call 0x475090
// 004773f5  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 004773fb  52                   push edx
// 004773fc  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 00477402  e889dcffff           call 0x475090
// 00477407  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 0047740d  50                   push eax
// 0047740e  8d8b70030000         lea ecx, [ebx + 0x370]
// 00477414  e877dcffff           call 0x475090
// 00477419  dd8578030000         fld qword ptr [ebp + 0x378]
// 0047741f  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 00477425  8bfd                 mov edi, ebp
// 00477427  dd8580030000         fld qword ptr [ebp + 0x380]
// 0047742d  8db3a8030000         lea esi, [ebx + 0x3a8]
// 00477433  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 00477439  2bfb                 sub edi, ebx
// 0047743b  d98588030000         fld dword ptr [ebp + 0x388]
// 00477441  c744241408000000     mov dword ptr [esp + 0x14], 8
// 00477449  d99b88030000         fstp dword ptr [ebx + 0x388]
// 0047744f  d9858c030000         fld dword ptr [ebp + 0x38c]
// 00477455  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 0047745b  d98590030000         fld dword ptr [ebp + 0x390]
// 00477461  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00477467  d98594030000         fld dword ptr [ebp + 0x394]
// 0047746d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00477473  d98598030000         fld dword ptr [ebp + 0x398]
// 00477479  d99b98030000         fstp dword ptr [ebx + 0x398]
// 0047747f  d9859c030000         fld dword ptr [ebp + 0x39c]
// 00477485  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 0047748b  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 00477491  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00477497  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 0047749d  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 004774a3  8d1437               lea edx, [edi + esi]
// 004774a6  52                   push edx
// 004774a7  8bce                 mov ecx, esi
// 004774a9  e8d2e6ffff           call 0x475b80
// 004774ae  83c65c               add esi, 0x5c
// 004774b1  836c241401           sub dword ptr [esp + 0x14], 1
// 004774b6  75eb                 jne 0x4774a3
// 004774b8  81c588060000         add ebp, 0x688
// 004774be  55                   push ebp
// 004774bf  8d8b88060000         lea ecx, [ebx + 0x688]
// 004774c5  e856c0ffff           call 0x473520
// 004774ca  5f                   pop edi
// 004774cb  5e                   pop esi
// 004774cc  5d                   pop ebp
// 004774cd  8bc3                 mov eax, ebx
// 004774cf  5b                   pop ebx
// 004774d0  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
