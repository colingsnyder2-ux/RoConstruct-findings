// roc 2007-08 004c5690  unit: RakPeer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5690
//
// 004c5690  8b442404             mov eax, dword ptr [esp + 4]
// 004c5694  8b4804               mov ecx, dword ptr [eax + 4]
// 004c5697  83e901               sub ecx, 1
// 004c569a  33d2                 xor edx, edx
// 004c569c  85c9                 test ecx, ecx
// 004c569e  56                   push esi
// 004c569f  7e18                 jle 0x4c56b9
// 004c56a1  8d4808               lea ecx, [eax + 8]
// 004c56a4  8b7104               mov esi, dword ptr [ecx + 4]
// 004c56a7  8931                 mov dword ptr [ecx], esi
// 004c56a9  8b7004               mov esi, dword ptr [eax + 4]
// 004c56ac  83c201               add edx, 1
// 004c56af  83ee01               sub esi, 1
// 004c56b2  83c104               add ecx, 4
// 004c56b5  3bd6                 cmp edx, esi
// 004c56b7  7ceb                 jl 0x4c56a4
// 004c56b9  33d2                 xor edx, edx
// 004c56bb  3810                 cmp byte ptr [eax], dl
// 004c56bd  7429                 je 0x4c56e8
// 004c56bf  395004               cmp dword ptr [eax + 4], edx
// 004c56c2  7e40                 jle 0x4c5704
// 004c56c4  8d8888000000         lea ecx, [eax + 0x88]
// 004c56ca  8d9b00000000         lea ebx, [ebx]
// 004c56d0  8b7104               mov esi, dword ptr [ecx + 4]
// 004c56d3  8931                 mov dword ptr [ecx], esi
// 004c56d5  83c201               add edx, 1
// 004c56d8  83c104               add ecx, 4
// 004c56db  3b5004               cmp edx, dword ptr [eax + 4]
// 004c56de  7cf0                 jl 0x4c56d0
// 004c56e0  834004ff             add dword ptr [eax + 4], -1
// 004c56e4  5e                   pop esi
// 004c56e5  c20400               ret 4
// 004c56e8  83780400             cmp dword ptr [eax + 4], 0
// 004c56ec  7e16                 jle 0x4c5704
// 004c56ee  8d8810010000         lea ecx, [eax + 0x110]
// 004c56f4  8b7104               mov esi, dword ptr [ecx + 4]
// 004c56f7  8931                 mov dword ptr [ecx], esi
// 004c56f9  83c201               add edx, 1
// 004c56fc  83c104               add ecx, 4
// 004c56ff  3b5004               cmp edx, dword ptr [eax + 4]
// 004c5702  7cf0                 jl 0x4c56f4
// 004c5704  834004ff             add dword ptr [eax + 4], -1
// 004c5708  5e                   pop esi
// 004c5709  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
