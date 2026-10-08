// roc 2010-06 0058fa80  unit: RBX::TaskScheduler::Job::W4SleepAdjustMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058fa80
//
// 0058fa80  56                   push esi
// 0058fa81  6a08                 push 8
// 0058fa83  8bf1                 mov esi, ecx
// 0058fa85  e8167f2100           call 0x7a79a0
// 0058fa8a  83c404               add esp, 4
// 0058fa8d  85c0                 test eax, eax
// 0058fa8f  740e                 je 0x58fa9f
// 0058fa91  c7003c8ea200         mov dword ptr [eax], 0xa28e3c
// 0058fa97  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058fa9a  894804               mov dword ptr [eax + 4], ecx
// 0058fa9d  5e                   pop esi
// 0058fa9e  c3                   ret 
// 0058fa9f  33c0                 xor eax, eax
// 0058faa1  5e                   pop esi
// 0058faa2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
