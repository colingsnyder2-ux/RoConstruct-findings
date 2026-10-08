// roc 2007-03 004a5880  unit: seg_004a0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a5880
//
// 004a5880  56                   push esi
// 004a5881  6a0c                 push 0xc
// 004a5883  8bf1                 mov esi, ecx
// 004a5885  e87e881700           call 0x61e108
// 004a588a  83c404               add esp, 4
// 004a588d  85c0                 test eax, eax
// 004a588f  7427                 je 0x4a58b8
// 004a5891  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a5895  c7000cca7900         mov dword ptr [eax], 0x79ca0c
// 004a589b  8b11                 mov edx, dword ptr [ecx]
// 004a589d  895004               mov dword ptr [eax + 4], edx
// 004a58a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a58a3  85c9                 test ecx, ecx
// 004a58a5  894808               mov dword ptr [eax + 8], ecx
// 004a58a8  7410                 je 0x4a58ba
// 004a58aa  83c104               add ecx, 4
// 004a58ad  ba01000000           mov edx, 1
// 004a58b2  f00fc111             lock xadd dword ptr [ecx], edx
// 004a58b6  eb02                 jmp 0x4a58ba
// 004a58b8  33c0                 xor eax, eax
// 004a58ba  8b0e                 mov ecx, dword ptr [esi]
// 004a58bc  85c9                 test ecx, ecx
// 004a58be  8906                 mov dword ptr [esi], eax
// 004a58c0  7408                 je 0x4a58ca
// 004a58c2  8b01                 mov eax, dword ptr [ecx]
// 004a58c4  8b10                 mov edx, dword ptr [eax]
// 004a58c6  6a01                 push 1
// 004a58c8  ffd2                 call edx
// 004a58ca  8bc6                 mov eax, esi
// 004a58cc  5e                   pop esi
// 004a58cd  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
