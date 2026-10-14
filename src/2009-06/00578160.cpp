// roc 2009-06 00578160  unit: G3D::LineSegment  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578160
//
// 00578160  8b442404             mov eax, dword ptr [esp + 4]
// 00578164  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578168  d900                 fld dword ptr [eax]
// 0057816a  d809                 fmul dword ptr [ecx]
// 0057816c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578170  d94004               fld dword ptr [eax + 4]
// 00578173  d8490c               fmul dword ptr [ecx + 0xc]
// 00578176  dec1                 faddp st(1)
// 00578178  d94008               fld dword ptr [eax + 8]
// 0057817b  d84918               fmul dword ptr [ecx + 0x18]
// 0057817e  dec1                 faddp st(1)
// 00578180  d91a                 fstp dword ptr [edx]
// 00578182  d94004               fld dword ptr [eax + 4]
// 00578185  d84910               fmul dword ptr [ecx + 0x10]
// 00578188  d94008               fld dword ptr [eax + 8]
// 0057818b  d8491c               fmul dword ptr [ecx + 0x1c]
// 0057818e  dec1                 faddp st(1)
// 00578190  d94104               fld dword ptr [ecx + 4]
// 00578193  d808                 fmul dword ptr [eax]
// 00578195  dec1                 faddp st(1)
// 00578197  d95a04               fstp dword ptr [edx + 4]
// 0057819a  d94004               fld dword ptr [eax + 4]
// 0057819d  d84914               fmul dword ptr [ecx + 0x14]
// 005781a0  d94008               fld dword ptr [eax + 8]
// 005781a3  d84920               fmul dword ptr [ecx + 0x20]
// 005781a6  dec1                 faddp st(1)
// 005781a8  d94108               fld dword ptr [ecx + 8]
// 005781ab  d808                 fmul dword ptr [eax]
// 005781ad  dec1                 faddp st(1)
// 005781af  d95a08               fstp dword ptr [edx + 8]
// 005781b2  d94010               fld dword ptr [eax + 0x10]
// 005781b5  d8490c               fmul dword ptr [ecx + 0xc]
// 005781b8  d94118               fld dword ptr [ecx + 0x18]
// 005781bb  d84814               fmul dword ptr [eax + 0x14]
// 005781be  dec1                 faddp st(1)
// 005781c0  d9400c               fld dword ptr [eax + 0xc]
// 005781c3  d809                 fmul dword ptr [ecx]
// 005781c5  dec1                 faddp st(1)
// 005781c7  d95a0c               fstp dword ptr [edx + 0xc]
// 005781ca  d94010               fld dword ptr [eax + 0x10]
// 005781cd  d84910               fmul dword ptr [ecx + 0x10]
// 005781d0  d94104               fld dword ptr [ecx + 4]
// 005781d3  d8480c               fmul dword ptr [eax + 0xc]
// 005781d6  dec1                 faddp st(1)
// 005781d8  d9411c               fld dword ptr [ecx + 0x1c]
// 005781db  d84814               fmul dword ptr [eax + 0x14]
// 005781de  dec1                 faddp st(1)
// 005781e0  d95a10               fstp dword ptr [edx + 0x10]
// 005781e3  d94010               fld dword ptr [eax + 0x10]
// 005781e6  d84914               fmul dword ptr [ecx + 0x14]
// 005781e9  d94108               fld dword ptr [ecx + 8]
// 005781ec  d8480c               fmul dword ptr [eax + 0xc]
// 005781ef  dec1                 faddp st(1)
// 005781f1  d94120               fld dword ptr [ecx + 0x20]
// 005781f4  d84814               fmul dword ptr [eax + 0x14]
// 005781f7  dec1                 faddp st(1)
// 005781f9  d95a14               fstp dword ptr [edx + 0x14]
// 005781fc  d9401c               fld dword ptr [eax + 0x1c]
// 005781ff  d8490c               fmul dword ptr [ecx + 0xc]
// 00578202  d94118               fld dword ptr [ecx + 0x18]
// 00578205  d84820               fmul dword ptr [eax + 0x20]
// 00578208  dec1                 faddp st(1)
// 0057820a  d94018               fld dword ptr [eax + 0x18]
// 0057820d  d809                 fmul dword ptr [ecx]
// 0057820f  dec1                 faddp st(1)
// 00578211  d95a18               fstp dword ptr [edx + 0x18]
// 00578214  d9401c               fld dword ptr [eax + 0x1c]
// 00578217  d84910               fmul dword ptr [ecx + 0x10]
// 0057821a  d94104               fld dword ptr [ecx + 4]
// 0057821d  d84818               fmul dword ptr [eax + 0x18]
// 00578220  dec1                 faddp st(1)
// 00578222  d9411c               fld dword ptr [ecx + 0x1c]
// 00578225  d84820               fmul dword ptr [eax + 0x20]
// 00578228  dec1                 faddp st(1)
// 0057822a  d95a1c               fstp dword ptr [edx + 0x1c]
// 0057822d  d9401c               fld dword ptr [eax + 0x1c]
// 00578230  d84914               fmul dword ptr [ecx + 0x14]
// 00578233  d94108               fld dword ptr [ecx + 8]
// 00578236  d84818               fmul dword ptr [eax + 0x18]
// 00578239  dec1                 faddp st(1)
// 0057823b  d94120               fld dword ptr [ecx + 0x20]
// 0057823e  d84820               fmul dword ptr [eax + 0x20]
// 00578241  dec1                 faddp st(1)
// 00578243  d95a20               fstp dword ptr [edx + 0x20]
// 00578246  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?_mul@Matrix3@G3D@@CAXABV12@0AAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
