// roc 2010-06 004273d0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004273d0
//
// 004273d0  6aff                 push -1
// 004273d2  689bbf9800           push 0x98bf9b
// 004273d7  64a100000000         mov eax, dword ptr fs:[0]
// 004273dd  50                   push eax
// 004273de  64892500000000       mov dword ptr fs:[0], esp
// 004273e5  83ec08               sub esp, 8
// 004273e8  c7042400000000       mov dword ptr [esp], 0
// 004273ef  68a0010000           push 0x1a0
// 004273f4  c644240400           mov byte ptr [esp + 4], 0
// 004273f9  e8a2053800           call 0x7a79a0
// 004273fe  83c404               add esp, 4
// 00427401  89442404             mov dword ptr [esp + 4], eax
// 00427405  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042740d  85c0                 test eax, eax
// 0042740f  7409                 je 0x42741a
// 00427411  8bc8                 mov ecx, eax
// 00427413  e8f8df1e00           call 0x615410
// 00427418  eb02                 jmp 0x42741c
// 0042741a  33c0                 xor eax, eax
// 0042741c  8b0c24               mov ecx, dword ptr [esp]
// 0042741f  56                   push esi
// 00427420  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00427424  51                   push ecx
// 00427425  50                   push eax
// 00427426  8bce                 mov ecx, esi
// 00427428  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00427430  e8bbfcffff           call 0x4270f0
// 00427435  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00427439  8bc6                 mov eax, esi
// 0042743b  5e                   pop esi
// 0042743c  64890d00000000       mov dword ptr fs:[0], ecx
// 00427443  83c414               add esp, 0x14
// 00427446  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ??$create@VScriptContext@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScriptContext@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
