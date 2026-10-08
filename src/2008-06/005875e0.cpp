// roc 2008-06 005875e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005875e0
//
// 005875e0  8b442404             mov eax, dword ptr [esp + 4]
// 005875e4  83ec08               sub esp, 8
// 005875e7  56                   push esi
// 005875e8  57                   push edi
// 005875e9  50                   push eax
// 005875ea  8d54240c             lea edx, [esp + 0xc]
// 005875ee  52                   push edx
// 005875ef  e82c45feff           call 0x56bb20
// 005875f4  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005875f8  8b38                 mov edi, dword ptr [eax]
// 005875fa  85f6                 test esi, esi
// 005875fc  742a                 je 0x587628
// 005875fe  8d4604               lea eax, [esi + 4]
// 00587601  83c9ff               or ecx, 0xffffffff
// 00587604  f00fc108             lock xadd dword ptr [eax], ecx
// 00587608  751e                 jne 0x587628
// 0058760a  8b16                 mov edx, dword ptr [esi]
// 0058760c  8b4204               mov eax, dword ptr [edx + 4]
// 0058760f  8bce                 mov ecx, esi
// 00587611  ffd0                 call eax
// 00587613  8d4e08               lea ecx, [esi + 8]
// 00587616  83caff               or edx, 0xffffffff
// 00587619  f00fc111             lock xadd dword ptr [ecx], edx
// 0058761d  7509                 jne 0x587628
// 0058761f  8b06                 mov eax, dword ptr [esi]
// 00587621  8b5008               mov edx, dword ptr [eax + 8]
// 00587624  8bce                 mov ecx, esi
// 00587626  ffd2                 call edx
// 00587628  8bc7                 mov eax, edi
// 0058762a  5f                   pop edi
// 0058762b  5e                   pop esi
// 0058762c  83c408               add esp, 8
// 0058762f  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?sig@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@IBEAAVTSignalInstance@123@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
