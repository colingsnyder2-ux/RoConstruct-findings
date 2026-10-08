// roc 2011-06 00453020  unit: RBX::CRenderSettings::W4GeometryQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00453020
//
// 00453020  56                   push esi
// 00453021  6a08                 push 8
// 00453023  8bf1                 mov esi, ecx
// 00453025  e834703b00           call 0x80a05e
// 0045302a  83c404               add esp, 4
// 0045302d  85c0                 test eax, eax
// 0045302f  740e                 je 0x45303f
// 00453031  c7006ccca600         mov dword ptr [eax], 0xa6cc6c
// 00453037  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045303a  894804               mov dword ptr [eax + 4], ecx
// 0045303d  5e                   pop esi
// 0045303e  c3                   ret 
// 0045303f  33c0                 xor eax, eax
// 00453041  5e                   pop esi
// 00453042  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
