// roc 2009-12 004d11f0  unit: G3D::PBVTextureFormat::?$Table  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d11f0
//
// 004d11f0  83ec40               sub esp, 0x40
// 004d11f3  53                   push ebx
// 004d11f4  56                   push esi
// 004d11f5  8bf1                 mov esi, ecx
// 004d11f7  57                   push edi
// 004d11f8  8d8620010000         lea eax, [esi + 0x120]
// 004d11fe  50                   push eax
// 004d11ff  8d8e80080000         lea ecx, [esi + 0x880]
// 004d1205  e866ebffff           call 0x4cfd70
// 004d120a  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004d120e  51                   push ecx
// 004d120f  bb01000000           mov ebx, 1
// 004d1214  015e7c               add dword ptr [esi + 0x7c], ebx
// 004d1217  8bce                 mov ecx, esi
// 004d1219  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 004d1220  c6867808000000       mov byte ptr [esi + 0x878], 0
// 004d1227  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004d1231  e8fab8ffff           call 0x4ccb30
// 004d1236  015e78               add dword ptr [esi + 0x78], ebx
// 004d1239  83beec03000006       cmp dword ptr [esi + 0x3ec], 6
// 004d1240  8b3ddcbb9800         mov edi, dword ptr [0x98bbdc]
// 004d1246  7414                 je 0x4d125c
// 004d1248  015e70               add dword ptr [esi + 0x70], ebx
// 004d124b  68710b0000           push 0xb71
// 004d1250  ffd7                 call edi
// 004d1252  c786ec03000006000000 mov dword ptr [esi + 0x3ec], 6
// 004d125c  015e78               add dword ptr [esi + 0x78], ebx
// 004d125f  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 004d1266  7417                 je 0x4d127f
// 004d1268  68500b0000           push 0xb50
// 004d126d  ffd7                 call edi
// 004d126f  015e70               add dword ptr [esi + 0x70], ebx
// 004d1272  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 004d1279  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004d127f  015e78               add dword ptr [esi + 0x78], ebx
// 004d1282  83be1804000002       cmp dword ptr [esi + 0x418], 2
// 004d1289  7414                 je 0x4d129f
// 004d128b  015e70               add dword ptr [esi + 0x70], ebx
// 004d128e  68440b0000           push 0xb44
// 004d1293  ffd7                 call edi
// 004d1295  c7861804000002000000 mov dword ptr [esi + 0x418], 2
// 004d129f  015e78               add dword ptr [esi + 0x78], ebx
// 004d12a2  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004d12a9  7412                 je 0x4d12bd
// 004d12ab  015e70               add dword ptr [esi + 0x70], ebx
// 004d12ae  6a00                 push 0
// 004d12b0  ff15b4bb9800         call dword ptr [0x98bbb4]
// 004d12b6  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 004d12bd  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 004d12c1  57                   push edi
// 004d12c2  8bce                 mov ecx, esi
// 004d12c4  e857b2ffff           call 0x4cc520
// 004d12c9  e8e2361200           call 0x5f49b0
// 004d12ce  50                   push eax
// 004d12cf  8d4c2410             lea ecx, [esp + 0x10]
// 004d12d3  e828261200           call 0x5f3900
// 004d12d8  0f57c0               xorps xmm0, xmm0
// 004d12db  841d2cccb700         test byte ptr [0xb7cc2c], bl
// 004d12e1  751e                 jne 0x4d1301
// 004d12e3  091d2cccb700         or dword ptr [0xb7cc2c], ebx
// 004d12e9  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 004d12f1  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 004d12f9  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 004d1301  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 004d1309  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004d130f  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 004d1317  8d54240c             lea edx, [esp + 0xc]
// 004d131b  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004d1321  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 004d1329  52                   push edx
// 004d132a  8bce                 mov ecx, esi
// 004d132c  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004d1332  e889a1ffff           call 0x4cb4c0
// 004d1337  e874361200           call 0x5f49b0
// 004d133c  50                   push eax
// 004d133d  8d4c2410             lea ecx, [esp + 0x10]
// 004d1341  e8ba251200           call 0x5f3900
// 004d1346  841d2cccb700         test byte ptr [0xb7cc2c], bl
// 004d134c  7521                 jne 0x4d136f
// 004d134e  0f57c0               xorps xmm0, xmm0
// 004d1351  091d2cccb700         or dword ptr [0xb7cc2c], ebx
// 004d1357  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 004d135f  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 004d1367  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 004d136f  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 004d1377  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004d137d  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 004d1385  8d44240c             lea eax, [esp + 0xc]
// 004d1389  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004d138f  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 004d1397  50                   push eax
// 004d1398  8bce                 mov ecx, esi
// 004d139a  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004d13a0  e8fbb8ffff           call 0x4ccca0
// 004d13a5  d9e8                 fld1 
// 004d13a7  f30f104704           movss xmm0, dword ptr [edi + 4]
// 004d13ac  f30f101f             movss xmm3, dword ptr [edi]
// 004d13b0  f30f10570c           movss xmm2, dword ptr [edi + 0xc]
// 004d13b5  83ec18               sub esp, 0x18
// 004d13b8  d95c2414             fstp dword ptr [esp + 0x14]
// 004d13bc  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 004d13c2  d90504b89a00         fld dword ptr [0x9ab804]
// 004d13c8  0f28c8               movaps xmm1, xmm0
// 004d13cb  d95c2410             fstp dword ptr [esp + 0x10]
// 004d13cf  f30f5cd0             subss xmm2, xmm0
// 004d13d3  f30f104708           movss xmm0, dword ptr [edi + 8]
// 004d13d8  d9442468             fld dword ptr [esp + 0x68]
// 004d13dc  d95c240c             fstp dword ptr [esp + 0xc]
// 004d13e0  f30f115c246c         movss dword ptr [esp + 0x6c], xmm3
// 004d13e6  d944246c             fld dword ptr [esp + 0x6c]
// 004d13ea  f30f5cc3             subss xmm0, xmm3
// 004d13ee  f30f58ca             addss xmm1, xmm2
// 004d13f2  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 004d13f8  f30f58c3             addss xmm0, xmm3
// 004d13fc  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004d1402  d91c24               fstp dword ptr [esp]
// 004d1405  8d4c2424             lea ecx, [esp + 0x24]
// 004d1409  51                   push ecx
// 004d140a  e8a1561200           call 0x5f6ab0
// 004d140f  83c41c               add esp, 0x1c
// 004d1412  50                   push eax
// 004d1413  8bce                 mov ecx, esi
// 004d1415  e856a1ffff           call 0x4cb570
// 004d141a  5f                   pop edi
// 004d141b  5e                   pop esi
// 004d141c  5b                   pop ebx
// 004d141d  83c440               add esp, 0x40
// 004d1420  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@AAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
