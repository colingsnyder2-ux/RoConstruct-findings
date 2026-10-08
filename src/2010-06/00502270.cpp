// roc 2010-06 00502270  unit: RBX::Network::ClientReplicator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502270
//
// 00502270  8b542404             mov edx, dword ptr [esp + 4]
// 00502274  8b4204               mov eax, dword ptr [edx + 4]
// 00502277  56                   push esi
// 00502278  57                   push edi
// 00502279  be01000000           mov esi, 1
// 0050227e  85c0                 test eax, eax
// 00502280  7e12                 jle 0x502294
// 00502282  8d4c8208             lea ecx, [edx + eax*4 + 8]
// 00502286  8b79fc               mov edi, dword ptr [ecx - 4]
// 00502289  8939                 mov dword ptr [ecx], edi
// 0050228b  2bc6                 sub eax, esi
// 0050228d  83e904               sub ecx, 4
// 00502290  85c0                 test eax, eax
// 00502292  7ff2                 jg 0x502286
// 00502294  803a00               cmp byte ptr [edx], 0
// 00502297  7424                 je 0x5022bd
// 00502299  8b4a04               mov ecx, dword ptr [edx + 4]
// 0050229c  85c9                 test ecx, ecx
// 0050229e  7e3e                 jle 0x5022de
// 005022a0  8d848a88000000       lea eax, [edx + ecx*4 + 0x88]
// 005022a7  8b78fc               mov edi, dword ptr [eax - 4]
// 005022aa  8938                 mov dword ptr [eax], edi
// 005022ac  2bce                 sub ecx, esi
// 005022ae  83e804               sub eax, 4
// 005022b1  85c9                 test ecx, ecx
// 005022b3  7ff2                 jg 0x5022a7
// 005022b5  017204               add dword ptr [edx + 4], esi
// 005022b8  5f                   pop edi
// 005022b9  5e                   pop esi
// 005022ba  c20400               ret 4
// 005022bd  8b4204               mov eax, dword ptr [edx + 4]
// 005022c0  03c6                 add eax, esi
// 005022c2  85c0                 test eax, eax
// 005022c4  7e18                 jle 0x5022de
// 005022c6  8d8c8210010000       lea ecx, [edx + eax*4 + 0x110]
// 005022cd  8d4900               lea ecx, [ecx]
// 005022d0  8b79fc               mov edi, dword ptr [ecx - 4]
// 005022d3  8939                 mov dword ptr [ecx], edi
// 005022d5  2bc6                 sub eax, esi
// 005022d7  83e904               sub ecx, 4
// 005022da  85c0                 test eax, eax
// 005022dc  7ff2                 jg 0x5022d0
// 005022de  017204               add dword ptr [edx + 4], esi
// 005022e1  5f                   pop edi
// 005022e2  5e                   pop esi
// 005022e3  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
