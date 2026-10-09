// roc 2009-12 00635b90  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00635b90
//
// 00635b90  56                   push esi
// 00635b91  6a18                 push 0x18
// 00635b93  8bf1                 mov esi, ecx
// 00635b95  e8963feeff           call 0x519b30
// 00635b9a  83c404               add esp, 4
// 00635b9d  85c0                 test eax, eax
// 00635b9f  741d                 je 0x635bbe
// 00635ba1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00635ba5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00635ba9  c70000000000         mov dword ptr [eax], 0
// 00635baf  894808               mov dword ptr [eax + 8], ecx
// 00635bb2  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00635bb9  895010               mov dword ptr [eax + 0x10], edx
// 00635bbc  eb02                 jmp 0x635bc0
// 00635bbe  33c0                 xor eax, eax
// 00635bc0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00635bc3  85c9                 test ecx, ecx
// 00635bc5  750a                 jne 0x635bd1
// 00635bc7  894620               mov dword ptr [esi + 0x20], eax
// 00635bca  894624               mov dword ptr [esi + 0x24], eax
// 00635bcd  5e                   pop esi
// 00635bce  c20800               ret 8
// 00635bd1  8901                 mov dword ptr [ecx], eax
// 00635bd3  894624               mov dword ptr [esi + 0x24], eax
// 00635bd6  5e                   pop esi
// 00635bd7  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
