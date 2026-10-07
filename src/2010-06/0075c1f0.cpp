// roc 2010-06 0075c1f0  unit: RBX::RightAngleRampPoly  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075c1f0
//
// 0075c1f0  56                   push esi
// 0075c1f1  6a0c                 push 0xc
// 0075c1f3  8bf1                 mov esi, ecx
// 0075c1f5  e8a6b70400           call 0x7a79a0
// 0075c1fa  83c404               add esp, 4
// 0075c1fd  85c0                 test eax, eax
// 0075c1ff  7427                 je 0x75c228
// 0075c201  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075c205  c7001cd8a300         mov dword ptr [eax], 0xa3d81c
// 0075c20b  8b11                 mov edx, dword ptr [ecx]
// 0075c20d  895004               mov dword ptr [eax + 4], edx
// 0075c210  8b4904               mov ecx, dword ptr [ecx + 4]
// 0075c213  894808               mov dword ptr [eax + 8], ecx
// 0075c216  85c9                 test ecx, ecx
// 0075c218  7410                 je 0x75c22a
// 0075c21a  83c104               add ecx, 4
// 0075c21d  ba01000000           mov edx, 1
// 0075c222  f00fc111             lock xadd dword ptr [ecx], edx
// 0075c226  eb02                 jmp 0x75c22a
// 0075c228  33c0                 xor eax, eax
// 0075c22a  8d542408             lea edx, [esp + 8]
// 0075c22e  8bc8                 mov ecx, eax
// 0075c230  3bd6                 cmp edx, esi
// 0075c232  7404                 je 0x75c238
// 0075c234  8b0e                 mov ecx, dword ptr [esi]
// 0075c236  8906                 mov dword ptr [esi], eax
// 0075c238  85c9                 test ecx, ecx
// 0075c23a  7408                 je 0x75c244
// 0075c23c  8b01                 mov eax, dword ptr [ecx]
// 0075c23e  8b10                 mov edx, dword ptr [eax]
// 0075c240  6a01                 push 1
// 0075c242  ffd2                 call edx
// 0075c244  8bc6                 mov eax, esi
// 0075c246  5e                   pop esi
// 0075c247  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
