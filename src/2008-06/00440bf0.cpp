// roc 2008-06 00440bf0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00440bf0
//
// 00440bf0  6aff                 push -1
// 00440bf2  683b467d00           push 0x7d463b
// 00440bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00440bfd  50                   push eax
// 00440bfe  64892500000000       mov dword ptr fs:[0], esp
// 00440c05  83ec08               sub esp, 8
// 00440c08  c7042400000000       mov dword ptr [esp], 0
// 00440c0f  6870010000           push 0x170
// 00440c14  c644240400           mov byte ptr [esp + 4], 0
// 00440c19  ff15b0288000         call dword ptr [0x8028b0]
// 00440c1f  83c404               add esp, 4
// 00440c22  89442404             mov dword ptr [esp + 4], eax
// 00440c26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00440c2e  85c0                 test eax, eax
// 00440c30  7409                 je 0x440c3b
// 00440c32  8bc8                 mov ecx, eax
// 00440c34  e847b81700           call 0x5bc480
// 00440c39  eb02                 jmp 0x440c3d
// 00440c3b  33c0                 xor eax, eax
// 00440c3d  8b0c24               mov ecx, dword ptr [esp]
// 00440c40  56                   push esi
// 00440c41  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00440c45  51                   push ecx
// 00440c46  50                   push eax
// 00440c47  8bce                 mov ecx, esi
// 00440c49  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00440c51  e8eafeffff           call 0x440b40
// 00440c56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00440c5a  8bc6                 mov eax, esi
// 00440c5c  5e                   pop esi
// 00440c5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00440c64  83c414               add esp, 0x14
// 00440c67  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
