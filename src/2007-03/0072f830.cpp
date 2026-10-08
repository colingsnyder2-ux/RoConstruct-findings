// roc 2007-03 0072f830  unit: seg_00720000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f830
//
// 0072f830  83790400             cmp dword ptr [ecx + 4], 0
// 0072f834  7527                 jne 0x72f85d
// 0072f836  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0072f839  56                   push esi
// 0072f83a  8d9b00000000         lea ebx, [ebx]
// 0072f840  830101               add dword ptr [ecx], 1
// 0072f843  8b01                 mov eax, dword ptr [ecx]
// 0072f845  3bc2                 cmp eax, edx
// 0072f847  7d0f                 jge 0x72f858
// 0072f849  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0072f84c  8b0486               mov eax, dword ptr [esi + eax*4]
// 0072f84f  85c0                 test eax, eax
// 0072f851  894104               mov dword ptr [ecx + 4], eax
// 0072f854  74ea                 je 0x72f840
// 0072f856  5e                   pop esi
// 0072f857  c3                   ret 
// 0072f858  c6411401             mov byte ptr [ecx + 0x14], 1
// 0072f85c  5e                   pop esi
// 0072f85d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?findNext@Iterator@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
