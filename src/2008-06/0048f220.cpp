// roc 2008-06 0048f220  unit: RBX::VSpawnLocation::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f220
//
// 0048f220  6aff                 push -1
// 0048f222  683b467d00           push 0x7d463b
// 0048f227  64a100000000         mov eax, dword ptr fs:[0]
// 0048f22d  50                   push eax
// 0048f22e  64892500000000       mov dword ptr fs:[0], esp
// 0048f235  83ec08               sub esp, 8
// 0048f238  c7042400000000       mov dword ptr [esp], 0
// 0048f23f  684c010000           push 0x14c
// 0048f244  c644240400           mov byte ptr [esp + 4], 0
// 0048f249  ff15b0288000         call dword ptr [0x8028b0]
// 0048f24f  83c404               add esp, 4
// 0048f252  89442404             mov dword ptr [esp + 4], eax
// 0048f256  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048f25e  85c0                 test eax, eax
// 0048f260  7409                 je 0x48f26b
// 0048f262  8bc8                 mov ecx, eax
// 0048f264  e8573e1400           call 0x5d30c0
// 0048f269  eb02                 jmp 0x48f26d
// 0048f26b  33c0                 xor eax, eax
// 0048f26d  8b0c24               mov ecx, dword ptr [esp]
// 0048f270  56                   push esi
// 0048f271  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048f275  51                   push ecx
// 0048f276  50                   push eax
// 0048f277  8bce                 mov ecx, esi
// 0048f279  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048f281  e8eafeffff           call 0x48f170
// 0048f286  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048f28a  8bc6                 mov eax, esi
// 0048f28c  5e                   pop esi
// 0048f28d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f294  83c414               add esp, 0x14
// 0048f297  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebrisService.cpp
