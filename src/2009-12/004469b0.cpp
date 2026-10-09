// roc 2009-12 004469b0  unit: RBX::CRenderSettings::W4GeometryQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004469b0
//
// 004469b0  56                   push esi
// 004469b1  6a08                 push 8
// 004469b3  8bf1                 mov esi, ecx
// 004469b5  e8a6ce3a00           call 0x7f3860
// 004469ba  83c404               add esp, 4
// 004469bd  85c0                 test eax, eax
// 004469bf  740e                 je 0x4469cf
// 004469c1  c70008a49a00         mov dword ptr [eax], 0x9aa408
// 004469c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004469ca  894804               mov dword ptr [eax + 4], ecx
// 004469cd  5e                   pop esi
// 004469ce  c3                   ret 
// 004469cf  33c0                 xor eax, eax
// 004469d1  5e                   pop esi
// 004469d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
