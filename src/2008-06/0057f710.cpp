// roc 2008-06 0057f710  unit: RBX::VModelInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f710
//
// 0057f710  6aff                 push -1
// 0057f712  683b467d00           push 0x7d463b
// 0057f717  64a100000000         mov eax, dword ptr fs:[0]
// 0057f71d  50                   push eax
// 0057f71e  64892500000000       mov dword ptr fs:[0], esp
// 0057f725  83ec08               sub esp, 8
// 0057f728  c7042400000000       mov dword ptr [esp], 0
// 0057f72f  6854010000           push 0x154
// 0057f734  c644240400           mov byte ptr [esp + 4], 0
// 0057f739  ff15b0288000         call dword ptr [0x8028b0]
// 0057f73f  83c404               add esp, 4
// 0057f742  89442404             mov dword ptr [esp + 4], eax
// 0057f746  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057f74e  85c0                 test eax, eax
// 0057f750  7409                 je 0x57f75b
// 0057f752  8bc8                 mov ecx, eax
// 0057f754  e857f7ffff           call 0x57eeb0
// 0057f759  eb02                 jmp 0x57f75d
// 0057f75b  33c0                 xor eax, eax
// 0057f75d  8b0c24               mov ecx, dword ptr [esp]
// 0057f760  56                   push esi
// 0057f761  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057f765  51                   push ecx
// 0057f766  50                   push eax
// 0057f767  8bce                 mov ecx, esi
// 0057f769  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057f771  e85aeaffff           call 0x57e1d0
// 0057f776  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057f77a  8bc6                 mov eax, esi
// 0057f77c  5e                   pop esi
// 0057f77d  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f784  83c414               add esp, 0x14
// 0057f787  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
