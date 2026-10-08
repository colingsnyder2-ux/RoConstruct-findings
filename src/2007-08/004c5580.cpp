// roc 2007-08 004c5580  unit: RakPeer  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5580
//
// 004c5580  53                   push ebx
// 004c5581  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c5585  55                   push ebp
// 004c5586  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004c558a  56                   push esi
// 004c558b  57                   push edi
// 004c558c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c5590  8b8c9f10010000       mov ecx, dword ptr [edi + ebx*4 + 0x110]
// 004c5597  8b849f0c010000       mov eax, dword ptr [edi + ebx*4 + 0x10c]
// 004c559e  8b7108               mov esi, dword ptr [ecx + 8]
// 004c55a1  897500               mov dword ptr [ebp], esi
// 004c55a4  8b7004               mov esi, dword ptr [eax + 4]
// 004c55a7  8b6908               mov ebp, dword ptr [ecx + 8]
// 004c55aa  8d5108               lea edx, [ecx + 8]
// 004c55ad  896cb008             mov dword ptr [eax + esi*4 + 8], ebp
// 004c55b1  8b7004               mov esi, dword ptr [eax + 4]
// 004c55b4  8ba988000000         mov ebp, dword ptr [ecx + 0x88]
// 004c55ba  89acb088000000       mov dword ptr [eax + esi*4 + 0x88], ebp
// 004c55c1  83400401             add dword ptr [eax + 4], 1
// 004c55c5  8b4104               mov eax, dword ptr [ecx + 4]
// 004c55c8  83e801               sub eax, 1
// 004c55cb  33f6                 xor esi, esi
// 004c55cd  85c0                 test eax, eax
// 004c55cf  7e23                 jle 0x4c55f4
// 004c55d1  8bc2                 mov eax, edx
// 004c55d3  8b6804               mov ebp, dword ptr [eax + 4]
// 004c55d6  8928                 mov dword ptr [eax], ebp
// 004c55d8  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 004c55de  89a880000000         mov dword ptr [eax + 0x80], ebp
// 004c55e4  8b6904               mov ebp, dword ptr [ecx + 4]
// 004c55e7  83c601               add esi, 1
// 004c55ea  83ed01               sub ebp, 1
// 004c55ed  83c004               add eax, 4
// 004c55f0  3bf5                 cmp esi, ebp
// 004c55f2  7cdf                 jl 0x4c55d3
// 004c55f4  834104ff             add dword ptr [ecx + 4], -1
// 004c55f8  8b0a                 mov ecx, dword ptr [edx]
// 004c55fa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c55fe  894c9f04             mov dword ptr [edi + ebx*4 + 4], ecx
// 004c5602  8b12                 mov edx, dword ptr [edx]
// 004c5604  5f                   pop edi
// 004c5605  5e                   pop esi
// 004c5606  5d                   pop ebp
// 004c5607  895004               mov dword ptr [eax + 4], edx
// 004c560a  5b                   pop ebx
// 004c560b  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
