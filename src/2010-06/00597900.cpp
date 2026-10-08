// roc 2010-06 00597900  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00597900
//
// 00597900  56                   push esi
// 00597901  6a08                 push 8
// 00597903  8bf1                 mov esi, ecx
// 00597905  e896002100           call 0x7a79a0
// 0059790a  83c404               add esp, 4
// 0059790d  85c0                 test eax, eax
// 0059790f  740e                 je 0x59791f
// 00597911  c700dc9ca200         mov dword ptr [eax], 0xa29cdc
// 00597917  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059791a  894804               mov dword ptr [eax + 4], ecx
// 0059791d  5e                   pop esi
// 0059791e  c3                   ret 
// 0059791f  33c0                 xor eax, eax
// 00597921  5e                   pop esi
// 00597922  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
