// roc 2008-06 0041b220  unit: Marshaller  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b220
//
// 0041b220  6aff                 push -1
// 0041b222  6816e07b00           push 0x7be016
// 0041b227  64a100000000         mov eax, dword ptr fs:[0]
// 0041b22d  50                   push eax
// 0041b22e  64892500000000       mov dword ptr fs:[0], esp
// 0041b235  51                   push ecx
// 0041b236  56                   push esi
// 0041b237  8bf1                 mov esi, ecx
// 0041b239  89742404             mov dword ptr [esp + 4], esi
// 0041b23d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0041b240  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0041b248  85c9                 test ecx, ecx
// 0041b24a  7408                 je 0x41b254
// 0041b24c  8b01                 mov eax, dword ptr [ecx]
// 0041b24e  8b10                 mov edx, dword ptr [eax]
// 0041b250  6a01                 push 1
// 0041b252  ffd2                 call edx
// 0041b254  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0041b257  c644241001           mov byte ptr [esp + 0x10], 1
// 0041b25c  85c9                 test ecx, ecx
// 0041b25e  7408                 je 0x41b268
// 0041b260  8b01                 mov eax, dword ptr [ecx]
// 0041b262  8b10                 mov edx, dword ptr [eax]
// 0041b264  6a01                 push 1
// 0041b266  ffd2                 call edx
// 0041b268  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0041b26b  c644241000           mov byte ptr [esp + 0x10], 0
// 0041b270  85c9                 test ecx, ecx
// 0041b272  7408                 je 0x41b27c
// 0041b274  8b01                 mov eax, dword ptr [ecx]
// 0041b276  8b10                 mov edx, dword ptr [eax]
// 0041b278  6a01                 push 1
// 0041b27a  ffd2                 call edx
// 0041b27c  8d4e18               lea ecx, [esi + 0x18]
// 0041b27f  c744241003000000     mov dword ptr [esp + 0x10], 3
// 0041b287  e854e7ffff           call 0x4199e0
// 0041b28c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b290  c70630b78000         mov dword ptr [esi], 0x80b730
// 0041b296  5e                   pop esi
// 0041b297  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b29e  83c410               add esp, 0x10
// 0041b2a1  c3                   ret 
// library rbxgs/roc_unit_10b1ac3f10161d3a.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@0_N@Z$02@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_10b1ac3f10161d3a.cpp
