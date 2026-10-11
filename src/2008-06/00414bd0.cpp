// roc 2008-06 00414bd0  unit: RBX::VModelInstance::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414bd0
//
// 00414bd0  6aff                 push -1
// 00414bd2  683b467d00           push 0x7d463b
// 00414bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00414bdd  50                   push eax
// 00414bde  64892500000000       mov dword ptr fs:[0], esp
// 00414be5  83ec08               sub esp, 8
// 00414be8  c7042400000000       mov dword ptr [esp], 0
// 00414bef  6860010000           push 0x160
// 00414bf4  c644240400           mov byte ptr [esp + 4], 0
// 00414bf9  ff15b0288000         call dword ptr [0x8028b0]
// 00414bff  83c404               add esp, 4
// 00414c02  89442404             mov dword ptr [esp + 4], eax
// 00414c06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00414c0e  85c0                 test eax, eax
// 00414c10  7409                 je 0x414c1b
// 00414c12  8bc8                 mov ecx, eax
// 00414c14  e8471d1700           call 0x586960
// 00414c19  eb02                 jmp 0x414c1d
// 00414c1b  33c0                 xor eax, eax
// 00414c1d  8b0c24               mov ecx, dword ptr [esp]
// 00414c20  56                   push esi
// 00414c21  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00414c25  51                   push ecx
// 00414c26  50                   push eax
// 00414c27  8bce                 mov ecx, esi
// 00414c29  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00414c31  e8eafeffff           call 0x414b20
// 00414c36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00414c3a  8bc6                 mov eax, esi
// 00414c3c  5e                   pop esi
// 00414c3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00414c44  83c414               add esp, 0x14
// 00414c47  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
