// roc 2012-06 005bd340  unit: RakNet::RakPeer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bd340
//
// 005bd340  6aff                 push -1
// 005bd342  687e2aab00           push 0xab2a7e
// 005bd347  64a100000000         mov eax, dword ptr fs:[0]
// 005bd34d  50                   push eax
// 005bd34e  64892500000000       mov dword ptr fs:[0], esp
// 005bd355  51                   push ecx
// 005bd356  56                   push esi
// 005bd357  8bf1                 mov esi, ecx
// 005bd359  57                   push edi
// 005bd35a  33ff                 xor edi, edi
// 005bd35c  89742408             mov dword ptr [esp + 8], esi
// 005bd360  897e08               mov dword ptr [esi + 8], edi
// 005bd363  897e0c               mov dword ptr [esi + 0xc], edi
// 005bd366  c7461000400000       mov dword ptr [esi + 0x10], 0x4000
// 005bd36d  8d4e14               lea ecx, [esi + 0x14]
// 005bd370  897c2414             mov dword ptr [esp + 0x14], edi
// 005bd374  e837b40000           call 0x5c87b0
// 005bd379  897e38               mov dword ptr [esi + 0x38], edi
// 005bd37c  897e2c               mov dword ptr [esi + 0x2c], edi
// 005bd37f  897e30               mov dword ptr [esi + 0x30], edi
// 005bd382  897e34               mov dword ptr [esi + 0x34], edi
// 005bd385  8d4e3c               lea ecx, [esi + 0x3c]
// 005bd388  c644241402           mov byte ptr [esp + 0x14], 2
// 005bd38d  e81eb40000           call 0x5c87b0
// 005bd392  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bd396  5f                   pop edi
// 005bd397  8bc6                 mov eax, esi
// 005bd399  5e                   pop esi
// 005bd39a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd3a1  83c410               add esp, 0x10
// 005bd3a4  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ??0?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
