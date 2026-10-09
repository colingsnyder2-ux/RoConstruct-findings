// roc 2012-06 00681300  unit: VAuthoringSettings::?$FactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00681300
//
// 00681300  56                   push esi
// 00681301  6a18                 push 0x18
// 00681303  8bf1                 mov esi, ecx
// 00681305  e8e66fecff           call 0x5482f0
// 0068130a  83c404               add esp, 4
// 0068130d  85c0                 test eax, eax
// 0068130f  741d                 je 0x68132e
// 00681311  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00681315  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00681319  c70000000000         mov dword ptr [eax], 0
// 0068131f  894808               mov dword ptr [eax + 8], ecx
// 00681322  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00681329  895010               mov dword ptr [eax + 0x10], edx
// 0068132c  eb02                 jmp 0x681330
// 0068132e  33c0                 xor eax, eax
// 00681330  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00681333  85c9                 test ecx, ecx
// 00681335  750a                 jne 0x681341
// 00681337  894620               mov dword ptr [esi + 0x20], eax
// 0068133a  894624               mov dword ptr [esi + 0x24], eax
// 0068133d  5e                   pop esi
// 0068133e  c20800               ret 8
// 00681341  8901                 mov dword ptr [ecx], eax
// 00681343  894624               mov dword ptr [esi + 0x24], eax
// 00681346  5e                   pop esi
// 00681347  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??$addAttribute@PBVName@RBX@@@XmlElement@@QAEXABVName@RBX@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
