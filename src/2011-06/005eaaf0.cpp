// roc 2011-06 005eaaf0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005eaaf0
//
// 005eaaf0  6aff                 push -1
// 005eaaf2  688b579e00           push 0x9e578b
// 005eaaf7  64a100000000         mov eax, dword ptr fs:[0]
// 005eaafd  50                   push eax
// 005eaafe  64892500000000       mov dword ptr fs:[0], esp
// 005eab05  83ec08               sub esp, 8
// 005eab08  c7042400000000       mov dword ptr [esp], 0
// 005eab0f  6888010000           push 0x188
// 005eab14  c644240400           mov byte ptr [esp + 4], 0
// 005eab19  e840f52100           call 0x80a05e
// 005eab1e  83c404               add esp, 4
// 005eab21  89442404             mov dword ptr [esp + 4], eax
// 005eab25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005eab2d  85c0                 test eax, eax
// 005eab2f  7409                 je 0x5eab3a
// 005eab31  8bc8                 mov ecx, eax
// 005eab33  e838c71300           call 0x727270
// 005eab38  eb02                 jmp 0x5eab3c
// 005eab3a  33c0                 xor eax, eax
// 005eab3c  8b0c24               mov ecx, dword ptr [esp]
// 005eab3f  56                   push esi
// 005eab40  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005eab44  51                   push ecx
// 005eab45  50                   push eax
// 005eab46  8bce                 mov ecx, esi
// 005eab48  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005eab50  e82bf1ffff           call 0x5e9c80
// 005eab55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eab59  8bc6                 mov eax, esi
// 005eab5b  5e                   pop esi
// 005eab5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005eab63  83c414               add esp, 0x14
// 005eab66  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyGyro@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyGyro@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
