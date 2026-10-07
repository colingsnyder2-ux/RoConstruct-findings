// roc 2008-06 005a7410  unit: RBX::Log  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7410
//
// 005a7410  6aff                 push -1
// 005a7412  68f32f7d00           push 0x7d2ff3
// 005a7417  64a100000000         mov eax, dword ptr fs:[0]
// 005a741d  50                   push eax
// 005a741e  64892500000000       mov dword ptr fs:[0], esp
// 005a7425  51                   push ecx
// 005a7426  a130c49400           mov eax, dword ptr [0x94c430]
// 005a742b  57                   push edi
// 005a742c  50                   push eax
// 005a742d  ff15ac228000         call dword ptr [0x8022ac]
// 005a7433  8bf8                 mov edi, eax
// 005a7435  85ff                 test edi, edi
// 005a7437  0f85a5000000         jne 0x5a74e2
// 005a743d  38442418             cmp byte ptr [esp + 0x18], al
// 005a7441  0f849b000000         je 0x5a74e2
// 005a7447  6a18                 push 0x18
// 005a7449  e8d2940f00           call 0x6a0920
// 005a744e  83c404               add esp, 4
// 005a7451  89442404             mov dword ptr [esp + 4], eax
// 005a7455  897c2410             mov dword ptr [esp + 0x10], edi
// 005a7459  85c0                 test eax, eax
// 005a745b  740b                 je 0x5a7468
// 005a745d  8bc8                 mov ecx, eax
// 005a745f  e86c1fe8ff           call 0x4293d0
// 005a7464  8bf8                 mov edi, eax
// 005a7466  eb02                 jmp 0x5a746a
// 005a7468  33ff                 xor edi, edi
// 005a746a  897c2404             mov dword ptr [esp + 4], edi
// 005a746e  68f0735a00           push 0x5a73f0
// 005a7473  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005a747b  e8e02d0700           call 0x61a260
// 005a7480  83c404               add esp, 4
// 005a7483  83f8ff               cmp eax, -1
// 005a7486  751b                 jne 0x5a74a3
// 005a7488  8d4c2404             lea ecx, [esp + 4]
// 005a748c  e8effbffff           call 0x5a7080
// 005a7491  33c0                 xor eax, eax
// 005a7493  5f                   pop edi
// 005a7494  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a7498  64890d00000000       mov dword ptr fs:[0], ecx
// 005a749f  83c410               add esp, 0x10
// 005a74a2  c3                   ret 
// 005a74a3  8b0d30c49400         mov ecx, dword ptr [0x94c430]
// 005a74a9  57                   push edi
// 005a74aa  51                   push ecx
// 005a74ab  ff15a4228000         call dword ptr [0x8022a4]
// 005a74b1  85c0                 test eax, eax
// 005a74b3  74d3                 je 0x5a7488
// 005a74b5  56                   push esi
// 005a74b6  8b35586b9700         mov esi, dword ptr [0x976b58]
// 005a74bc  8bce                 mov ecx, esi
// 005a74be  e81dd8feff           call 0x594ce0
// 005a74c3  ff05606b9700         inc dword ptr [0x976b60]
// 005a74c9  8bce                 mov ecx, esi
// 005a74cb  e830d8feff           call 0x594d00
// 005a74d0  8d4c2408             lea ecx, [esp + 8]
// 005a74d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005a74dc  e89ffbffff           call 0x5a7080
// 005a74e1  5e                   pop esi
// 005a74e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a74e6  8bc7                 mov eax, edi
// 005a74e8  5f                   pop edi
// 005a74e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005a74f0  83c410               add esp, 0x10
// 005a74f3  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?get_slots@?A0x568608d8@@YAPAV?$vector@PAXV?$allocator@PAX@std@@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
