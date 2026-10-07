// roc 2008-06 0061a4f0  unit: RBX::InletTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a4f0
//
// 0061a4f0  51                   push ecx
// 0061a4f1  56                   push esi
// 0061a4f2  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061a4f6  57                   push edi
// 0061a4f7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061a4fb  56                   push esi
// 0061a4fc  57                   push edi
// 0061a4fd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061a505  e8f678ffff           call 0x611e00
// 0061a50a  83c408               add esp, 8
// 0061a50d  85c0                 test eax, eax
// 0061a50f  7515                 jne 0x61a526
// 0061a511  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061a515  5f                   pop edi
// 0061a516  c70000000000         mov dword ptr [eax], 0
// 0061a51c  c7400400000000       mov dword ptr [eax + 4], 0
// 0061a523  5e                   pop esi
// 0061a524  59                   pop ecx
// 0061a525  c3                   ret 
// 0061a526  a174af9500           mov eax, dword ptr [0x95af74]
// 0061a52b  50                   push eax
// 0061a52c  56                   push esi
// 0061a52d  57                   push edi
// 0061a52e  e87d70ffff           call 0x6115b0
// 0061a533  8b08                 mov ecx, dword ptr [eax]
// 0061a535  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061a539  890a                 mov dword ptr [edx], ecx
// 0061a53b  8b4804               mov ecx, dword ptr [eax + 4]
// 0061a53e  83c40c               add esp, 0xc
// 0061a541  894a04               mov dword ptr [edx + 4], ecx
// 0061a544  85c9                 test ecx, ecx
// 0061a546  740c                 je 0x61a554
// 0061a548  83c104               add ecx, 4
// 0061a54b  b801000000           mov eax, 1
// 0061a550  f00fc101             lock xadd dword ptr [ecx], eax
// 0061a554  5f                   pop edi
// 0061a555  8bc2                 mov eax, edx
// 0061a557  5e                   pop esi
// 0061a558  59                   pop ecx
// 0061a559  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
