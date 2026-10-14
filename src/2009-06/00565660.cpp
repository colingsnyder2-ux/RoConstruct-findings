// roc 2009-06 00565660  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565660
//
// 00565660  8b442408             mov eax, dword ptr [esp + 8]
// 00565664  d900                 fld dword ptr [eax]
// 00565666  d86124               fsub dword ptr [ecx + 0x24]
// 00565669  d94004               fld dword ptr [eax + 4]
// 0056566c  d86128               fsub dword ptr [ecx + 0x28]
// 0056566f  d94008               fld dword ptr [eax + 8]
// 00565672  8b442404             mov eax, dword ptr [esp + 4]
// 00565676  d8612c               fsub dword ptr [ecx + 0x2c]
// 00565679  d94118               fld dword ptr [ecx + 0x18]
// 0056567c  d8c9                 fmul st(1)
// 0056567e  d9410c               fld dword ptr [ecx + 0xc]
// 00565681  d8cb                 fmul st(3)
// 00565683  dec1                 faddp st(1)
// 00565685  d901                 fld dword ptr [ecx]
// 00565687  d8cc                 fmul st(4)
// 00565689  dec1                 faddp st(1)
// 0056568b  d918                 fstp dword ptr [eax]
// 0056568d  d9411c               fld dword ptr [ecx + 0x1c]
// 00565690  d8c9                 fmul st(1)
// 00565692  d94110               fld dword ptr [ecx + 0x10]
// 00565695  d8cb                 fmul st(3)
// 00565697  dec1                 faddp st(1)
// 00565699  d94104               fld dword ptr [ecx + 4]
// 0056569c  d8cc                 fmul st(4)
// 0056569e  dec1                 faddp st(1)
// 005656a0  d95804               fstp dword ptr [eax + 4]
// 005656a3  d84920               fmul dword ptr [ecx + 0x20]
// 005656a6  d94114               fld dword ptr [ecx + 0x14]
// 005656a9  deca                 fmulp st(2)
// 005656ab  dec1                 faddp st(1)
// 005656ad  d94108               fld dword ptr [ecx + 8]
// 005656b0  deca                 fmulp st(2)
// 005656b2  dec1                 faddp st(1)
// 005656b4  d95808               fstp dword ptr [eax + 8]
// 005656b7  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?pointToObjectSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
