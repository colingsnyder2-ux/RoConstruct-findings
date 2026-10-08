// roc 2008-06 005692f0  unit: RBX::ServiceProvider  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005692f0
//
// 005692f0  6aff                 push -1
// 005692f2  68abfd7b00           push 0x7bfdab
// 005692f7  64a100000000         mov eax, dword ptr fs:[0]
// 005692fd  50                   push eax
// 005692fe  64892500000000       mov dword ptr fs:[0], esp
// 00569305  51                   push ecx
// 00569306  53                   push ebx
// 00569307  55                   push ebp
// 00569308  8be9                 mov ebp, ecx
// 0056930a  56                   push esi
// 0056930b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056930f  8d5d04               lea ebx, [ebp + 4]
// 00569312  56                   push esi
// 00569313  8bcb                 mov ecx, ebx
// 00569315  896c2410             mov dword ptr [esp + 0x10], ebp
// 00569319  897500               mov dword ptr [ebp], esi
// 0056931c  e83fffffff           call 0x569260
// 00569321  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00569329  85f6                 test esi, esi
// 0056932b  7450                 je 0x56937d
// 0056932d  57                   push edi
// 0056932e  8d7e20               lea edi, [esi + 0x20]
// 00569331  85ff                 test edi, edi
// 00569333  7431                 je 0x569366
// 00569335  8937                 mov dword ptr [edi], esi
// 00569337  8b33                 mov esi, dword ptr [ebx]
// 00569339  85f6                 test esi, esi
// 0056933b  740c                 je 0x569349
// 0056933d  8d4608               lea eax, [esi + 8]
// 00569340  b901000000           mov ecx, 1
// 00569345  f00fc108             lock xadd dword ptr [eax], ecx
// 00569349  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056934c  85c9                 test ecx, ecx
// 0056934e  7413                 je 0x569363
// 00569350  8d5108               lea edx, [ecx + 8]
// 00569353  83c8ff               or eax, 0xffffffff
// 00569356  f00fc102             lock xadd dword ptr [edx], eax
// 0056935a  7507                 jne 0x569363
// 0056935c  8b11                 mov edx, dword ptr [ecx]
// 0056935e  8b4208               mov eax, dword ptr [edx + 8]
// 00569361  ffd0                 call eax
// 00569363  897704               mov dword ptr [edi + 4], esi
// 00569366  5f                   pop edi
// 00569367  5e                   pop esi
// 00569368  8bc5                 mov eax, ebp
// 0056936a  5d                   pop ebp
// 0056936b  5b                   pop ebx
// 0056936c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00569370  64890d00000000       mov dword ptr fs:[0], ecx
// 00569377  83c410               add esp, 0x10
// 0056937a  c20400               ret 4
// 0056937d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569381  5e                   pop esi
// 00569382  8bc5                 mov eax, ebp
// 00569384  5d                   pop ebp
// 00569385  5b                   pop ebx
// 00569386  64890d00000000       mov dword ptr fs:[0], ecx
// 0056938d  83c410               add esp, 0x10
// 00569390  c20400               ret 4
// library rbxgs/util\standardout.cpp (function ??$?0VStandardOut@RBX@@@?$shared_ptr@VStandardOut@RBX@@@boost@@QAE@PAVStandardOut@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
