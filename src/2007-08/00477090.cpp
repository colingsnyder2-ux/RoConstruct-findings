// roc 2007-08 00477090  unit: CInstanceRecord::CNameItem  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00477090
//
// 00477090  53                   push ebx
// 00477091  55                   push ebp
// 00477092  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00477096  56                   push esi
// 00477097  57                   push edi
// 00477098  55                   push ebp
// 00477099  8bd9                 mov ebx, ecx
// 0047709b  e860e2ffff           call 0x475300
// 004770a0  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 004770a6  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 004770ac  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 004770b2  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 004770b8  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 004770be  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 004770c4  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 004770ca  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 004770d0  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 004770d6  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 004770dc  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 004770e2  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 004770e8  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 004770ee  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 004770f4  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 004770fa  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 00477100  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 00477107  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 0047710d  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 00477113  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 00477119  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 0047711f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 00477125  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 0047712c  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 00477132  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 00477138  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 0047713e  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 00477144  52                   push edx
// 00477145  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 0047714b  e820deffff           call 0x474f70
// 00477150  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 00477156  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 0047715c  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 00477162  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 00477168  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 0047716e  8db5fc020000         lea esi, [ebp + 0x2fc]
// 00477174  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 0047717a  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 00477180  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 00477186  b909000000           mov ecx, 9
// 0047718b  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 00477191  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 00477197  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 0047719d  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 004771a3  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 004771a9  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 004771af  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 004771b5  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 004771bb  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 004771c1  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 004771c7  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 004771cd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004771cf  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 004771d5  898320030000         mov dword ptr [ebx + 0x320], eax
// 004771db  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 004771e1  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 004771e7  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 004771ed  899328030000         mov dword ptr [ebx + 0x328], edx
// 004771f3  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 004771f9  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 004771ff  dd8530030000         fld qword ptr [ebp + 0x330]
// 00477205  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 0047720b  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 00477211  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 00477217  d9853c030000         fld dword ptr [ebp + 0x33c]
// 0047721d  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 00477223  d98540030000         fld dword ptr [ebp + 0x340]
// 00477229  d99b40030000         fstp dword ptr [ebx + 0x340]
// 0047722f  d98544030000         fld dword ptr [ebp + 0x344]
// 00477235  d99b44030000         fstp dword ptr [ebx + 0x344]
// 0047723b  dd8548030000         fld qword ptr [ebp + 0x348]
// 00477241  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 00477247  dd8550030000         fld qword ptr [ebp + 0x350]
// 0047724d  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 00477253  8d8b60030000         lea ecx, [ebx + 0x360]
// 00477259  dd8558030000         fld qword ptr [ebp + 0x358]
// 0047725f  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 00477265  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 0047726b  52                   push edx
// 0047726c  e8ffdcffff           call 0x474f70
// 00477271  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 00477277  50                   push eax
// 00477278  8d8b64030000         lea ecx, [ebx + 0x364]
// 0047727e  e8eddcffff           call 0x474f70
// 00477283  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 00477289  51                   push ecx
// 0047728a  8d8b68030000         lea ecx, [ebx + 0x368]
// 00477290  e8dbdcffff           call 0x474f70
// 00477295  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 0047729b  52                   push edx
// 0047729c  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 004772a2  e8c9dcffff           call 0x474f70
// 004772a7  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 004772ad  50                   push eax
// 004772ae  8d8b70030000         lea ecx, [ebx + 0x370]
// 004772b4  e8b7dcffff           call 0x474f70
// 004772b9  dd8578030000         fld qword ptr [ebp + 0x378]
// 004772bf  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 004772c5  8bfd                 mov edi, ebp
// 004772c7  dd8580030000         fld qword ptr [ebp + 0x380]
// 004772cd  8db3a8030000         lea esi, [ebx + 0x3a8]
// 004772d3  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 004772d9  2bfb                 sub edi, ebx
// 004772db  d98588030000         fld dword ptr [ebp + 0x388]
// 004772e1  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004772e9  d99b88030000         fstp dword ptr [ebx + 0x388]
// 004772ef  d9858c030000         fld dword ptr [ebp + 0x38c]
// 004772f5  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 004772fb  d98590030000         fld dword ptr [ebp + 0x390]
// 00477301  d99b90030000         fstp dword ptr [ebx + 0x390]
// 00477307  d98594030000         fld dword ptr [ebp + 0x394]
// 0047730d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 00477313  d98598030000         fld dword ptr [ebp + 0x398]
// 00477319  d99b98030000         fstp dword ptr [ebx + 0x398]
// 0047731f  d9859c030000         fld dword ptr [ebp + 0x39c]
// 00477325  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 0047732b  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 00477331  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 00477337  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 0047733d  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 00477343  8d1437               lea edx, [edi + esi]
// 00477346  52                   push edx
// 00477347  8bce                 mov ecx, esi
// 00477349  e8d2e6ffff           call 0x475a20
// 0047734e  83c65c               add esi, 0x5c
// 00477351  836c241401           sub dword ptr [esp + 0x14], 1
// 00477356  75eb                 jne 0x477343
// 00477358  81c588060000         add ebp, 0x688
// 0047735e  55                   push ebp
// 0047735f  8d8b88060000         lea ecx, [ebx + 0x688]
// 00477365  e8c6c0ffff           call 0x473430
// 0047736a  5f                   pop edi
// 0047736b  5e                   pop esi
// 0047736c  5d                   pop ebp
// 0047736d  8bc3                 mov eax, ebx
// 0047736f  5b                   pop ebx
// 00477370  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
