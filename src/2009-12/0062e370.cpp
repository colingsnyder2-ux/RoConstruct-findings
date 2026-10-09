// roc 2009-12 0062e370  unit: RBX::Time::W4SampleMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062e370
//
// 0062e370  56                   push esi
// 0062e371  6a08                 push 8
// 0062e373  8bf1                 mov esi, ecx
// 0062e375  e8e6541c00           call 0x7f3860
// 0062e37a  83c404               add esp, 4
// 0062e37d  85c0                 test eax, eax
// 0062e37f  740e                 je 0x62e38f
// 0062e381  c70004b19c00         mov dword ptr [eax], 0x9cb104
// 0062e387  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062e38a  894804               mov dword ptr [eax + 4], ecx
// 0062e38d  5e                   pop esi
// 0062e38e  c3                   ret 
// 0062e38f  33c0                 xor eax, eax
// 0062e391  5e                   pop esi
// 0062e392  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
