// roc 2007-08 004b1260  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1260
//
// 004b1260  56                   push esi
// 004b1261  6a0c                 push 0xc
// 004b1263  8bf1                 mov esi, ecx
// 004b1265  e88cec1700           call 0x62fef6
// 004b126a  83c404               add esp, 4
// 004b126d  85c0                 test eax, eax
// 004b126f  7427                 je 0x4b1298
// 004b1271  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1275  c70090db7900         mov dword ptr [eax], 0x79db90
// 004b127b  8b11                 mov edx, dword ptr [ecx]
// 004b127d  895004               mov dword ptr [eax + 4], edx
// 004b1280  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b1283  85c9                 test ecx, ecx
// 004b1285  894808               mov dword ptr [eax + 8], ecx
// 004b1288  7410                 je 0x4b129a
// 004b128a  83c104               add ecx, 4
// 004b128d  ba01000000           mov edx, 1
// 004b1292  f00fc111             lock xadd dword ptr [ecx], edx
// 004b1296  eb02                 jmp 0x4b129a
// 004b1298  33c0                 xor eax, eax
// 004b129a  8b0e                 mov ecx, dword ptr [esi]
// 004b129c  85c9                 test ecx, ecx
// 004b129e  8906                 mov dword ptr [esi], eax
// 004b12a0  7408                 je 0x4b12aa
// 004b12a2  8b01                 mov eax, dword ptr [ecx]
// 004b12a4  8b10                 mov edx, dword ptr [eax]
// 004b12a6  6a01                 push 1
// 004b12a8  ffd2                 call edx
// 004b12aa  8bc6                 mov eax, esi
// 004b12ac  5e                   pop esi
// 004b12ad  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
