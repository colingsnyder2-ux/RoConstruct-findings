// roc 2007-03 004fed90  unit: seg_004f0000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fed90
//
// 004fed90  d94120               fld dword ptr [ecx + 0x20]
// 004fed93  8b442404             mov eax, dword ptr [esp + 4]
// 004fed97  d84910               fmul dword ptr [ecx + 0x10]
// 004fed9a  8d5008               lea edx, [eax + 8]
// 004fed9d  d9411c               fld dword ptr [ecx + 0x1c]
// 004feda0  d84914               fmul dword ptr [ecx + 0x14]
// 004feda3  dee9                 fsubp st(1)
// 004feda5  d918                 fstp dword ptr [eax]
// 004feda7  d9411c               fld dword ptr [ecx + 0x1c]
// 004fedaa  d84908               fmul dword ptr [ecx + 8]
// 004fedad  d94104               fld dword ptr [ecx + 4]
// 004fedb0  d84920               fmul dword ptr [ecx + 0x20]
// 004fedb3  dee9                 fsubp st(1)
// 004fedb5  d95804               fstp dword ptr [eax + 4]
// 004fedb8  d94104               fld dword ptr [ecx + 4]
// 004fedbb  d84914               fmul dword ptr [ecx + 0x14]
// 004fedbe  d94108               fld dword ptr [ecx + 8]
// 004fedc1  d84910               fmul dword ptr [ecx + 0x10]
// 004fedc4  dee9                 fsubp st(1)
// 004fedc6  d91a                 fstp dword ptr [edx]
// 004fedc8  d94118               fld dword ptr [ecx + 0x18]
// 004fedcb  d84914               fmul dword ptr [ecx + 0x14]
// 004fedce  d9410c               fld dword ptr [ecx + 0xc]
// 004fedd1  d84920               fmul dword ptr [ecx + 0x20]
// 004fedd4  dee9                 fsubp st(1)
// 004fedd6  d9580c               fstp dword ptr [eax + 0xc]
// 004fedd9  d901                 fld dword ptr [ecx]
// 004feddb  d84920               fmul dword ptr [ecx + 0x20]
// 004fedde  d94118               fld dword ptr [ecx + 0x18]
// 004fede1  d84908               fmul dword ptr [ecx + 8]
// 004fede4  dee9                 fsubp st(1)
// 004fede6  d95810               fstp dword ptr [eax + 0x10]
// 004fede9  d9410c               fld dword ptr [ecx + 0xc]
// 004fedec  d84908               fmul dword ptr [ecx + 8]
// 004fedef  d94114               fld dword ptr [ecx + 0x14]
// 004fedf2  d809                 fmul dword ptr [ecx]
// 004fedf4  dee9                 fsubp st(1)
// 004fedf6  d95814               fstp dword ptr [eax + 0x14]
// 004fedf9  d9410c               fld dword ptr [ecx + 0xc]
// 004fedfc  d8491c               fmul dword ptr [ecx + 0x1c]
// 004fedff  d94118               fld dword ptr [ecx + 0x18]
// 004fee02  d84910               fmul dword ptr [ecx + 0x10]
// 004fee05  dee9                 fsubp st(1)
// 004fee07  d95818               fstp dword ptr [eax + 0x18]
// 004fee0a  d94104               fld dword ptr [ecx + 4]
// 004fee0d  d84918               fmul dword ptr [ecx + 0x18]
// 004fee10  d9411c               fld dword ptr [ecx + 0x1c]
// 004fee13  d809                 fmul dword ptr [ecx]
// 004fee15  dee9                 fsubp st(1)
// 004fee17  d9581c               fstp dword ptr [eax + 0x1c]
// 004fee1a  d901                 fld dword ptr [ecx]
// 004fee1c  d84910               fmul dword ptr [ecx + 0x10]
// 004fee1f  d9410c               fld dword ptr [ecx + 0xc]
// 004fee22  d84904               fmul dword ptr [ecx + 4]
// 004fee25  dee9                 fsubp st(1)
// 004fee27  d95820               fstp dword ptr [eax + 0x20]
// 004fee2a  d900                 fld dword ptr [eax]
// 004fee2c  d809                 fmul dword ptr [ecx]
// 004fee2e  d94104               fld dword ptr [ecx + 4]
// 004fee31  d8480c               fmul dword ptr [eax + 0xc]
// 004fee34  dec1                 faddp st(1)
// 004fee36  d94018               fld dword ptr [eax + 0x18]
// 004fee39  d84908               fmul dword ptr [ecx + 8]
// 004fee3c  dec1                 faddp st(1)
// 004fee3e  d95c2404             fstp dword ptr [esp + 4]
// 004fee42  d9442404             fld dword ptr [esp + 4]
// 004fee46  d9c0                 fld st(0)
// 004fee48  d9e1                 fabs 
// 004fee4a  d9442408             fld dword ptr [esp + 8]
// 004fee4e  ded9                 fcompp 
// 004fee50  dfe0                 fnstsw ax
// 004fee52  f6c401               test ah, 1
// 004fee55  7507                 jne 0x4fee5e
// 004fee57  32c0                 xor al, al
// 004fee59  ddd8                 fstp st(0)
// 004fee5b  c20800               ret 8
// 004fee5e  d9e8                 fld1 
// 004fee60  8bc2                 mov eax, edx
// 004fee62  def1                 fdivrp st(1)
// 004fee64  b903000000           mov ecx, 3
// 004fee69  d95c2404             fstp dword ptr [esp + 4]
// 004fee6d  d9442404             fld dword ptr [esp + 4]
// 004fee71  d940f8               fld dword ptr [eax - 8]
// 004fee74  83c00c               add eax, 0xc
// 004fee77  83e901               sub ecx, 1
// 004fee7a  d8c9                 fmul st(1)
// 004fee7c  d958ec               fstp dword ptr [eax - 0x14]
// 004fee7f  d940f0               fld dword ptr [eax - 0x10]
// 004fee82  d8c9                 fmul st(1)
// 004fee84  d958f0               fstp dword ptr [eax - 0x10]
// 004fee87  d940f4               fld dword ptr [eax - 0xc]
// 004fee8a  d8c9                 fmul st(1)
// 004fee8c  d958f4               fstp dword ptr [eax - 0xc]
// 004fee8f  75e0                 jne 0x4fee71
// 004fee91  b001                 mov al, 1
// 004fee93  ddd8                 fstp st(0)
// 004fee95  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?inverse@Matrix3@G3D@@QBE_NAAV12@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
