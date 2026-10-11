// roc 2008-06 0048ff70  unit: RBX::VShirt::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ff70
//
// 0048ff70  6aff                 push -1
// 0048ff72  683b467d00           push 0x7d463b
// 0048ff77  64a100000000         mov eax, dword ptr fs:[0]
// 0048ff7d  50                   push eax
// 0048ff7e  64892500000000       mov dword ptr fs:[0], esp
// 0048ff85  83ec08               sub esp, 8
// 0048ff88  c7042400000000       mov dword ptr [esp], 0
// 0048ff8f  684c010000           push 0x14c
// 0048ff94  c644240400           mov byte ptr [esp + 4], 0
// 0048ff99  ff15b0288000         call dword ptr [0x8028b0]
// 0048ff9f  83c404               add esp, 4
// 0048ffa2  89442404             mov dword ptr [esp + 4], eax
// 0048ffa6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048ffae  85c0                 test eax, eax
// 0048ffb0  7409                 je 0x48ffbb
// 0048ffb2  8bc8                 mov ecx, eax
// 0048ffb4  e8075a1400           call 0x5d59c0
// 0048ffb9  eb02                 jmp 0x48ffbd
// 0048ffbb  33c0                 xor eax, eax
// 0048ffbd  8b0c24               mov ecx, dword ptr [esp]
// 0048ffc0  56                   push esi
// 0048ffc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048ffc5  51                   push ecx
// 0048ffc6  50                   push eax
// 0048ffc7  8bce                 mov ecx, esi
// 0048ffc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048ffd1  e8eafeffff           call 0x48fec0
// 0048ffd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ffda  8bc6                 mov eax, esi
// 0048ffdc  5e                   pop esi
// 0048ffdd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ffe4  83c414               add esp, 0x14
// 0048ffe7  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/DebrisService.cpp
