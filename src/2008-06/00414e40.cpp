// roc 2008-06 00414e40  unit: RBX::VScript::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414e40
//
// 00414e40  6aff                 push -1
// 00414e42  683b467d00           push 0x7d463b
// 00414e47  64a100000000         mov eax, dword ptr fs:[0]
// 00414e4d  50                   push eax
// 00414e4e  64892500000000       mov dword ptr fs:[0], esp
// 00414e55  83ec08               sub esp, 8
// 00414e58  c7042400000000       mov dword ptr [esp], 0
// 00414e5f  6860010000           push 0x160
// 00414e64  c644240400           mov byte ptr [esp + 4], 0
// 00414e69  ff15b0288000         call dword ptr [0x8028b0]
// 00414e6f  83c404               add esp, 4
// 00414e72  89442404             mov dword ptr [esp + 4], eax
// 00414e76  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00414e7e  85c0                 test eax, eax
// 00414e80  7409                 je 0x414e8b
// 00414e82  8bc8                 mov ecx, eax
// 00414e84  e8e71e1700           call 0x586d70
// 00414e89  eb02                 jmp 0x414e8d
// 00414e8b  33c0                 xor eax, eax
// 00414e8d  8b0c24               mov ecx, dword ptr [esp]
// 00414e90  56                   push esi
// 00414e91  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00414e95  51                   push ecx
// 00414e96  50                   push eax
// 00414e97  8bce                 mov ecx, esi
// 00414e99  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00414ea1  e8eafeffff           call 0x414d90
// 00414ea6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00414eaa  8bc6                 mov eax, esi
// 00414eac  5e                   pop esi
// 00414ead  64890d00000000       mov dword ptr fs:[0], ecx
// 00414eb4  83c414               add esp, 0x14
// 00414eb7  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/Script.cpp
