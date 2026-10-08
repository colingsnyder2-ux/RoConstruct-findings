// roc 2007-08 005b9a30  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9a30
//
// 005b9a30  d9ee                 fldz 
// 005b9a32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b9a36  56                   push esi
// 005b9a37  d911                 fst dword ptr [ecx]
// 005b9a39  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b9a3d  d95104               fst dword ptr [ecx + 4]
// 005b9a40  b856555555           mov eax, 0x55555556
// 005b9a45  d95908               fstp dword ptr [ecx + 8]
// 005b9a48  f7ee                 imul esi
// 005b9a4a  8bc2                 mov eax, edx
// 005b9a4c  c1e81f               shr eax, 0x1f
// 005b9a4f  03c2                 add eax, edx
// 005b9a51  8d0440               lea eax, [eax + eax*2]
// 005b9a54  8bd0                 mov edx, eax
// 005b9a56  8bc6                 mov eax, esi
// 005b9a58  2bc2                 sub eax, edx
// 005b9a5a  83fe03               cmp esi, 3
// 005b9a5d  5e                   pop esi
// 005b9a5e  7d08                 jge 0x5b9a68
// 005b9a60  d9e8                 fld1 
// 005b9a62  d91c81               fstp dword ptr [ecx + eax*4]
// 005b9a65  8bc1                 mov eax, ecx
// 005b9a67  c3                   ret 
// 005b9a68  d9056c647900         fld dword ptr [0x79646c]
// 005b9a6e  d91c81               fstp dword ptr [ecx + eax*4]
// 005b9a71  8bc1                 mov eax, ecx
// 005b9a73  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToVector3Internal@RBX@@YA?AVVector3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
