// roc 2008-06 004cefc0  unit: RBX::Network::PhysicsSender  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cefc0
//
// 004cefc0  56                   push esi
// 004cefc1  8bf1                 mov esi, ecx
// 004cefc3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004cefc7  7536                 jne 0x4cefff
// 004cefc9  6880000000           push 0x80
// 004cefce  e84d191d00           call 0x6a0920
// 004cefd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cefd7  8906                 mov dword ptr [esi], eax
// 004cefd9  c7460400000000       mov dword ptr [esi + 4], 0
// 004cefe0  c7460801000000       mov dword ptr [esi + 8], 1
// 004cefe7  8b11                 mov edx, dword ptr [ecx]
// 004cefe9  8910                 mov dword ptr [eax], edx
// 004cefeb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004cefee  83c404               add esp, 4
// 004ceff1  894804               mov dword ptr [eax + 4], ecx
// 004ceff4  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004ceffb  5e                   pop esi
// 004ceffc  c20400               ret 4
// 004cefff  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cf002  8b542408             mov edx, dword ptr [esp + 8]
// 004cf006  8b06                 mov eax, dword ptr [esi]
// 004cf008  57                   push edi
// 004cf009  8b3a                 mov edi, dword ptr [edx]
// 004cf00b  893cc8               mov dword ptr [eax + ecx*8], edi
// 004cf00e  8b5204               mov edx, dword ptr [edx + 4]
// 004cf011  8954c804             mov dword ptr [eax + ecx*8 + 4], edx
// 004cf015  ff4608               inc dword ptr [esi + 8]
// 004cf018  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cf01b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cf01e  3bc8                 cmp ecx, eax
// 004cf020  7507                 jne 0x4cf029
// 004cf022  c7460800000000       mov dword ptr [esi + 8], 0
// 004cf029  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cf02c  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004cf02f  7567                 jne 0x4cf098
// 004cf031  33c9                 xor ecx, ecx
// 004cf033  03c0                 add eax, eax
// 004cf035  ba08000000           mov edx, 8
// 004cf03a  f7e2                 mul edx
// 004cf03c  0f90c1               seto cl
// 004cf03f  f7d9                 neg ecx
// 004cf041  0bc8                 or ecx, eax
// 004cf043  51                   push ecx
// 004cf044  e8d7181d00           call 0x6a0920
// 004cf049  33c9                 xor ecx, ecx
// 004cf04b  83c404               add esp, 4
// 004cf04e  8bf8                 mov edi, eax
// 004cf050  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004cf053  7623                 jbe 0x4cf078
// 004cf055  53                   push ebx
// 004cf056  8b4604               mov eax, dword ptr [esi + 4]
// 004cf059  03c1                 add eax, ecx
// 004cf05b  33d2                 xor edx, edx
// 004cf05d  f7760c               div dword ptr [esi + 0xc]
// 004cf060  8b06                 mov eax, dword ptr [esi]
// 004cf062  41                   inc ecx
// 004cf063  8b1cd0               mov ebx, dword ptr [eax + edx*8]
// 004cf066  895ccff8             mov dword ptr [edi + ecx*8 - 8], ebx
// 004cf06a  8b44d004             mov eax, dword ptr [eax + edx*8 + 4]
// 004cf06e  8944cffc             mov dword ptr [edi + ecx*8 - 4], eax
// 004cf072  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004cf075  72df                 jb 0x4cf056
// 004cf077  5b                   pop ebx
// 004cf078  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cf07b  8b16                 mov edx, dword ptr [esi]
// 004cf07d  8d0c00               lea ecx, [eax + eax]
// 004cf080  52                   push edx
// 004cf081  c7460400000000       mov dword ptr [esi + 4], 0
// 004cf088  894608               mov dword ptr [esi + 8], eax
// 004cf08b  894e0c               mov dword ptr [esi + 0xc], ecx
// 004cf08e  e8e7151d00           call 0x6a067a
// 004cf093  83c404               add esp, 4
// 004cf096  893e                 mov dword ptr [esi], edi
// 004cf098  5f                   pop edi
// 004cf099  5e                   pop esi
// 004cf09a  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@_J@DataStructures@@QAEXAB_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
