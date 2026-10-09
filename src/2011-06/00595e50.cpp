// roc 2011-06 00595e50  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00595e50
//
// 00595e50  56                   push esi
// 00595e51  6a18                 push 0x18
// 00595e53  8bf1                 mov esi, ecx
// 00595e55  e8e695f3ff           call 0x4cf440
// 00595e5a  83c404               add esp, 4
// 00595e5d  85c0                 test eax, eax
// 00595e5f  741d                 je 0x595e7e
// 00595e61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00595e65  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00595e69  c70000000000         mov dword ptr [eax], 0
// 00595e6f  894808               mov dword ptr [eax + 8], ecx
// 00595e72  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00595e79  895010               mov dword ptr [eax + 0x10], edx
// 00595e7c  eb02                 jmp 0x595e80
// 00595e7e  33c0                 xor eax, eax
// 00595e80  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00595e83  85c9                 test ecx, ecx
// 00595e85  750a                 jne 0x595e91
// 00595e87  894620               mov dword ptr [esi + 0x20], eax
// 00595e8a  894624               mov dword ptr [esi + 0x24], eax
// 00595e8d  5e                   pop esi
// 00595e8e  c20800               ret 8
// 00595e91  8901                 mov dword ptr [ecx], eax
// 00595e93  894624               mov dword ptr [esi + 0x24], eax
// 00595e96  5e                   pop esi
// 00595e97  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
