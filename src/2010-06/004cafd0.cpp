// roc 2010-06 004cafd0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cafd0
//
// 004cafd0  56                   push esi
// 004cafd1  6a0c                 push 0xc
// 004cafd3  8bf1                 mov esi, ecx
// 004cafd5  e8c6c92d00           call 0x7a79a0
// 004cafda  83c404               add esp, 4
// 004cafdd  85c0                 test eax, eax
// 004cafdf  7427                 je 0x4cb008
// 004cafe1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cafe5  c7008893a100         mov dword ptr [eax], 0xa19388
// 004cafeb  8b11                 mov edx, dword ptr [ecx]
// 004cafed  895004               mov dword ptr [eax + 4], edx
// 004caff0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004caff3  894808               mov dword ptr [eax + 8], ecx
// 004caff6  85c9                 test ecx, ecx
// 004caff8  7410                 je 0x4cb00a
// 004caffa  83c104               add ecx, 4
// 004caffd  ba01000000           mov edx, 1
// 004cb002  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb006  eb02                 jmp 0x4cb00a
// 004cb008  33c0                 xor eax, eax
// 004cb00a  8d542408             lea edx, [esp + 8]
// 004cb00e  8bc8                 mov ecx, eax
// 004cb010  3bd6                 cmp edx, esi
// 004cb012  7404                 je 0x4cb018
// 004cb014  8b0e                 mov ecx, dword ptr [esi]
// 004cb016  8906                 mov dword ptr [esi], eax
// 004cb018  85c9                 test ecx, ecx
// 004cb01a  7408                 je 0x4cb024
// 004cb01c  8b01                 mov eax, dword ptr [ecx]
// 004cb01e  8b10                 mov edx, dword ptr [eax]
// 004cb020  6a01                 push 1
// 004cb022  ffd2                 call edx
// 004cb024  8bc6                 mov eax, esi
// 004cb026  5e                   pop esi
// 004cb027  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
