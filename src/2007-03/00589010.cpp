// roc 2007-03 00589010  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589010
//
// 00589010  6aff                 push -1
// 00589012  688b977500           push 0x75978b
// 00589017  64a100000000         mov eax, dword ptr fs:[0]
// 0058901d  50                   push eax
// 0058901e  64892500000000       mov dword ptr fs:[0], esp
// 00589025  83ec08               sub esp, 8
// 00589028  c7042400000000       mov dword ptr [esp], 0
// 0058902f  681c010000           push 0x11c
// 00589034  c644240400           mov byte ptr [esp + 4], 0
// 00589039  ff153ce97700         call dword ptr [0x77e93c]
// 0058903f  83c404               add esp, 4
// 00589042  89442404             mov dword ptr [esp + 4], eax
// 00589046  85c0                 test eax, eax
// 00589048  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00589050  7409                 je 0x58905b
// 00589052  8bc8                 mov ecx, eax
// 00589054  e8f7420500           call 0x5dd350
// 00589059  eb02                 jmp 0x58905d
// 0058905b  33c0                 xor eax, eax
// 0058905d  8b0c24               mov ecx, dword ptr [esp]
// 00589060  56                   push esi
// 00589061  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00589065  51                   push ecx
// 00589066  50                   push eax
// 00589067  8bce                 mov ecx, esi
// 00589069  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00589071  e8eafeffff           call 0x588f60
// 00589076  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058907a  8bc6                 mov eax, esi
// 0058907c  5e                   pop esi
// 0058907d  64890d00000000       mov dword ptr fs:[0], ecx
// 00589084  83c414               add esp, 0x14
// 00589087  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
