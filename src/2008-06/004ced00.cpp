// roc 2008-06 004ced00  unit: RBX::Network::PhysicsSender  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ced00
//
// 004ced00  56                   push esi
// 004ced01  8bf1                 mov esi, ecx
// 004ced03  8b4604               mov eax, dword ptr [esi + 4]
// 004ced06  57                   push edi
// 004ced07  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ced0b  85c0                 test eax, eax
// 004ced0d  7612                 jbe 0x4ced21
// 004ced0f  3bf8                 cmp edi, eax
// 004ced11  730e                 jae 0x4ced21
// 004ced13  8b06                 mov eax, dword ptr [esi]
// 004ced15  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ced19  890cb8               mov dword ptr [eax + edi*4], ecx
// 004ced1c  5f                   pop edi
// 004ced1d  5e                   pop esi
// 004ced1e  c20c00               ret 0xc
// 004ced21  3b7e08               cmp edi, dword ptr [esi + 8]
// 004ced24  7246                 jb 0x4ced6c
// 004ced26  33c9                 xor ecx, ecx
// 004ced28  8d4701               lea eax, [edi + 1]
// 004ced2b  894608               mov dword ptr [esi + 8], eax
// 004ced2e  ba04000000           mov edx, 4
// 004ced33  f7e2                 mul edx
// 004ced35  0f90c1               seto cl
// 004ced38  53                   push ebx
// 004ced39  f7d9                 neg ecx
// 004ced3b  0bc8                 or ecx, eax
// 004ced3d  51                   push ecx
// 004ced3e  e8dd1b1d00           call 0x6a0920
// 004ced43  8bd8                 mov ebx, eax
// 004ced45  33c0                 xor eax, eax
// 004ced47  83c404               add esp, 4
// 004ced4a  394604               cmp dword ptr [esi + 4], eax
// 004ced4d  760f                 jbe 0x4ced5e
// 004ced4f  90                   nop 
// 004ced50  8b0e                 mov ecx, dword ptr [esi]
// 004ced52  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004ced55  891483               mov dword ptr [ebx + eax*4], edx
// 004ced58  40                   inc eax
// 004ced59  3b4604               cmp eax, dword ptr [esi + 4]
// 004ced5c  72f2                 jb 0x4ced50
// 004ced5e  8b06                 mov eax, dword ptr [esi]
// 004ced60  50                   push eax
// 004ced61  e814191d00           call 0x6a067a
// 004ced66  83c404               add esp, 4
// 004ced69  891e                 mov dword ptr [esi], ebx
// 004ced6b  5b                   pop ebx
// 004ced6c  397e04               cmp dword ptr [esi + 4], edi
// 004ced6f  7314                 jae 0x4ced85
// 004ced71  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ced75  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ced78  8b16                 mov edx, dword ptr [esi]
// 004ced7a  89048a               mov dword ptr [edx + ecx*4], eax
// 004ced7d  ff4604               inc dword ptr [esi + 4]
// 004ced80  397e04               cmp dword ptr [esi + 4], edi
// 004ced83  72f0                 jb 0x4ced75
// 004ced85  8b4604               mov eax, dword ptr [esi + 4]
// 004ced88  8b0e                 mov ecx, dword ptr [esi]
// 004ced8a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ced8e  891481               mov dword ptr [ecx + eax*4], edx
// 004ced91  ff4604               inc dword ptr [esi + 4]
// 004ced94  5f                   pop edi
// 004ced95  5e                   pop esi
// 004ced96  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?Replace@?$List@PAURPCNode@@@DataStructures@@QAEXQAURPCNode@@0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
