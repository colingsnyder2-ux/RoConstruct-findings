// roc 2011-06 004dd430  unit: RBX::NetworkSettings::W4PhysicsSendMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dd430
//
// 004dd430  56                   push esi
// 004dd431  6a08                 push 8
// 004dd433  8bf1                 mov esi, ecx
// 004dd435  e824cc3200           call 0x80a05e
// 004dd43a  83c404               add esp, 4
// 004dd43d  85c0                 test eax, eax
// 004dd43f  740e                 je 0x4dd44f
// 004dd441  c700e496a700         mov dword ptr [eax], 0xa796e4
// 004dd447  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dd44a  894804               mov dword ptr [eax + 4], ecx
// 004dd44d  5e                   pop esi
// 004dd44e  c3                   ret 
// 004dd44f  33c0                 xor eax, eax
// 004dd451  5e                   pop esi
// 004dd452  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
