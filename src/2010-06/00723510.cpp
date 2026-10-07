// roc 2010-06 00723510  unit: RBX::UniversalTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723510
//
// 00723510  51                   push ecx
// 00723511  56                   push esi
// 00723512  8b742414             mov esi, dword ptr [esp + 0x14]
// 00723516  57                   push edi
// 00723517  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072351b  56                   push esi
// 0072351c  57                   push edi
// 0072351d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00723525  e816dcffff           call 0x721140
// 0072352a  83c408               add esp, 8
// 0072352d  85c0                 test eax, eax
// 0072352f  7515                 jne 0x723546
// 00723531  8b442410             mov eax, dword ptr [esp + 0x10]
// 00723535  5f                   pop edi
// 00723536  c70000000000         mov dword ptr [eax], 0
// 0072353c  c7400400000000       mov dword ptr [eax + 4], 0
// 00723543  5e                   pop esi
// 00723544  59                   pop ecx
// 00723545  c3                   ret 
// 00723546  a14c23be00           mov eax, dword ptr [0xbe234c]
// 0072354b  50                   push eax
// 0072354c  56                   push esi
// 0072354d  57                   push edi
// 0072354e  e8bdf8ffff           call 0x722e10
// 00723553  8b08                 mov ecx, dword ptr [eax]
// 00723555  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00723559  890a                 mov dword ptr [edx], ecx
// 0072355b  8b4804               mov ecx, dword ptr [eax + 4]
// 0072355e  83c40c               add esp, 0xc
// 00723561  894a04               mov dword ptr [edx + 4], ecx
// 00723564  85c9                 test ecx, ecx
// 00723566  740c                 je 0x723574
// 00723568  83c104               add ecx, 4
// 0072356b  b801000000           mov eax, 1
// 00723570  f00fc101             lock xadd dword ptr [ecx], eax
// 00723574  5f                   pop edi
// 00723575  8bc2                 mov eax, edx
// 00723577  5e                   pop esi
// 00723578  59                   pop ecx
// 00723579  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
