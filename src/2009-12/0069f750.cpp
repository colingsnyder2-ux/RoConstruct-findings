// roc 2009-12 0069f750  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f750
//
// 0069f750  6aff                 push -1
// 0069f752  68a9e59200           push 0x92e5a9
// 0069f757  64a100000000         mov eax, dword ptr fs:[0]
// 0069f75d  50                   push eax
// 0069f75e  64892500000000       mov dword ptr fs:[0], esp
// 0069f765  83ec1c               sub esp, 0x1c
// 0069f768  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f76c  50                   push eax
// 0069f76d  8d4c2404             lea ecx, [esp + 4]
// 0069f771  51                   push ecx
// 0069f772  e899260100           call 0x6b1e10
// 0069f777  83c408               add esp, 8
// 0069f77a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f77f  8b442404             mov eax, dword ptr [esp + 4]
// 0069f783  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f78b  7304                 jae 0x69f791
// 0069f78d  8d442404             lea eax, [esp + 4]
// 0069f791  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f795  50                   push eax
// 0069f796  52                   push edx
// 0069f797  e844960e00           call 0x788de0
// 0069f79c  83c408               add esp, 8
// 0069f79f  8d0c24               lea ecx, [esp]
// 0069f7a2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f7aa  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f7b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f7b4  b801000000           mov eax, 1
// 0069f7b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f7c0  83c428               add esp, 0x28
// 0069f7c3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
