// roc 2009-12 00444820  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444820
//
// 00444820  56                   push esi
// 00444821  6a08                 push 8
// 00444823  8bf1                 mov esi, ecx
// 00444825  e836f03a00           call 0x7f3860
// 0044482a  83c404               add esp, 4
// 0044482d  85c0                 test eax, eax
// 0044482f  740e                 je 0x44483f
// 00444831  c700a4a29a00         mov dword ptr [eax], 0x9aa2a4
// 00444837  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044483a  894804               mov dword ptr [eax + 4], ecx
// 0044483d  5e                   pop esi
// 0044483e  c3                   ret 
// 0044483f  33c0                 xor eax, eax
// 00444841  5e                   pop esi
// 00444842  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
