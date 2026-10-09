// roc 2008-06 00639a00  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639a00
//
// 00639a00  6aff                 push -1
// 00639a02  683b467d00           push 0x7d463b
// 00639a07  64a100000000         mov eax, dword ptr fs:[0]
// 00639a0d  50                   push eax
// 00639a0e  64892500000000       mov dword ptr fs:[0], esp
// 00639a15  83ec08               sub esp, 8
// 00639a18  c7042400000000       mov dword ptr [esp], 0
// 00639a1f  683c010000           push 0x13c
// 00639a24  c644240400           mov byte ptr [esp + 4], 0
// 00639a29  ff15b0288000         call dword ptr [0x8028b0]
// 00639a2f  83c404               add esp, 4
// 00639a32  89442404             mov dword ptr [esp + 4], eax
// 00639a36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00639a3e  85c0                 test eax, eax
// 00639a40  7409                 je 0x639a4b
// 00639a42  8bc8                 mov ecx, eax
// 00639a44  e867eeffff           call 0x6388b0
// 00639a49  eb02                 jmp 0x639a4d
// 00639a4b  33c0                 xor eax, eax
// 00639a4d  8b0c24               mov ecx, dword ptr [esp]
// 00639a50  56                   push esi
// 00639a51  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00639a55  51                   push ecx
// 00639a56  50                   push eax
// 00639a57  8bce                 mov ecx, esi
// 00639a59  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00639a61  e8fac5ffff           call 0x636060
// 00639a66  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639a6a  8bc6                 mov eax, esi
// 00639a6c  5e                   pop esi
// 00639a6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00639a74  83c414               add esp, 0x14
// 00639a77  c3                   ret 
// library openrbx-client/App\v8datamodel\Team.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Team.cpp
