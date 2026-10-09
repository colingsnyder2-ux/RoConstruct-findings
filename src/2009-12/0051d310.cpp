// roc 2009-12 0051d310  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051d310
//
// 0051d310  56                   push esi
// 0051d311  6a0c                 push 0xc
// 0051d313  8bf1                 mov esi, ecx
// 0051d315  e846652d00           call 0x7f3860
// 0051d31a  83c404               add esp, 4
// 0051d31d  85c0                 test eax, eax
// 0051d31f  7427                 je 0x51d348
// 0051d321  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051d325  c700b8b59b00         mov dword ptr [eax], 0x9bb5b8
// 0051d32b  8b11                 mov edx, dword ptr [ecx]
// 0051d32d  895004               mov dword ptr [eax + 4], edx
// 0051d330  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051d333  894808               mov dword ptr [eax + 8], ecx
// 0051d336  85c9                 test ecx, ecx
// 0051d338  7410                 je 0x51d34a
// 0051d33a  83c104               add ecx, 4
// 0051d33d  ba01000000           mov edx, 1
// 0051d342  f00fc111             lock xadd dword ptr [ecx], edx
// 0051d346  eb02                 jmp 0x51d34a
// 0051d348  33c0                 xor eax, eax
// 0051d34a  8d542408             lea edx, [esp + 8]
// 0051d34e  8bc8                 mov ecx, eax
// 0051d350  3bd6                 cmp edx, esi
// 0051d352  7404                 je 0x51d358
// 0051d354  8b0e                 mov ecx, dword ptr [esi]
// 0051d356  8906                 mov dword ptr [esi], eax
// 0051d358  85c9                 test ecx, ecx
// 0051d35a  7408                 je 0x51d364
// 0051d35c  8b01                 mov eax, dword ptr [ecx]
// 0051d35e  8b10                 mov edx, dword ptr [eax]
// 0051d360  6a01                 push 1
// 0051d362  ffd2                 call edx
// 0051d364  8bc6                 mov eax, esi
// 0051d366  5e                   pop esi
// 0051d367  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
