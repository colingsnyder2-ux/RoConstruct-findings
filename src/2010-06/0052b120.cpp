// roc 2010-06 0052b120  unit: boost::bad_lexical_cast  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052b120
//
// 0052b120  83ec18               sub esp, 0x18
// 0052b123  8d0424               lea eax, [esp]
// 0052b126  50                   push eax
// 0052b127  ff1598a29e00         call dword ptr [0x9ea298]
// 0052b12d  85c0                 test eax, eax
// 0052b12f  745b                 je 0x52b18c
// 0052b131  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052b135  8b1424               mov edx, dword ptr [esp]
// 0052b138  53                   push ebx
// 0052b139  56                   push esi
// 0052b13a  57                   push edi
// 0052b13b  6a00                 push 0
// 0052b13d  68e8030000           push 0x3e8
// 0052b142  51                   push ecx
// 0052b143  52                   push edx
// 0052b144  e897db2700           call 0x7a8ce0
// 0052b149  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052b14d  6a00                 push 0
// 0052b14f  51                   push ecx
// 0052b150  52                   push edx
// 0052b151  50                   push eax
// 0052b152  e859da2700           call 0x7a8bb0
// 0052b157  8b3da0a29e00         mov edi, dword ptr [0x9ea2a0]
// 0052b15d  8bf2                 mov esi, edx
// 0052b15f  8d54241c             lea edx, [esp + 0x1c]
// 0052b163  52                   push edx
// 0052b164  8bd8                 mov ebx, eax
// 0052b166  ffd7                 call edi
// 0052b168  8d442414             lea eax, [esp + 0x14]
// 0052b16c  50                   push eax
// 0052b16d  ffd7                 call edi
// 0052b16f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052b173  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0052b177  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052b17b  1b442420             sbb eax, dword ptr [esp + 0x20]
// 0052b17f  3bc6                 cmp eax, esi
// 0052b181  7ce5                 jl 0x52b168
// 0052b183  7f04                 jg 0x52b189
// 0052b185  3bcb                 cmp ecx, ebx
// 0052b187  72df                 jb 0x52b168
// 0052b189  5f                   pop edi
// 0052b18a  5e                   pop esi
// 0052b18b  5b                   pop ebx
// 0052b18c  83c418               add esp, 0x18
// 0052b18f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
