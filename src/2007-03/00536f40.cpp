// roc 2007-03 00536f40  unit: seg_00530000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536f40
//
// 00536f40  56                   push esi
// 00536f41  6a08                 push 8
// 00536f43  8bf1                 mov esi, ecx
// 00536f45  e8be710e00           call 0x61e108
// 00536f4a  83c404               add esp, 4
// 00536f4d  85c0                 test eax, eax
// 00536f4f  740e                 je 0x536f5f
// 00536f51  c700cc577a00         mov dword ptr [eax], 0x7a57cc
// 00536f57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00536f5a  894804               mov dword ptr [eax + 4], ecx
// 00536f5d  5e                   pop esi
// 00536f5e  c3                   ret 
// 00536f5f  33c0                 xor eax, eax
// 00536f61  5e                   pop esi
// 00536f62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
