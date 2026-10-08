// roc 2008-06 004cf740  unit: RBX::Network::PhysicsSender  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf740
//
// 004cf740  8b542404             mov edx, dword ptr [esp + 4]
// 004cf744  8b4204               mov eax, dword ptr [edx + 4]
// 004cf747  56                   push esi
// 004cf748  57                   push edi
// 004cf749  be01000000           mov esi, 1
// 004cf74e  85c0                 test eax, eax
// 004cf750  7e12                 jle 0x4cf764
// 004cf752  8d4c8208             lea ecx, [edx + eax*4 + 8]
// 004cf756  8b79fc               mov edi, dword ptr [ecx - 4]
// 004cf759  8939                 mov dword ptr [ecx], edi
// 004cf75b  2bc6                 sub eax, esi
// 004cf75d  83e904               sub ecx, 4
// 004cf760  85c0                 test eax, eax
// 004cf762  7ff2                 jg 0x4cf756
// 004cf764  803a00               cmp byte ptr [edx], 0
// 004cf767  7424                 je 0x4cf78d
// 004cf769  8b4a04               mov ecx, dword ptr [edx + 4]
// 004cf76c  85c9                 test ecx, ecx
// 004cf76e  7e3e                 jle 0x4cf7ae
// 004cf770  8d848a88000000       lea eax, [edx + ecx*4 + 0x88]
// 004cf777  8b78fc               mov edi, dword ptr [eax - 4]
// 004cf77a  8938                 mov dword ptr [eax], edi
// 004cf77c  2bce                 sub ecx, esi
// 004cf77e  83e804               sub eax, 4
// 004cf781  85c9                 test ecx, ecx
// 004cf783  7ff2                 jg 0x4cf777
// 004cf785  017204               add dword ptr [edx + 4], esi
// 004cf788  5f                   pop edi
// 004cf789  5e                   pop esi
// 004cf78a  c20400               ret 4
// 004cf78d  8b4204               mov eax, dword ptr [edx + 4]
// 004cf790  03c6                 add eax, esi
// 004cf792  85c0                 test eax, eax
// 004cf794  7e18                 jle 0x4cf7ae
// 004cf796  8d8c8210010000       lea ecx, [edx + eax*4 + 0x110]
// 004cf79d  8d4900               lea ecx, [ecx]
// 004cf7a0  8b79fc               mov edi, dword ptr [ecx - 4]
// 004cf7a3  8939                 mov dword ptr [ecx], edi
// 004cf7a5  2bc6                 sub eax, esi
// 004cf7a7  83e904               sub ecx, 4
// 004cf7aa  85c0                 test eax, eax
// 004cf7ac  7ff2                 jg 0x4cf7a0
// 004cf7ae  017204               add dword ptr [edx + 4], esi
// 004cf7b1  5f                   pop edi
// 004cf7b2  5e                   pop esi
// 004cf7b3  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
