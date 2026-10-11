// roc 2008-06 0041e550  unit: VDHTMLWindow::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e550
//
// 0041e550  6aff                 push -1
// 0041e552  683b467d00           push 0x7d463b
// 0041e557  64a100000000         mov eax, dword ptr fs:[0]
// 0041e55d  50                   push eax
// 0041e55e  64892500000000       mov dword ptr fs:[0], esp
// 0041e565  83ec08               sub esp, 8
// 0041e568  c7042400000000       mov dword ptr [esp], 0
// 0041e56f  6874010000           push 0x174
// 0041e574  c644240400           mov byte ptr [esp + 4], 0
// 0041e579  ff15b0288000         call dword ptr [0x8028b0]
// 0041e57f  83c404               add esp, 4
// 0041e582  89442404             mov dword ptr [esp + 4], eax
// 0041e586  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041e58e  85c0                 test eax, eax
// 0041e590  7409                 je 0x41e59b
// 0041e592  8bc8                 mov ecx, eax
// 0041e594  e8d7a21700           call 0x598870
// 0041e599  eb02                 jmp 0x41e59d
// 0041e59b  33c0                 xor eax, eax
// 0041e59d  8b0c24               mov ecx, dword ptr [esp]
// 0041e5a0  56                   push esi
// 0041e5a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041e5a5  51                   push ecx
// 0041e5a6  50                   push eax
// 0041e5a7  8bce                 mov ecx, esi
// 0041e5a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041e5b1  e8bafdffff           call 0x41e370
// 0041e5b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e5ba  8bc6                 mov eax, esi
// 0041e5bc  5e                   pop esi
// 0041e5bd  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e5c4  83c414               add esp, 0x14
// 0041e5c7  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
