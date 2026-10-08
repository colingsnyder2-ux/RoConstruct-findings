// roc 2007-03 0055e9a0  unit: seg_00550000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055e9a0
//
// 0055e9a0  53                   push ebx
// 0055e9a1  8bd9                 mov ebx, ecx
// 0055e9a3  8b4304               mov eax, dword ptr [ebx + 4]
// 0055e9a6  85c0                 test eax, eax
// 0055e9a8  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0055e9ab  7504                 jne 0x55e9b1
// 0055e9ad  32c0                 xor al, al
// 0055e9af  5b                   pop ebx
// 0055e9b0  c3                   ret 
// 0055e9b1  56                   push esi
// 0055e9b2  57                   push edi
// 0055e9b3  8b7401f8             mov esi, dword ptr [ecx + eax - 8]
// 0055e9b7  8b7c01fc             mov edi, dword ptr [ecx + eax - 4]
// 0055e9bb  50                   push eax
// 0055e9bc  e8f3f90b00           call 0x61e3b4
// 0055e9c1  83c404               add esp, 4
// 0055e9c4  85f6                 test esi, esi
// 0055e9c6  8bc6                 mov eax, esi
// 0055e9c8  8bcf                 mov ecx, edi
// 0055e9ca  75e7                 jne 0x55e9b3
// 0055e9cc  5f                   pop edi
// 0055e9cd  897304               mov dword ptr [ebx + 4], esi
// 0055e9d0  8933                 mov dword ptr [ebx], esi
// 0055e9d2  5e                   pop esi
// 0055e9d3  b001                 mov al, 1
// 0055e9d5  5b                   pop ebx
// 0055e9d6  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?purge_memory@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
