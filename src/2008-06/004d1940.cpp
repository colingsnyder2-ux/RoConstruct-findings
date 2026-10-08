// roc 2008-06 004d1940  unit: RBX::Network::PhysicsSender  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1940
//
// 004d1940  6aff                 push -1
// 004d1942  68f89a7c00           push 0x7c9af8
// 004d1947  64a100000000         mov eax, dword ptr fs:[0]
// 004d194d  50                   push eax
// 004d194e  64892500000000       mov dword ptr fs:[0], esp
// 004d1955  51                   push ecx
// 004d1956  56                   push esi
// 004d1957  8bf1                 mov esi, ecx
// 004d1959  57                   push edi
// 004d195a  89742408             mov dword ptr [esp + 8], esi
// 004d195e  8b4608               mov eax, dword ptr [esi + 8]
// 004d1961  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d1969  85c0                 test eax, eax
// 004d196b  743e                 je 0x4d19ab
// 004d196d  3d00020000           cmp eax, 0x200
// 004d1972  7630                 jbe 0x4d19a4
// 004d1974  8b06                 mov eax, dword ptr [esi]
// 004d1976  85c0                 test eax, eax
// 004d1978  741d                 je 0x4d1997
// 004d197a  8b48fc               mov ecx, dword ptr [eax - 4]
// 004d197d  8d78fc               lea edi, [eax - 4]
// 004d1980  6810d44700           push 0x47d410
// 004d1985  51                   push ecx
// 004d1986  6a08                 push 8
// 004d1988  50                   push eax
// 004d1989  e8cdfc1c00           call 0x6a165b
// 004d198e  57                   push edi
// 004d198f  e8e6ec1c00           call 0x6a067a
// 004d1994  83c404               add esp, 4
// 004d1997  c7460800000000       mov dword ptr [esi + 8], 0
// 004d199e  c70600000000         mov dword ptr [esi], 0
// 004d19a4  c7460400000000       mov dword ptr [esi + 4], 0
// 004d19ab  837e0800             cmp dword ptr [esi + 8], 0
// 004d19af  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d19b7  7623                 jbe 0x4d19dc
// 004d19b9  8b36                 mov esi, dword ptr [esi]
// 004d19bb  85f6                 test esi, esi
// 004d19bd  741d                 je 0x4d19dc
// 004d19bf  8b56fc               mov edx, dword ptr [esi - 4]
// 004d19c2  6810d44700           push 0x47d410
// 004d19c7  8d7efc               lea edi, [esi - 4]
// 004d19ca  52                   push edx
// 004d19cb  6a08                 push 8
// 004d19cd  56                   push esi
// 004d19ce  e888fc1c00           call 0x6a165b
// 004d19d3  57                   push edi
// 004d19d4  e8a1ec1c00           call 0x6a067a
// 004d19d9  83c404               add esp, 4
// 004d19dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d19e0  5f                   pop edi
// 004d19e1  5e                   pop esi
// 004d19e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004d19e9  83c410               add esp, 0x10
// 004d19ec  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ??1?$OrderedList@IU?$RangeNode@I@DataStructures@@$1??$RangeNodeComp@I@2@YAHABIABU12@@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
