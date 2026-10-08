// roc 2007-08 004c5710  unit: RakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5710
//
// 004c5710  8b542404             mov edx, dword ptr [esp + 4]
// 004c5714  8b4204               mov eax, dword ptr [edx + 4]
// 004c5717  85c0                 test eax, eax
// 004c5719  56                   push esi
// 004c571a  57                   push edi
// 004c571b  be01000000           mov esi, 1
// 004c5720  7e12                 jle 0x4c5734
// 004c5722  8d4c8208             lea ecx, [edx + eax*4 + 8]
// 004c5726  8b79fc               mov edi, dword ptr [ecx - 4]
// 004c5729  8939                 mov dword ptr [ecx], edi
// 004c572b  2bc6                 sub eax, esi
// 004c572d  83e904               sub ecx, 4
// 004c5730  85c0                 test eax, eax
// 004c5732  7ff2                 jg 0x4c5726
// 004c5734  803a00               cmp byte ptr [edx], 0
// 004c5737  7424                 je 0x4c575d
// 004c5739  8b4a04               mov ecx, dword ptr [edx + 4]
// 004c573c  85c9                 test ecx, ecx
// 004c573e  7e3e                 jle 0x4c577e
// 004c5740  8d848a88000000       lea eax, [edx + ecx*4 + 0x88]
// 004c5747  8b78fc               mov edi, dword ptr [eax - 4]
// 004c574a  8938                 mov dword ptr [eax], edi
// 004c574c  2bce                 sub ecx, esi
// 004c574e  83e804               sub eax, 4
// 004c5751  85c9                 test ecx, ecx
// 004c5753  7ff2                 jg 0x4c5747
// 004c5755  017204               add dword ptr [edx + 4], esi
// 004c5758  5f                   pop edi
// 004c5759  5e                   pop esi
// 004c575a  c20400               ret 4
// 004c575d  8b4204               mov eax, dword ptr [edx + 4]
// 004c5760  03c6                 add eax, esi
// 004c5762  85c0                 test eax, eax
// 004c5764  7e18                 jle 0x4c577e
// 004c5766  8d8c8210010000       lea ecx, [edx + eax*4 + 0x110]
// 004c576d  8d4900               lea ecx, [ecx]
// 004c5770  8b79fc               mov edi, dword ptr [ecx - 4]
// 004c5773  8939                 mov dword ptr [ecx], edi
// 004c5775  2bc6                 sub eax, esi
// 004c5777  83e904               sub ecx, 4
// 004c577a  85c0                 test eax, eax
// 004c577c  7ff2                 jg 0x4c5770
// 004c577e  017204               add dword ptr [edx + 4], esi
// 004c5781  5f                   pop edi
// 004c5782  5e                   pop esi
// 004c5783  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
