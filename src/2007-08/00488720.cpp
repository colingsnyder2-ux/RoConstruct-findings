// roc 2007-08 00488720  unit: P8CRenderSettings::?$GetSetImpl  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00488720
//
// 00488720  85c9                 test ecx, ecx
// 00488722  7405                 je 0x488729
// 00488724  8d4104               lea eax, [ecx + 4]
// 00488727  eb02                 jmp 0x48872b
// 00488729  33c0                 xor eax, eax
// 0048872b  8b0d28de8b00         mov ecx, dword ptr [0x8bde28]
// 00488731  8b11                 mov edx, dword ptr [ecx]
// 00488733  56                   push esi
// 00488734  8d742408             lea esi, [esp + 8]
// 00488738  56                   push esi
// 00488739  50                   push eax
// 0048873a  8b4208               mov eax, dword ptr [edx + 8]
// 0048873d  ffd0                 call eax
// 0048873f  5e                   pop esi
// 00488740  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?setUnder13@Player@Network@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
