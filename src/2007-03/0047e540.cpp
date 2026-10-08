// roc 2007-03 0047e540  unit: seg_00470000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e540
//
// 0047e540  8b442404             mov eax, dword ptr [esp + 4]
// 0047e544  d901                 fld dword ptr [ecx]
// 0047e546  d918                 fstp dword ptr [eax]
// 0047e548  d9410c               fld dword ptr [ecx + 0xc]
// 0047e54b  d95804               fstp dword ptr [eax + 4]
// 0047e54e  d94118               fld dword ptr [ecx + 0x18]
// 0047e551  d95808               fstp dword ptr [eax + 8]
// 0047e554  d9ee                 fldz 
// 0047e556  d9500c               fst dword ptr [eax + 0xc]
// 0047e559  d94104               fld dword ptr [ecx + 4]
// 0047e55c  d95810               fstp dword ptr [eax + 0x10]
// 0047e55f  d94110               fld dword ptr [ecx + 0x10]
// 0047e562  d95814               fstp dword ptr [eax + 0x14]
// 0047e565  d9411c               fld dword ptr [ecx + 0x1c]
// 0047e568  d95818               fstp dword ptr [eax + 0x18]
// 0047e56b  d9501c               fst dword ptr [eax + 0x1c]
// 0047e56e  d94108               fld dword ptr [ecx + 8]
// 0047e571  d95820               fstp dword ptr [eax + 0x20]
// 0047e574  d94114               fld dword ptr [ecx + 0x14]
// 0047e577  d95824               fstp dword ptr [eax + 0x24]
// 0047e57a  d94120               fld dword ptr [ecx + 0x20]
// 0047e57d  d95828               fstp dword ptr [eax + 0x28]
// 0047e580  d9582c               fstp dword ptr [eax + 0x2c]
// 0047e583  d902                 fld dword ptr [edx]
// 0047e585  d95830               fstp dword ptr [eax + 0x30]
// 0047e588  d94204               fld dword ptr [edx + 4]
// 0047e58b  d95834               fstp dword ptr [eax + 0x34]
// 0047e58e  d94208               fld dword ptr [edx + 8]
// 0047e591  d95838               fstp dword ptr [eax + 0x38]
// 0047e594  d9e8                 fld1 
// 0047e596  d9583c               fstp dword ptr [eax + 0x3c]
// 0047e599  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\glcalls.cpp (function ?_getGLMatrix@G3D@@YAXPAMABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/glcalls.cpp
