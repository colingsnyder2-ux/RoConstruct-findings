// roc 2007-03 004398a0  unit: seg_00430000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004398a0
//
// 004398a0  56                   push esi
// 004398a1  33c0                 xor eax, eax
// 004398a3  57                   push edi
// 004398a4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004398a8  3bf8                 cmp edi, eax
// 004398aa  8bf1                 mov esi, ecx
// 004398ac  894604               mov dword ptr [esi + 4], eax
// 004398af  894608               mov dword ptr [esi + 8], eax
// 004398b2  89460c               mov dword ptr [esi + 0xc], eax
// 004398b5  7507                 jne 0x4398be
// 004398b7  5f                   pop edi
// 004398b8  32c0                 xor al, al
// 004398ba  5e                   pop esi
// 004398bb  c20400               ret 4
// 004398be  81ffffffff3f         cmp edi, 0x3fffffff
// 004398c4  7605                 jbe 0x4398cb
// 004398c6  e845100100           call 0x44a910
// 004398cb  50                   push eax
// 004398cc  57                   push edi
// 004398cd  e88ef4fdff           call 0x418d60
// 004398d2  894604               mov dword ptr [esi + 4], eax
// 004398d5  894608               mov dword ptr [esi + 8], eax
// 004398d8  83c408               add esp, 8
// 004398db  8d04b8               lea eax, [eax + edi*4]
// 004398de  89460c               mov dword ptr [esi + 0xc], eax
// 004398e1  5f                   pop edi
// 004398e2  b001                 mov al, 1
// 004398e4  5e                   pop esi
// 004398e5  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?_Buy@?$vector@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@IAE_NI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
