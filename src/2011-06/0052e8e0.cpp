// roc 2011-06 0052e8e0  unit: RBX::Network::ProfiledRakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e8e0
//
// 0052e8e0  64a100000000         mov eax, dword ptr fs:[0]
// 0052e8e6  6aff                 push -1
// 0052e8e8  685be19d00           push 0x9de15b
// 0052e8ed  50                   push eax
// 0052e8ee  64892500000000       mov dword ptr fs:[0], esp
// 0052e8f5  56                   push esi
// 0052e8f6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052e8fa  57                   push edi
// 0052e8fb  85f6                 test esi, esi
// 0052e8fd  7462                 je 0x52e961
// 0052e8ff  33c9                 xor ecx, ecx
// 0052e901  8bc6                 mov eax, esi
// 0052e903  ba08000000           mov edx, 8
// 0052e908  f7e2                 mul edx
// 0052e90a  0f90c1               seto cl
// 0052e90d  f7d9                 neg ecx
// 0052e90f  0bc8                 or ecx, eax
// 0052e911  33c0                 xor eax, eax
// 0052e913  83c104               add ecx, 4
// 0052e916  0f92c0               setb al
// 0052e919  f7d8                 neg eax
// 0052e91b  0bc1                 or eax, ecx
// 0052e91d  50                   push eax
// 0052e91e  e81dba2d00           call 0x80a340
// 0052e923  83c404               add esp, 4
// 0052e926  89442418             mov dword ptr [esp + 0x18], eax
// 0052e92a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052e932  85c0                 test eax, eax
// 0052e934  742b                 je 0x52e961
// 0052e936  6840b68600           push 0x86b640
// 0052e93b  6820c14200           push 0x42c120
// 0052e940  56                   push esi
// 0052e941  8d7804               lea edi, [eax + 4]
// 0052e944  6a08                 push 8
// 0052e946  57                   push edi
// 0052e947  8930                 mov dword ptr [eax], esi
// 0052e949  e8a2c92d00           call 0x80b2f0
// 0052e94e  8bc7                 mov eax, edi
// 0052e950  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e954  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e95b  5f                   pop edi
// 0052e95c  5e                   pop esi
// 0052e95d  83c40c               add esp, 0xc
// 0052e960  c3                   ret 
// 0052e961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e965  5f                   pop edi
// 0052e966  33c0                 xor eax, eax
// 0052e968  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e96f  5e                   pop esi
// 0052e970  83c40c               add esp, 0xc
// 0052e973  c3                   ret 
// library rbx2016-raknet/CloudCommon.cpp (function ??$OP_NEW_ARRAY@UCloudKey@RakNet@@@RakNet@@YAPAUCloudKey@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
