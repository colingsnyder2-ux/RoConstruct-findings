// roc 2007-03 005d5070  unit: seg_005d0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d5070
//
// 005d5070  6aff                 push -1
// 005d5072  688b977500           push 0x75978b
// 005d5077  64a100000000         mov eax, dword ptr fs:[0]
// 005d507d  50                   push eax
// 005d507e  64892500000000       mov dword ptr fs:[0], esp
// 005d5085  83ec08               sub esp, 8
// 005d5088  c7042400000000       mov dword ptr [esp], 0
// 005d508f  6838010000           push 0x138
// 005d5094  c644240400           mov byte ptr [esp + 4], 0
// 005d5099  ff153ce97700         call dword ptr [0x77e93c]
// 005d509f  83c404               add esp, 4
// 005d50a2  89442404             mov dword ptr [esp + 4], eax
// 005d50a6  85c0                 test eax, eax
// 005d50a8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d50b0  7409                 je 0x5d50bb
// 005d50b2  8bc8                 mov ecx, eax
// 005d50b4  e867190300           call 0x606a20
// 005d50b9  eb02                 jmp 0x5d50bd
// 005d50bb  33c0                 xor eax, eax
// 005d50bd  8b0c24               mov ecx, dword ptr [esp]
// 005d50c0  56                   push esi
// 005d50c1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d50c5  51                   push ecx
// 005d50c6  50                   push eax
// 005d50c7  8bce                 mov ecx, esi
// 005d50c9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d50d1  e8caf3ffff           call 0x5d44a0
// 005d50d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d50da  8bc6                 mov eax, esi
// 005d50dc  5e                   pop esi
// 005d50dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005d50e4  83c414               add esp, 0x14
// 005d50e7  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Gyro.cpp
