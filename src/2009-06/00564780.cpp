// roc 2009-06 00564780  unit: boost::bad_lexical_cast  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00564780
//
// 00564780  83ec18               sub esp, 0x18
// 00564783  8d0424               lea eax, [esp]
// 00564786  50                   push eax
// 00564787  ff15b0e28900         call dword ptr [0x89e2b0]
// 0056478d  85c0                 test eax, eax
// 0056478f  745b                 je 0x5647ec
// 00564791  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564795  8b1424               mov edx, dword ptr [esp]
// 00564798  53                   push ebx
// 00564799  56                   push esi
// 0056479a  57                   push edi
// 0056479b  6a00                 push 0
// 0056479d  68e8030000           push 0x3e8
// 005647a2  51                   push ecx
// 005647a3  52                   push edx
// 005647a4  e8c7551b00           call 0x719d70
// 005647a9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005647ad  6a00                 push 0
// 005647af  51                   push ecx
// 005647b0  52                   push edx
// 005647b1  50                   push eax
// 005647b2  e889541b00           call 0x719c40
// 005647b7  8b3da8e28900         mov edi, dword ptr [0x89e2a8]
// 005647bd  8bf2                 mov esi, edx
// 005647bf  8d54241c             lea edx, [esp + 0x1c]
// 005647c3  52                   push edx
// 005647c4  8bd8                 mov ebx, eax
// 005647c6  ffd7                 call edi
// 005647c8  8d442414             lea eax, [esp + 0x14]
// 005647cc  50                   push eax
// 005647cd  ffd7                 call edi
// 005647cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005647d3  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 005647d7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005647db  1b442420             sbb eax, dword ptr [esp + 0x20]
// 005647df  3bc6                 cmp eax, esi
// 005647e1  7ce5                 jl 0x5647c8
// 005647e3  7f04                 jg 0x5647e9
// 005647e5  3bcb                 cmp ecx, ebx
// 005647e7  72df                 jb 0x5647c8
// 005647e9  5f                   pop edi
// 005647ea  5e                   pop esi
// 005647eb  5b                   pop ebx
// 005647ec  83c418               add esp, 0x18
// 005647ef  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
