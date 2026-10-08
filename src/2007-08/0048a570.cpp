// roc 2007-08 0048a570  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a570
//
// 0048a570  51                   push ecx
// 0048a571  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048a575  8bc2                 mov eax, edx
// 0048a577  56                   push esi
// 0048a578  c744240400000000     mov dword ptr [esp + 4], 0
// 0048a580  8d7001               lea esi, [eax + 1]
// 0048a583  8a08                 mov cl, byte ptr [eax]
// 0048a585  83c001               add eax, 1
// 0048a588  84c9                 test cl, cl
// 0048a58a  75f7                 jne 0x48a583
// 0048a58c  2bc6                 sub eax, esi
// 0048a58e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048a592  03c2                 add eax, edx
// 0048a594  50                   push eax
// 0048a595  52                   push edx
// 0048a596  8bce                 mov ecx, esi
// 0048a598  e803f6ffff           call 0x489ba0
// 0048a59d  8bc6                 mov eax, esi
// 0048a59f  5e                   pop esi
// 0048a5a0  59                   pop ecx
// 0048a5a1  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$is_any_of@$$BY01$$CBD@algorithm@boost@@YA?AU?$is_any_ofF@D@detail@01@AAY01$$CBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
