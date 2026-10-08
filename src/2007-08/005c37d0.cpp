// roc 2007-08 005c37d0  unit: RBX::Lua::LuaArguments  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c37d0
//
// 005c37d0  6aff                 push -1
// 005c37d2  6853977500           push 0x759753
// 005c37d7  64a100000000         mov eax, dword ptr fs:[0]
// 005c37dd  50                   push eax
// 005c37de  64892500000000       mov dword ptr fs:[0], esp
// 005c37e5  51                   push ecx
// 005c37e6  56                   push esi
// 005c37e7  8bf1                 mov esi, ecx
// 005c37e9  89742404             mov dword ptr [esp + 4], esi
// 005c37ed  8d4e30               lea ecx, [esi + 0x30]
// 005c37f0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005c37f8  e81393faff           call 0x56cb10
// 005c37fd  8d4e0c               lea ecx, [esi + 0xc]
// 005c3800  c644241000           mov byte ptr [esp + 0x10], 0
// 005c3805  e87696faff           call 0x56ce80
// 005c380a  8b7604               mov esi, dword ptr [esi + 4]
// 005c380d  85f6                 test esi, esi
// 005c380f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c3817  742a                 je 0x5c3843
// 005c3819  8d4604               lea eax, [esi + 4]
// 005c381c  83c9ff               or ecx, 0xffffffff
// 005c381f  f00fc108             lock xadd dword ptr [eax], ecx
// 005c3823  751e                 jne 0x5c3843
// 005c3825  8b16                 mov edx, dword ptr [esi]
// 005c3827  8b4204               mov eax, dword ptr [edx + 4]
// 005c382a  8bce                 mov ecx, esi
// 005c382c  ffd0                 call eax
// 005c382e  8d4e08               lea ecx, [esi + 8]
// 005c3831  83caff               or edx, 0xffffffff
// 005c3834  f00fc111             lock xadd dword ptr [ecx], edx
// 005c3838  7509                 jne 0x5c3843
// 005c383a  8b06                 mov eax, dword ptr [esi]
// 005c383c  8b5008               mov edx, dword ptr [eax + 8]
// 005c383f  8bce                 mov ecx, esi
// 005c3841  ffd2                 call edx
// 005c3843  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c3847  5e                   pop esi
// 005c3848  64890d00000000       mov dword ptr fs:[0], ecx
// 005c384f  83c410               add esp, 0x10
// 005c3852  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1FunctionScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
