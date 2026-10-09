// roc 2008-06 004528d0  unit: CRobloxDoc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004528d0
//
// 004528d0  6aff                 push -1
// 004528d2  683b467d00           push 0x7d463b
// 004528d7  64a100000000         mov eax, dword ptr fs:[0]
// 004528dd  50                   push eax
// 004528de  64892500000000       mov dword ptr fs:[0], esp
// 004528e5  83ec08               sub esp, 8
// 004528e8  c7042400000000       mov dword ptr [esp], 0
// 004528ef  6850010000           push 0x150
// 004528f4  c644240400           mov byte ptr [esp + 4], 0
// 004528f9  ff15b0288000         call dword ptr [0x8028b0]
// 004528ff  83c404               add esp, 4
// 00452902  89442404             mov dword ptr [esp + 4], eax
// 00452906  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045290e  85c0                 test eax, eax
// 00452910  7409                 je 0x45291b
// 00452912  8bc8                 mov ecx, eax
// 00452914  e807291700           call 0x5c5220
// 00452919  eb02                 jmp 0x45291d
// 0045291b  33c0                 xor eax, eax
// 0045291d  8b0c24               mov ecx, dword ptr [esp]
// 00452920  56                   push esi
// 00452921  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00452925  51                   push ecx
// 00452926  50                   push eax
// 00452927  8bce                 mov ecx, esi
// 00452929  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00452931  e8eafeffff           call 0x452820
// 00452936  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045293a  8bc6                 mov eax, esi
// 0045293c  5e                   pop esi
// 0045293d  64890d00000000       mov dword ptr fs:[0], ecx
// 00452944  83c414               add esp, 0x14
// 00452947  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
