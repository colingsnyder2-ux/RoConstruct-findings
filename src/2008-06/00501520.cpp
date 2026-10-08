// roc 2008-06 00501520  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501520
//
// 00501520  83ec18               sub esp, 0x18
// 00501523  8d0424               lea eax, [esp]
// 00501526  50                   push eax
// 00501527  ff155c228000         call dword ptr [0x80225c]
// 0050152d  85c0                 test eax, eax
// 0050152f  7459                 je 0x50158a
// 00501531  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00501535  8b1424               mov edx, dword ptr [esp]
// 00501538  53                   push ebx
// 00501539  56                   push esi
// 0050153a  57                   push edi
// 0050153b  6a00                 push 0
// 0050153d  68e8030000           push 0x3e8
// 00501542  51                   push ecx
// 00501543  52                   push edx
// 00501544  e8e7061a00           call 0x6a1c30
// 00501549  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050154d  6a00                 push 0
// 0050154f  51                   push ecx
// 00501550  52                   push edx
// 00501551  50                   push eax
// 00501552  e879011a00           call 0x6a16d0
// 00501557  8b3d50228000         mov edi, dword ptr [0x802250]
// 0050155d  8bda                 mov ebx, edx
// 0050155f  8d54241c             lea edx, [esp + 0x1c]
// 00501563  52                   push edx
// 00501564  8bf0                 mov esi, eax
// 00501566  ffd7                 call edi
// 00501568  8d442414             lea eax, [esp + 0x14]
// 0050156c  50                   push eax
// 0050156d  ffd7                 call edi
// 0050156f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00501573  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00501577  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050157b  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 0050157f  3bc6                 cmp eax, esi
// 00501581  7504                 jne 0x501587
// 00501583  3bcb                 cmp ecx, ebx
// 00501585  74e1                 je 0x501568
// 00501587  5f                   pop edi
// 00501588  5e                   pop esi
// 00501589  5b                   pop ebx
// 0050158a  83c418               add esp, 0x18
// 0050158d  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
