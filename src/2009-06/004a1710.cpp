// from server: 100% by auto
// roc 2009-06 004a1710  unit: G3D::PBVTextureFormat::?$Table  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a1710
//
// 004a1710  53                   push ebx
// 004a1711  55                   push ebp
// 004a1712  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004a1716  56                   push esi
// 004a1717  57                   push edi
// 004a1718  55                   push ebp
// 004a1719  8bd9                 mov ebx, ecx
// 004a171b  e870e3ffff           call 0x49fa90
// 004a1720  d985a0020000         fld dword ptr [ebp + 0x2a0]
// 004a1726  d99ba0020000         fstp dword ptr [ebx + 0x2a0]
// 004a172c  d985a4020000         fld dword ptr [ebp + 0x2a4]
// 004a1732  d99ba4020000         fstp dword ptr [ebx + 0x2a4]
// 004a1738  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 004a173e  d99ba8020000         fstp dword ptr [ebx + 0x2a8]
// 004a1744  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 004a174a  d99bac020000         fstp dword ptr [ebx + 0x2ac]
// 004a1750  d985b0020000         fld dword ptr [ebp + 0x2b0]
// 004a1756  d99bb0020000         fstp dword ptr [ebx + 0x2b0]
// 004a175c  d985b4020000         fld dword ptr [ebp + 0x2b4]
// 004a1762  d99bb4020000         fstp dword ptr [ebx + 0x2b4]
// 004a1768  d985b8020000         fld dword ptr [ebp + 0x2b8]
// 004a176e  d99bb8020000         fstp dword ptr [ebx + 0x2b8]
// 004a1774  d985bc020000         fld dword ptr [ebp + 0x2bc]
// 004a177a  d99bbc020000         fstp dword ptr [ebx + 0x2bc]
// 004a1780  0fb685c0020000       movzx eax, byte ptr [ebp + 0x2c0]
// 004a1787  8883c0020000         mov byte ptr [ebx + 0x2c0], al
// 004a178d  8a8dc1020000         mov cl, byte ptr [ebp + 0x2c1]
// 004a1793  888bc1020000         mov byte ptr [ebx + 0x2c1], cl
// 004a1799  8a95c2020000         mov dl, byte ptr [ebp + 0x2c2]
// 004a179f  8893c2020000         mov byte ptr [ebx + 0x2c2], dl
// 004a17a5  0fb685c3020000       movzx eax, byte ptr [ebp + 0x2c3]
// 004a17ac  8883c3020000         mov byte ptr [ebx + 0x2c3], al
// 004a17b2  8b8dc4020000         mov ecx, dword ptr [ebp + 0x2c4]
// 004a17b8  898bc4020000         mov dword ptr [ebx + 0x2c4], ecx
// 004a17be  8b95c8020000         mov edx, dword ptr [ebp + 0x2c8]
// 004a17c4  52                   push edx
// 004a17c5  8d8bc8020000         lea ecx, [ebx + 0x2c8]
// 004a17cb  e890e0ffff           call 0x49f860
// 004a17d0  8b85cc020000         mov eax, dword ptr [ebp + 0x2cc]
// 004a17d6  8983cc020000         mov dword ptr [ebx + 0x2cc], eax
// 004a17dc  8b8dd0020000         mov ecx, dword ptr [ebp + 0x2d0]
// 004a17e2  898bd0020000         mov dword ptr [ebx + 0x2d0], ecx
// 004a17e8  dd85d8020000         fld qword ptr [ebp + 0x2d8]
// 004a17ee  8db5fc020000         lea esi, [ebp + 0x2fc]
// 004a17f4  dd9bd8020000         fstp qword ptr [ebx + 0x2d8]
// 004a17fa  8dbbfc020000         lea edi, [ebx + 0x2fc]
// 004a1800  dd85e0020000         fld qword ptr [ebp + 0x2e0]
// 004a1806  b909000000           mov ecx, 9
// 004a180b  dd9be0020000         fstp qword ptr [ebx + 0x2e0]
// 004a1811  d985e8020000         fld dword ptr [ebp + 0x2e8]
// 004a1817  d99be8020000         fstp dword ptr [ebx + 0x2e8]
// 004a181d  d985ec020000         fld dword ptr [ebp + 0x2ec]
// 004a1823  d99bec020000         fstp dword ptr [ebx + 0x2ec]
// 004a1829  d985f0020000         fld dword ptr [ebp + 0x2f0]
// 004a182f  d99bf0020000         fstp dword ptr [ebx + 0x2f0]
// 004a1835  d985f4020000         fld dword ptr [ebp + 0x2f4]
// 004a183b  d99bf4020000         fstp dword ptr [ebx + 0x2f4]
// 004a1841  8b95f8020000         mov edx, dword ptr [ebp + 0x2f8]
// 004a1847  8993f8020000         mov dword ptr [ebx + 0x2f8], edx
// 004a184d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a184f  8b8520030000         mov eax, dword ptr [ebp + 0x320]
// 004a1855  898320030000         mov dword ptr [ebx + 0x320], eax
// 004a185b  8b8d24030000         mov ecx, dword ptr [ebp + 0x324]
// 004a1861  898b24030000         mov dword ptr [ebx + 0x324], ecx
// 004a1867  8b9528030000         mov edx, dword ptr [ebp + 0x328]
// 004a186d  899328030000         mov dword ptr [ebx + 0x328], edx
// 004a1873  8b852c030000         mov eax, dword ptr [ebp + 0x32c]
// 004a1879  89832c030000         mov dword ptr [ebx + 0x32c], eax
// 004a187f  dd8530030000         fld qword ptr [ebp + 0x330]
// 004a1885  dd9b30030000         fstp qword ptr [ebx + 0x330]
// 004a188b  8b8d38030000         mov ecx, dword ptr [ebp + 0x338]
// 004a1891  898b38030000         mov dword ptr [ebx + 0x338], ecx
// 004a1897  d9853c030000         fld dword ptr [ebp + 0x33c]
// 004a189d  d99b3c030000         fstp dword ptr [ebx + 0x33c]
// 004a18a3  d98540030000         fld dword ptr [ebp + 0x340]
// 004a18a9  d99b40030000         fstp dword ptr [ebx + 0x340]
// 004a18af  d98544030000         fld dword ptr [ebp + 0x344]
// 004a18b5  d99b44030000         fstp dword ptr [ebx + 0x344]
// 004a18bb  dd8548030000         fld qword ptr [ebp + 0x348]
// 004a18c1  dd9b48030000         fstp qword ptr [ebx + 0x348]
// 004a18c7  dd8550030000         fld qword ptr [ebp + 0x350]
// 004a18cd  dd9b50030000         fstp qword ptr [ebx + 0x350]
// 004a18d3  8d8b60030000         lea ecx, [ebx + 0x360]
// 004a18d9  dd8558030000         fld qword ptr [ebp + 0x358]
// 004a18df  dd9b58030000         fstp qword ptr [ebx + 0x358]
// 004a18e5  8b9560030000         mov edx, dword ptr [ebp + 0x360]
// 004a18eb  52                   push edx
// 004a18ec  e86fdfffff           call 0x49f860
// 004a18f1  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 004a18f7  50                   push eax
// 004a18f8  8d8b64030000         lea ecx, [ebx + 0x364]
// 004a18fe  e85ddfffff           call 0x49f860
// 004a1903  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 004a1909  51                   push ecx
// 004a190a  8d8b68030000         lea ecx, [ebx + 0x368]
// 004a1910  e84bdfffff           call 0x49f860
// 004a1915  8b956c030000         mov edx, dword ptr [ebp + 0x36c]
// 004a191b  52                   push edx
// 004a191c  8d8b6c030000         lea ecx, [ebx + 0x36c]
// 004a1922  e839dfffff           call 0x49f860
// 004a1927  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 004a192d  50                   push eax
// 004a192e  8d8b70030000         lea ecx, [ebx + 0x370]
// 004a1934  e827dfffff           call 0x49f860
// 004a1939  dd8578030000         fld qword ptr [ebp + 0x378]
// 004a193f  dd9b78030000         fstp qword ptr [ebx + 0x378]
// 004a1945  8bfd                 mov edi, ebp
// 004a1947  dd8580030000         fld qword ptr [ebp + 0x380]
// 004a194d  8db3a8030000         lea esi, [ebx + 0x3a8]
// 004a1953  dd9b80030000         fstp qword ptr [ebx + 0x380]
// 004a1959  2bfb                 sub edi, ebx
// 004a195b  d98588030000         fld dword ptr [ebp + 0x388]
// 004a1961  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004a1969  d99b88030000         fstp dword ptr [ebx + 0x388]
// 004a196f  d9858c030000         fld dword ptr [ebp + 0x38c]
// 004a1975  d99b8c030000         fstp dword ptr [ebx + 0x38c]
// 004a197b  d98590030000         fld dword ptr [ebp + 0x390]
// 004a1981  d99b90030000         fstp dword ptr [ebx + 0x390]
// 004a1987  d98594030000         fld dword ptr [ebp + 0x394]
// 004a198d  d99b94030000         fstp dword ptr [ebx + 0x394]
// 004a1993  d98598030000         fld dword ptr [ebp + 0x398]
// 004a1999  d99b98030000         fstp dword ptr [ebx + 0x398]
// 004a199f  d9859c030000         fld dword ptr [ebp + 0x39c]
// 004a19a5  d99b9c030000         fstp dword ptr [ebx + 0x39c]
// 004a19ab  d985a0030000         fld dword ptr [ebp + 0x3a0]
// 004a19b1  d99ba0030000         fstp dword ptr [ebx + 0x3a0]
// 004a19b7  8b8da4030000         mov ecx, dword ptr [ebp + 0x3a4]
// 004a19bd  898ba4030000         mov dword ptr [ebx + 0x3a4], ecx
// 004a19c3  8d1437               lea edx, [edi + esi]
// 004a19c6  52                   push edx
// 004a19c7  8bce                 mov ecx, esi
// 004a19c9  e852e8ffff           call 0x4a0220
// 004a19ce  83c65c               add esi, 0x5c
// 004a19d1  836c241401           sub dword ptr [esp + 0x14], 1
// 004a19d6  75eb                 jne 0x4a19c3
// 004a19d8  81c588060000         add ebp, 0x688
// 004a19de  55                   push ebp
// 004a19df  8d8b88060000         lea ecx, [ebx + 0x688]
// 004a19e5  e886c5ffff           call 0x49df70
// 004a19ea  5f                   pop edi
// 004a19eb  5e                   pop esi
// 004a19ec  5d                   pop ebp
// 004a19ed  8bc3                 mov eax, ebx
// 004a19ef  5b                   pop ebx
// 004a19f0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4RenderState@RenderDevice@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
