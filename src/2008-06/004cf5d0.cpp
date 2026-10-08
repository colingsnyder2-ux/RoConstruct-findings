// roc 2008-06 004cf5d0  unit: RBX::Network::PhysicsSender  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf5d0
//
// 004cf5d0  53                   push ebx
// 004cf5d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cf5d5  55                   push ebp
// 004cf5d6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cf5da  56                   push esi
// 004cf5db  57                   push edi
// 004cf5dc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cf5e0  8b8c9f10010000       mov ecx, dword ptr [edi + ebx*4 + 0x110]
// 004cf5e7  8b849f0c010000       mov eax, dword ptr [edi + ebx*4 + 0x10c]
// 004cf5ee  8b7108               mov esi, dword ptr [ecx + 8]
// 004cf5f1  897500               mov dword ptr [ebp], esi
// 004cf5f4  8b7004               mov esi, dword ptr [eax + 4]
// 004cf5f7  8b6908               mov ebp, dword ptr [ecx + 8]
// 004cf5fa  8d5108               lea edx, [ecx + 8]
// 004cf5fd  896cb008             mov dword ptr [eax + esi*4 + 8], ebp
// 004cf601  8b7004               mov esi, dword ptr [eax + 4]
// 004cf604  8ba988000000         mov ebp, dword ptr [ecx + 0x88]
// 004cf60a  89acb088000000       mov dword ptr [eax + esi*4 + 0x88], ebp
// 004cf611  ff4004               inc dword ptr [eax + 4]
// 004cf614  8b4104               mov eax, dword ptr [ecx + 4]
// 004cf617  48                   dec eax
// 004cf618  33f6                 xor esi, esi
// 004cf61a  85c0                 test eax, eax
// 004cf61c  7e1f                 jle 0x4cf63d
// 004cf61e  8bc2                 mov eax, edx
// 004cf620  8b6804               mov ebp, dword ptr [eax + 4]
// 004cf623  8928                 mov dword ptr [eax], ebp
// 004cf625  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 004cf62b  89a880000000         mov dword ptr [eax + 0x80], ebp
// 004cf631  8b6904               mov ebp, dword ptr [ecx + 4]
// 004cf634  46                   inc esi
// 004cf635  4d                   dec ebp
// 004cf636  83c004               add eax, 4
// 004cf639  3bf5                 cmp esi, ebp
// 004cf63b  7ce3                 jl 0x4cf620
// 004cf63d  ff4904               dec dword ptr [ecx + 4]
// 004cf640  8b0a                 mov ecx, dword ptr [edx]
// 004cf642  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cf646  894c9f04             mov dword ptr [edi + ebx*4 + 4], ecx
// 004cf64a  8b12                 mov edx, dword ptr [edx]
// 004cf64c  5f                   pop edi
// 004cf64d  5e                   pop esi
// 004cf64e  5d                   pop ebp
// 004cf64f  895004               mov dword ptr [eax + 4], edx
// 004cf652  5b                   pop ebx
// 004cf653  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
