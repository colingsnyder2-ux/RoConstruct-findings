// roc 2007-03 005772f0  unit: seg_00570000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005772f0
//
// 005772f0  8bc1                 mov eax, ecx
// 005772f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005772f6  8b91f4000000         mov edx, dword ptr [ecx + 0xf4]
// 005772fc  56                   push esi
// 005772fd  8b7030               mov esi, dword ptr [eax + 0x30]
// 00577300  8b1432               mov edx, dword ptr [edx + esi]
// 00577303  03502c               add edx, dword ptr [eax + 0x2c]
// 00577306  8b4028               mov eax, dword ptr [eax + 0x28]
// 00577309  8d8c0af4000000       lea ecx, [edx + ecx + 0xf4]
// 00577310  ffd0                 call eax
// 00577312  d95c2408             fstp dword ptr [esp + 8]
// 00577316  e8955fffff           call 0x56d2b0
// 0057731b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057731f  6a08                 push 8
// 00577321  8906                 mov dword ptr [esi], eax
// 00577323  e8e06d0a00           call 0x61e108
// 00577328  83c404               add esp, 4
// 0057732b  85c0                 test eax, eax
// 0057732d  740f                 je 0x57733e
// 0057732f  d9442408             fld dword ptr [esp + 8]
// 00577333  c7002c987800         mov dword ptr [eax], 0x78982c
// 00577339  d95804               fstp dword ptr [eax + 4]
// 0057733c  eb02                 jmp 0x577340
// 0057733e  33c0                 xor eax, eax
// 00577340  8b4e04               mov ecx, dword ptr [esi + 4]
// 00577343  85c9                 test ecx, ecx
// 00577345  894604               mov dword ptr [esi + 4], eax
// 00577348  5e                   pop esi
// 00577349  7408                 je 0x577353
// 0057734b  8b11                 mov edx, dword ptr [ecx]
// 0057734d  8b02                 mov eax, dword ptr [edx]
// 0057734f  6a01                 push 1
// 00577351  ffd0                 call eax
// 00577353  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ??$call@M@?$BoundFuncDesc@VPartInstance@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@ABEXPAVPartInstance@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
