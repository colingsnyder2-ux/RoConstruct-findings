// roc 2007-03 005e55a0  unit: seg_005e0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e55a0
//
// 005e55a0  6aff                 push -1
// 005e55a2  688b977500           push 0x75978b
// 005e55a7  64a100000000         mov eax, dword ptr fs:[0]
// 005e55ad  50                   push eax
// 005e55ae  64892500000000       mov dword ptr fs:[0], esp
// 005e55b5  83ec08               sub esp, 8
// 005e55b8  c7042400000000       mov dword ptr [esp], 0
// 005e55bf  68fc000000           push 0xfc
// 005e55c4  c644240400           mov byte ptr [esp + 4], 0
// 005e55c9  ff153ce97700         call dword ptr [0x77e93c]
// 005e55cf  83c404               add esp, 4
// 005e55d2  89442404             mov dword ptr [esp + 4], eax
// 005e55d6  85c0                 test eax, eax
// 005e55d8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e55e0  7409                 je 0x5e55eb
// 005e55e2  8bc8                 mov ecx, eax
// 005e55e4  e847f7ffff           call 0x5e4d30
// 005e55e9  eb02                 jmp 0x5e55ed
// 005e55eb  33c0                 xor eax, eax
// 005e55ed  8b0c24               mov ecx, dword ptr [esp]
// 005e55f0  56                   push esi
// 005e55f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e55f5  51                   push ecx
// 005e55f6  50                   push eax
// 005e55f7  8bce                 mov ecx, esi
// 005e55f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5601  e8faa3ffff           call 0x5dfa00
// 005e5606  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e560a  8bc6                 mov eax, esi
// 005e560c  5e                   pop esi
// 005e560d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5614  83c414               add esp, 0x14
// 005e5617  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
