// roc 2009-12 0062dd10  unit: RBX::TaskScheduler::Job::W4SleepAdjustMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062dd10
//
// 0062dd10  56                   push esi
// 0062dd11  6a08                 push 8
// 0062dd13  8bf1                 mov esi, ecx
// 0062dd15  e8465b1c00           call 0x7f3860
// 0062dd1a  83c404               add esp, 4
// 0062dd1d  85c0                 test eax, eax
// 0062dd1f  740e                 je 0x62dd2f
// 0062dd21  c700a4b09c00         mov dword ptr [eax], 0x9cb0a4
// 0062dd27  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062dd2a  894804               mov dword ptr [eax + 4], ecx
// 0062dd2d  5e                   pop esi
// 0062dd2e  c3                   ret 
// 0062dd2f  33c0                 xor eax, eax
// 0062dd31  5e                   pop esi
// 0062dd32  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
