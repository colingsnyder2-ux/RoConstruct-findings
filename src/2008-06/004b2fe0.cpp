// roc 2008-06 004b2fe0  unit: RBX::VRotateP::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2fe0
//
// 004b2fe0  6aff                 push -1
// 004b2fe2  683b467d00           push 0x7d463b
// 004b2fe7  64a100000000         mov eax, dword ptr fs:[0]
// 004b2fed  50                   push eax
// 004b2fee  64892500000000       mov dword ptr fs:[0], esp
// 004b2ff5  83ec08               sub esp, 8
// 004b2ff8  c7042400000000       mov dword ptr [esp], 0
// 004b2fff  6854010000           push 0x154
// 004b3004  c644240400           mov byte ptr [esp + 4], 0
// 004b3009  ff15b0288000         call dword ptr [0x8028b0]
// 004b300f  83c404               add esp, 4
// 004b3012  89442404             mov dword ptr [esp + 4], eax
// 004b3016  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b301e  85c0                 test eax, eax
// 004b3020  7409                 je 0x4b302b
// 004b3022  8bc8                 mov ecx, eax
// 004b3024  e8a71d1300           call 0x5e4dd0
// 004b3029  eb02                 jmp 0x4b302d
// 004b302b  33c0                 xor eax, eax
// 004b302d  8b0c24               mov ecx, dword ptr [esp]
// 004b3030  56                   push esi
// 004b3031  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b3035  51                   push ecx
// 004b3036  50                   push eax
// 004b3037  8bce                 mov ecx, esi
// 004b3039  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b3041  e8eafeffff           call 0x4b2f30
// 004b3046  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b304a  8bc6                 mov eax, esi
// 004b304c  5e                   pop esi
// 004b304d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3054  83c414               add esp, 0x14
// 004b3057  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
