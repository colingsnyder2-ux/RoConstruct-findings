// roc 2009-06 005c3270  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3270
//
// 005c3270  55                   push ebp
// 005c3271  8bec                 mov ebp, esp
// 005c3273  51                   push ecx
// 005c3274  894dfc               mov dword ptr [ebp - 4], ecx
// 005c3277  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c327a  e891140000           call 0x5c4710
// 005c327f  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c3282  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005c3285  51                   push ecx
// 005c3286  e8c5e7ffff           call 0x5c1a50
// 005c328b  83c404               add esp, 4
// 005c328e  50                   push eax
// 005c328f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3292  83c10c               add ecx, 0xc
// 005c3295  e8e612ffff           call 0x5b4580
// 005c329a  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c329d  8b4214               mov eax, dword ptr [edx + 0x14]
// 005c32a0  50                   push eax
// 005c32a1  e8bae7ffff           call 0x5c1a60
// 005c32a6  83c404               add esp, 4
// 005c32a9  50                   push eax
// 005c32aa  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c32ad  83c10c               add ecx, 0xc
// 005c32b0  e8cb12ffff           call 0x5b4580
// 005c32b5  6a01                 push 1
// 005c32b7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c32ba  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005c32bd  52                   push edx
// 005c32be  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c32c1  83c108               add ecx, 8
// 005c32c4  e8d7abffff           call 0x5bdea0
// 005c32c9  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c32cc  c7401400000000       mov dword ptr [eax + 0x14], 0
// 005c32d3  8be5                 mov esp, ebp
// 005c32d5  5d                   pop ebp
// 005c32d6  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$list@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@V?$allocator@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp