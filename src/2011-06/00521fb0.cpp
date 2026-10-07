// roc 2011-06 00521fb0  unit: RBX::Network::ProfiledRakPeer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521fb0
//
// 00521fb0  6aff                 push -1
// 00521fb2  684ee09d00           push 0x9de04e
// 00521fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00521fbd  50                   push eax
// 00521fbe  64892500000000       mov dword ptr fs:[0], esp
// 00521fc5  51                   push ecx
// 00521fc6  56                   push esi
// 00521fc7  8bf1                 mov esi, ecx
// 00521fc9  57                   push edi
// 00521fca  33ff                 xor edi, edi
// 00521fcc  89742408             mov dword ptr [esp + 8], esi
// 00521fd0  897e08               mov dword ptr [esi + 8], edi
// 00521fd3  897e0c               mov dword ptr [esi + 0xc], edi
// 00521fd6  c7461000400000       mov dword ptr [esi + 0x10], 0x4000
// 00521fdd  8d4e14               lea ecx, [esi + 0x14]
// 00521fe0  897c2414             mov dword ptr [esp + 0x14], edi
// 00521fe4  e817f33200           call 0x851300
// 00521fe9  897e38               mov dword ptr [esi + 0x38], edi
// 00521fec  897e2c               mov dword ptr [esi + 0x2c], edi
// 00521fef  897e30               mov dword ptr [esi + 0x30], edi
// 00521ff2  897e34               mov dword ptr [esi + 0x34], edi
// 00521ff5  8d4e3c               lea ecx, [esi + 0x3c]
// 00521ff8  c644241402           mov byte ptr [esp + 0x14], 2
// 00521ffd  e8fef23200           call 0x851300
// 00522002  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00522006  5f                   pop edi
// 00522007  8bc6                 mov eax, esi
// 00522009  5e                   pop esi
// 0052200a  64890d00000000       mov dword ptr fs:[0], ecx
// 00522011  83c410               add esp, 0x10
// 00522014  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ??0?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
