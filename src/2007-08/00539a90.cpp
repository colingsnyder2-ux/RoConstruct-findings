// roc 2007-08 00539a90  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539a90
//
// 00539a90  8b442404             mov eax, dword ptr [esp + 4]
// 00539a94  8b00                 mov eax, dword ptr [eax]
// 00539a96  6a00                 push 0
// 00539a98  684c1f8800           push 0x881f4c
// 00539a9d  689c208800           push 0x88209c
// 00539aa2  6a00                 push 0
// 00539aa4  50                   push eax
// 00539aa5  e88c720f00           call 0x630d36
// 00539aaa  83c414               add esp, 0x14
// 00539aad  85c0                 test eax, eax
// 00539aaf  743c                 je 0x539aed
// 00539ab1  83b8e000000010       cmp dword ptr [eax + 0xe0], 0x10
// 00539ab8  721a                 jb 0x539ad4
// 00539aba  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00539ac0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539ac4  50                   push eax
// 00539ac5  51                   push ecx
// 00539ac6  e825410800           call 0x5bdbf0
// 00539acb  b801000000           mov eax, 1
// 00539ad0  83c408               add esp, 8
// 00539ad3  c3                   ret 
// 00539ad4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539ad8  05cc000000           add eax, 0xcc
// 00539add  50                   push eax
// 00539ade  51                   push ecx
// 00539adf  e80c410800           call 0x5bdbf0
// 00539ae4  b801000000           mov eax, 1
// 00539ae9  83c408               add esp, 8
// 00539aec  c3                   ret 
// 00539aed  e80ee9edff           call 0x418400
// 00539af2  8b4004               mov eax, dword ptr [eax + 4]
// 00539af5  83c004               add eax, 4
// 00539af8  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00539afc  7217                 jb 0x539b15
// 00539afe  8b4004               mov eax, dword ptr [eax + 4]
// 00539b01  8b542408             mov edx, dword ptr [esp + 8]
// 00539b05  50                   push eax
// 00539b06  52                   push edx
// 00539b07  e8e4400800           call 0x5bdbf0
// 00539b0c  b801000000           mov eax, 1
// 00539b11  83c408               add esp, 8
// 00539b14  c3                   ret 
// 00539b15  8b542408             mov edx, dword ptr [esp + 8]
// 00539b19  83c004               add eax, 4
// 00539b1c  50                   push eax
// 00539b1d  52                   push edx
// 00539b1e  e8cd400800           call 0x5bdbf0
// 00539b23  b801000000           mov eax, 1
// 00539b28  83c408               add esp, 8
// 00539b2b  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
