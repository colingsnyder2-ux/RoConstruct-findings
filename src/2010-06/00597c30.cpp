// roc 2010-06 00597c30  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00597c30
//
// 00597c30  56                   push esi
// 00597c31  6a18                 push 0x18
// 00597c33  8bf1                 mov esi, ecx
// 00597c35  e826fbf2ff           call 0x4c7760
// 00597c3a  83c404               add esp, 4
// 00597c3d  85c0                 test eax, eax
// 00597c3f  741d                 je 0x597c5e
// 00597c41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597c45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00597c49  c70000000000         mov dword ptr [eax], 0
// 00597c4f  894808               mov dword ptr [eax + 8], ecx
// 00597c52  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00597c59  895010               mov dword ptr [eax + 0x10], edx
// 00597c5c  eb02                 jmp 0x597c60
// 00597c5e  33c0                 xor eax, eax
// 00597c60  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00597c63  85c9                 test ecx, ecx
// 00597c65  750a                 jne 0x597c71
// 00597c67  894620               mov dword ptr [esi + 0x20], eax
// 00597c6a  894624               mov dword ptr [esi + 0x24], eax
// 00597c6d  5e                   pop esi
// 00597c6e  c20800               ret 8
// 00597c71  8901                 mov dword ptr [ecx], eax
// 00597c73  894624               mov dword ptr [esi + 0x24], eax
// 00597c76  5e                   pop esi
// 00597c77  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
