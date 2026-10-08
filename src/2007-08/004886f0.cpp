// roc 2007-08 004886f0  unit: P8CRenderSettings::?$GetSetImpl  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004886f0
//
// 004886f0  85c9                 test ecx, ecx
// 004886f2  7405                 je 0x4886f9
// 004886f4  8d4104               lea eax, [ecx + 4]
// 004886f7  eb02                 jmp 0x4886fb
// 004886f9  33c0                 xor eax, eax
// 004886fb  8b0d70df8b00         mov ecx, dword ptr [0x8bdf70]
// 00488701  8b11                 mov edx, dword ptr [ecx]
// 00488703  56                   push esi
// 00488704  8d742408             lea esi, [esp + 8]
// 00488708  56                   push esi
// 00488709  50                   push eax
// 0048870a  8b4208               mov eax, dword ptr [edx + 8]
// 0048870d  ffd0                 call eax
// 0048870f  5e                   pop esi
// 00488710  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?setUnder13@Player@Network@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
