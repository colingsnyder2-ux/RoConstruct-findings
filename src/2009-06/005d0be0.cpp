// roc 2009-06 005d0be0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d0be0
//
// 005d0be0  56                   push esi
// 005d0be1  6a18                 push 0x18
// 005d0be3  8bf1                 mov esi, ecx
// 005d0be5  e80682efff           call 0x4c8df0
// 005d0bea  83c404               add esp, 4
// 005d0bed  85c0                 test eax, eax
// 005d0bef  741d                 je 0x5d0c0e
// 005d0bf1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d0bf5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005d0bf9  c70000000000         mov dword ptr [eax], 0
// 005d0bff  894808               mov dword ptr [eax + 8], ecx
// 005d0c02  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 005d0c09  895010               mov dword ptr [eax + 0x10], edx
// 005d0c0c  eb02                 jmp 0x5d0c10
// 005d0c0e  33c0                 xor eax, eax
// 005d0c10  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005d0c13  85c9                 test ecx, ecx
// 005d0c15  750a                 jne 0x5d0c21
// 005d0c17  894620               mov dword ptr [esi + 0x20], eax
// 005d0c1a  894624               mov dword ptr [esi + 0x24], eax
// 005d0c1d  5e                   pop esi
// 005d0c1e  c20800               ret 8
// 005d0c21  8901                 mov dword ptr [ecx], eax
// 005d0c23  894624               mov dword ptr [esi + 0x24], eax
// 005d0c26  5e                   pop esi
// 005d0c27  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
