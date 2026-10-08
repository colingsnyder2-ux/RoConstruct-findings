// roc 2007-03 00504150  unit: seg_00500000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00504150
//
// 00504150  51                   push ecx
// 00504151  53                   push ebx
// 00504152  55                   push ebp
// 00504153  8bd9                 mov ebx, ecx
// 00504155  33ed                 xor ebp, ebp
// 00504157  33c0                 xor eax, eax
// 00504159  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0050415c  89442408             mov dword ptr [esp + 8], eax
// 00504160  7e44                 jle 0x5041a6
// 00504162  56                   push esi
// 00504163  57                   push edi
// 00504164  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00504167  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0050416a  3bf5                 cmp esi, ebp
// 0050416c  742a                 je 0x504198
// 0050416e  8bff                 mov edi, edi
// 00504170  8b560c               mov edx, dword ptr [esi + 0xc]
// 00504173  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00504176  52                   push edx
// 00504177  e804f2feff           call 0x4f3380
// 0050417c  56                   push esi
// 0050417d  896e0c               mov dword ptr [esi + 0xc], ebp
// 00504180  896e10               mov dword ptr [esi + 0x10], ebp
// 00504183  896e14               mov dword ptr [esi + 0x14], ebp
// 00504186  e8d5f1feff           call 0x4f3360
// 0050418b  83c408               add esp, 8
// 0050418e  3bfd                 cmp edi, ebp
// 00504190  8bf7                 mov esi, edi
// 00504192  75dc                 jne 0x504170
// 00504194  8b442410             mov eax, dword ptr [esp + 0x10]
// 00504198  83c001               add eax, 1
// 0050419b  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 0050419e  89442410             mov dword ptr [esp + 0x10], eax
// 005041a2  7cc0                 jl 0x504164
// 005041a4  5f                   pop edi
// 005041a5  5e                   pop esi
// 005041a6  8b4308               mov eax, dword ptr [ebx + 8]
// 005041a9  50                   push eax
// 005041aa  e8d1f1feff           call 0x4f3380
// 005041af  83c404               add esp, 4
// 005041b2  896b08               mov dword ptr [ebx + 8], ebp
// 005041b5  896b0c               mov dword ptr [ebx + 0xc], ebp
// 005041b8  896b04               mov dword ptr [ebx + 4], ebp
// 005041bb  5d                   pop ebp
// 005041bc  5b                   pop ebx
// 005041bd  59                   pop ecx
// 005041be  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?freeMemory@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
