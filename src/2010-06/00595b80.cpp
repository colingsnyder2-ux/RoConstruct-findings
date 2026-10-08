// from server: 100% by auto
// roc 2010-06 00595b80  unit: VAuthoringSettings::?$FactoryProduct  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00595b80
//
// 00595b80  51                   push ecx
// 00595b81  56                   push esi
// 00595b82  8bf1                 mov esi, ecx
// 00595b84  8b4610               mov eax, dword ptr [esi + 0x10]
// 00595b87  8bc8                 mov ecx, eax
// 00595b89  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00595b8c  f7c1f8ffffff         test ecx, 0xfffffff8
// 00595b92  741a                 je 0x595bae
// 00595b94  8b542404             mov edx, dword ptr [esp + 4]
// 00595b98  52                   push edx
// 00595b99  8d4e08               lea ecx, [esi + 8]
// 00595b9c  51                   push ecx
// 00595b9d  50                   push eax
// 00595b9e  83c0f8               add eax, -8
// 00595ba1  50                   push eax
// 00595ba2  e809da0600           call 0x6035b0
// 00595ba7  83c410               add esp, 0x10
// 00595baa  834610f8             add dword ptr [esi + 0x10], -8
// 00595bae  5e                   pop esi
// 00595baf  59                   pop ecx
// 00595bb0  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ?pop_back@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
