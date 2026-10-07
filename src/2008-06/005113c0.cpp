// roc 2008-06 005113c0  unit: G3D::GCamera  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005113c0
//
// 005113c0  64a100000000         mov eax, dword ptr fs:[0]
// 005113c6  6aff                 push -1
// 005113c8  68c8c37c00           push 0x7cc3c8
// 005113cd  50                   push eax
// 005113ce  64892500000000       mov dword ptr fs:[0], esp
// 005113d5  83ec24               sub esp, 0x24
// 005113d8  57                   push edi
// 005113d9  8bf9                 mov edi, ecx
// 005113db  8b4704               mov eax, dword ptr [edi + 4]
// 005113de  3b4708               cmp eax, dword ptr [edi + 8]
// 005113e1  8b0f                 mov ecx, dword ptr [edi]
// 005113e3  7d58                 jge 0x51143d
// 005113e5  8d04c0               lea eax, [eax + eax*8]
// 005113e8  8d0481               lea eax, [ecx + eax*4]
// 005113eb  85c0                 test eax, eax
// 005113ed  7439                 je 0x511428
// 005113ef  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005113f3  8b11                 mov edx, dword ptr [ecx]
// 005113f5  8910                 mov dword ptr [eax], edx
// 005113f7  8b5104               mov edx, dword ptr [ecx + 4]
// 005113fa  895004               mov dword ptr [eax + 4], edx
// 005113fd  8b5108               mov edx, dword ptr [ecx + 8]
// 00511400  895008               mov dword ptr [eax + 8], edx
// 00511403  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00511406  89500c               mov dword ptr [eax + 0xc], edx
// 00511409  c74010bc828200       mov dword ptr [eax + 0x10], 0x8282bc
// 00511410  d94114               fld dword ptr [ecx + 0x14]
// 00511413  d95814               fstp dword ptr [eax + 0x14]
// 00511416  d94118               fld dword ptr [ecx + 0x18]
// 00511419  d95818               fstp dword ptr [eax + 0x18]
// 0051141c  d9411c               fld dword ptr [ecx + 0x1c]
// 0051141f  d9581c               fstp dword ptr [eax + 0x1c]
// 00511422  d94120               fld dword ptr [ecx + 0x20]
// 00511425  d95820               fstp dword ptr [eax + 0x20]
// 00511428  ff4704               inc dword ptr [edi + 4]
// 0051142b  5f                   pop edi
// 0051142c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00511430  64890d00000000       mov dword ptr fs:[0], ecx
// 00511437  83c430               add esp, 0x30
// 0051143a  c20400               ret 4
// 0051143d  56                   push esi
// 0051143e  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00511442  3bf1                 cmp esi, ecx
// 00511444  7270                 jb 0x5114b6
// 00511446  8d14c0               lea edx, [eax + eax*8]
// 00511449  8d0c91               lea ecx, [ecx + edx*4]
// 0051144c  3bf1                 cmp esi, ecx
// 0051144e  7366                 jae 0x5114b6
// 00511450  d94614               fld dword ptr [esi + 0x14]
// 00511453  8b16                 mov edx, dword ptr [esi]
// 00511455  8b4604               mov eax, dword ptr [esi + 4]
// 00511458  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051145c  d94618               fld dword ptr [esi + 0x18]
// 0051145f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00511462  d95c2420             fstp dword ptr [esp + 0x20]
// 00511466  89542408             mov dword ptr [esp + 8], edx
// 0051146a  d9461c               fld dword ptr [esi + 0x1c]
// 0051146d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00511470  d95c2424             fstp dword ptr [esp + 0x24]
// 00511474  8944240c             mov dword ptr [esp + 0xc], eax
// 00511478  d94620               fld dword ptr [esi + 0x20]
// 0051147b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0051147f  d95c2428             fstp dword ptr [esp + 0x28]
// 00511483  89542414             mov dword ptr [esp + 0x14], edx
// 00511487  c7442418bc828200     mov dword ptr [esp + 0x18], 0x8282bc
// 0051148f  8d442408             lea eax, [esp + 8]
// 00511493  50                   push eax
// 00511494  8bcf                 mov ecx, edi
// 00511496  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0051149e  e81dffffff           call 0x5113c0
// 005114a3  5e                   pop esi
// 005114a4  5f                   pop edi
// 005114a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005114a9  64890d00000000       mov dword ptr fs:[0], ecx
// 005114b0  83c430               add esp, 0x30
// 005114b3  c20400               ret 4
// 005114b6  6a00                 push 0
// 005114b8  40                   inc eax
// 005114b9  50                   push eax
// 005114ba  8bcf                 mov ecx, edi
// 005114bc  e87ffdffff           call 0x511240
// 005114c1  8b4704               mov eax, dword ptr [edi + 4]
// 005114c4  8b17                 mov edx, dword ptr [edi]
// 005114c6  8d0cc0               lea ecx, [eax + eax*8]
// 005114c9  8d448adc             lea eax, [edx + ecx*4 - 0x24]
// 005114cd  8b0e                 mov ecx, dword ptr [esi]
// 005114cf  8908                 mov dword ptr [eax], ecx
// 005114d1  8b5604               mov edx, dword ptr [esi + 4]
// 005114d4  895004               mov dword ptr [eax + 4], edx
// 005114d7  8b4e08               mov ecx, dword ptr [esi + 8]
// 005114da  894808               mov dword ptr [eax + 8], ecx
// 005114dd  8b560c               mov edx, dword ptr [esi + 0xc]
// 005114e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005114e4  89500c               mov dword ptr [eax + 0xc], edx
// 005114e7  d94614               fld dword ptr [esi + 0x14]
// 005114ea  d95814               fstp dword ptr [eax + 0x14]
// 005114ed  d94618               fld dword ptr [esi + 0x18]
// 005114f0  d95818               fstp dword ptr [eax + 0x18]
// 005114f3  d9461c               fld dword ptr [esi + 0x1c]
// 005114f6  d9581c               fstp dword ptr [eax + 0x1c]
// 005114f9  d94620               fld dword ptr [esi + 0x20]
// 005114fc  5e                   pop esi
// 005114fd  d95820               fstp dword ptr [eax + 0x20]
// 00511500  5f                   pop edi
// 00511501  64890d00000000       mov dword ptr fs:[0], ecx
// 00511508  83c430               add esp, 0x30
// 0051150b  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXABVFace@Frustum@GCamera@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
