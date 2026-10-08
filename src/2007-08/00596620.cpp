// roc 2007-08 00596620  unit: RBX::LaserTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596620
//
// 00596620  53                   push ebx
// 00596621  8bd9                 mov ebx, ecx
// 00596623  8b4304               mov eax, dword ptr [ebx + 4]
// 00596626  85c0                 test eax, eax
// 00596628  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0059662b  7504                 jne 0x596631
// 0059662d  32c0                 xor al, al
// 0059662f  5b                   pop ebx
// 00596630  c3                   ret 
// 00596631  56                   push esi
// 00596632  57                   push edi
// 00596633  8b7401f8             mov esi, dword ptr [ecx + eax - 8]
// 00596637  8b7c01fc             mov edi, dword ptr [ecx + eax - 4]
// 0059663b  50                   push eax
// 0059663c  e8e5980900           call 0x62ff26
// 00596641  83c404               add esp, 4
// 00596644  85f6                 test esi, esi
// 00596646  8bc6                 mov eax, esi
// 00596648  8bcf                 mov ecx, edi
// 0059664a  75e7                 jne 0x596633
// 0059664c  5f                   pop edi
// 0059664d  897304               mov dword ptr [ebx + 4], esi
// 00596650  8933                 mov dword ptr [ebx], esi
// 00596652  5e                   pop esi
// 00596653  b001                 mov al, 1
// 00596655  5b                   pop ebx
// 00596656  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?purge_memory@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
