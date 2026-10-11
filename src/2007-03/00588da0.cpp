// roc 2007-03 00588da0  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588da0
//
// 00588da0  6aff                 push -1
// 00588da2  688b977500           push 0x75978b
// 00588da7  64a100000000         mov eax, dword ptr fs:[0]
// 00588dad  50                   push eax
// 00588dae  64892500000000       mov dword ptr fs:[0], esp
// 00588db5  83ec08               sub esp, 8
// 00588db8  c7042400000000       mov dword ptr [esp], 0
// 00588dbf  6810010000           push 0x110
// 00588dc4  c644240400           mov byte ptr [esp + 4], 0
// 00588dc9  ff153ce97700         call dword ptr [0x77e93c]
// 00588dcf  83c404               add esp, 4
// 00588dd2  89442404             mov dword ptr [esp + 4], eax
// 00588dd6  85c0                 test eax, eax
// 00588dd8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588de0  7409                 je 0x588deb
// 00588de2  8bc8                 mov ecx, eax
// 00588de4  e867440500           call 0x5dd250
// 00588de9  eb02                 jmp 0x588ded
// 00588deb  33c0                 xor eax, eax
// 00588ded  8b0c24               mov ecx, dword ptr [esp]
// 00588df0  56                   push esi
// 00588df1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00588df5  51                   push ecx
// 00588df6  50                   push eax
// 00588df7  8bce                 mov ecx, esi
// 00588df9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00588e01  e8eafeffff           call 0x588cf0
// 00588e06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00588e0a  8bc6                 mov eax, esi
// 00588e0c  5e                   pop esi
// 00588e0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00588e14  83c414               add esp, 0x14
// 00588e17  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
