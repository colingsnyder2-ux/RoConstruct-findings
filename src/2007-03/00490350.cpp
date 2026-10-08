// roc 2007-03 00490350  unit: seg_00490000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00490350
//
// 00490350  56                   push esi
// 00490351  6a0c                 push 0xc
// 00490353  8bf1                 mov esi, ecx
// 00490355  e8aedd1800           call 0x61e108
// 0049035a  83c404               add esp, 4
// 0049035d  85c0                 test eax, eax
// 0049035f  7427                 je 0x490388
// 00490361  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00490365  c700f8ac7900         mov dword ptr [eax], 0x79acf8
// 0049036b  8b11                 mov edx, dword ptr [ecx]
// 0049036d  895004               mov dword ptr [eax + 4], edx
// 00490370  8b4904               mov ecx, dword ptr [ecx + 4]
// 00490373  85c9                 test ecx, ecx
// 00490375  894808               mov dword ptr [eax + 8], ecx
// 00490378  7410                 je 0x49038a
// 0049037a  83c104               add ecx, 4
// 0049037d  ba01000000           mov edx, 1
// 00490382  f00fc111             lock xadd dword ptr [ecx], edx
// 00490386  eb02                 jmp 0x49038a
// 00490388  33c0                 xor eax, eax
// 0049038a  8b0e                 mov ecx, dword ptr [esi]
// 0049038c  85c9                 test ecx, ecx
// 0049038e  8906                 mov dword ptr [esi], eax
// 00490390  7408                 je 0x49039a
// 00490392  8b01                 mov eax, dword ptr [ecx]
// 00490394  8b10                 mov edx, dword ptr [eax]
// 00490396  6a01                 push 1
// 00490398  ffd2                 call edx
// 0049039a  8bc6                 mov eax, esi
// 0049039c  5e                   pop esi
// 0049039d  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
