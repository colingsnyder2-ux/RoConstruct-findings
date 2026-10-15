// roc 2008-06 00649830  unit: RBX::Ball  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649830
//
// 00649830  d9442408             fld dword ptr [esp + 8]
// 00649834  56                   push esi
// 00649835  57                   push edi
// 00649836  d9e0                 fchs 
// 00649838  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064983c  33f6                 xor esi, esi
// 0064983e  8d5108               lea edx, [ecx + 8]
// 00649841  46                   inc esi
// 00649842  8bc6                 mov eax, esi
// 00649844  2503000080           and eax, 0x80000003
// 00649849  7905                 jns 0x649850
// 0064984b  48                   dec eax
// 0064984c  83c8fc               or eax, 0xfffffffc
// 0064984f  40                   inc eax
// 00649850  d907                 fld dword ptr [edi]
// 00649852  8d0440               lea eax, [eax + eax*2]
// 00649855  d862f8               fsub dword ptr [edx - 8]
// 00649858  8d0481               lea eax, [ecx + eax*4]
// 0064985b  d94704               fld dword ptr [edi + 4]
// 0064985e  d862fc               fsub dword ptr [edx - 4]
// 00649861  d94708               fld dword ptr [edi + 8]
// 00649864  d822                 fsub dword ptr [edx]
// 00649866  d900                 fld dword ptr [eax]
// 00649868  d862f8               fsub dword ptr [edx - 8]
// 0064986b  d94004               fld dword ptr [eax + 4]
// 0064986e  d862fc               fsub dword ptr [edx - 4]
// 00649871  d94008               fld dword ptr [eax + 8]
// 00649874  d822                 fsub dword ptr [edx]
// 00649876  d9ca                 fxch st(2)
// 00649878  decd                 fmulp st(5)
// 0064987a  d9c9                 fxch st(1)
// 0064987c  deca                 fmulp st(2)
// 0064987e  d9cb                 fxch st(3)
// 00649880  dec1                 faddp st(1)
// 00649882  d9ca                 fxch st(2)
// 00649884  dec9                 fmulp st(1)
// 00649886  dec1                 faddp st(1)
// 00649888  d8d9                 fcomp st(1)
// 0064988a  dfe0                 fnstsw ax
// 0064988c  f6c405               test ah, 5
// 0064988f  7b11                 jnp 0x6498a2
// 00649891  83c20c               add edx, 0xc
// 00649894  83fe04               cmp esi, 4
// 00649897  7ca8                 jl 0x649841
// 00649899  5f                   pop edi
// 0064989a  ddd8                 fstp st(0)
// 0064989c  b001                 mov al, 1
// 0064989e  5e                   pop esi
// 0064989f  c20800               ret 8
// 006498a2  5f                   pop edi
// 006498a3  ddd8                 fstp st(0)
// 006498a5  32c0                 xor al, al
// 006498a7  5e                   pop esi
// 006498a8  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?fuzzyContainsInExtrusion@Face@RBX@@QBE_NABVVector3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
