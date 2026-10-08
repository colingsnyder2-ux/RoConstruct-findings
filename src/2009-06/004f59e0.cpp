// roc 2009-06 004f59e0  unit: RBX::Network::ClientReplicator  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f59e0
//
// 004f59e0  8b442404             mov eax, dword ptr [esp + 4]
// 004f59e4  8b4804               mov ecx, dword ptr [eax + 4]
// 004f59e7  49                   dec ecx
// 004f59e8  33d2                 xor edx, edx
// 004f59ea  56                   push esi
// 004f59eb  85c9                 test ecx, ecx
// 004f59ed  7e14                 jle 0x4f5a03
// 004f59ef  8d4808               lea ecx, [eax + 8]
// 004f59f2  8b7104               mov esi, dword ptr [ecx + 4]
// 004f59f5  8931                 mov dword ptr [ecx], esi
// 004f59f7  8b7004               mov esi, dword ptr [eax + 4]
// 004f59fa  42                   inc edx
// 004f59fb  4e                   dec esi
// 004f59fc  83c104               add ecx, 4
// 004f59ff  3bd6                 cmp edx, esi
// 004f5a01  7cef                 jl 0x4f59f2
// 004f5a03  33d2                 xor edx, edx
// 004f5a05  3810                 cmp byte ptr [eax], dl
// 004f5a07  7420                 je 0x4f5a29
// 004f5a09  395004               cmp dword ptr [eax + 4], edx
// 004f5a0c  7e35                 jle 0x4f5a43
// 004f5a0e  8d8888000000         lea ecx, [eax + 0x88]
// 004f5a14  8b7104               mov esi, dword ptr [ecx + 4]
// 004f5a17  8931                 mov dword ptr [ecx], esi
// 004f5a19  42                   inc edx
// 004f5a1a  83c104               add ecx, 4
// 004f5a1d  3b5004               cmp edx, dword ptr [eax + 4]
// 004f5a20  7cf2                 jl 0x4f5a14
// 004f5a22  ff4804               dec dword ptr [eax + 4]
// 004f5a25  5e                   pop esi
// 004f5a26  c20400               ret 4
// 004f5a29  83780400             cmp dword ptr [eax + 4], 0
// 004f5a2d  7e14                 jle 0x4f5a43
// 004f5a2f  8d8810010000         lea ecx, [eax + 0x110]
// 004f5a35  8b7104               mov esi, dword ptr [ecx + 4]
// 004f5a38  8931                 mov dword ptr [ecx], esi
// 004f5a3a  42                   inc edx
// 004f5a3b  83c104               add ecx, 4
// 004f5a3e  3b5004               cmp edx, dword ptr [eax + 4]
// 004f5a41  7cf2                 jl 0x4f5a35
// 004f5a43  ff4804               dec dword ptr [eax + 4]
// 004f5a46  5e                   pop esi
// 004f5a47  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
