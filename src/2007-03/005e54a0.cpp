// roc 2007-03 005e54a0  unit: seg_005e0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e54a0
//
// 005e54a0  6aff                 push -1
// 005e54a2  688b977500           push 0x75978b
// 005e54a7  64a100000000         mov eax, dword ptr fs:[0]
// 005e54ad  50                   push eax
// 005e54ae  64892500000000       mov dword ptr fs:[0], esp
// 005e54b5  83ec08               sub esp, 8
// 005e54b8  c7042400000000       mov dword ptr [esp], 0
// 005e54bf  68fc000000           push 0xfc
// 005e54c4  c644240400           mov byte ptr [esp + 4], 0
// 005e54c9  ff153ce97700         call dword ptr [0x77e93c]
// 005e54cf  83c404               add esp, 4
// 005e54d2  89442404             mov dword ptr [esp + 4], eax
// 005e54d6  85c0                 test eax, eax
// 005e54d8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e54e0  7409                 je 0x5e54eb
// 005e54e2  8bc8                 mov ecx, eax
// 005e54e4  e857f6ffff           call 0x5e4b40
// 005e54e9  eb02                 jmp 0x5e54ed
// 005e54eb  33c0                 xor eax, eax
// 005e54ed  8b0c24               mov ecx, dword ptr [esp]
// 005e54f0  56                   push esi
// 005e54f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e54f5  51                   push ecx
// 005e54f6  50                   push eax
// 005e54f7  8bce                 mov ecx, esi
// 005e54f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5501  e89aa3ffff           call 0x5df8a0
// 005e5506  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e550a  8bc6                 mov eax, esi
// 005e550c  5e                   pop esi
// 005e550d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5514  83c414               add esp, 0x14
// 005e5517  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
