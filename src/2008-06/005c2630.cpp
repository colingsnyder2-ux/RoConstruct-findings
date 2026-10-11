// roc 2008-06 005c2630  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2630
//
// 005c2630  6aff                 push -1
// 005c2632  683b467d00           push 0x7d463b
// 005c2637  64a100000000         mov eax, dword ptr fs:[0]
// 005c263d  50                   push eax
// 005c263e  64892500000000       mov dword ptr fs:[0], esp
// 005c2645  83ec08               sub esp, 8
// 005c2648  c7042400000000       mov dword ptr [esp], 0
// 005c264f  6870010000           push 0x170
// 005c2654  c644240400           mov byte ptr [esp + 4], 0
// 005c2659  ff15b0288000         call dword ptr [0x8028b0]
// 005c265f  83c404               add esp, 4
// 005c2662  89442404             mov dword ptr [esp + 4], eax
// 005c2666  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c266e  85c0                 test eax, eax
// 005c2670  7409                 je 0x5c267b
// 005c2672  8bc8                 mov ecx, eax
// 005c2674  e887fd0600           call 0x632400
// 005c2679  eb02                 jmp 0x5c267d
// 005c267b  33c0                 xor eax, eax
// 005c267d  8b0c24               mov ecx, dword ptr [esp]
// 005c2680  56                   push esi
// 005c2681  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c2685  51                   push ecx
// 005c2686  50                   push eax
// 005c2687  8bce                 mov ecx, esi
// 005c2689  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c2691  e8eafeffff           call 0x5c2580
// 005c2696  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c269a  8bc6                 mov eax, esi
// 005c269c  5e                   pop esi
// 005c269d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c26a4  83c414               add esp, 0x14
// 005c26a7  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
