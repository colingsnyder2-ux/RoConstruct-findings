// roc 2009-12 00656170  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00656170
//
// 00656170  6aff                 push -1
// 00656172  684bad9300           push 0x93ad4b
// 00656177  64a100000000         mov eax, dword ptr fs:[0]
// 0065617d  50                   push eax
// 0065617e  64892500000000       mov dword ptr fs:[0], esp
// 00656185  83ec08               sub esp, 8
// 00656188  c7042400000000       mov dword ptr [esp], 0
// 0065618f  6870010000           push 0x170
// 00656194  c644240400           mov byte ptr [esp + 4], 0
// 00656199  e8c2d61900           call 0x7f3860
// 0065619e  83c404               add esp, 4
// 006561a1  89442404             mov dword ptr [esp + 4], eax
// 006561a5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006561ad  85c0                 test eax, eax
// 006561af  7409                 je 0x6561ba
// 006561b1  8bc8                 mov ecx, eax
// 006561b3  e878360e00           call 0x739830
// 006561b8  eb02                 jmp 0x6561bc
// 006561ba  33c0                 xor eax, eax
// 006561bc  8b0c24               mov ecx, dword ptr [esp]
// 006561bf  56                   push esi
// 006561c0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006561c4  51                   push ecx
// 006561c5  50                   push eax
// 006561c6  8bce                 mov ecx, esi
// 006561c8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006561d0  e8ebfeffff           call 0x6560c0
// 006561d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006561d9  8bc6                 mov eax, esi
// 006561db  5e                   pop esi
// 006561dc  64890d00000000       mov dword ptr fs:[0], ecx
// 006561e3  83c414               add esp, 0x14
// 006561e6  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
