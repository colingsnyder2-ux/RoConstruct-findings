// from server: 98% by colin
// roc 2007-08 00591730  unit: RBX::ObjectValue  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591730
//
// 00591730  6aff                 push -1
// 00591732  68bb6a7500           push 0x756abb
// 00591737  64a100000000         mov eax, dword ptr fs:[0]
// 0059173d  50                   push eax
// 0059173e  64892500000000       mov dword ptr fs:[0], esp
// 00591745  83ec08               sub esp, 8
// 00591748  c7042400000000       mov dword ptr [esp], 0
// 0059174f  6814010000           push 0xf0
// 00591754  c644240400           mov byte ptr [esp + 4], 0
// 00591759  ff15d0e67700         call dword ptr [0x77e6d0]
// 0059175f  83c404               add esp, 4
// 00591762  89442404             mov dword ptr [esp + 4], eax
// 00591766  85c0                 test eax, eax
// 00591768  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00591770  7409                 je 0x5917fb
// 00591772  8bc8                 mov ecx, eax
// 00591774  e867fcffff           call 0x591450
// 00591779  eb02                 jmp 0x5917fd
// 0059177b  33c0                 xor eax, eax
// 0059177d  8b0c24               mov ecx, dword ptr [esp]
// 00591780  56                   push esi
// 00591781  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00591785  51                   push ecx
// 00591786  50                   push eax
// 00591787  8bce                 mov ecx, esi
// 00591789  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00591791  e89aeaffff           call 0x590540
// 00591796  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059179a  8bc6                 mov eax, esi
// 0059179c  5e                   pop esi
// 0059179d  64890d00000000       mov dword ptr fs:[0], ecx
// 005917a4  83c414               add esp, 0x14
// 005917a7  c3                   ret 
// library rbxgs/v8datamodel\Seat.cpp (function ??$create@VWeld@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VWeld@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Seat.cpp