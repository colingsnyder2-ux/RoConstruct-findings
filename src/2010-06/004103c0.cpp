// roc 2010-06 004103c0  unit: boost::Vbad_weak_ptr::?$error_info_injector  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004103c0
//
// 004103c0  6aff                 push -1
// 004103c2  689bbf9800           push 0x98bf9b
// 004103c7  64a100000000         mov eax, dword ptr fs:[0]
// 004103cd  50                   push eax
// 004103ce  64892500000000       mov dword ptr fs:[0], esp
// 004103d5  83ec08               sub esp, 8
// 004103d8  c7042400000000       mov dword ptr [esp], 0
// 004103df  68a0010000           push 0x1a0
// 004103e4  c644240400           mov byte ptr [esp + 4], 0
// 004103e9  e8b2753900           call 0x7a79a0
// 004103ee  83c404               add esp, 4
// 004103f1  89442404             mov dword ptr [esp + 4], eax
// 004103f5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004103fd  85c0                 test eax, eax
// 004103ff  7409                 je 0x41040a
// 00410401  8bc8                 mov ecx, eax
// 00410403  e828020c00           call 0x4d0630
// 00410408  eb02                 jmp 0x41040c
// 0041040a  33c0                 xor eax, eax
// 0041040c  8b0c24               mov ecx, dword ptr [esp]
// 0041040f  56                   push esi
// 00410410  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00410414  51                   push ecx
// 00410415  50                   push eax
// 00410416  8bce                 mov ecx, esi
// 00410418  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00410420  e83bfdffff           call 0x410160
// 00410425  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00410429  8bc6                 mov eax, esi
// 0041042b  5e                   pop esi
// 0041042c  64890d00000000       mov dword ptr fs:[0], ecx
// 00410433  83c414               add esp, 0x14
// 00410436  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ??$create@VScriptContext@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScriptContext@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
