// roc 2007-03 00473170  unit: seg_00470000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473170
//
// 00473170  8b442404             mov eax, dword ptr [esp + 4]
// 00473174  d9ee                 fldz 
// 00473176  8b542408             mov edx, dword ptr [esp + 8]
// 0047317a  d910                 fst dword ptr [eax]
// 0047317c  d95004               fst dword ptr [eax + 4]
// 0047317f  d95808               fstp dword ptr [eax + 8]
// 00473182  d94204               fld dword ptr [edx + 4]
// 00473185  d902                 fld dword ptr [edx]
// 00473187  d94208               fld dword ptr [edx + 8]
// 0047318a  d94104               fld dword ptr [ecx + 4]
// 0047318d  d8cb                 fmul st(3)
// 0047318f  d901                 fld dword ptr [ecx]
// 00473191  d8cb                 fmul st(3)
// 00473193  dec1                 faddp st(1)
// 00473195  d94108               fld dword ptr [ecx + 8]
// 00473198  d8ca                 fmul st(2)
// 0047319a  dec1                 faddp st(1)
// 0047319c  d918                 fstp dword ptr [eax]
// 0047319e  d9410c               fld dword ptr [ecx + 0xc]
// 004731a1  d8ca                 fmul st(2)
// 004731a3  d94110               fld dword ptr [ecx + 0x10]
// 004731a6  d8cc                 fmul st(4)
// 004731a8  dec1                 faddp st(1)
// 004731aa  d94114               fld dword ptr [ecx + 0x14]
// 004731ad  d8ca                 fmul st(2)
// 004731af  dec1                 faddp st(1)
// 004731b1  d95804               fstp dword ptr [eax + 4]
// 004731b4  d94118               fld dword ptr [ecx + 0x18]
// 004731b7  deca                 fmulp st(2)
// 004731b9  d9411c               fld dword ptr [ecx + 0x1c]
// 004731bc  decb                 fmulp st(3)
// 004731be  d9c9                 fxch st(1)
// 004731c0  dec2                 faddp st(2)
// 004731c2  d84920               fmul dword ptr [ecx + 0x20]
// 004731c5  dec1                 faddp st(1)
// 004731c7  d95808               fstp dword ptr [eax + 8]
// 004731ca  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??DMatrix3@G3D@@QBE?AVVector3@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
