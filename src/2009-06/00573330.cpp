// roc 2009-06 00573330  unit: G3D::GCamera  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573330
//
// 00573330  6aff                 push -1
// 00573332  6849058600           push 0x860549
// 00573337  64a100000000         mov eax, dword ptr fs:[0]
// 0057333d  50                   push eax
// 0057333e  64892500000000       mov dword ptr fs:[0], esp
// 00573345  83ec24               sub esp, 0x24
// 00573348  53                   push ebx
// 00573349  56                   push esi
// 0057334a  57                   push edi
// 0057334b  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0057334f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00573357  d94708               fld dword ptr [edi + 8]
// 0057335a  d827                 fsub dword ptr [edi]
// 0057335c  83ec08               sub esp, 8
// 0057335f  8bd9                 mov ebx, ecx
// 00573361  dd1c24               fstp qword ptr [esp]
// 00573364  e8176f1a00           call 0x71a280
// 00573369  e8526b1a00           call 0x719ec0
// 0057336e  d9470c               fld dword ptr [edi + 0xc]
// 00573371  d86704               fsub dword ptr [edi + 4]
// 00573374  89442454             mov dword ptr [esp + 0x54], eax
// 00573378  dd1c24               fstp qword ptr [esp]
// 0057337b  e8006f1a00           call 0x71a280
// 00573380  83c408               add esp, 8
// 00573383  e8386b1a00           call 0x719ec0
// 00573388  8b742440             mov esi, dword ptr [esp + 0x40]
// 0057338c  8bce                 mov ecx, esi
// 0057338e  89442410             mov dword ptr [esp + 0x10], eax
// 00573392  e849feffff           call 0x5731e0
// 00573397  b801000000           mov eax, 1
// 0057339c  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005733a4  8944240c             mov dword ptr [esp + 0xc], eax
// 005733a8  8405f8c6a300         test byte ptr [0xa3c6f8], al
// 005733ae  751a                 jne 0x5733ca
// 005733b0  d9ee                 fldz 
// 005733b2  0905f8c6a300         or dword ptr [0xa3c6f8], eax
// 005733b8  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 005733be  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 005733c4  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 005733ca  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 005733d0  56                   push esi
// 005733d1  d95e04               fstp dword ptr [esi + 4]
// 005733d4  8d442418             lea eax, [esp + 0x18]
// 005733d8  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 005733de  50                   push eax
// 005733df  d95e08               fstp dword ptr [esi + 8]
// 005733e2  8d4b14               lea ecx, [ebx + 0x14]
// 005733e5  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 005733eb  d95e0c               fstp dword ptr [esi + 0xc]
// 005733ee  db442454             fild dword ptr [esp + 0x54]
// 005733f2  d9054cad8b00         fld dword ptr [0x8bad4c]
// 005733f8  dcc9                 fmul st(1), st(0)
// 005733fa  da4c2418             fimul dword ptr [esp + 0x18]
// 005733fe  d9470c               fld dword ptr [edi + 0xc]
// 00573401  d86704               fsub dword ptr [edi + 4]
// 00573404  d84b08               fmul dword ptr [ebx + 8]
// 00573407  d944244c             fld dword ptr [esp + 0x4c]
// 0057340b  dee3                 fsubrp st(3)
// 0057340d  d90540c08c00         fld dword ptr [0x8cc040]
// 00573413  dccb                 fmul st(3), st(0)
// 00573415  d9cb                 fxch st(3)
// 00573417  d9e0                 fchs 
// 00573419  d9cb                 fxch st(3)
// 0057341b  dec9                 fmulp st(1)
// 0057341d  d9442450             fld dword ptr [esp + 0x50]
// 00573421  dee2                 fsubrp st(2)
// 00573423  d9c9                 fxch st(1)
// 00573425  d9e0                 fchs 
// 00573427  d9ca                 fxch st(2)
// 00573429  d95e10               fstp dword ptr [esi + 0x10]
// 0057342c  d9c9                 fxch st(1)
// 0057342e  d95e14               fstp dword ptr [esi + 0x14]
// 00573431  d95e18               fstp dword ptr [esi + 0x18]
// 00573434  e8078f0000           call 0x57c340
// 00573439  d94004               fld dword ptr [eax + 4]
// 0057343c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00573440  d95e04               fstp dword ptr [esi + 4]
// 00573443  5f                   pop edi
// 00573444  d94008               fld dword ptr [eax + 8]
// 00573447  d95e08               fstp dword ptr [esi + 8]
// 0057344a  d9400c               fld dword ptr [eax + 0xc]
// 0057344d  d95e0c               fstp dword ptr [esi + 0xc]
// 00573450  d94010               fld dword ptr [eax + 0x10]
// 00573453  d95e10               fstp dword ptr [esi + 0x10]
// 00573456  d94014               fld dword ptr [eax + 0x14]
// 00573459  d95e14               fstp dword ptr [esi + 0x14]
// 0057345c  d94018               fld dword ptr [eax + 0x18]
// 0057345f  8bc6                 mov eax, esi
// 00573461  d95e18               fstp dword ptr [esi + 0x18]
// 00573464  d94618               fld dword ptr [esi + 0x18]
// 00573467  d94614               fld dword ptr [esi + 0x14]
// 0057346a  d94610               fld dword ptr [esi + 0x10]
// 0057346d  dcc8                 fmul st(0), st(0)
// 0057346f  d9c1                 fld st(1)
// 00573471  deca                 fmulp st(2)
// 00573473  dec1                 faddp st(1)
// 00573475  d9c1                 fld st(1)
// 00573477  deca                 fmulp st(2)
// 00573479  dec1                 faddp st(1)
// 0057347b  d9fa                 fsqrt 
// 0057347d  d9e8                 fld1 
// 0057347f  def1                 fdivrp st(1)
// 00573481  d94610               fld dword ptr [esi + 0x10]
// 00573484  d8c9                 fmul st(1)
// 00573486  d9c1                 fld st(1)
// 00573488  d84e14               fmul dword ptr [esi + 0x14]
// 0057348b  d9ca                 fxch st(2)
// 0057348d  d84e18               fmul dword ptr [esi + 0x18]
// 00573490  d9c9                 fxch st(1)
// 00573492  d95e10               fstp dword ptr [esi + 0x10]
// 00573495  d9c9                 fxch st(1)
// 00573497  d95e14               fstp dword ptr [esi + 0x14]
// 0057349a  d95e18               fstp dword ptr [esi + 0x18]
// 0057349d  5e                   pop esi
// 0057349e  5b                   pop ebx
// 0057349f  64890d00000000       mov dword ptr fs:[0], ecx
// 005734a6  83c430               add esp, 0x30
// 005734a9  c21000               ret 0x10
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?worldRay@GCamera@G3D@@QBE?AVRay@2@MMABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
