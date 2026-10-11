// roc 2007-03 005e5420  unit: seg_005e0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e5420
//
// 005e5420  6aff                 push -1
// 005e5422  688b977500           push 0x75978b
// 005e5427  64a100000000         mov eax, dword ptr fs:[0]
// 005e542d  50                   push eax
// 005e542e  64892500000000       mov dword ptr fs:[0], esp
// 005e5435  83ec08               sub esp, 8
// 005e5438  c7042400000000       mov dword ptr [esp], 0
// 005e543f  680c010000           push 0x10c
// 005e5444  c644240400           mov byte ptr [esp + 4], 0
// 005e5449  ff153ce97700         call dword ptr [0x77e93c]
// 005e544f  83c404               add esp, 4
// 005e5452  89442404             mov dword ptr [esp + 4], eax
// 005e5456  85c0                 test eax, eax
// 005e5458  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e5460  7409                 je 0x5e546b
// 005e5462  8bc8                 mov ecx, eax
// 005e5464  e817f5ffff           call 0x5e4980
// 005e5469  eb02                 jmp 0x5e546d
// 005e546b  33c0                 xor eax, eax
// 005e546d  8b0c24               mov ecx, dword ptr [esp]
// 005e5470  56                   push esi
// 005e5471  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e5475  51                   push ecx
// 005e5476  50                   push eax
// 005e5477  8bce                 mov ecx, esi
// 005e5479  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5481  e86aa3ffff           call 0x5df7f0
// 005e5486  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e548a  8bc6                 mov eax, esi
// 005e548c  5e                   pop esi
// 005e548d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5494  83c414               add esp, 0x14
// 005e5497  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/ForceField.cpp
