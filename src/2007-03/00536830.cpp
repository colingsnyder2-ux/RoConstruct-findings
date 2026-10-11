// roc 2007-03 00536830  unit: seg_00530000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536830
//
// 00536830  6aff                 push -1
// 00536832  6809807500           push 0x758009
// 00536837  64a100000000         mov eax, dword ptr fs:[0]
// 0053683d  50                   push eax
// 0053683e  64892500000000       mov dword ptr fs:[0], esp
// 00536845  83ec1c               sub esp, 0x1c
// 00536848  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053684c  50                   push eax
// 0053684d  8d4c2404             lea ecx, [esp + 4]
// 00536851  51                   push ecx
// 00536852  e869100500           call 0x5878c0
// 00536857  83c408               add esp, 8
// 0053685a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0053685f  8b442404             mov eax, dword ptr [esp + 4]
// 00536863  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053686b  7304                 jae 0x536871
// 0053686d  8d442404             lea eax, [esp + 4]
// 00536871  8b542430             mov edx, dword ptr [esp + 0x30]
// 00536875  50                   push eax
// 00536876  52                   push edx
// 00536877  e844280800           call 0x5b90c0
// 0053687c  83c408               add esp, 8
// 0053687f  8d0c24               lea ecx, [esp]
// 00536882  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0053688a  ff158ce77700         call dword ptr [0x77e78c]
// 00536890  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00536894  b801000000           mov eax, 1
// 00536899  64890d00000000       mov dword ptr fs:[0], ecx
// 005368a0  83c428               add esp, 0x28
// 005368a3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
