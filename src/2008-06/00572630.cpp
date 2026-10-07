// roc 2008-06 00572630  unit: RBX::Reflection::ClassDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572630
//
// 00572630  6aff                 push -1
// 00572632  6808037d00           push 0x7d0308
// 00572637  64a100000000         mov eax, dword ptr fs:[0]
// 0057263d  50                   push eax
// 0057263e  64892500000000       mov dword ptr fs:[0], esp
// 00572645  51                   push ecx
// 00572646  56                   push esi
// 00572647  8bf1                 mov esi, ecx
// 00572649  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057264d  8d442418             lea eax, [esp + 0x18]
// 00572651  50                   push eax
// 00572652  51                   push ecx
// 00572653  8bce                 mov ecx, esi
// 00572655  8974240c             mov dword ptr [esp + 0xc], esi
// 00572659  e8f2efffff           call 0x571650
// 0057265e  33c0                 xor eax, eax
// 00572660  8bce                 mov ecx, esi
// 00572662  89442410             mov dword ptr [esp + 0x10], eax
// 00572666  894648               mov dword ptr [esi + 0x48], eax
// 00572669  89464c               mov dword ptr [esi + 0x4c], eax
// 0057266c  e89ffeffff           call 0x572510
// 00572671  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572675  8bc6                 mov eax, esi
// 00572677  5e                   pop esi
// 00572678  64890d00000000       mov dword ptr fs:[0], ecx
// 0057267f  83c410               add esp, 0x10
// 00572682  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0named_slot_map@detail@signals@boost@@QAE@ABV?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
