// roc 2007-03 005b48f0  unit: seg_005b0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b48f0
//
// 005b48f0  d9ee                 fldz 
// 005b48f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b48f6  56                   push esi
// 005b48f7  d911                 fst dword ptr [ecx]
// 005b48f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b48fd  d95104               fst dword ptr [ecx + 4]
// 005b4900  b856555555           mov eax, 0x55555556
// 005b4905  d95908               fstp dword ptr [ecx + 8]
// 005b4908  f7ee                 imul esi
// 005b490a  8bc2                 mov eax, edx
// 005b490c  c1e81f               shr eax, 0x1f
// 005b490f  03c2                 add eax, edx
// 005b4911  8d0440               lea eax, [eax + eax*2]
// 005b4914  8bd0                 mov edx, eax
// 005b4916  8bc6                 mov eax, esi
// 005b4918  2bc2                 sub eax, edx
// 005b491a  83fe03               cmp esi, 3
// 005b491d  5e                   pop esi
// 005b491e  7d08                 jge 0x5b4928
// 005b4920  d9e8                 fld1 
// 005b4922  d91c81               fstp dword ptr [ecx + eax*4]
// 005b4925  8bc1                 mov eax, ecx
// 005b4927  c3                   ret 
// 005b4928  d90578587900         fld dword ptr [0x795878]
// 005b492e  d91c81               fstp dword ptr [ecx + eax*4]
// 005b4931  8bc1                 mov eax, ecx
// 005b4933  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToVector3Internal@RBX@@YA?AVVector3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
