// roc 2008-06 004cf6d0  unit: RBX::Network::PhysicsSender  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf6d0
//
// 004cf6d0  8b442404             mov eax, dword ptr [esp + 4]
// 004cf6d4  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf6d7  49                   dec ecx
// 004cf6d8  33d2                 xor edx, edx
// 004cf6da  56                   push esi
// 004cf6db  85c9                 test ecx, ecx
// 004cf6dd  7e14                 jle 0x4cf6f3
// 004cf6df  8d4808               lea ecx, [eax + 8]
// 004cf6e2  8b7104               mov esi, dword ptr [ecx + 4]
// 004cf6e5  8931                 mov dword ptr [ecx], esi
// 004cf6e7  8b7004               mov esi, dword ptr [eax + 4]
// 004cf6ea  42                   inc edx
// 004cf6eb  4e                   dec esi
// 004cf6ec  83c104               add ecx, 4
// 004cf6ef  3bd6                 cmp edx, esi
// 004cf6f1  7cef                 jl 0x4cf6e2
// 004cf6f3  33d2                 xor edx, edx
// 004cf6f5  3810                 cmp byte ptr [eax], dl
// 004cf6f7  7420                 je 0x4cf719
// 004cf6f9  395004               cmp dword ptr [eax + 4], edx
// 004cf6fc  7e35                 jle 0x4cf733
// 004cf6fe  8d8888000000         lea ecx, [eax + 0x88]
// 004cf704  8b7104               mov esi, dword ptr [ecx + 4]
// 004cf707  8931                 mov dword ptr [ecx], esi
// 004cf709  42                   inc edx
// 004cf70a  83c104               add ecx, 4
// 004cf70d  3b5004               cmp edx, dword ptr [eax + 4]
// 004cf710  7cf2                 jl 0x4cf704
// 004cf712  ff4804               dec dword ptr [eax + 4]
// 004cf715  5e                   pop esi
// 004cf716  c20400               ret 4
// 004cf719  83780400             cmp dword ptr [eax + 4], 0
// 004cf71d  7e14                 jle 0x4cf733
// 004cf71f  8d8810010000         lea ecx, [eax + 0x110]
// 004cf725  8b7104               mov esi, dword ptr [ecx + 4]
// 004cf728  8931                 mov dword ptr [ecx], esi
// 004cf72a  42                   inc edx
// 004cf72b  83c104               add ecx, 4
// 004cf72e  3b5004               cmp edx, dword ptr [eax + 4]
// 004cf731  7cf2                 jl 0x4cf725
// 004cf733  ff4804               dec dword ptr [eax + 4]
// 004cf736  5e                   pop esi
// 004cf737  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
