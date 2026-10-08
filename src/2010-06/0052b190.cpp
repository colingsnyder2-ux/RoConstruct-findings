// roc 2010-06 0052b190  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052b190
//
// 0052b190  83ec18               sub esp, 0x18
// 0052b193  8d0424               lea eax, [esp]
// 0052b196  50                   push eax
// 0052b197  ff1598a29e00         call dword ptr [0x9ea298]
// 0052b19d  85c0                 test eax, eax
// 0052b19f  7459                 je 0x52b1fa
// 0052b1a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052b1a5  8b1424               mov edx, dword ptr [esp]
// 0052b1a8  53                   push ebx
// 0052b1a9  56                   push esi
// 0052b1aa  57                   push edi
// 0052b1ab  6a00                 push 0
// 0052b1ad  68e8030000           push 0x3e8
// 0052b1b2  51                   push ecx
// 0052b1b3  52                   push edx
// 0052b1b4  e827db2700           call 0x7a8ce0
// 0052b1b9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052b1bd  6a00                 push 0
// 0052b1bf  51                   push ecx
// 0052b1c0  52                   push edx
// 0052b1c1  50                   push eax
// 0052b1c2  e8e9d92700           call 0x7a8bb0
// 0052b1c7  8b3da0a29e00         mov edi, dword ptr [0x9ea2a0]
// 0052b1cd  8bda                 mov ebx, edx
// 0052b1cf  8d54241c             lea edx, [esp + 0x1c]
// 0052b1d3  52                   push edx
// 0052b1d4  8bf0                 mov esi, eax
// 0052b1d6  ffd7                 call edi
// 0052b1d8  8d442414             lea eax, [esp + 0x14]
// 0052b1dc  50                   push eax
// 0052b1dd  ffd7                 call edi
// 0052b1df  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052b1e3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0052b1e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052b1eb  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 0052b1ef  3bc6                 cmp eax, esi
// 0052b1f1  7504                 jne 0x52b1f7
// 0052b1f3  3bcb                 cmp ecx, ebx
// 0052b1f5  74e1                 je 0x52b1d8
// 0052b1f7  5f                   pop edi
// 0052b1f8  5e                   pop esi
// 0052b1f9  5b                   pop ebx
// 0052b1fa  83c418               add esp, 0x18
// 0052b1fd  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
