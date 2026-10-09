// roc 2008-06 0057f790  unit: RBX::VModelInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f790
//
// 0057f790  6aff                 push -1
// 0057f792  683b467d00           push 0x7d463b
// 0057f797  64a100000000         mov eax, dword ptr fs:[0]
// 0057f79d  50                   push eax
// 0057f79e  64892500000000       mov dword ptr fs:[0], esp
// 0057f7a5  83ec08               sub esp, 8
// 0057f7a8  c7042400000000       mov dword ptr [esp], 0
// 0057f7af  6854010000           push 0x154
// 0057f7b4  c644240400           mov byte ptr [esp + 4], 0
// 0057f7b9  ff15b0288000         call dword ptr [0x8028b0]
// 0057f7bf  83c404               add esp, 4
// 0057f7c2  89442404             mov dword ptr [esp + 4], eax
// 0057f7c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057f7ce  85c0                 test eax, eax
// 0057f7d0  7409                 je 0x57f7db
// 0057f7d2  8bc8                 mov ecx, eax
// 0057f7d4  e8a7f9ffff           call 0x57f180
// 0057f7d9  eb02                 jmp 0x57f7dd
// 0057f7db  33c0                 xor eax, eax
// 0057f7dd  8b0c24               mov ecx, dword ptr [esp]
// 0057f7e0  56                   push esi
// 0057f7e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057f7e5  51                   push ecx
// 0057f7e6  50                   push eax
// 0057f7e7  8bce                 mov ecx, esi
// 0057f7e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057f7f1  e88aeaffff           call 0x57e280
// 0057f7f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057f7fa  8bc6                 mov eax, esi
// 0057f7fc  5e                   pop esi
// 0057f7fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f804  83c414               add esp, 0x14
// 0057f807  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
