// roc 2007-08 004c4e70  unit: RakPeer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4e70
//
// 004c4e70  56                   push esi
// 004c4e71  8bf1                 mov esi, ecx
// 004c4e73  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c4e77  7536                 jne 0x4c4eaf
// 004c4e79  6880000000           push 0x80
// 004c4e7e  e873b01600           call 0x62fef6
// 004c4e83  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4e87  8906                 mov dword ptr [esi], eax
// 004c4e89  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4e90  c7460801000000       mov dword ptr [esi + 8], 1
// 004c4e97  8b11                 mov edx, dword ptr [ecx]
// 004c4e99  8910                 mov dword ptr [eax], edx
// 004c4e9b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c4e9e  83c404               add esp, 4
// 004c4ea1  894804               mov dword ptr [eax + 4], ecx
// 004c4ea4  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004c4eab  5e                   pop esi
// 004c4eac  c20400               ret 4
// 004c4eaf  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4eb2  8b542408             mov edx, dword ptr [esp + 8]
// 004c4eb6  8b06                 mov eax, dword ptr [esi]
// 004c4eb8  57                   push edi
// 004c4eb9  8b3a                 mov edi, dword ptr [edx]
// 004c4ebb  893cc8               mov dword ptr [eax + ecx*8], edi
// 004c4ebe  8b5204               mov edx, dword ptr [edx + 4]
// 004c4ec1  8954c804             mov dword ptr [eax + ecx*8 + 4], edx
// 004c4ec5  83460801             add dword ptr [esi + 8], 1
// 004c4ec9  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4ecc  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4ecf  3bc8                 cmp ecx, eax
// 004c4ed1  7507                 jne 0x4c4eda
// 004c4ed3  c7460800000000       mov dword ptr [esi + 8], 0
// 004c4eda  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4edd  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004c4ee0  7569                 jne 0x4c4f4b
// 004c4ee2  33c9                 xor ecx, ecx
// 004c4ee4  03c0                 add eax, eax
// 004c4ee6  ba08000000           mov edx, 8
// 004c4eeb  f7e2                 mul edx
// 004c4eed  0f90c1               seto cl
// 004c4ef0  f7d9                 neg ecx
// 004c4ef2  0bc8                 or ecx, eax
// 004c4ef4  51                   push ecx
// 004c4ef5  e8fcaf1600           call 0x62fef6
// 004c4efa  33c9                 xor ecx, ecx
// 004c4efc  83c404               add esp, 4
// 004c4eff  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004c4f02  8bf8                 mov edi, eax
// 004c4f04  7625                 jbe 0x4c4f2b
// 004c4f06  53                   push ebx
// 004c4f07  8b4604               mov eax, dword ptr [esi + 4]
// 004c4f0a  03c1                 add eax, ecx
// 004c4f0c  33d2                 xor edx, edx
// 004c4f0e  f7760c               div dword ptr [esi + 0xc]
// 004c4f11  8b06                 mov eax, dword ptr [esi]
// 004c4f13  83c101               add ecx, 1
// 004c4f16  8b1cd0               mov ebx, dword ptr [eax + edx*8]
// 004c4f19  895ccff8             mov dword ptr [edi + ecx*8 - 8], ebx
// 004c4f1d  8b44d004             mov eax, dword ptr [eax + edx*8 + 4]
// 004c4f21  8944cffc             mov dword ptr [edi + ecx*8 - 4], eax
// 004c4f25  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004c4f28  72dd                 jb 0x4c4f07
// 004c4f2a  5b                   pop ebx
// 004c4f2b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4f2e  8b16                 mov edx, dword ptr [esi]
// 004c4f30  8d0c00               lea ecx, [eax + eax]
// 004c4f33  52                   push edx
// 004c4f34  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4f3b  894608               mov dword ptr [esi + 8], eax
// 004c4f3e  894e0c               mov dword ptr [esi + 0xc], ecx
// 004c4f41  e81cad1600           call 0x62fc62
// 004c4f46  83c404               add esp, 4
// 004c4f49  893e                 mov dword ptr [esi], edi
// 004c4f4b  5f                   pop edi
// 004c4f4c  5e                   pop esi
// 004c4f4d  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@_J@DataStructures@@QAEXAB_J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
