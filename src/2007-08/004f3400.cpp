// roc 2007-08 004f3400  unit: boost::bad_lexical_cast  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3400
//
// 004f3400  83ec18               sub esp, 0x18
// 004f3403  8d0424               lea eax, [esp]
// 004f3406  50                   push eax
// 004f3407  ff1524d27700         call dword ptr [0x77d224]
// 004f340d  85c0                 test eax, eax
// 004f340f  745b                 je 0x4f346c
// 004f3411  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3415  8b1424               mov edx, dword ptr [esp]
// 004f3418  53                   push ebx
// 004f3419  56                   push esi
// 004f341a  57                   push edi
// 004f341b  6a00                 push 0
// 004f341d  68e8030000           push 0x3e8
// 004f3422  51                   push ecx
// 004f3423  52                   push edx
// 004f3424  e887dd1300           call 0x6311b0
// 004f3429  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f342d  6a00                 push 0
// 004f342f  51                   push ecx
// 004f3430  52                   push edx
// 004f3431  50                   push eax
// 004f3432  e819d81300           call 0x630c50
// 004f3437  8b3d28d27700         mov edi, dword ptr [0x77d228]
// 004f343d  8bf2                 mov esi, edx
// 004f343f  8d54241c             lea edx, [esp + 0x1c]
// 004f3443  52                   push edx
// 004f3444  8bd8                 mov ebx, eax
// 004f3446  ffd7                 call edi
// 004f3448  8d442414             lea eax, [esp + 0x14]
// 004f344c  50                   push eax
// 004f344d  ffd7                 call edi
// 004f344f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f3453  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 004f3457  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f345b  1b442420             sbb eax, dword ptr [esp + 0x20]
// 004f345f  3bc6                 cmp eax, esi
// 004f3461  7ce5                 jl 0x4f3448
// 004f3463  7f04                 jg 0x4f3469
// 004f3465  3bcb                 cmp ecx, ebx
// 004f3467  72df                 jb 0x4f3448
// 004f3469  5f                   pop edi
// 004f346a  5e                   pop esi
// 004f346b  5b                   pop ebx
// 004f346c  83c418               add esp, 0x18
// 004f346f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
