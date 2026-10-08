// roc 2007-08 005413d0  unit: RBX::VInstance::?$BoundFuncDesc  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005413d0
//
// 005413d0  53                   push ebx
// 005413d1  56                   push esi
// 005413d2  8bf1                 mov esi, ecx
// 005413d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005413d8  e883e60200           call 0x56fa60
// 005413dd  8b10                 mov edx, dword ptr [eax]
// 005413df  83ec08               sub esp, 8
// 005413e2  8bcc                 mov ecx, esp
// 005413e4  8911                 mov dword ptr [ecx], edx
// 005413e6  8b4004               mov eax, dword ptr [eax + 4]
// 005413e9  85c0                 test eax, eax
// 005413eb  8964241c             mov dword ptr [esp + 0x1c], esp
// 005413ef  894104               mov dword ptr [ecx + 4], eax
// 005413f2  740c                 je 0x541400
// 005413f4  83c004               add eax, 4
// 005413f7  b901000000           mov ecx, 1
// 005413fc  f00fc108             lock xadd dword ptr [eax], ecx
// 00541400  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00541403  034c2414             add ecx, dword ptr [esp + 0x14]
// 00541407  8b5628               mov edx, dword ptr [esi + 0x28]
// 0054140a  ffd2                 call edx
// 0054140c  8ad8                 mov bl, al
// 0054140e  e82dc40200           call 0x56d840
// 00541413  8b742410             mov esi, dword ptr [esp + 0x10]
// 00541417  6a08                 push 8
// 00541419  8906                 mov dword ptr [esi], eax
// 0054141b  e8d6ea0e00           call 0x62fef6
// 00541420  83c404               add esp, 4
// 00541423  85c0                 test eax, eax
// 00541425  740b                 je 0x541432
// 00541427  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 0054142d  885804               mov byte ptr [eax + 4], bl
// 00541430  eb02                 jmp 0x541434
// 00541432  33c0                 xor eax, eax
// 00541434  8b4e04               mov ecx, dword ptr [esi + 4]
// 00541437  85c9                 test ecx, ecx
// 00541439  894604               mov dword ptr [esi + 4], eax
// 0054143c  7408                 je 0x541446
// 0054143e  8b01                 mov eax, dword ptr [ecx]
// 00541440  8b10                 mov edx, dword ptr [eax]
// 00541442  6a01                 push 1
// 00541444  ffd2                 call edx
// 00541446  5e                   pop esi
// 00541447  5b                   pop ebx
// 00541448  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??$call@_N@?$BoundFuncDesc@VInstance@RBX@@$$A6A_NV?$shared_ptr@VInstance@RBX@@@boost@@@Z$00@Reflection@RBX@@ABEXPAVInstance@2@AAVValue@12@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
