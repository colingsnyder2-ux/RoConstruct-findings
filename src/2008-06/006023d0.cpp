// roc 2008-06 006023d0  unit: RBX::UnifiedImageWidget  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006023d0
//
// 006023d0  6aff                 push -1
// 006023d2  683b467d00           push 0x7d463b
// 006023d7  64a100000000         mov eax, dword ptr fs:[0]
// 006023dd  50                   push eax
// 006023de  64892500000000       mov dword ptr fs:[0], esp
// 006023e5  83ec08               sub esp, 8
// 006023e8  c7042400000000       mov dword ptr [esp], 0
// 006023ef  684c010000           push 0x14c
// 006023f4  c644240400           mov byte ptr [esp + 4], 0
// 006023f9  ff15b0288000         call dword ptr [0x8028b0]
// 006023ff  83c404               add esp, 4
// 00602402  89442404             mov dword ptr [esp + 4], eax
// 00602406  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060240e  85c0                 test eax, eax
// 00602410  7409                 je 0x60241b
// 00602412  8bc8                 mov ecx, eax
// 00602414  e877400500           call 0x656490
// 00602419  eb02                 jmp 0x60241d
// 0060241b  33c0                 xor eax, eax
// 0060241d  8b0c24               mov ecx, dword ptr [esp]
// 00602420  56                   push esi
// 00602421  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00602425  51                   push ecx
// 00602426  50                   push eax
// 00602427  8bce                 mov ecx, esi
// 00602429  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00602431  e87af4ffff           call 0x6018b0
// 00602436  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060243a  8bc6                 mov eax, esi
// 0060243c  5e                   pop esi
// 0060243d  64890d00000000       mov dword ptr fs:[0], ecx
// 00602444  83c414               add esp, 0x14
// 00602447  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/DebrisService.cpp
