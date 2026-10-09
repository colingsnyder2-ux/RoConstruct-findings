// roc 2011-06 00468340  unit: TimerWindow  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00468340
//
// 00468340  6aff                 push -1
// 00468342  688b579e00           push 0x9e578b
// 00468347  64a100000000         mov eax, dword ptr fs:[0]
// 0046834d  50                   push eax
// 0046834e  64892500000000       mov dword ptr fs:[0], esp
// 00468355  83ec08               sub esp, 8
// 00468358  c7042400000000       mov dword ptr [esp], 0
// 0046835f  6848010000           push 0x148
// 00468364  c644240400           mov byte ptr [esp + 4], 0
// 00468369  e8f01c3a00           call 0x80a05e
// 0046836e  83c404               add esp, 4
// 00468371  89442404             mov dword ptr [esp + 4], eax
// 00468375  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046837d  85c0                 test eax, eax
// 0046837f  7409                 je 0x46838a
// 00468381  8bc8                 mov ecx, eax
// 00468383  e868d91f00           call 0x665cf0
// 00468388  eb02                 jmp 0x46838c
// 0046838a  33c0                 xor eax, eax
// 0046838c  8b0c24               mov ecx, dword ptr [esp]
// 0046838f  56                   push esi
// 00468390  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00468394  51                   push ecx
// 00468395  50                   push eax
// 00468396  8bce                 mov ecx, esi
// 00468398  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004683a0  e8ebfeffff           call 0x468290
// 004683a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004683a9  8bc6                 mov eax, esi
// 004683ab  5e                   pop esi
// 004683ac  64890d00000000       mov dword ptr fs:[0], ecx
// 004683b3  83c414               add esp, 0x14
// 004683b6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
