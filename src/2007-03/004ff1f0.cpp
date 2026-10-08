// roc 2007-03 004ff1f0  unit: seg_004f0000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ff1f0
//
// 004ff1f0  d9e8                 fld1 
// 004ff1f2  56                   push esi
// 004ff1f3  8bf1                 mov esi, ecx
// 004ff1f5  d85e08               fcomp dword ptr [esi + 8]
// 004ff1f8  dfe0                 fnstsw ax
// 004ff1fa  f6c441               test ah, 0x41
// 004ff1fd  0f85a2000000         jne 0x4ff2a5
// 004ff203  d90578587900         fld dword ptr [0x795878]
// 004ff209  d85e08               fcomp dword ptr [esi + 8]
// 004ff20c  dfe0                 fnstsw ax
// 004ff20e  f6c405               test ah, 5
// 004ff211  7a65                 jp 0x4ff278
// 004ff213  d94614               fld dword ptr [esi + 0x14]
// 004ff216  d9e0                 fchs 
// 004ff218  d94620               fld dword ptr [esi + 0x20]
// 004ff21b  e8fe051200           call 0x61f81e
// 004ff220  8b442408             mov eax, dword ptr [esp + 8]
// 004ff224  d918                 fstp dword ptr [eax]
// 004ff226  d94608               fld dword ptr [esi + 8]
// 004ff229  dc15a0597900         fcom qword ptr [0x7959a0]
// 004ff22f  dfe0                 fnstsw ax
// 004ff231  f6c441               test ah, 0x41
// 004ff234  751c                 jne 0x4ff252
// 004ff236  d9e8                 fld1 
// 004ff238  d8d9                 fcomp st(1)
// 004ff23a  dfe0                 fnstsw ax
// 004ff23c  f6c441               test ah, 0x41
// 004ff23f  7507                 jne 0x4ff248
// 004ff241  e8d2051200           call 0x61f818
// 004ff246  eb12                 jmp 0x4ff25a
// 004ff248  ddd8                 fstp st(0)
// 004ff24a  dd0560037a00         fld qword ptr [0x7a0360]
// 004ff250  eb08                 jmp 0x4ff25a
// 004ff252  ddd8                 fstp st(0)
// 004ff254  dd05e0ea7900         fld qword ptr [0x79eae0]
// 004ff25a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff25e  d919                 fstp dword ptr [ecx]
// 004ff260  d94604               fld dword ptr [esi + 4]
// 004ff263  d9e0                 fchs 
// 004ff265  d906                 fld dword ptr [esi]
// 004ff267  e8b2051200           call 0x61f81e
// 004ff26c  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff270  d91a                 fstp dword ptr [edx]
// 004ff272  b001                 mov al, 1
// 004ff274  5e                   pop esi
// 004ff275  c20c00               ret 0xc
// 004ff278  d9460c               fld dword ptr [esi + 0xc]
// 004ff27b  d94610               fld dword ptr [esi + 0x10]
// 004ff27e  e89b051200           call 0x61f81e
// 004ff283  d9e0                 fchs 
// 004ff285  8b442408             mov eax, dword ptr [esp + 8]
// 004ff289  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff28d  d918                 fstp dword ptr [eax]
// 004ff28f  d905206f7900         fld dword ptr [0x796f20]
// 004ff295  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff299  d919                 fstp dword ptr [ecx]
// 004ff29b  32c0                 xor al, al
// 004ff29d  d9ee                 fldz 
// 004ff29f  5e                   pop esi
// 004ff2a0  d91a                 fstp dword ptr [edx]
// 004ff2a2  c20c00               ret 0xc
// 004ff2a5  d9460c               fld dword ptr [esi + 0xc]
// 004ff2a8  d94610               fld dword ptr [esi + 0x10]
// 004ff2ab  e86e051200           call 0x61f81e
// 004ff2b0  8b442408             mov eax, dword ptr [esp + 8]
// 004ff2b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff2b8  d918                 fstp dword ptr [eax]
// 004ff2ba  d905246f7900         fld dword ptr [0x796f24]
// 004ff2c0  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff2c4  d919                 fstp dword ptr [ecx]
// 004ff2c6  32c0                 xor al, al
// 004ff2c8  d9ee                 fldz 
// 004ff2ca  5e                   pop esi
// 004ff2cb  d91a                 fstp dword ptr [edx]
// 004ff2cd  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?toEulerAnglesXYZ@Matrix3@G3D@@QBE_NAAM00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
