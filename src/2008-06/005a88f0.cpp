// roc 2008-06 005a88f0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a88f0
//
// 005a88f0  6aff                 push -1
// 005a88f2  6809e77c00           push 0x7ce709
// 005a88f7  64a100000000         mov eax, dword ptr fs:[0]
// 005a88fd  50                   push eax
// 005a88fe  64892500000000       mov dword ptr fs:[0], esp
// 005a8905  83ec1c               sub esp, 0x1c
// 005a8908  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a890c  50                   push eax
// 005a890d  8d4c2404             lea ecx, [esp + 4]
// 005a8911  51                   push ecx
// 005a8912  e8f9600100           call 0x5bea10
// 005a8917  83c408               add esp, 8
// 005a891a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005a891f  8b442404             mov eax, dword ptr [esp + 4]
// 005a8923  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a892b  7304                 jae 0x5a8931
// 005a892d  8d442404             lea eax, [esp + 4]
// 005a8931  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a8935  50                   push eax
// 005a8936  52                   push edx
// 005a8937  e844990600           call 0x612280
// 005a893c  83c408               add esp, 8
// 005a893f  8d0c24               lea ecx, [esp]
// 005a8942  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a894a  ff1568248000         call dword ptr [0x802468]
// 005a8950  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a8954  b801000000           mov eax, 1
// 005a8959  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8960  83c428               add esp, 0x28
// 005a8963  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
