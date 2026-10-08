// roc 2009-06 005647f0  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005647f0
//
// 005647f0  83ec18               sub esp, 0x18
// 005647f3  8d0424               lea eax, [esp]
// 005647f6  50                   push eax
// 005647f7  ff15b0e28900         call dword ptr [0x89e2b0]
// 005647fd  85c0                 test eax, eax
// 005647ff  7459                 je 0x56485a
// 00564801  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564805  8b1424               mov edx, dword ptr [esp]
// 00564808  53                   push ebx
// 00564809  56                   push esi
// 0056480a  57                   push edi
// 0056480b  6a00                 push 0
// 0056480d  68e8030000           push 0x3e8
// 00564812  51                   push ecx
// 00564813  52                   push edx
// 00564814  e857551b00           call 0x719d70
// 00564819  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056481d  6a00                 push 0
// 0056481f  51                   push ecx
// 00564820  52                   push edx
// 00564821  50                   push eax
// 00564822  e819541b00           call 0x719c40
// 00564827  8b3da8e28900         mov edi, dword ptr [0x89e2a8]
// 0056482d  8bda                 mov ebx, edx
// 0056482f  8d54241c             lea edx, [esp + 0x1c]
// 00564833  52                   push edx
// 00564834  8bf0                 mov esi, eax
// 00564836  ffd7                 call edi
// 00564838  8d442414             lea eax, [esp + 0x14]
// 0056483c  50                   push eax
// 0056483d  ffd7                 call edi
// 0056483f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00564843  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00564847  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056484b  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 0056484f  3bc6                 cmp eax, esi
// 00564851  7504                 jne 0x564857
// 00564853  3bcb                 cmp ecx, ebx
// 00564855  74e1                 je 0x564838
// 00564857  5f                   pop edi
// 00564858  5e                   pop esi
// 00564859  5b                   pop ebx
// 0056485a  83c418               add esp, 0x18
// 0056485d  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
