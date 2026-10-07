// roc 2007-08 00507710  unit: G3D::GCamera  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00507710
//
// 00507710  6aff                 push -1
// 00507712  68f8f87400           push 0x74f8f8
// 00507717  64a100000000         mov eax, dword ptr fs:[0]
// 0050771d  50                   push eax
// 0050771e  83ec24               sub esp, 0x24
// 00507721  56                   push esi
// 00507722  57                   push edi
// 00507723  a188518b00           mov eax, dword ptr [0x8b5188]
// 00507728  33c4                 xor eax, esp
// 0050772a  50                   push eax
// 0050772b  8d442430             lea eax, [esp + 0x30]
// 0050772f  64a300000000         mov dword ptr fs:[0], eax
// 00507735  8bf9                 mov edi, ecx
// 00507737  8b4704               mov eax, dword ptr [edi + 4]
// 0050773a  3b4708               cmp eax, dword ptr [edi + 8]
// 0050773d  8b0f                 mov ecx, dword ptr [edi]
// 0050773f  7d5b                 jge 0x50779c
// 00507741  8d04c0               lea eax, [eax + eax*8]
// 00507744  8d0481               lea eax, [ecx + eax*4]
// 00507747  85c0                 test eax, eax
// 00507749  7439                 je 0x507784
// 0050774b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0050774f  8b11                 mov edx, dword ptr [ecx]
// 00507751  8910                 mov dword ptr [eax], edx
// 00507753  8b5104               mov edx, dword ptr [ecx + 4]
// 00507756  895004               mov dword ptr [eax + 4], edx
// 00507759  8b5108               mov edx, dword ptr [ecx + 8]
// 0050775c  895008               mov dword ptr [eax + 8], edx
// 0050775f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00507762  89500c               mov dword ptr [eax + 0xc], edx
// 00507765  c74010fc057a00       mov dword ptr [eax + 0x10], 0x7a05fc
// 0050776c  d94114               fld dword ptr [ecx + 0x14]
// 0050776f  d95814               fstp dword ptr [eax + 0x14]
// 00507772  d94118               fld dword ptr [ecx + 0x18]
// 00507775  d95818               fstp dword ptr [eax + 0x18]
// 00507778  d9411c               fld dword ptr [ecx + 0x1c]
// 0050777b  d9581c               fstp dword ptr [eax + 0x1c]
// 0050777e  d94120               fld dword ptr [ecx + 0x20]
// 00507781  d95820               fstp dword ptr [eax + 0x20]
// 00507784  83470401             add dword ptr [edi + 4], 1
// 00507788  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0050778c  64890d00000000       mov dword ptr fs:[0], ecx
// 00507793  59                   pop ecx
// 00507794  5f                   pop edi
// 00507795  5e                   pop esi
// 00507796  83c430               add esp, 0x30
// 00507799  c20400               ret 4
// 0050779c  8b742440             mov esi, dword ptr [esp + 0x40]
// 005077a0  3bf1                 cmp esi, ecx
// 005077a2  7271                 jb 0x507815
// 005077a4  8d14c0               lea edx, [eax + eax*8]
// 005077a7  8d0c91               lea ecx, [ecx + edx*4]
// 005077aa  3bf1                 cmp esi, ecx
// 005077ac  7367                 jae 0x507815
// 005077ae  d94614               fld dword ptr [esi + 0x14]
// 005077b1  8b16                 mov edx, dword ptr [esi]
// 005077b3  8b4604               mov eax, dword ptr [esi + 4]
// 005077b6  d95c2420             fstp dword ptr [esp + 0x20]
// 005077ba  d94618               fld dword ptr [esi + 0x18]
// 005077bd  8b4e08               mov ecx, dword ptr [esi + 8]
// 005077c0  d95c2424             fstp dword ptr [esp + 0x24]
// 005077c4  8954240c             mov dword ptr [esp + 0xc], edx
// 005077c8  d9461c               fld dword ptr [esi + 0x1c]
// 005077cb  8b560c               mov edx, dword ptr [esi + 0xc]
// 005077ce  d95c2428             fstp dword ptr [esp + 0x28]
// 005077d2  89442410             mov dword ptr [esp + 0x10], eax
// 005077d6  d94620               fld dword ptr [esi + 0x20]
// 005077d9  894c2414             mov dword ptr [esp + 0x14], ecx
// 005077dd  d95c242c             fstp dword ptr [esp + 0x2c]
// 005077e1  89542418             mov dword ptr [esp + 0x18], edx
// 005077e5  c744241cfc057a00     mov dword ptr [esp + 0x1c], 0x7a05fc
// 005077ed  8d44240c             lea eax, [esp + 0xc]
// 005077f1  50                   push eax
// 005077f2  8bcf                 mov ecx, edi
// 005077f4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005077fc  e80fffffff           call 0x507710
// 00507801  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00507805  64890d00000000       mov dword ptr fs:[0], ecx
// 0050780c  59                   pop ecx
// 0050780d  5f                   pop edi
// 0050780e  5e                   pop esi
// 0050780f  83c430               add esp, 0x30
// 00507812  c20400               ret 4
// 00507815  6a00                 push 0
// 00507817  83c001               add eax, 1
// 0050781a  50                   push eax
// 0050781b  8bcf                 mov ecx, edi
// 0050781d  e86efdffff           call 0x507590
// 00507822  8b4704               mov eax, dword ptr [edi + 4]
// 00507825  8b17                 mov edx, dword ptr [edi]
// 00507827  8d0cc0               lea ecx, [eax + eax*8]
// 0050782a  8d448adc             lea eax, [edx + ecx*4 - 0x24]
// 0050782e  8b0e                 mov ecx, dword ptr [esi]
// 00507830  8908                 mov dword ptr [eax], ecx
// 00507832  8b5604               mov edx, dword ptr [esi + 4]
// 00507835  895004               mov dword ptr [eax + 4], edx
// 00507838  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050783b  894808               mov dword ptr [eax + 8], ecx
// 0050783e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00507841  89500c               mov dword ptr [eax + 0xc], edx
// 00507844  d94614               fld dword ptr [esi + 0x14]
// 00507847  d95814               fstp dword ptr [eax + 0x14]
// 0050784a  d94618               fld dword ptr [esi + 0x18]
// 0050784d  d95818               fstp dword ptr [eax + 0x18]
// 00507850  d9461c               fld dword ptr [esi + 0x1c]
// 00507853  d9581c               fstp dword ptr [eax + 0x1c]
// 00507856  d94620               fld dword ptr [esi + 0x20]
// 00507859  d95820               fstp dword ptr [eax + 0x20]
// 0050785c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00507860  64890d00000000       mov dword ptr fs:[0], ecx
// 00507867  59                   pop ecx
// 00507868  5f                   pop edi
// 00507869  5e                   pop esi
// 0050786a  83c430               add esp, 0x30
// 0050786d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXABVFace@Frustum@GCamera@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
