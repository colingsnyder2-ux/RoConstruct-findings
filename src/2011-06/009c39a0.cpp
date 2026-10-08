// roc 2011-06 009c39a0  unit: RBX::WedgeBuilder  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c39a0
//
// 009c39a0  83ec18               sub esp, 0x18
// 009c39a3  8d0424               lea eax, [esp]
// 009c39a6  50                   push eax
// 009c39a7  ff157c02a400         call dword ptr [0xa4027c]
// 009c39ad  85c0                 test eax, eax
// 009c39af  745b                 je 0x9c3a0c
// 009c39b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c39b5  8b1424               mov edx, dword ptr [esp]
// 009c39b8  53                   push ebx
// 009c39b9  56                   push esi
// 009c39ba  57                   push edi
// 009c39bb  6a00                 push 0
// 009c39bd  68e8030000           push 0x3e8
// 009c39c2  51                   push ecx
// 009c39c3  52                   push edx
// 009c39c4  e8177ae4ff           call 0x80b3e0
// 009c39c9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009c39cd  6a00                 push 0
// 009c39cf  51                   push ecx
// 009c39d0  52                   push edx
// 009c39d1  50                   push eax
// 009c39d2  e8d978e4ff           call 0x80b2b0
// 009c39d7  8b3d7802a400         mov edi, dword ptr [0xa40278]
// 009c39dd  8bf2                 mov esi, edx
// 009c39df  8d54241c             lea edx, [esp + 0x1c]
// 009c39e3  52                   push edx
// 009c39e4  8bd8                 mov ebx, eax
// 009c39e6  ffd7                 call edi
// 009c39e8  8d442414             lea eax, [esp + 0x14]
// 009c39ec  50                   push eax
// 009c39ed  ffd7                 call edi
// 009c39ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c39f3  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 009c39f7  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c39fb  1b442420             sbb eax, dword ptr [esp + 0x20]
// 009c39ff  3bc6                 cmp eax, esi
// 009c3a01  7ce5                 jl 0x9c39e8
// 009c3a03  7f04                 jg 0x9c3a09
// 009c3a05  3bcb                 cmp ecx, ebx
// 009c3a07  72df                 jb 0x9c39e8
// 009c3a09  5f                   pop edi
// 009c3a0a  5e                   pop esi
// 009c3a0b  5b                   pop ebx
// 009c3a0c  83c418               add esp, 0x18
// 009c3a0f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
