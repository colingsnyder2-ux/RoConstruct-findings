// roc 2009-06 004f5830  unit: RBX::Network::ClientReplicator  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5830
//
// 004f5830  53                   push ebx
// 004f5831  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f5835  55                   push ebp
// 004f5836  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f583a  56                   push esi
// 004f583b  57                   push edi
// 004f583c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f5840  8b8c9f10010000       mov ecx, dword ptr [edi + ebx*4 + 0x110]
// 004f5847  8b849f0c010000       mov eax, dword ptr [edi + ebx*4 + 0x10c]
// 004f584e  8b7108               mov esi, dword ptr [ecx + 8]
// 004f5851  897500               mov dword ptr [ebp], esi
// 004f5854  8b7004               mov esi, dword ptr [eax + 4]
// 004f5857  8b6908               mov ebp, dword ptr [ecx + 8]
// 004f585a  8d5108               lea edx, [ecx + 8]
// 004f585d  896cb008             mov dword ptr [eax + esi*4 + 8], ebp
// 004f5861  8b7004               mov esi, dword ptr [eax + 4]
// 004f5864  8ba988000000         mov ebp, dword ptr [ecx + 0x88]
// 004f586a  89acb088000000       mov dword ptr [eax + esi*4 + 0x88], ebp
// 004f5871  ff4004               inc dword ptr [eax + 4]
// 004f5874  8b4104               mov eax, dword ptr [ecx + 4]
// 004f5877  48                   dec eax
// 004f5878  33f6                 xor esi, esi
// 004f587a  85c0                 test eax, eax
// 004f587c  7e1f                 jle 0x4f589d
// 004f587e  8bc2                 mov eax, edx
// 004f5880  8b6804               mov ebp, dword ptr [eax + 4]
// 004f5883  8928                 mov dword ptr [eax], ebp
// 004f5885  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 004f588b  89a880000000         mov dword ptr [eax + 0x80], ebp
// 004f5891  8b6904               mov ebp, dword ptr [ecx + 4]
// 004f5894  46                   inc esi
// 004f5895  4d                   dec ebp
// 004f5896  83c004               add eax, 4
// 004f5899  3bf5                 cmp esi, ebp
// 004f589b  7ce3                 jl 0x4f5880
// 004f589d  ff4904               dec dword ptr [ecx + 4]
// 004f58a0  8b0a                 mov ecx, dword ptr [edx]
// 004f58a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f58a6  894c9f04             mov dword ptr [edi + ebx*4 + 4], ecx
// 004f58aa  8b12                 mov edx, dword ptr [edx]
// 004f58ac  5f                   pop edi
// 004f58ad  5e                   pop esi
// 004f58ae  5d                   pop ebp
// 004f58af  895004               mov dword ptr [eax + 4], edx
// 004f58b2  5b                   pop ebx
// 004f58b3  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
