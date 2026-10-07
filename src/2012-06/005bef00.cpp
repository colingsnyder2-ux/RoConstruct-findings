// roc 2012-06 005bef00  unit: RakNet::RakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bef00
//
// 005bef00  64a100000000         mov eax, dword ptr fs:[0]
// 005bef06  6aff                 push -1
// 005bef08  68012bab00           push 0xab2b01
// 005bef0d  50                   push eax
// 005bef0e  64892500000000       mov dword ptr fs:[0], esp
// 005bef15  56                   push esi
// 005bef16  8bf1                 mov esi, ecx
// 005bef18  57                   push edi
// 005bef19  8d7e14               lea edi, [esi + 0x14]
// 005bef1c  8bcf                 mov ecx, edi
// 005bef1e  e83da0e5ff           call 0x418f60
// 005bef23  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bef27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005bef2b  50                   push eax
// 005bef2c  51                   push ecx
// 005bef2d  8bce                 mov ecx, esi
// 005bef2f  e86cdaffff           call 0x5bc9a0
// 005bef34  8bf0                 mov esi, eax
// 005bef36  8bcf                 mov ecx, edi
// 005bef38  8974241c             mov dword ptr [esp + 0x1c], esi
// 005bef3c  e82fa0e5ff           call 0x418f70
// 005bef41  89742418             mov dword ptr [esp + 0x18], esi
// 005bef45  33c0                 xor eax, eax
// 005bef47  89442410             mov dword ptr [esp + 0x10], eax
// 005bef4b  3bf0                 cmp esi, eax
// 005bef4d  7414                 je 0x5bef63
// 005bef4f  8d7e10               lea edi, [esi + 0x10]
// 005bef52  8bcf                 mov ecx, edi
// 005bef54  e8872dfaff           call 0x561ce0
// 005bef59  8d4f10               lea ecx, [edi + 0x10]
// 005bef5c  e8cf2afaff           call 0x561a30
// 005bef61  8bc6                 mov eax, esi
// 005bef63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bef67  5f                   pop edi
// 005bef68  64890d00000000       mov dword ptr fs:[0], ecx
// 005bef6f  5e                   pop esi
// 005bef70  83c40c               add esp, 0xc
// 005bef73  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?Allocate@?$ThreadsafeAllocatingQueue@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEPAUBufferedCommandStruct@RakPeer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
