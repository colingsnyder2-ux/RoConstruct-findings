// roc 2009-12 0064afb0  unit: RBX::PlayerCamera::W4CameraType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064afb0
//
// 0064afb0  56                   push esi
// 0064afb1  6a08                 push 8
// 0064afb3  8bf1                 mov esi, ecx
// 0064afb5  e8a6881a00           call 0x7f3860
// 0064afba  83c404               add esp, 4
// 0064afbd  85c0                 test eax, eax
// 0064afbf  740e                 je 0x64afcf
// 0064afc1  c7003ccc9c00         mov dword ptr [eax], 0x9ccc3c
// 0064afc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064afca  894804               mov dword ptr [eax + 4], ecx
// 0064afcd  5e                   pop esi
// 0064afce  c3                   ret 
// 0064afcf  33c0                 xor eax, eax
// 0064afd1  5e                   pop esi
// 0064afd2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
