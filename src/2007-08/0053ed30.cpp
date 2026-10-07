// roc 2007-08 0053ed30  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ed30
//
// 0053ed30  56                   push esi
// 0053ed31  6a10                 push 0x10
// 0053ed33  8bf1                 mov esi, ecx
// 0053ed35  e8bc110f00           call 0x62fef6
// 0053ed3a  83c404               add esp, 4
// 0053ed3d  85c0                 test eax, eax
// 0053ed3f  741d                 je 0x53ed5e
// 0053ed41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053ed45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053ed49  c70000000000         mov dword ptr [eax], 0
// 0053ed4f  894804               mov dword ptr [eax + 4], ecx
// 0053ed52  c7400801000000       mov dword ptr [eax + 8], 1
// 0053ed59  89500c               mov dword ptr [eax + 0xc], edx
// 0053ed5c  eb02                 jmp 0x53ed60
// 0053ed5e  33c0                 xor eax, eax
// 0053ed60  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053ed63  85c9                 test ecx, ecx
// 0053ed65  750a                 jne 0x53ed71
// 0053ed67  894618               mov dword ptr [esi + 0x18], eax
// 0053ed6a  89461c               mov dword ptr [esi + 0x1c], eax
// 0053ed6d  5e                   pop esi
// 0053ed6e  c20800               ret 8
// 0053ed71  8901                 mov dword ptr [ecx], eax
// 0053ed73  89461c               mov dword ptr [esi + 0x1c], eax
// 0053ed76  5e                   pop esi
// 0053ed77  c20800               ret 8
// library rbxgs/reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
