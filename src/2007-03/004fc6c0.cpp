// roc 2007-03 004fc6c0  unit: seg_004f0000  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc6c0
//
// 004fc6c0  6aff                 push -1
// 004fc6c2  68c8087500           push 0x7508c8
// 004fc6c7  64a100000000         mov eax, dword ptr fs:[0]
// 004fc6cd  50                   push eax
// 004fc6ce  83ec24               sub esp, 0x24
// 004fc6d1  56                   push esi
// 004fc6d2  57                   push edi
// 004fc6d3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fc6d8  33c4                 xor eax, esp
// 004fc6da  50                   push eax
// 004fc6db  8d442430             lea eax, [esp + 0x30]
// 004fc6df  64a300000000         mov dword ptr fs:[0], eax
// 004fc6e5  8bf9                 mov edi, ecx
// 004fc6e7  8b4704               mov eax, dword ptr [edi + 4]
// 004fc6ea  3b4708               cmp eax, dword ptr [edi + 8]
// 004fc6ed  8b0f                 mov ecx, dword ptr [edi]
// 004fc6ef  7d5b                 jge 0x4fc74c
// 004fc6f1  8d04c0               lea eax, [eax + eax*8]
// 004fc6f4  8d0481               lea eax, [ecx + eax*4]
// 004fc6f7  85c0                 test eax, eax
// 004fc6f9  7439                 je 0x4fc734
// 004fc6fb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004fc6ff  8b11                 mov edx, dword ptr [ecx]
// 004fc701  8910                 mov dword ptr [eax], edx
// 004fc703  8b5104               mov edx, dword ptr [ecx + 4]
// 004fc706  895004               mov dword ptr [eax + 4], edx
// 004fc709  8b5108               mov edx, dword ptr [ecx + 8]
// 004fc70c  895008               mov dword ptr [eax + 8], edx
// 004fc70f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004fc712  89500c               mov dword ptr [eax + 0xc], edx
// 004fc715  c740103cfd7900       mov dword ptr [eax + 0x10], 0x79fd3c
// 004fc71c  d94114               fld dword ptr [ecx + 0x14]
// 004fc71f  d95814               fstp dword ptr [eax + 0x14]
// 004fc722  d94118               fld dword ptr [ecx + 0x18]
// 004fc725  d95818               fstp dword ptr [eax + 0x18]
// 004fc728  d9411c               fld dword ptr [ecx + 0x1c]
// 004fc72b  d9581c               fstp dword ptr [eax + 0x1c]
// 004fc72e  d94120               fld dword ptr [ecx + 0x20]
// 004fc731  d95820               fstp dword ptr [eax + 0x20]
// 004fc734  83470401             add dword ptr [edi + 4], 1
// 004fc738  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004fc73c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fc743  59                   pop ecx
// 004fc744  5f                   pop edi
// 004fc745  5e                   pop esi
// 004fc746  83c430               add esp, 0x30
// 004fc749  c20400               ret 4
// 004fc74c  8b742440             mov esi, dword ptr [esp + 0x40]
// 004fc750  3bf1                 cmp esi, ecx
// 004fc752  7271                 jb 0x4fc7c5
// 004fc754  8d14c0               lea edx, [eax + eax*8]
// 004fc757  8d0c91               lea ecx, [ecx + edx*4]
// 004fc75a  3bf1                 cmp esi, ecx
// 004fc75c  7367                 jae 0x4fc7c5
// 004fc75e  d94614               fld dword ptr [esi + 0x14]
// 004fc761  8b16                 mov edx, dword ptr [esi]
// 004fc763  8b4604               mov eax, dword ptr [esi + 4]
// 004fc766  d95c2420             fstp dword ptr [esp + 0x20]
// 004fc76a  d94618               fld dword ptr [esi + 0x18]
// 004fc76d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc770  d95c2424             fstp dword ptr [esp + 0x24]
// 004fc774  8954240c             mov dword ptr [esp + 0xc], edx
// 004fc778  d9461c               fld dword ptr [esi + 0x1c]
// 004fc77b  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fc77e  d95c2428             fstp dword ptr [esp + 0x28]
// 004fc782  89442410             mov dword ptr [esp + 0x10], eax
// 004fc786  d94620               fld dword ptr [esi + 0x20]
// 004fc789  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fc78d  d95c242c             fstp dword ptr [esp + 0x2c]
// 004fc791  89542418             mov dword ptr [esp + 0x18], edx
// 004fc795  c744241c3cfd7900     mov dword ptr [esp + 0x1c], 0x79fd3c
// 004fc79d  8d44240c             lea eax, [esp + 0xc]
// 004fc7a1  50                   push eax
// 004fc7a2  8bcf                 mov ecx, edi
// 004fc7a4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004fc7ac  e80fffffff           call 0x4fc6c0
// 004fc7b1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004fc7b5  64890d00000000       mov dword ptr fs:[0], ecx
// 004fc7bc  59                   pop ecx
// 004fc7bd  5f                   pop edi
// 004fc7be  5e                   pop esi
// 004fc7bf  83c430               add esp, 0x30
// 004fc7c2  c20400               ret 4
// 004fc7c5  6a00                 push 0
// 004fc7c7  83c001               add eax, 1
// 004fc7ca  50                   push eax
// 004fc7cb  8bcf                 mov ecx, edi
// 004fc7cd  e86efdffff           call 0x4fc540
// 004fc7d2  8b4704               mov eax, dword ptr [edi + 4]
// 004fc7d5  8b17                 mov edx, dword ptr [edi]
// 004fc7d7  8d0cc0               lea ecx, [eax + eax*8]
// 004fc7da  8d448adc             lea eax, [edx + ecx*4 - 0x24]
// 004fc7de  8b0e                 mov ecx, dword ptr [esi]
// 004fc7e0  8908                 mov dword ptr [eax], ecx
// 004fc7e2  8b5604               mov edx, dword ptr [esi + 4]
// 004fc7e5  895004               mov dword ptr [eax + 4], edx
// 004fc7e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc7eb  894808               mov dword ptr [eax + 8], ecx
// 004fc7ee  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fc7f1  89500c               mov dword ptr [eax + 0xc], edx
// 004fc7f4  d94614               fld dword ptr [esi + 0x14]
// 004fc7f7  d95814               fstp dword ptr [eax + 0x14]
// 004fc7fa  d94618               fld dword ptr [esi + 0x18]
// 004fc7fd  d95818               fstp dword ptr [eax + 0x18]
// 004fc800  d9461c               fld dword ptr [esi + 0x1c]
// 004fc803  d9581c               fstp dword ptr [eax + 0x1c]
// 004fc806  d94620               fld dword ptr [esi + 0x20]
// 004fc809  d95820               fstp dword ptr [eax + 0x20]
// 004fc80c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004fc810  64890d00000000       mov dword ptr fs:[0], ecx
// 004fc817  59                   pop ecx
// 004fc818  5f                   pop edi
// 004fc819  5e                   pop esi
// 004fc81a  83c430               add esp, 0x30
// 004fc81d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXABVFace@Frustum@GCamera@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
