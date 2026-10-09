// roc 2008-06 005ec240  unit: RBX::Sky  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec240
//
// 005ec240  d9ee                 fldz 
// 005ec242  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec246  56                   push esi
// 005ec247  d911                 fst dword ptr [ecx]
// 005ec249  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ec24d  d95104               fst dword ptr [ecx + 4]
// 005ec250  b856555555           mov eax, 0x55555556
// 005ec255  d95908               fstp dword ptr [ecx + 8]
// 005ec258  f7ee                 imul esi
// 005ec25a  8bc2                 mov eax, edx
// 005ec25c  c1e81f               shr eax, 0x1f
// 005ec25f  03c2                 add eax, edx
// 005ec261  8d0440               lea eax, [eax + eax*2]
// 005ec264  8bd0                 mov edx, eax
// 005ec266  8bc6                 mov eax, esi
// 005ec268  2bc2                 sub eax, edx
// 005ec26a  83fe03               cmp esi, 3
// 005ec26d  5e                   pop esi
// 005ec26e  7d08                 jge 0x5ec278
// 005ec270  d9e8                 fld1 
// 005ec272  d91c81               fstp dword ptr [ecx + eax*4]
// 005ec275  8bc1                 mov eax, ecx
// 005ec277  c3                   ret 
// 005ec278  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ec27e  d91c81               fstp dword ptr [ecx + eax*4]
// 005ec281  8bc1                 mov eax, ecx
// 005ec283  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToVector3Internal@RBX@@YA?AVVector3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
