// roc 2009-12 005758f0  unit: RBX::ViewBase  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005758f0
//
// 005758f0  6aff                 push -1
// 005758f2  684bad9300           push 0x93ad4b
// 005758f7  64a100000000         mov eax, dword ptr fs:[0]
// 005758fd  50                   push eax
// 005758fe  64892500000000       mov dword ptr fs:[0], esp
// 00575905  83ec08               sub esp, 8
// 00575908  c7042400000000       mov dword ptr [esp], 0
// 0057590f  685c010000           push 0x15c
// 00575914  c644240400           mov byte ptr [esp + 4], 0
// 00575919  e842df2700           call 0x7f3860
// 0057591e  83c404               add esp, 4
// 00575921  89442404             mov dword ptr [esp + 4], eax
// 00575925  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057592d  85c0                 test eax, eax
// 0057592f  7409                 je 0x57593a
// 00575931  8bc8                 mov ecx, eax
// 00575933  e8a86a1a00           call 0x71c3e0
// 00575938  eb02                 jmp 0x57593c
// 0057593a  33c0                 xor eax, eax
// 0057593c  8b0c24               mov ecx, dword ptr [esp]
// 0057593f  56                   push esi
// 00575940  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00575944  51                   push ecx
// 00575945  50                   push eax
// 00575946  8bce                 mov ecx, esi
// 00575948  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00575950  e8ebfeffff           call 0x575840
// 00575955  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00575959  8bc6                 mov eax, esi
// 0057595b  5e                   pop esi
// 0057595c  64890d00000000       mov dword ptr fs:[0], ecx
// 00575963  83c414               add esp, 0x14
// 00575966  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirt@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirt@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
