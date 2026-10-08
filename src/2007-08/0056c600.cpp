// roc 2007-08 0056c600  unit: RBX::StandardOut  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c600
//
// 0056c600  6aff                 push -1
// 0056c602  6838a77500           push 0x75a738
// 0056c607  64a100000000         mov eax, dword ptr fs:[0]
// 0056c60d  50                   push eax
// 0056c60e  64892500000000       mov dword ptr fs:[0], esp
// 0056c615  51                   push ecx
// 0056c616  56                   push esi
// 0056c617  57                   push edi
// 0056c618  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056c61c  8bf1                 mov esi, ecx
// 0056c61e  6aff                 push -1
// 0056c620  57                   push edi
// 0056c621  89742410             mov dword ptr [esp + 0x10], esi
// 0056c625  c706b4707800         mov dword ptr [esi], 0x7870b4
// 0056c62b  e81003fcff           call 0x52c940
// 0056c630  894604               mov dword ptr [esi + 4], eax
// 0056c633  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056c637  57                   push edi
// 0056c638  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056c640  c7069cac7900         mov dword ptr [esi], 0x79ac9c
// 0056c646  894608               mov dword ptr [esi + 8], eax
// 0056c649  e85206fcff           call 0x52cca0
// 0056c64e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056c652  83c40c               add esp, 0xc
// 0056c655  89460c               mov dword ptr [esi + 0xc], eax
// 0056c658  5f                   pop edi
// 0056c659  8bc6                 mov eax, esi
// 0056c65b  5e                   pop esi
// 0056c65c  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c663  83c410               add esp, 0x10
// 0056c666  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0Type@Reflection@RBX@@IAE@PBDABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
