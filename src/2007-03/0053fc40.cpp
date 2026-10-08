// roc 2007-03 0053fc40  unit: seg_00530000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fc40
//
// 0053fc40  56                   push esi
// 0053fc41  6a10                 push 0x10
// 0053fc43  8bf1                 mov esi, ecx
// 0053fc45  e8bee40d00           call 0x61e108
// 0053fc4a  83c404               add esp, 4
// 0053fc4d  85c0                 test eax, eax
// 0053fc4f  741d                 je 0x53fc6e
// 0053fc51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053fc55  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053fc59  c70000000000         mov dword ptr [eax], 0
// 0053fc5f  894804               mov dword ptr [eax + 4], ecx
// 0053fc62  c7400801000000       mov dword ptr [eax + 8], 1
// 0053fc69  89500c               mov dword ptr [eax + 0xc], edx
// 0053fc6c  eb02                 jmp 0x53fc70
// 0053fc6e  33c0                 xor eax, eax
// 0053fc70  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053fc73  85c9                 test ecx, ecx
// 0053fc75  750a                 jne 0x53fc81
// 0053fc77  894618               mov dword ptr [esi + 0x18], eax
// 0053fc7a  89461c               mov dword ptr [esi + 0x1c], eax
// 0053fc7d  5e                   pop esi
// 0053fc7e  c20800               ret 8
// 0053fc81  8901                 mov dword ptr [ecx], eax
// 0053fc83  89461c               mov dword ptr [esi + 0x1c], eax
// 0053fc86  5e                   pop esi
// 0053fc87  c20800               ret 8
// library rbxgs/reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
