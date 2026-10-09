// roc 2009-12 0040ff80  unit: boost::Vbad_weak_ptr::?$error_info_injector  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ff80
//
// 0040ff80  6aff                 push -1
// 0040ff82  684bad9300           push 0x93ad4b
// 0040ff87  64a100000000         mov eax, dword ptr fs:[0]
// 0040ff8d  50                   push eax
// 0040ff8e  64892500000000       mov dword ptr fs:[0], esp
// 0040ff95  83ec08               sub esp, 8
// 0040ff98  c7042400000000       mov dword ptr [esp], 0
// 0040ff9f  68a0010000           push 0x1a0
// 0040ffa4  c644240400           mov byte ptr [esp + 4], 0
// 0040ffa9  e8b2383e00           call 0x7f3860
// 0040ffae  83c404               add esp, 4
// 0040ffb1  89442404             mov dword ptr [esp + 4], eax
// 0040ffb5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040ffbd  85c0                 test eax, eax
// 0040ffbf  7409                 je 0x40ffca
// 0040ffc1  8bc8                 mov ecx, eax
// 0040ffc3  e8082a1100           call 0x5229d0
// 0040ffc8  eb02                 jmp 0x40ffcc
// 0040ffca  33c0                 xor eax, eax
// 0040ffcc  8b0c24               mov ecx, dword ptr [esp]
// 0040ffcf  56                   push esi
// 0040ffd0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040ffd4  51                   push ecx
// 0040ffd5  50                   push eax
// 0040ffd6  8bce                 mov ecx, esi
// 0040ffd8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040ffe0  e83bfdffff           call 0x40fd20
// 0040ffe5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040ffe9  8bc6                 mov eax, esi
// 0040ffeb  5e                   pop esi
// 0040ffec  64890d00000000       mov dword ptr fs:[0], ecx
// 0040fff3  83c414               add esp, 0x14
// 0040fff6  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ??$create@VScriptContext@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScriptContext@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
