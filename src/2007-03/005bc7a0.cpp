// roc 2007-03 005bc7a0  unit: seg_005b0000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc7a0
//
// 005bc7a0  64a100000000         mov eax, dword ptr fs:[0]
// 005bc7a6  6aff                 push -1
// 005bc7a8  68e96e7500           push 0x756ee9
// 005bc7ad  50                   push eax
// 005bc7ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bc7b2  64892500000000       mov dword ptr fs:[0], esp
// 005bc7b9  83ec44               sub esp, 0x44
// 005bc7bc  56                   push esi
// 005bc7bd  57                   push edi
// 005bc7be  bf3ceb7900           mov edi, 0x79eb3c
// 005bc7c3  8bf0                 mov esi, eax
// 005bc7c5  b902000000           mov ecx, 2
// 005bc7ca  33d2                 xor edx, edx
// 005bc7cc  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bc7ce  752f                 jne 0x5bc7ff
// 005bc7d0  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005bc7d4  d900                 fld dword ptr [eax]
// 005bc7d6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005bc7da  83ec08               sub esp, 8
// 005bc7dd  dd1c24               fstp qword ptr [esp]
// 005bc7e0  51                   push ecx
// 005bc7e1  e85ac8ffff           call 0x5b9040
// 005bc7e6  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005bc7ea  83c40c               add esp, 0xc
// 005bc7ed  5f                   pop edi
// 005bc7ee  b801000000           mov eax, 1
// 005bc7f3  5e                   pop esi
// 005bc7f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005bc7fb  83c450               add esp, 0x50
// 005bc7fe  c3                   ret 
// 005bc7ff  bf1c957b00           mov edi, 0x7b951c
// 005bc804  8bf0                 mov esi, eax
// 005bc806  b902000000           mov ecx, 2
// 005bc80b  33d2                 xor edx, edx
// 005bc80d  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bc80f  7509                 jne 0x5bc81a
// 005bc811  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005bc815  d94004               fld dword ptr [eax + 4]
// 005bc818  ebbc                 jmp 0x5bc7d6
// 005bc81a  bf18957b00           mov edi, 0x7b9518
// 005bc81f  8bf0                 mov esi, eax
// 005bc821  b902000000           mov ecx, 2
// 005bc826  33d2                 xor edx, edx
// 005bc828  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bc82a  7509                 jne 0x5bc835
// 005bc82c  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005bc830  d94008               fld dword ptr [eax + 8]
// 005bc833  eba1                 jmp 0x5bc7d6
// 005bc835  50                   push eax
// 005bc836  8d54240c             lea edx, [esp + 0xc]
// 005bc83a  6808b67a00           push 0x7ab608
// 005bc83f  52                   push edx
// 005bc840  e8eb8af3ff           call 0x4f5330
// 005bc845  83c40c               add esp, 0xc
// 005bc848  50                   push eax
// 005bc849  8d4c2428             lea ecx, [esp + 0x28]
// 005bc84d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005bc855  e8c674e5ff           call 0x413d20
// 005bc85a  68e0138400           push 0x8413e0
// 005bc85f  8d442428             lea eax, [esp + 0x28]
// 005bc863  50                   push eax
// 005bc864  e8c5270600           call 0x61f02e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VColor3@G3D@@$00@Lua@RBX@@KAHABVColor3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
