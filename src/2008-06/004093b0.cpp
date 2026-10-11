// roc 2008-06 004093b0  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004093b0
//
// 004093b0  6aff                 push -1
// 004093b2  683b467d00           push 0x7d463b
// 004093b7  64a100000000         mov eax, dword ptr fs:[0]
// 004093bd  50                   push eax
// 004093be  64892500000000       mov dword ptr fs:[0], esp
// 004093c5  83ec08               sub esp, 8
// 004093c8  c7042400000000       mov dword ptr [esp], 0
// 004093cf  68d8010000           push 0x1d8
// 004093d4  c644240400           mov byte ptr [esp + 4], 0
// 004093d9  ff15b0288000         call dword ptr [0x8028b0]
// 004093df  83c404               add esp, 4
// 004093e2  89442404             mov dword ptr [esp + 4], eax
// 004093e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004093ee  85c0                 test eax, eax
// 004093f0  7409                 je 0x4093fb
// 004093f2  8bc8                 mov ecx, eax
// 004093f4  e8a7a90800           call 0x493da0
// 004093f9  eb02                 jmp 0x4093fd
// 004093fb  33c0                 xor eax, eax
// 004093fd  8b0c24               mov ecx, dword ptr [esp]
// 00409400  56                   push esi
// 00409401  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00409405  51                   push ecx
// 00409406  50                   push eax
// 00409407  8bce                 mov ecx, esi
// 00409409  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00409411  e8eafeffff           call 0x409300
// 00409416  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040941a  8bc6                 mov eax, esi
// 0040941c  5e                   pop esi
// 0040941d  64890d00000000       mov dword ptr fs:[0], ecx
// 00409424  83c414               add esp, 0x14
// 00409427  c3                   ret 
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ??$create@VAccoutrement@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VAccoutrement@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Accoutrement.cpp
