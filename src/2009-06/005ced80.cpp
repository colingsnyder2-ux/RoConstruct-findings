// roc 2009-06 005ced80  unit: VAuthoringSettings::?$FactoryProduct  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ced80
//
// 005ced80  51                   push ecx
// 005ced81  56                   push esi
// 005ced82  8bf1                 mov esi, ecx
// 005ced84  8b4610               mov eax, dword ptr [esi + 0x10]
// 005ced87  8bc8                 mov ecx, eax
// 005ced89  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005ced8c  f7c1f8ffffff         test ecx, 0xfffffff8
// 005ced92  741a                 je 0x5cedae
// 005ced94  8b542404             mov edx, dword ptr [esp + 4]
// 005ced98  52                   push edx
// 005ced99  8d4e08               lea ecx, [esi + 8]
// 005ced9c  51                   push ecx
// 005ced9d  50                   push eax
// 005ced9e  83c0f8               add eax, -8
// 005ceda1  50                   push eax
// 005ceda2  e8f97e0600           call 0x636ca0
// 005ceda7  83c410               add esp, 0x10
// 005cedaa  834610f8             add dword ptr [esi + 0x10], -8
// 005cedae  5e                   pop esi
// 005cedaf  59                   pop ecx
// 005cedb0  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ?pop_back@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
