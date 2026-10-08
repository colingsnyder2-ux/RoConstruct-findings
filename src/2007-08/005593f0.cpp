// roc 2007-08 005593f0  unit: RBX::DataModel  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005593f0
//
// 005593f0  6aff                 push -1
// 005593f2  68bb6a7500           push 0x756abb
// 005593f7  64a100000000         mov eax, dword ptr fs:[0]
// 005593fd  50                   push eax
// 005593fe  64892500000000       mov dword ptr fs:[0], esp
// 00559405  83ec08               sub esp, 8
// 00559408  c7042400000000       mov dword ptr [esp], 0
// 0055940f  68fc000000           push 0xfc
// 00559414  c644240400           mov byte ptr [esp + 4], 0
// 00559419  ff15d0e67700         call dword ptr [0x77e6d0]
// 0055941f  83c404               add esp, 4
// 00559422  89442404             mov dword ptr [esp + 4], eax
// 00559426  85c0                 test eax, eax
// 00559428  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00559430  7409                 je 0x55943b
// 00559432  8bc8                 mov ecx, eax
// 00559434  e867c9ffff           call 0x555da0
// 00559439  eb02                 jmp 0x55943d
// 0055943b  33c0                 xor eax, eax
// 0055943d  8b0c24               mov ecx, dword ptr [esp]
// 00559440  56                   push esi
// 00559441  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00559445  51                   push ecx
// 00559446  50                   push eax
// 00559447  8bce                 mov ecx, esi
// 00559449  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00559451  e82afbffff           call 0x558f80
// 00559456  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055945a  8bc6                 mov eax, esi
// 0055945c  5e                   pop esi
// 0055945d  64890d00000000       mov dword ptr fs:[0], ecx
// 00559464  83c414               add esp, 0x14
// 00559467  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ??$create@VTeam@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeam@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
