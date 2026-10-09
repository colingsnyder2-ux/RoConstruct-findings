// roc 2009-12 00553900  unit: RBX::Network::ClientReplicator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553900
//
// 00553900  8b542404             mov edx, dword ptr [esp + 4]
// 00553904  8b4204               mov eax, dword ptr [edx + 4]
// 00553907  56                   push esi
// 00553908  57                   push edi
// 00553909  be01000000           mov esi, 1
// 0055390e  85c0                 test eax, eax
// 00553910  7e12                 jle 0x553924
// 00553912  8d4c8208             lea ecx, [edx + eax*4 + 8]
// 00553916  8b79fc               mov edi, dword ptr [ecx - 4]
// 00553919  8939                 mov dword ptr [ecx], edi
// 0055391b  2bc6                 sub eax, esi
// 0055391d  83e904               sub ecx, 4
// 00553920  85c0                 test eax, eax
// 00553922  7ff2                 jg 0x553916
// 00553924  803a00               cmp byte ptr [edx], 0
// 00553927  7424                 je 0x55394d
// 00553929  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055392c  85c9                 test ecx, ecx
// 0055392e  7e3e                 jle 0x55396e
// 00553930  8d848a88000000       lea eax, [edx + ecx*4 + 0x88]
// 00553937  8b78fc               mov edi, dword ptr [eax - 4]
// 0055393a  8938                 mov dword ptr [eax], edi
// 0055393c  2bce                 sub ecx, esi
// 0055393e  83e804               sub eax, 4
// 00553941  85c9                 test ecx, ecx
// 00553943  7ff2                 jg 0x553937
// 00553945  017204               add dword ptr [edx + 4], esi
// 00553948  5f                   pop edi
// 00553949  5e                   pop esi
// 0055394a  c20400               ret 4
// 0055394d  8b4204               mov eax, dword ptr [edx + 4]
// 00553950  03c6                 add eax, esi
// 00553952  85c0                 test eax, eax
// 00553954  7e18                 jle 0x55396e
// 00553956  8d8c8210010000       lea ecx, [edx + eax*4 + 0x110]
// 0055395d  8d4900               lea ecx, [ecx]
// 00553960  8b79fc               mov edi, dword ptr [ecx - 4]
// 00553963  8939                 mov dword ptr [ecx], edi
// 00553965  2bc6                 sub eax, esi
// 00553967  83e904               sub ecx, 4
// 0055396a  85c0                 test eax, eax
// 0055396c  7ff2                 jg 0x553960
// 0055396e  017204               add dword ptr [edx + 4], esi
// 00553971  5f                   pop edi
// 00553972  5e                   pop esi
// 00553973  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
