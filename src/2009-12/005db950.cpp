// roc 2009-12 005db950  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005db950
//
// 005db950  83ec18               sub esp, 0x18
// 005db953  8d0424               lea eax, [esp]
// 005db956  50                   push eax
// 005db957  ff15dcb29800         call dword ptr [0x98b2dc]
// 005db95d  85c0                 test eax, eax
// 005db95f  7459                 je 0x5db9ba
// 005db961  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005db965  8b1424               mov edx, dword ptr [esp]
// 005db968  53                   push ebx
// 005db969  56                   push esi
// 005db96a  57                   push edi
// 005db96b  6a00                 push 0
// 005db96d  68e8030000           push 0x3e8
// 005db972  51                   push ecx
// 005db973  52                   push edx
// 005db974  e827922100           call 0x7f4ba0
// 005db979  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005db97d  6a00                 push 0
// 005db97f  51                   push ecx
// 005db980  52                   push edx
// 005db981  50                   push eax
// 005db982  e8e9902100           call 0x7f4a70
// 005db987  8b3dccb29800         mov edi, dword ptr [0x98b2cc]
// 005db98d  8bda                 mov ebx, edx
// 005db98f  8d54241c             lea edx, [esp + 0x1c]
// 005db993  52                   push edx
// 005db994  8bf0                 mov esi, eax
// 005db996  ffd7                 call edi
// 005db998  8d442414             lea eax, [esp + 0x14]
// 005db99c  50                   push eax
// 005db99d  ffd7                 call edi
// 005db99f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005db9a3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 005db9a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005db9ab  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 005db9af  3bc6                 cmp eax, esi
// 005db9b1  7504                 jne 0x5db9b7
// 005db9b3  3bcb                 cmp ecx, ebx
// 005db9b5  74e1                 je 0x5db998
// 005db9b7  5f                   pop edi
// 005db9b8  5e                   pop esi
// 005db9b9  5b                   pop ebx
// 005db9ba  83c418               add esp, 0x18
// 005db9bd  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
