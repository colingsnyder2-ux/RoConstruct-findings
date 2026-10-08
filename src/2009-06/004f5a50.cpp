// roc 2009-06 004f5a50  unit: RBX::Network::ClientReplicator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5a50
//
// 004f5a50  8b542404             mov edx, dword ptr [esp + 4]
// 004f5a54  8b4204               mov eax, dword ptr [edx + 4]
// 004f5a57  56                   push esi
// 004f5a58  57                   push edi
// 004f5a59  be01000000           mov esi, 1
// 004f5a5e  85c0                 test eax, eax
// 004f5a60  7e12                 jle 0x4f5a74
// 004f5a62  8d4c8208             lea ecx, [edx + eax*4 + 8]
// 004f5a66  8b79fc               mov edi, dword ptr [ecx - 4]
// 004f5a69  8939                 mov dword ptr [ecx], edi
// 004f5a6b  2bc6                 sub eax, esi
// 004f5a6d  83e904               sub ecx, 4
// 004f5a70  85c0                 test eax, eax
// 004f5a72  7ff2                 jg 0x4f5a66
// 004f5a74  803a00               cmp byte ptr [edx], 0
// 004f5a77  7424                 je 0x4f5a9d
// 004f5a79  8b4a04               mov ecx, dword ptr [edx + 4]
// 004f5a7c  85c9                 test ecx, ecx
// 004f5a7e  7e3e                 jle 0x4f5abe
// 004f5a80  8d848a88000000       lea eax, [edx + ecx*4 + 0x88]
// 004f5a87  8b78fc               mov edi, dword ptr [eax - 4]
// 004f5a8a  8938                 mov dword ptr [eax], edi
// 004f5a8c  2bce                 sub ecx, esi
// 004f5a8e  83e804               sub eax, 4
// 004f5a91  85c9                 test ecx, ecx
// 004f5a93  7ff2                 jg 0x4f5a87
// 004f5a95  017204               add dword ptr [edx + 4], esi
// 004f5a98  5f                   pop edi
// 004f5a99  5e                   pop esi
// 004f5a9a  c20400               ret 4
// 004f5a9d  8b4204               mov eax, dword ptr [edx + 4]
// 004f5aa0  03c6                 add eax, esi
// 004f5aa2  85c0                 test eax, eax
// 004f5aa4  7e18                 jle 0x4f5abe
// 004f5aa6  8d8c8210010000       lea ecx, [edx + eax*4 + 0x110]
// 004f5aad  8d4900               lea ecx, [ecx]
// 004f5ab0  8b79fc               mov edi, dword ptr [ecx - 4]
// 004f5ab3  8939                 mov dword ptr [ecx], edi
// 004f5ab5  2bc6                 sub eax, esi
// 004f5ab7  83e904               sub ecx, 4
// 004f5aba  85c0                 test eax, eax
// 004f5abc  7ff2                 jg 0x4f5ab0
// 004f5abe  017204               add dword ptr [edx + 4], esi
// 004f5ac1  5f                   pop edi
// 004f5ac2  5e                   pop esi
// 004f5ac3  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
