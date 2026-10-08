// roc 2010-06 004a5670  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5670
//
// 004a5670  56                   push esi
// 004a5671  6a08                 push 8
// 004a5673  8bf1                 mov esi, ecx
// 004a5675  e826233000           call 0x7a79a0
// 004a567a  83c404               add esp, 4
// 004a567d  85c0                 test eax, eax
// 004a567f  740e                 je 0x4a568f
// 004a5681  c700cc7ea100         mov dword ptr [eax], 0xa17ecc
// 004a5687  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a568a  894804               mov dword ptr [eax + 4], ecx
// 004a568d  5e                   pop esi
// 004a568e  c3                   ret 
// 004a568f  33c0                 xor eax, eax
// 004a5691  5e                   pop esi
// 004a5692  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
