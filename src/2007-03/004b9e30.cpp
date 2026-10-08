// roc 2007-03 004b9e30  unit: seg_004b0000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9e30
//
// 004b9e30  56                   push esi
// 004b9e31  8bf1                 mov esi, ecx
// 004b9e33  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004b9e37  7536                 jne 0x4b9e6f
// 004b9e39  6880000000           push 0x80
// 004b9e3e  e8c5421600           call 0x61e108
// 004b9e43  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b9e47  8906                 mov dword ptr [esi], eax
// 004b9e49  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9e50  c7460801000000       mov dword ptr [esi + 8], 1
// 004b9e57  8b11                 mov edx, dword ptr [ecx]
// 004b9e59  8910                 mov dword ptr [eax], edx
// 004b9e5b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b9e5e  83c404               add esp, 4
// 004b9e61  894804               mov dword ptr [eax + 4], ecx
// 004b9e64  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004b9e6b  5e                   pop esi
// 004b9e6c  c20400               ret 4
// 004b9e6f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9e72  8b542408             mov edx, dword ptr [esp + 8]
// 004b9e76  8b06                 mov eax, dword ptr [esi]
// 004b9e78  57                   push edi
// 004b9e79  8b3a                 mov edi, dword ptr [edx]
// 004b9e7b  893cc8               mov dword ptr [eax + ecx*8], edi
// 004b9e7e  8b5204               mov edx, dword ptr [edx + 4]
// 004b9e81  8954c804             mov dword ptr [eax + ecx*8 + 4], edx
// 004b9e85  83460801             add dword ptr [esi + 8], 1
// 004b9e89  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9e8c  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9e8f  3bc8                 cmp ecx, eax
// 004b9e91  7507                 jne 0x4b9e9a
// 004b9e93  c7460800000000       mov dword ptr [esi + 8], 0
// 004b9e9a  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9e9d  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004b9ea0  7569                 jne 0x4b9f0b
// 004b9ea2  33c9                 xor ecx, ecx
// 004b9ea4  03c0                 add eax, eax
// 004b9ea6  ba08000000           mov edx, 8
// 004b9eab  f7e2                 mul edx
// 004b9ead  0f90c1               seto cl
// 004b9eb0  f7d9                 neg ecx
// 004b9eb2  0bc8                 or ecx, eax
// 004b9eb4  51                   push ecx
// 004b9eb5  e84e421600           call 0x61e108
// 004b9eba  33c9                 xor ecx, ecx
// 004b9ebc  83c404               add esp, 4
// 004b9ebf  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004b9ec2  8bf8                 mov edi, eax
// 004b9ec4  7625                 jbe 0x4b9eeb
// 004b9ec6  53                   push ebx
// 004b9ec7  8b4604               mov eax, dword ptr [esi + 4]
// 004b9eca  03c1                 add eax, ecx
// 004b9ecc  33d2                 xor edx, edx
// 004b9ece  f7760c               div dword ptr [esi + 0xc]
// 004b9ed1  8b06                 mov eax, dword ptr [esi]
// 004b9ed3  83c101               add ecx, 1
// 004b9ed6  8b1cd0               mov ebx, dword ptr [eax + edx*8]
// 004b9ed9  895ccff8             mov dword ptr [edi + ecx*8 - 8], ebx
// 004b9edd  8b44d004             mov eax, dword ptr [eax + edx*8 + 4]
// 004b9ee1  8944cffc             mov dword ptr [edi + ecx*8 - 4], eax
// 004b9ee5  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004b9ee8  72dd                 jb 0x4b9ec7
// 004b9eea  5b                   pop ebx
// 004b9eeb  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9eee  8b16                 mov edx, dword ptr [esi]
// 004b9ef0  8d0c00               lea ecx, [eax + eax]
// 004b9ef3  52                   push edx
// 004b9ef4  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9efb  894608               mov dword ptr [esi + 8], eax
// 004b9efe  894e0c               mov dword ptr [esi + 0xc], ecx
// 004b9f01  e8ea411600           call 0x61e0f0
// 004b9f06  83c404               add esp, 4
// 004b9f09  893e                 mov dword ptr [esi], edi
// 004b9f0b  5f                   pop edi
// 004b9f0c  5e                   pop esi
// 004b9f0d  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@_J@DataStructures@@QAEXAB_J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
