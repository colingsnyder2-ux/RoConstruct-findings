// roc 2008-06 00639900  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639900
//
// 00639900  6aff                 push -1
// 00639902  683b467d00           push 0x7d463b
// 00639907  64a100000000         mov eax, dword ptr fs:[0]
// 0063990d  50                   push eax
// 0063990e  64892500000000       mov dword ptr fs:[0], esp
// 00639915  83ec08               sub esp, 8
// 00639918  c7042400000000       mov dword ptr [esp], 0
// 0063991f  683c010000           push 0x13c
// 00639924  c644240400           mov byte ptr [esp + 4], 0
// 00639929  ff15b0288000         call dword ptr [0x8028b0]
// 0063992f  83c404               add esp, 4
// 00639932  89442404             mov dword ptr [esp + 4], eax
// 00639936  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063993e  85c0                 test eax, eax
// 00639940  7409                 je 0x63994b
// 00639942  8bc8                 mov ecx, eax
// 00639944  e817edffff           call 0x638660
// 00639949  eb02                 jmp 0x63994d
// 0063994b  33c0                 xor eax, eax
// 0063994d  8b0c24               mov ecx, dword ptr [esp]
// 00639950  56                   push esi
// 00639951  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00639955  51                   push ecx
// 00639956  50                   push eax
// 00639957  8bce                 mov ecx, esi
// 00639959  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00639961  e80ac2ffff           call 0x635b70
// 00639966  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063996a  8bc6                 mov eax, esi
// 0063996c  5e                   pop esi
// 0063996d  64890d00000000       mov dword ptr fs:[0], ecx
// 00639974  83c414               add esp, 0x14
// 00639977  c3                   ret 
// library openrbx-client/App\v8datamodel\Team.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp
