// roc 2007-08 00496430  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00496430
//
// 00496430  56                   push esi
// 00496431  6a0c                 push 0xc
// 00496433  8bf1                 mov esi, ecx
// 00496435  e8bc9a1900           call 0x62fef6
// 0049643a  83c404               add esp, 4
// 0049643d  85c0                 test eax, eax
// 0049643f  7427                 je 0x496468
// 00496441  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00496445  c700ecbb7900         mov dword ptr [eax], 0x79bbec
// 0049644b  8b11                 mov edx, dword ptr [ecx]
// 0049644d  895004               mov dword ptr [eax + 4], edx
// 00496450  8b4904               mov ecx, dword ptr [ecx + 4]
// 00496453  85c9                 test ecx, ecx
// 00496455  894808               mov dword ptr [eax + 8], ecx
// 00496458  7410                 je 0x49646a
// 0049645a  83c104               add ecx, 4
// 0049645d  ba01000000           mov edx, 1
// 00496462  f00fc111             lock xadd dword ptr [ecx], edx
// 00496466  eb02                 jmp 0x49646a
// 00496468  33c0                 xor eax, eax
// 0049646a  8b0e                 mov ecx, dword ptr [esi]
// 0049646c  85c9                 test ecx, ecx
// 0049646e  8906                 mov dword ptr [esi], eax
// 00496470  7408                 je 0x49647a
// 00496472  8b01                 mov eax, dword ptr [ecx]
// 00496474  8b10                 mov edx, dword ptr [eax]
// 00496476  6a01                 push 1
// 00496478  ffd2                 call edx
// 0049647a  8bc6                 mov eax, esi
// 0049647c  5e                   pop esi
// 0049647d  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
