// roc 2011-06 00590510  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590510
//
// 00590510  56                   push esi
// 00590511  6a08                 push 8
// 00590513  8bf1                 mov esi, ecx
// 00590515  e8449b2700           call 0x80a05e
// 0059051a  83c404               add esp, 4
// 0059051d  85c0                 test eax, eax
// 0059051f  740e                 je 0x59052f
// 00590521  c7002093a800         mov dword ptr [eax], 0xa89320
// 00590527  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059052a  894804               mov dword ptr [eax + 4], ecx
// 0059052d  5e                   pop esi
// 0059052e  c3                   ret 
// 0059052f  33c0                 xor eax, eax
// 00590531  5e                   pop esi
// 00590532  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
