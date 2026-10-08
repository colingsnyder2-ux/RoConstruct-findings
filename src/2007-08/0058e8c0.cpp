// roc 2007-08 0058e8c0  unit: RBX::SoundService  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e8c0
//
// 0058e8c0  6aff                 push -1
// 0058e8c2  68bb6a7500           push 0x756abb
// 0058e8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0058e8cd  50                   push eax
// 0058e8ce  64892500000000       mov dword ptr fs:[0], esp
// 0058e8d5  83ec08               sub esp, 8
// 0058e8d8  c7042400000000       mov dword ptr [esp], 0
// 0058e8df  6814010000           push 0x114
// 0058e8e4  c644240400           mov byte ptr [esp + 4], 0
// 0058e8e9  ff15d0e67700         call dword ptr [0x77e6d0]
// 0058e8ef  83c404               add esp, 4
// 0058e8f2  89442404             mov dword ptr [esp + 4], eax
// 0058e8f6  85c0                 test eax, eax
// 0058e8f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058e900  7409                 je 0x58e90b
// 0058e902  8bc8                 mov ecx, eax
// 0058e904  e817a60500           call 0x5e8f20
// 0058e909  eb02                 jmp 0x58e90d
// 0058e90b  33c0                 xor eax, eax
// 0058e90d  8b0c24               mov ecx, dword ptr [esp]
// 0058e910  56                   push esi
// 0058e911  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058e915  51                   push ecx
// 0058e916  50                   push eax
// 0058e917  8bce                 mov ecx, esi
// 0058e919  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058e921  e8eafeffff           call 0x58e810
// 0058e926  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e92a  8bc6                 mov eax, esi
// 0058e92c  5e                   pop esi
// 0058e92d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e934  83c414               add esp, 0x14
// 0058e937  c3                   ret 
// library rbxgs/v8datamodel\Seat.cpp (function ??$create@VWeld@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VWeld@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Seat.cpp
