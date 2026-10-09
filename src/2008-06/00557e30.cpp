// roc 2008-06 00557e30  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557e30
//
// 00557e30  56                   push esi
// 00557e31  6a18                 push 0x18
// 00557e33  8bf1                 mov esi, ecx
// 00557e35  e8e68a1400           call 0x6a0920
// 00557e3a  83c404               add esp, 4
// 00557e3d  85c0                 test eax, eax
// 00557e3f  741d                 je 0x557e5e
// 00557e41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00557e45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00557e49  c70000000000         mov dword ptr [eax], 0
// 00557e4f  894808               mov dword ptr [eax + 8], ecx
// 00557e52  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00557e59  895010               mov dword ptr [eax + 0x10], edx
// 00557e5c  eb02                 jmp 0x557e60
// 00557e5e  33c0                 xor eax, eax
// 00557e60  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00557e63  85c9                 test ecx, ecx
// 00557e65  750a                 jne 0x557e71
// 00557e67  894620               mov dword ptr [esi + 0x20], eax
// 00557e6a  894624               mov dword ptr [esi + 0x24], eax
// 00557e6d  5e                   pop esi
// 00557e6e  c20800               ret 8
// 00557e71  8901                 mov dword ptr [ecx], eax
// 00557e73  894624               mov dword ptr [esi + 0x24], eax
// 00557e76  5e                   pop esi
// 00557e77  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
