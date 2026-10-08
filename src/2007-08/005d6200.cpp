// roc 2007-08 005d6200  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6200
//
// 005d6200  6aff                 push -1
// 005d6202  687b6b7500           push 0x756b7b
// 005d6207  64a100000000         mov eax, dword ptr fs:[0]
// 005d620d  50                   push eax
// 005d620e  64892500000000       mov dword ptr fs:[0], esp
// 005d6215  51                   push ecx
// 005d6216  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d621a  53                   push ebx
// 005d621b  55                   push ebp
// 005d621c  8be9                 mov ebp, ecx
// 005d621e  56                   push esi
// 005d621f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d6223  50                   push eax
// 005d6224  8d5d04               lea ebx, [ebp + 4]
// 005d6227  56                   push esi
// 005d6228  8bcb                 mov ecx, ebx
// 005d622a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d622e  897500               mov dword ptr [ebp], esi
// 005d6231  e87af2ffff           call 0x5d54b0
// 005d6236  85f6                 test esi, esi
// 005d6238  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d6240  7453                 je 0x5d6295
// 005d6242  57                   push edi
// 005d6243  8dbea4000000         lea edi, [esi + 0xa4]
// 005d6249  85ff                 test edi, edi
// 005d624b  7431                 je 0x5d627e
// 005d624d  8937                 mov dword ptr [edi], esi
// 005d624f  8b33                 mov esi, dword ptr [ebx]
// 005d6251  85f6                 test esi, esi
// 005d6253  740c                 je 0x5d6261
// 005d6255  8d4e08               lea ecx, [esi + 8]
// 005d6258  ba01000000           mov edx, 1
// 005d625d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6261  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d6264  85c9                 test ecx, ecx
// 005d6266  7413                 je 0x5d627b
// 005d6268  8d4108               lea eax, [ecx + 8]
// 005d626b  83caff               or edx, 0xffffffff
// 005d626e  f00fc110             lock xadd dword ptr [eax], edx
// 005d6272  7507                 jne 0x5d627b
// 005d6274  8b01                 mov eax, dword ptr [ecx]
// 005d6276  8b5008               mov edx, dword ptr [eax + 8]
// 005d6279  ffd2                 call edx
// 005d627b  897704               mov dword ptr [edi + 4], esi
// 005d627e  5f                   pop edi
// 005d627f  5e                   pop esi
// 005d6280  8bc5                 mov eax, ebp
// 005d6282  5d                   pop ebp
// 005d6283  5b                   pop ebx
// 005d6284  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6288  64890d00000000       mov dword ptr fs:[0], ecx
// 005d628f  83c410               add esp, 0x10
// 005d6292  c20800               ret 8
// 005d6295  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d6299  5e                   pop esi
// 005d629a  8bc5                 mov eax, ebp
// 005d629c  5d                   pop ebp
// 005d629d  5b                   pop ebx
// 005d629e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d62a5  83c410               add esp, 0x10
// 005d62a8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
