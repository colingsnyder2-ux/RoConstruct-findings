// roc 2008-06 0042d630  unit: boost::any::H::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d630
//
// 0042d630  6aff                 push -1
// 0042d632  68e8727d00           push 0x7d72e8
// 0042d637  64a100000000         mov eax, dword ptr fs:[0]
// 0042d63d  50                   push eax
// 0042d63e  64892500000000       mov dword ptr fs:[0], esp
// 0042d645  51                   push ecx
// 0042d646  56                   push esi
// 0042d647  8bf1                 mov esi, ecx
// 0042d649  57                   push edi
// 0042d64a  89742408             mov dword ptr [esp + 8], esi
// 0042d64e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0042d651  33ff                 xor edi, edi
// 0042d653  897c2414             mov dword ptr [esp + 0x14], edi
// 0042d657  3bc7                 cmp eax, edi
// 0042d659  7418                 je 0x42d673
// 0042d65b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0042d65e  51                   push ecx
// 0042d65f  50                   push eax
// 0042d660  8bce                 mov ecx, esi
// 0042d662  e829ffffff           call 0x42d590
// 0042d667  8b560c               mov edx, dword ptr [esi + 0xc]
// 0042d66a  52                   push edx
// 0042d66b  e80a302700           call 0x6a067a
// 0042d670  83c404               add esp, 4
// 0042d673  8b06                 mov eax, dword ptr [esi]
// 0042d675  50                   push eax
// 0042d676  897e0c               mov dword ptr [esi + 0xc], edi
// 0042d679  897e10               mov dword ptr [esi + 0x10], edi
// 0042d67c  897e14               mov dword ptr [esi + 0x14], edi
// 0042d67f  e8f62f2700           call 0x6a067a
// 0042d684  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042d688  83c404               add esp, 4
// 0042d68b  5f                   pop edi
// 0042d68c  5e                   pop esi
// 0042d68d  64890d00000000       mov dword ptr fs:[0], ecx
// 0042d694  83c410               add esp, 0x10
// 0042d697  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
