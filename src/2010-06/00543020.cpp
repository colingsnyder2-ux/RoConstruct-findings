// roc 2010-06 00543020  unit: RBX::AggregatingSceneManager  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00543020
//
// 00543020  6aff                 push -1
// 00543022  68befc9800           push 0x98fcbe
// 00543027  64a100000000         mov eax, dword ptr fs:[0]
// 0054302d  50                   push eax
// 0054302e  64892500000000       mov dword ptr fs:[0], esp
// 00543035  51                   push ecx
// 00543036  56                   push esi
// 00543037  8bf1                 mov esi, ecx
// 00543039  89742404             mov dword ptr [esp + 4], esi
// 0054303d  c706b0f2a100         mov dword ptr [esi], 0xa1f2b0
// 00543043  8d4e48               lea ecx, [esi + 0x48]
// 00543046  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0054304e  e81df3ffff           call 0x542370
// 00543053  8d4e28               lea ecx, [esi + 0x28]
// 00543056  c644241001           mov byte ptr [esp + 0x10], 1
// 0054305b  e810f3ffff           call 0x542370
// 00543060  8d4e08               lea ecx, [esi + 8]
// 00543063  c644241000           mov byte ptr [esp + 0x10], 0
// 00543068  e8a3fbffff           call 0x542c10
// 0054306d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543071  c70674f2a100         mov dword ptr [esi], 0xa1f274
// 00543077  5e                   pop esi
// 00543078  64890d00000000       mov dword ptr fs:[0], ecx
// 0054307f  83c410               add esp, 0x10
// 00543082  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??1AggregatingSceneManager@Render@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
