// roc 2007-08 004c9e20  unit: seg_004c0000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9e20
//
// 004c9e20  56                   push esi
// 004c9e21  8bf1                 mov esi, ecx
// 004c9e23  8b4604               mov eax, dword ptr [esi + 4]
// 004c9e26  85c0                 test eax, eax
// 004c9e28  57                   push edi
// 004c9e29  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c9e2d  7612                 jbe 0x4c9e41
// 004c9e2f  3bf8                 cmp edi, eax
// 004c9e31  730e                 jae 0x4c9e41
// 004c9e33  8b06                 mov eax, dword ptr [esi]
// 004c9e35  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c9e39  890cb8               mov dword ptr [eax + edi*4], ecx
// 004c9e3c  5f                   pop edi
// 004c9e3d  5e                   pop esi
// 004c9e3e  c20c00               ret 0xc
// 004c9e41  3b7e08               cmp edi, dword ptr [esi + 8]
// 004c9e44  7248                 jb 0x4c9e8e
// 004c9e46  33c9                 xor ecx, ecx
// 004c9e48  8d4701               lea eax, [edi + 1]
// 004c9e4b  894608               mov dword ptr [esi + 8], eax
// 004c9e4e  ba04000000           mov edx, 4
// 004c9e53  f7e2                 mul edx
// 004c9e55  0f90c1               seto cl
// 004c9e58  53                   push ebx
// 004c9e59  f7d9                 neg ecx
// 004c9e5b  0bc8                 or ecx, eax
// 004c9e5d  51                   push ecx
// 004c9e5e  e893601600           call 0x62fef6
// 004c9e63  8bd8                 mov ebx, eax
// 004c9e65  33c0                 xor eax, eax
// 004c9e67  83c404               add esp, 4
// 004c9e6a  394604               cmp dword ptr [esi + 4], eax
// 004c9e6d  7611                 jbe 0x4c9e80
// 004c9e6f  90                   nop 
// 004c9e70  8b0e                 mov ecx, dword ptr [esi]
// 004c9e72  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004c9e75  891483               mov dword ptr [ebx + eax*4], edx
// 004c9e78  83c001               add eax, 1
// 004c9e7b  3b4604               cmp eax, dword ptr [esi + 4]
// 004c9e7e  72f0                 jb 0x4c9e70
// 004c9e80  8b06                 mov eax, dword ptr [esi]
// 004c9e82  50                   push eax
// 004c9e83  e8da5d1600           call 0x62fc62
// 004c9e88  83c404               add esp, 4
// 004c9e8b  891e                 mov dword ptr [esi], ebx
// 004c9e8d  5b                   pop ebx
// 004c9e8e  397e04               cmp dword ptr [esi + 4], edi
// 004c9e91  7315                 jae 0x4c9ea8
// 004c9e93  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c9e97  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c9e9a  8b16                 mov edx, dword ptr [esi]
// 004c9e9c  89048a               mov dword ptr [edx + ecx*4], eax
// 004c9e9f  83460401             add dword ptr [esi + 4], 1
// 004c9ea3  397e04               cmp dword ptr [esi + 4], edi
// 004c9ea6  72ef                 jb 0x4c9e97
// 004c9ea8  8b4604               mov eax, dword ptr [esi + 4]
// 004c9eab  8b0e                 mov ecx, dword ptr [esi]
// 004c9ead  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c9eb1  891481               mov dword ptr [ecx + eax*4], edx
// 004c9eb4  83460401             add dword ptr [esi + 4], 1
// 004c9eb8  5f                   pop edi
// 004c9eb9  5e                   pop esi
// 004c9eba  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?Replace@?$List@PAURPCNode@@@DataStructures@@QAEXQAURPCNode@@0I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
