// roc 2009-12 005db8e0  unit: boost::bad_lexical_cast  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005db8e0
//
// 005db8e0  83ec18               sub esp, 0x18
// 005db8e3  8d0424               lea eax, [esp]
// 005db8e6  50                   push eax
// 005db8e7  ff15dcb29800         call dword ptr [0x98b2dc]
// 005db8ed  85c0                 test eax, eax
// 005db8ef  745b                 je 0x5db94c
// 005db8f1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005db8f5  8b1424               mov edx, dword ptr [esp]
// 005db8f8  53                   push ebx
// 005db8f9  56                   push esi
// 005db8fa  57                   push edi
// 005db8fb  6a00                 push 0
// 005db8fd  68e8030000           push 0x3e8
// 005db902  51                   push ecx
// 005db903  52                   push edx
// 005db904  e897922100           call 0x7f4ba0
// 005db909  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005db90d  6a00                 push 0
// 005db90f  51                   push ecx
// 005db910  52                   push edx
// 005db911  50                   push eax
// 005db912  e859912100           call 0x7f4a70
// 005db917  8b3dccb29800         mov edi, dword ptr [0x98b2cc]
// 005db91d  8bf2                 mov esi, edx
// 005db91f  8d54241c             lea edx, [esp + 0x1c]
// 005db923  52                   push edx
// 005db924  8bd8                 mov ebx, eax
// 005db926  ffd7                 call edi
// 005db928  8d442414             lea eax, [esp + 0x14]
// 005db92c  50                   push eax
// 005db92d  ffd7                 call edi
// 005db92f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005db933  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 005db937  8b442418             mov eax, dword ptr [esp + 0x18]
// 005db93b  1b442420             sbb eax, dword ptr [esp + 0x20]
// 005db93f  3bc6                 cmp eax, esi
// 005db941  7ce5                 jl 0x5db928
// 005db943  7f04                 jg 0x5db949
// 005db945  3bcb                 cmp ecx, ebx
// 005db947  72df                 jb 0x5db928
// 005db949  5f                   pop edi
// 005db94a  5e                   pop esi
// 005db94b  5b                   pop ebx
// 005db94c  83c418               add esp, 0x18
// 005db94f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
