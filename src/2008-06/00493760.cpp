// roc 2008-06 00493760  unit: RBX::VShirt::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493760
//
// 00493760  e84b84f9ff           call 0x42bbb0
// 00493765  8bc8                 mov ecx, eax
// 00493767  e8043e1100           call 0x5a7570
// 0049376c  85c0                 test eax, eax
// 0049376e  754a                 jne 0x4937ba
// 00493770  56                   push esi
// 00493771  6a04                 push 4
// 00493773  e8a8d12000           call 0x6a0920
// 00493778  83c404               add esp, 4
// 0049377b  85c0                 test eax, eax
// 0049377d  740a                 je 0x493789
// 0049377f  c70000000000         mov dword ptr [eax], 0
// 00493785  8bf0                 mov esi, eax
// 00493787  eb02                 jmp 0x49378b
// 00493789  33f6                 xor esi, esi
// 0049378b  53                   push ebx
// 0049378c  57                   push edi
// 0049378d  e81e84f9ff           call 0x42bbb0
// 00493792  8bf8                 mov edi, eax
// 00493794  8bcf                 mov ecx, edi
// 00493796  e8d53d1100           call 0x5a7570
// 0049379b  8bd8                 mov ebx, eax
// 0049379d  3bde                 cmp ebx, esi
// 0049379f  7414                 je 0x4937b5
// 004937a1  56                   push esi
// 004937a2  8bcf                 mov ecx, edi
// 004937a4  e8073f1100           call 0x5a76b0
// 004937a9  85db                 test ebx, ebx
// 004937ab  7408                 je 0x4937b5
// 004937ad  53                   push ebx
// 004937ae  8bcf                 mov ecx, edi
// 004937b0  e83b381100           call 0x5a6ff0
// 004937b5  5f                   pop edi
// 004937b6  5b                   pop ebx
// 004937b7  8bc6                 mov eax, esi
// 004937b9  5e                   pop esi
// 004937ba  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?current@Context@Security@RBX@@SAAAV123@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
