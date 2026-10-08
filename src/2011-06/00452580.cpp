// roc 2011-06 00452580  unit: RBX::CRenderSettings::W4AASamples::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452580
//
// 00452580  56                   push esi
// 00452581  6a08                 push 8
// 00452583  8bf1                 mov esi, ecx
// 00452585  e8d47a3b00           call 0x80a05e
// 0045258a  83c404               add esp, 4
// 0045258d  85c0                 test eax, eax
// 0045258f  740e                 je 0x45259f
// 00452591  c7007ccba600         mov dword ptr [eax], 0xa6cb7c
// 00452597  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045259a  894804               mov dword ptr [eax + 4], ecx
// 0045259d  5e                   pop esi
// 0045259e  c3                   ret 
// 0045259f  33c0                 xor eax, eax
// 004525a1  5e                   pop esi
// 004525a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
