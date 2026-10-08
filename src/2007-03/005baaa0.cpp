// roc 2007-03 005baaa0  unit: seg_005b0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005baaa0
//
// 005baaa0  53                   push ebx
// 005baaa1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005baaa5  56                   push esi
// 005baaa6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005baaaa  57                   push edi
// 005baaab  53                   push ebx
// 005baaac  56                   push esi
// 005baaad  e8aee4ffff           call 0x5b8f60
// 005baab2  8bf8                 mov edi, eax
// 005baab4  83c408               add esp, 8
// 005baab7  85ff                 test edi, edi
// 005baab9  7460                 je 0x5bab1b
// 005baabb  53                   push ebx
// 005baabc  56                   push esi
// 005baabd  e82ee9ffff           call 0x5b93f0
// 005baac2  83c408               add esp, 8
// 005baac5  85c0                 test eax, eax
// 005baac7  7447                 je 0x5bab10
// 005baac9  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 005baace  50                   push eax
// 005baacf  68f0d8ffff           push 0xffffd8f0
// 005baad4  56                   push esi
// 005baad5  e8f6e7ffff           call 0x5b92d0
// 005baada  6afe                 push -2
// 005baadc  6aff                 push -1
// 005baade  56                   push esi
// 005baadf  e83ce2ffff           call 0x5b8d20
// 005baae4  83c418               add esp, 0x18
// 005baae7  85c0                 test eax, eax
// 005baae9  7430                 je 0x5bab1b
// 005baaeb  6afd                 push -3
// 005baaed  56                   push esi
// 005baaee  e86ddfffff           call 0x5b8a60
// 005baaf3  8b0f                 mov ecx, dword ptr [edi]
// 005baaf5  8b442420             mov eax, dword ptr [esp + 0x20]
// 005baaf9  83c408               add esp, 8
// 005baafc  83c704               add edi, 4
// 005baaff  8908                 mov dword ptr [eax], ecx
// 005bab01  57                   push edi
// 005bab02  8d4804               lea ecx, [eax + 4]
// 005bab05  e86634e5ff           call 0x40df70
// 005bab0a  5f                   pop edi
// 005bab0b  5e                   pop esi
// 005bab0c  b001                 mov al, 1
// 005bab0e  5b                   pop ebx
// 005bab0f  c3                   ret 
// 005bab10  6afe                 push -2
// 005bab12  56                   push esi
// 005bab13  e848dfffff           call 0x5b8a60
// 005bab18  83c408               add esp, 8
// 005bab1b  5f                   pop edi
// 005bab1c  5e                   pop esi
// 005bab1d  32c0                 xor al, al
// 005bab1f  5b                   pop ebx
// 005bab20  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
