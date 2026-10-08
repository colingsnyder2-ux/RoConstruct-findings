// roc 2007-03 004fdb00  unit: seg_004f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdb00
//
// 004fdb00  8b4140               mov eax, dword ptr [ecx + 0x40]
// 004fdb03  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 004fdb06  56                   push esi
// 004fdb07  8b742408             mov esi, dword ptr [esp + 8]
// 004fdb0b  0fafc6               imul eax, esi
// 004fdb0e  83ea01               sub edx, 1
// 004fdb11  85c0                 test eax, eax
// 004fdb13  89714c               mov dword ptr [ecx + 0x4c], esi
// 004fdb16  5e                   pop esi
// 004fdb17  7f08                 jg 0x4fdb21
// 004fdb19  33c0                 xor eax, eax
// 004fdb1b  894150               mov dword ptr [ecx + 0x50], eax
// 004fdb1e  c20400               ret 4
// 004fdb21  3bc2                 cmp eax, edx
// 004fdb23  7cf6                 jl 0x4fdb1b
// 004fdb25  895150               mov dword ptr [ecx + 0x50], edx
// 004fdb28  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?setIndentLevel@TextOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
