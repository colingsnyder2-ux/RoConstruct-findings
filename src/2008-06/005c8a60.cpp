// roc 2008-06 005c8a60  unit: RBX::LaserTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8a60
//
// 005c8a60  53                   push ebx
// 005c8a61  8bd9                 mov ebx, ecx
// 005c8a63  8b4304               mov eax, dword ptr [ebx + 4]
// 005c8a66  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005c8a69  85c0                 test eax, eax
// 005c8a6b  7504                 jne 0x5c8a71
// 005c8a6d  32c0                 xor al, al
// 005c8a6f  5b                   pop ebx
// 005c8a70  c3                   ret 
// 005c8a71  56                   push esi
// 005c8a72  57                   push edi
// 005c8a73  8b7401f8             mov esi, dword ptr [ecx + eax - 8]
// 005c8a77  8b7c01fc             mov edi, dword ptr [ecx + eax - 4]
// 005c8a7b  50                   push eax
// 005c8a7c  e8c97e0d00           call 0x6a094a
// 005c8a81  83c404               add esp, 4
// 005c8a84  8bc6                 mov eax, esi
// 005c8a86  8bcf                 mov ecx, edi
// 005c8a88  85f6                 test esi, esi
// 005c8a8a  75e7                 jne 0x5c8a73
// 005c8a8c  5f                   pop edi
// 005c8a8d  897304               mov dword ptr [ebx + 4], esi
// 005c8a90  8933                 mov dword ptr [ebx], esi
// 005c8a92  5e                   pop esi
// 005c8a93  b001                 mov al, 1
// 005c8a95  5b                   pop ebx
// 005c8a96  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?purge_memory@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
