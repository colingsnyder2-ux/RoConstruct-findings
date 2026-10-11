// roc 2008-06 005c23c0  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c23c0
//
// 005c23c0  6aff                 push -1
// 005c23c2  683b467d00           push 0x7d463b
// 005c23c7  64a100000000         mov eax, dword ptr fs:[0]
// 005c23cd  50                   push eax
// 005c23ce  64892500000000       mov dword ptr fs:[0], esp
// 005c23d5  83ec08               sub esp, 8
// 005c23d8  c7042400000000       mov dword ptr [esp], 0
// 005c23df  6870010000           push 0x170
// 005c23e4  c644240400           mov byte ptr [esp + 4], 0
// 005c23e9  ff15b0288000         call dword ptr [0x8028b0]
// 005c23ef  83c404               add esp, 4
// 005c23f2  89442404             mov dword ptr [esp + 4], eax
// 005c23f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c23fe  85c0                 test eax, eax
// 005c2400  7409                 je 0x5c240b
// 005c2402  8bc8                 mov ecx, eax
// 005c2404  e887fe0600           call 0x632290
// 005c2409  eb02                 jmp 0x5c240d
// 005c240b  33c0                 xor eax, eax
// 005c240d  8b0c24               mov ecx, dword ptr [esp]
// 005c2410  56                   push esi
// 005c2411  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c2415  51                   push ecx
// 005c2416  50                   push eax
// 005c2417  8bce                 mov ecx, esi
// 005c2419  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c2421  e8eafeffff           call 0x5c2310
// 005c2426  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c242a  8bc6                 mov eax, esi
// 005c242c  5e                   pop esi
// 005c242d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2434  83c414               add esp, 0x14
// 005c2437  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Gyro.cpp
