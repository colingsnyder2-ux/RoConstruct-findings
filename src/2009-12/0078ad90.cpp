// roc 2009-12 0078ad90  unit: RBX::UniversalTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078ad90
//
// 0078ad90  51                   push ecx
// 0078ad91  56                   push esi
// 0078ad92  8b742414             mov esi, dword ptr [esp + 0x14]
// 0078ad96  57                   push edi
// 0078ad97  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078ad9b  56                   push esi
// 0078ad9c  57                   push edi
// 0078ad9d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078ada5  e8e6dbffff           call 0x788990
// 0078adaa  83c408               add esp, 8
// 0078adad  85c0                 test eax, eax
// 0078adaf  7515                 jne 0x78adc6
// 0078adb1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078adb5  5f                   pop edi
// 0078adb6  c70000000000         mov dword ptr [eax], 0
// 0078adbc  c7400400000000       mov dword ptr [eax + 4], 0
// 0078adc3  5e                   pop esi
// 0078adc4  59                   pop ecx
// 0078adc5  c3                   ret 
// 0078adc6  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 0078adcb  50                   push eax
// 0078adcc  56                   push esi
// 0078adcd  57                   push edi
// 0078adce  e88df8ffff           call 0x78a660
// 0078add3  8b08                 mov ecx, dword ptr [eax]
// 0078add5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078add9  890a                 mov dword ptr [edx], ecx
// 0078addb  8b4804               mov ecx, dword ptr [eax + 4]
// 0078adde  83c40c               add esp, 0xc
// 0078ade1  894a04               mov dword ptr [edx + 4], ecx
// 0078ade4  85c9                 test ecx, ecx
// 0078ade6  740c                 je 0x78adf4
// 0078ade8  83c104               add ecx, 4
// 0078adeb  b801000000           mov eax, 1
// 0078adf0  f00fc101             lock xadd dword ptr [ecx], eax
// 0078adf4  5f                   pop edi
// 0078adf5  8bc2                 mov eax, edx
// 0078adf7  5e                   pop esi
// 0078adf8  59                   pop ecx
// 0078adf9  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
