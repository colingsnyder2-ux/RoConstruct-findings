// roc 2007-08 00419d20  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00419d20
//
// 00419d20  56                   push esi
// 00419d21  6a0c                 push 0xc
// 00419d23  8bf1                 mov esi, ecx
// 00419d25  e8cc612100           call 0x62fef6
// 00419d2a  83c404               add esp, 4
// 00419d2d  85c0                 test eax, eax
// 00419d2f  7427                 je 0x419d58
// 00419d31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00419d35  c70040787800         mov dword ptr [eax], 0x787840
// 00419d3b  8b11                 mov edx, dword ptr [ecx]
// 00419d3d  895004               mov dword ptr [eax + 4], edx
// 00419d40  8b4904               mov ecx, dword ptr [ecx + 4]
// 00419d43  85c9                 test ecx, ecx
// 00419d45  894808               mov dword ptr [eax + 8], ecx
// 00419d48  7410                 je 0x419d5a
// 00419d4a  83c104               add ecx, 4
// 00419d4d  ba01000000           mov edx, 1
// 00419d52  f00fc111             lock xadd dword ptr [ecx], edx
// 00419d56  eb02                 jmp 0x419d5a
// 00419d58  33c0                 xor eax, eax
// 00419d5a  8b0e                 mov ecx, dword ptr [esi]
// 00419d5c  85c9                 test ecx, ecx
// 00419d5e  8906                 mov dword ptr [esi], eax
// 00419d60  7408                 je 0x419d6a
// 00419d62  8b01                 mov eax, dword ptr [ecx]
// 00419d64  8b10                 mov edx, dword ptr [eax]
// 00419d66  6a01                 push 1
// 00419d68  ffd2                 call edx
// 00419d6a  8bc6                 mov eax, esi
// 00419d6c  5e                   pop esi
// 00419d6d  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
